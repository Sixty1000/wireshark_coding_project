/****************************************************************************
** Meta object code from reading C++ file 'byte_view_text.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/widgets/byte_view_text.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'byte_view_text.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12ByteViewTextE_t {};
} // unnamed namespace

template <> constexpr inline auto ByteViewText::qt_create_metaobjectdata<qt_meta_tag_ZN12ByteViewTextE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ByteViewText",
        "byteHovered",
        "",
        "pos",
        "byteSelected",
        "byteViewSettingsChanged",
        "setMonospaceFont",
        "QFont",
        "mono_font",
        "updateByteViewSettings",
        "detachData",
        "markProtocol",
        "start",
        "length",
        "markField",
        "scroll_to",
        "markAppendix",
        "unmarkField",
        "copyBytes",
        "setHexDisplayFormat",
        "QAction*",
        "action",
        "setCharacterEncoding",
        "toggleHoverAllowed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'byteHovered'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'byteSelected'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'byteViewSettingsChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setMonospaceFont'
        QtMocHelpers::SlotData<void(const QFont &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Slot 'updateByteViewSettings'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'detachData'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'markProtocol'
        QtMocHelpers::SlotData<void(int, int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot 'markField'
        QtMocHelpers::SlotData<void(int, int, bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::Int, 13 }, { QMetaType::Bool, 15 },
        }}),
        // Slot 'markField'
        QtMocHelpers::SlotData<void(int, int)>(14, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot 'markAppendix'
        QtMocHelpers::SlotData<void(int, int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot 'unmarkField'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'copyBytes'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setHexDisplayFormat'
        QtMocHelpers::SlotData<void(QAction *)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
        // Slot 'setCharacterEncoding'
        QtMocHelpers::SlotData<void(QAction *)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
        // Slot 'toggleHoverAllowed'
        QtMocHelpers::SlotData<void(bool)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ByteViewText, qt_meta_tag_ZN12ByteViewTextE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ByteViewText::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ByteViewTextE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ByteViewTextE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12ByteViewTextE_t>.metaTypes,
    nullptr
} };

void ByteViewText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ByteViewText *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->byteHovered((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->byteSelected((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->byteViewSettingsChanged(); break;
        case 3: _t->setMonospaceFont((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1]))); break;
        case 4: _t->updateByteViewSettings(); break;
        case 5: _t->detachData(); break;
        case 6: _t->markProtocol((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->markField((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 8: _t->markField((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->markAppendix((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 10: _t->unmarkField(); break;
        case 11: _t->copyBytes((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->setHexDisplayFormat((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 13: _t->setCharacterEncoding((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 14: _t->toggleHoverAllowed((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ByteViewText::*)(int )>(_a, &ByteViewText::byteHovered, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ByteViewText::*)(int )>(_a, &ByteViewText::byteSelected, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ByteViewText::*)()>(_a, &ByteViewText::byteViewSettingsChanged, 2))
            return;
    }
}

const QMetaObject *ByteViewText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ByteViewText::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ByteViewTextE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IDataPrintable"))
        return static_cast< IDataPrintable*>(this);
    if (!strcmp(_clname, "org.wireshark.Qt.UI.IDataPrintable"))
        return static_cast< IDataPrintable*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int ByteViewText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void ByteViewText::byteHovered(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void ByteViewText::byteSelected(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void ByteViewText::byteViewSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
