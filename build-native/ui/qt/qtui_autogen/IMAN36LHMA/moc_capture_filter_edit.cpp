/****************************************************************************
** Meta object code from reading C++ file 'capture_filter_edit.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/widgets/capture_filter_edit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'capture_filter_edit.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17CaptureFilterEditE_t {};
} // unnamed namespace

template <> constexpr inline auto CaptureFilterEdit::qt_create_metaobjectdata<qt_meta_tag_ZN17CaptureFilterEditE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CaptureFilterEdit",
        "captureFilterSyntaxChanged",
        "",
        "valid",
        "captureFilterChanged",
        "filter",
        "startCapture",
        "addBookmark",
        "checkFilter",
        "updateBookmarkMenu",
        "saveFilter",
        "removeFilter",
        "showFilters",
        "prepareFilter",
        "applyCaptureFilter",
        "setFilterSyntaxState",
        "state",
        "err_msg",
        "bookmarkClicked",
        "clearFilter"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'captureFilterSyntaxChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'captureFilterChanged'
        QtMocHelpers::SignalData<void(const QString)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'startCapture'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'addBookmark'
        QtMocHelpers::SignalData<void(const QString)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'checkFilter'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateBookmarkMenu'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveFilter'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeFilter'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showFilters'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'prepareFilter'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'applyCaptureFilter'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'checkFilter'
        QtMocHelpers::SlotData<void(const QString &)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'setFilterSyntaxState'
        QtMocHelpers::SlotData<void(QString, int, QString)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { QMetaType::Int, 16 }, { QMetaType::QString, 17 },
        }}),
        // Slot 'bookmarkClicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clearFilter'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CaptureFilterEdit, qt_meta_tag_ZN17CaptureFilterEditE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CaptureFilterEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<SyntaxLineEdit::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17CaptureFilterEditE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17CaptureFilterEditE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17CaptureFilterEditE_t>.metaTypes,
    nullptr
} };

void CaptureFilterEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CaptureFilterEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->captureFilterSyntaxChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->captureFilterChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->startCapture(); break;
        case 3: _t->addBookmark((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->checkFilter(); break;
        case 5: _t->updateBookmarkMenu(); break;
        case 6: _t->saveFilter(); break;
        case 7: _t->removeFilter(); break;
        case 8: _t->showFilters(); break;
        case 9: _t->prepareFilter(); break;
        case 10: _t->applyCaptureFilter(); break;
        case 11: _t->checkFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->setFilterSyntaxState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 13: _t->bookmarkClicked(); break;
        case 14: _t->clearFilter(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CaptureFilterEdit::*)(bool )>(_a, &CaptureFilterEdit::captureFilterSyntaxChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CaptureFilterEdit::*)(const QString )>(_a, &CaptureFilterEdit::captureFilterChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CaptureFilterEdit::*)()>(_a, &CaptureFilterEdit::startCapture, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CaptureFilterEdit::*)(const QString )>(_a, &CaptureFilterEdit::addBookmark, 3))
            return;
    }
}

const QMetaObject *CaptureFilterEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaptureFilterEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17CaptureFilterEditE_t>.strings))
        return static_cast<void*>(this);
    return SyntaxLineEdit::qt_metacast(_clname);
}

int CaptureFilterEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SyntaxLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void CaptureFilterEdit::captureFilterSyntaxChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void CaptureFilterEdit::captureFilterChanged(const QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void CaptureFilterEdit::startCapture()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CaptureFilterEdit::addBookmark(const QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
