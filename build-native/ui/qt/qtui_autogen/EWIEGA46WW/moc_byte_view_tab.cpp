/****************************************************************************
** Meta object code from reading C++ file 'byte_view_tab.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/byte_view_tab.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'byte_view_tab.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11ByteViewTabE_t {};
} // unnamed namespace

template <> constexpr inline auto ByteViewTab::qt_create_metaobjectdata<qt_meta_tag_ZN11ByteViewTabE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ByteViewTab",
        "fieldSelected",
        "",
        "FieldInformation*",
        "fieldHighlight",
        "byteViewSettingsChanged",
        "byteViewUnmarkField",
        "detachData",
        "setCaptureFile",
        "capture_file*",
        "cf",
        "selectedFrameChanged",
        "QList<int>",
        "selectedFieldChanged",
        "highlightedFieldChanged",
        "captureFileClosing",
        "byteViewTextHovered",
        "byteViewTextMarked",
        "connectToMainWindow",
        "captureActive"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'fieldSelected'
        QtMocHelpers::SignalData<void(FieldInformation *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'fieldHighlight'
        QtMocHelpers::SignalData<void(FieldInformation *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'byteViewSettingsChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'byteViewUnmarkField'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'detachData'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setCaptureFile'
        QtMocHelpers::SlotData<void(capture_file *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'selectedFrameChanged'
        QtMocHelpers::SlotData<void(QList<int>)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 2 },
        }}),
        // Slot 'selectedFieldChanged'
        QtMocHelpers::SlotData<void(FieldInformation *)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'highlightedFieldChanged'
        QtMocHelpers::SlotData<void(FieldInformation *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'captureFileClosing'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'byteViewTextHovered'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'byteViewTextMarked'
        QtMocHelpers::SlotData<void(int)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'connectToMainWindow'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'captureActive'
        QtMocHelpers::SlotData<void(int)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ByteViewTab, qt_meta_tag_ZN11ByteViewTabE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ByteViewTab::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ByteViewTabE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ByteViewTabE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11ByteViewTabE_t>.metaTypes,
    nullptr
} };

void ByteViewTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ByteViewTab *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fieldSelected((*reinterpret_cast<std::add_pointer_t<FieldInformation*>>(_a[1]))); break;
        case 1: _t->fieldHighlight((*reinterpret_cast<std::add_pointer_t<FieldInformation*>>(_a[1]))); break;
        case 2: _t->byteViewSettingsChanged(); break;
        case 3: _t->byteViewUnmarkField(); break;
        case 4: _t->detachData(); break;
        case 5: _t->setCaptureFile((*reinterpret_cast<std::add_pointer_t<capture_file*>>(_a[1]))); break;
        case 6: _t->selectedFrameChanged((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 7: _t->selectedFieldChanged((*reinterpret_cast<std::add_pointer_t<FieldInformation*>>(_a[1]))); break;
        case 8: _t->highlightedFieldChanged((*reinterpret_cast<std::add_pointer_t<FieldInformation*>>(_a[1]))); break;
        case 9: _t->captureFileClosing(); break;
        case 10: _t->byteViewTextHovered((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->byteViewTextMarked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->connectToMainWindow(); break;
        case 13: _t->captureActive((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FieldInformation* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FieldInformation* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FieldInformation* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FieldInformation* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ByteViewTab::*)(FieldInformation * )>(_a, &ByteViewTab::fieldSelected, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ByteViewTab::*)(FieldInformation * )>(_a, &ByteViewTab::fieldHighlight, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ByteViewTab::*)()>(_a, &ByteViewTab::byteViewSettingsChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ByteViewTab::*)()>(_a, &ByteViewTab::byteViewUnmarkField, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ByteViewTab::*)()>(_a, &ByteViewTab::detachData, 4))
            return;
    }
}

const QMetaObject *ByteViewTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ByteViewTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ByteViewTabE_t>.strings))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int ByteViewTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ByteViewTab::fieldSelected(FieldInformation * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void ByteViewTab::fieldHighlight(FieldInformation * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void ByteViewTab::byteViewSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ByteViewTab::byteViewUnmarkField()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ByteViewTab::detachData()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
