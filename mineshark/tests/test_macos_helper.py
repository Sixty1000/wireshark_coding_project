"""Unprivileged tests: all PF calls are replaced with a fake."""
import importlib.util
import io
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

spec = importlib.util.spec_from_file_location('helper', Path(__file__).parents[1] / 'platform/macos-helper.py')
helper = importlib.util.module_from_spec(spec)
spec.loader.exec_module(helper)

class HelperTests(unittest.TestCase):
    def test_validation(self):
        for a, b in [('1.2.3.4;id','1.2.3.5'), ('::1','1.2.3.4'), ('1.2.3.4','1.2.3.4'), ('224.0.0.1','1.2.3.4')]:
            with self.assertRaises(ValueError):
                helper.pair(a,b)

    def test_lifecycle_and_expiry(self):
        rules = ''
        calls = []
        def pf(*args, data=None):
            nonlocal rules
            calls.append(args)
            if args == ('-sr',): return 'anchor "com.apple/*" all'
            if args == ('-si',): return 'Status: Enabled'
            if '-f' in args: rules = data; return ''
            if '-sr' in args: return rules
            return ''
        with tempfile.TemporaryDirectory() as directory, patch.object(helper, 'ROOT', Path(directory)), patch.object(helper, 'pf', pf), patch.object(helper.os, 'geteuid', return_value=0):
            def run(*args):
                with patch('sys.argv', ['helper', *args]), patch('sys.stdout', new_callable=io.StringIO) as output:
                    helper.main()
                    return json.loads(output.getvalue())
            run('block','10.0.0.1','10.0.0.2')
            self.assertEqual(rules.count('block drop'),2)
            self.assertIn(('-k','10.0.0.1','-k','10.0.0.2'),calls)
            self.assertEqual(len(run('status')['blocks']),1)
            run('unblock','10.0.0.2','10.0.0.1')
            self.assertEqual(rules.strip(),'')
            run('block','10.0.0.1','10.0.0.2')
            with patch.object(helper.time,'time',return_value=helper.time.time()+3660):
                run('expire')
            self.assertEqual(rules.strip(),'')

    def test_missing_anchor_rejected(self):
        with tempfile.TemporaryDirectory() as directory, patch.object(helper,'ROOT',Path(directory)), patch.object(helper.os,'geteuid',return_value=0), patch.object(helper,'pf',return_value=''), patch('sys.argv',['helper','block','10.0.0.1','10.0.0.2']):
            with self.assertRaisesRegex(RuntimeError,'anchor'):
                helper.main()

if __name__ == '__main__': unittest.main()
