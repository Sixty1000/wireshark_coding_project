/****************************************************************************
** Meta object code from reading C++ file 'resolved_addresses_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/resolved_addresses_dialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resolved_addresses_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23ResolvedAddressesDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto ResolvedAddressesDialog::qt_create_metaobjectdata<qt_meta_tag_ZN23ResolvedAddressesDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ResolvedAddressesDialog",
        "on_cmbDataType_currentIndexChanged",
        "",
        "index",
        "on_txtSearchFilter_textChanged",
        "text",
        "on_cmbPortFilterType_currentIndexChanged",
        "on_txtPortFilter_textChanged",
        "changeEvent",
        "QEvent*",
        "event",
        "tabChanged",
        "saveAs"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_cmbDataType_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'on_txtSearchFilter_textChanged'
        QtMocHelpers::SlotData<void(QString)>(4, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'on_cmbPortFilterType_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'on_txtPortFilter_textChanged'
        QtMocHelpers::SlotData<void(QString)>(7, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'changeEvent'
        QtMocHelpers::SlotData<void(QEvent *)>(8, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'tabChanged'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'saveAs'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ResolvedAddressesDialog, qt_meta_tag_ZN23ResolvedAddressesDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ResolvedAddressesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<GeometryStateDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23ResolvedAddressesDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23ResolvedAddressesDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23ResolvedAddressesDialogE_t>.metaTypes,
    nullptr
} };

void ResolvedAddressesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ResolvedAddressesDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_cmbDataType_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_txtSearchFilter_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_cmbPortFilterType_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_txtPortFilter_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->changeEvent((*reinterpret_cast<std::add_pointer_t<QEvent*>>(_a[1]))); break;
        case 5: _t->tabChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->saveAs(); break;
        default: ;
        }
    }
}

const QMetaObject *ResolvedAddressesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResolvedAddressesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23ResolvedAddressesDialogE_t>.strings))
        return static_cast<void*>(this);
    return GeometryStateDialog::qt_metacast(_clname);
}

int ResolvedAddressesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeometryStateDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
