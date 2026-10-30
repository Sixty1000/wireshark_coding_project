/****************************************************************************
** Meta object code from reading C++ file 'packet_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/packet_dialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'packet_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12PacketDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto PacketDialog::qt_create_metaobjectdata<qt_meta_tag_ZN12PacketDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PacketDialog",
        "showProtocolPreferences",
        "",
        "module_name",
        "editProtocolPreference",
        "preference*",
        "pref",
        "pref_module*",
        "module",
        "on_buttonBox_helpRequested",
        "viewVisibilityStateChanged",
        "Qt::CheckState",
        "layoutChanged",
        "setHintText",
        "FieldInformation*",
        "setHintTextSelected"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showProtocolPreferences'
        QtMocHelpers::SignalData<void(const QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'editProtocolPreference'
        QtMocHelpers::SignalData<void(preference *, pref_module *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Slot 'on_buttonBox_helpRequested'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'viewVisibilityStateChanged'
        QtMocHelpers::SlotData<void(Qt::CheckState)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Slot 'layoutChanged'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setHintText'
        QtMocHelpers::SlotData<void(FieldInformation *)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 14, 2 },
        }}),
        // Slot 'setHintTextSelected'
        QtMocHelpers::SlotData<void(FieldInformation *)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 14, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PacketDialog, qt_meta_tag_ZN12PacketDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PacketDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<WiresharkDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12PacketDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12PacketDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12PacketDialogE_t>.metaTypes,
    nullptr
} };

void PacketDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PacketDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showProtocolPreferences((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->editProtocolPreference((*reinterpret_cast<std::add_pointer_t<preference*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<pref_module*>>(_a[2]))); break;
        case 2: _t->on_buttonBox_helpRequested(); break;
        case 3: _t->viewVisibilityStateChanged((*reinterpret_cast<std::add_pointer_t<Qt::CheckState>>(_a[1]))); break;
        case 4: _t->layoutChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setHintText((*reinterpret_cast<std::add_pointer_t<FieldInformation*>>(_a[1]))); break;
        case 6: _t->setHintTextSelected((*reinterpret_cast<std::add_pointer_t<FieldInformation*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FieldInformation* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PacketDialog::*)(const QString )>(_a, &PacketDialog::showProtocolPreferences, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PacketDialog::*)(preference * , pref_module * )>(_a, &PacketDialog::editProtocolPreference, 1))
            return;
    }
}

const QMetaObject *PacketDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PacketDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12PacketDialogE_t>.strings))
        return static_cast<void*>(this);
    return WiresharkDialog::qt_metacast(_clname);
}

int PacketDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PacketDialog::showProtocolPreferences(const QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void PacketDialog::editProtocolPreference(preference * _t1, pref_module * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
QT_WARNING_POP
