/****************************************************************************
** Meta object code from reading C++ file 'display_filter_edit.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/widgets/display_filter_edit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'display_filter_edit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN17DisplayFilterEditE_t {};
} // unnamed namespace

template <> constexpr inline auto DisplayFilterEdit::qt_create_metaobjectdata<qt_meta_tag_ZN17DisplayFilterEditE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DisplayFilterEdit",
        "pushFilterSyntaxStatus",
        "",
        "popFilterSyntaxStatus",
        "filterPackets",
        "new_filter",
        "force",
        "showPreferencesDialog",
        "pane_name",
        "checkFilter",
        "updateBookmarkMenu",
        "applyDisplayFilter",
        "displayFilterSuccess",
        "success",
        "setStyleSheet",
        "style_sheet",
        "filter_text",
        "clearFilter",
        "changeEvent",
        "QEvent*",
        "event",
        "displayFilterExpression",
        "saveFilter",
        "removeFilter",
        "showFilters",
        "showExpressionPrefs",
        "applyOrPrepareFilter",
        "triggerAlignementAction",
        "connectToMainWindow"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pushFilterSyntaxStatus'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'popFilterSyntaxStatus'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'filterPackets'
        QtMocHelpers::SignalData<void(QString, bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { QMetaType::Bool, 6 },
        }}),
        // Signal 'showPreferencesDialog'
        QtMocHelpers::SignalData<void(QString)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 },
        }}),
        // Slot 'checkFilter'
        QtMocHelpers::SlotData<bool()>(9, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'updateBookmarkMenu'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'applyDisplayFilter'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'displayFilterSuccess'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'setStyleSheet'
        QtMocHelpers::SlotData<void(const QString &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 15 },
        }}),
        // Slot 'checkFilter'
        QtMocHelpers::SlotData<void(const QString &)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 16 },
        }}),
        // Slot 'clearFilter'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeEvent'
        QtMocHelpers::SlotData<void(QEvent *)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'displayFilterExpression'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveFilter'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'removeFilter'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showFilters'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showExpressionPrefs'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'applyOrPrepareFilter'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'triggerAlignementAction'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'connectToMainWindow'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DisplayFilterEdit, qt_meta_tag_ZN17DisplayFilterEditE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DisplayFilterEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<SyntaxLineEdit::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17DisplayFilterEditE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17DisplayFilterEditE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17DisplayFilterEditE_t>.metaTypes,
    nullptr
} };

void DisplayFilterEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DisplayFilterEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pushFilterSyntaxStatus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->popFilterSyntaxStatus(); break;
        case 2: _t->filterPackets((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 3: _t->showPreferencesDialog((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: { bool _r = _t->checkFilter();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->updateBookmarkMenu(); break;
        case 6: _t->applyDisplayFilter(); break;
        case 7: _t->displayFilterSuccess((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setStyleSheet((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->checkFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->clearFilter(); break;
        case 11: _t->changeEvent((*reinterpret_cast<std::add_pointer_t<QEvent*>>(_a[1]))); break;
        case 12: _t->displayFilterExpression(); break;
        case 13: _t->saveFilter(); break;
        case 14: _t->removeFilter(); break;
        case 15: _t->showFilters(); break;
        case 16: _t->showExpressionPrefs(); break;
        case 17: _t->applyOrPrepareFilter(); break;
        case 18: _t->triggerAlignementAction(); break;
        case 19: _t->connectToMainWindow(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DisplayFilterEdit::*)(const QString & )>(_a, &DisplayFilterEdit::pushFilterSyntaxStatus, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DisplayFilterEdit::*)()>(_a, &DisplayFilterEdit::popFilterSyntaxStatus, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DisplayFilterEdit::*)(QString , bool )>(_a, &DisplayFilterEdit::filterPackets, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (DisplayFilterEdit::*)(QString )>(_a, &DisplayFilterEdit::showPreferencesDialog, 3))
            return;
    }
}

const QMetaObject *DisplayFilterEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisplayFilterEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17DisplayFilterEditE_t>.strings))
        return static_cast<void*>(this);
    return SyntaxLineEdit::qt_metacast(_clname);
}

int DisplayFilterEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SyntaxLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void DisplayFilterEdit::pushFilterSyntaxStatus(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void DisplayFilterEdit::popFilterSyntaxStatus()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DisplayFilterEdit::filterPackets(QString _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void DisplayFilterEdit::showPreferencesDialog(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
