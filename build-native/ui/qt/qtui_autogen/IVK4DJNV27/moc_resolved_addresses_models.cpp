/****************************************************************************
** Meta object code from reading C++ file 'resolved_addresses_models.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/models/resolved_addresses_models.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resolved_addresses_models.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20EthernetAddressModelE_t {};
} // unnamed namespace

template <> constexpr inline auto EthernetAddressModel::qt_create_metaobjectdata<qt_meta_tag_ZN20EthernetAddressModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EthernetAddressModel"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EthernetAddressModel, qt_meta_tag_ZN20EthernetAddressModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EthernetAddressModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AStringListListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20EthernetAddressModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20EthernetAddressModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20EthernetAddressModelE_t>.metaTypes,
    nullptr
} };

void EthernetAddressModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EthernetAddressModel *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *EthernetAddressModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EthernetAddressModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20EthernetAddressModelE_t>.strings))
        return static_cast<void*>(this);
    return AStringListListModel::qt_metacast(_clname);
}

int EthernetAddressModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AStringListListModel::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN10PortsModelE_t {};
} // unnamed namespace

template <> constexpr inline auto PortsModel::qt_create_metaobjectdata<qt_meta_tag_ZN10PortsModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PortsModel"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PortsModel, qt_meta_tag_ZN10PortsModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PortsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AStringListListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10PortsModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10PortsModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10PortsModelE_t>.metaTypes,
    nullptr
} };

void PortsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PortsModel *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *PortsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PortsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10PortsModelE_t>.strings))
        return static_cast<void*>(this);
    return AStringListListModel::qt_metacast(_clname);
}

int PortsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AStringListListModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
