/****************************************************************************
** Meta object code from reading C++ file 'enabled_protocols_model.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/models/enabled_protocols_model.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'enabled_protocols_model.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19EnabledProtocolItemE_t {};
} // unnamed namespace

template <> constexpr inline auto EnabledProtocolItem::qt_create_metaobjectdata<qt_meta_tag_ZN19EnabledProtocolItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EnabledProtocolItem",
        "EnableProtocolType",
        "Any",
        "Standard",
        "Heuristic"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'EnableProtocolType'
        QtMocHelpers::EnumData<enum EnableProtocolType>(1, 1, QMC::EnumFlags{}).add({
            {    2, EnableProtocolType::Any },
            {    3, EnableProtocolType::Standard },
            {    4, EnableProtocolType::Heuristic },
        }),
    };
    return QtMocHelpers::metaObjectData<EnabledProtocolItem, qt_meta_tag_ZN19EnabledProtocolItemE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EnabledProtocolItem::staticMetaObject = { {
    QtPrivate::MetaObjectForType<ModelHelperTreeItem<EnabledProtocolItem>>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19EnabledProtocolItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19EnabledProtocolItemE_t>.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19EnabledProtocolItemE_t>.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN21EnabledProtocolsModelE_t {};
} // unnamed namespace

template <> constexpr inline auto EnabledProtocolsModel::qt_create_metaobjectdata<qt_meta_tag_ZN21EnabledProtocolsModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EnabledProtocolsModel"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EnabledProtocolsModel, qt_meta_tag_ZN21EnabledProtocolsModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EnabledProtocolsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21EnabledProtocolsModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21EnabledProtocolsModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21EnabledProtocolsModelE_t>.metaTypes,
    nullptr
} };

void EnabledProtocolsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EnabledProtocolsModel *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *EnabledProtocolsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EnabledProtocolsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21EnabledProtocolsModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int EnabledProtocolsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN26EnabledProtocolsProxyModelE_t {};
} // unnamed namespace

template <> constexpr inline auto EnabledProtocolsProxyModel::qt_create_metaobjectdata<qt_meta_tag_ZN26EnabledProtocolsProxyModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EnabledProtocolsProxyModel",
        "SearchType",
        "EveryWhere",
        "OnlyProtocol",
        "OnlyDescription",
        "EnabledItems",
        "DisabledItems"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'SearchType'
        QtMocHelpers::EnumData<enum SearchType>(1, 1, QMC::EnumFlags{}).add({
            {    2, SearchType::EveryWhere },
            {    3, SearchType::OnlyProtocol },
            {    4, SearchType::OnlyDescription },
            {    5, SearchType::EnabledItems },
            {    6, SearchType::DisabledItems },
        }),
    };
    return QtMocHelpers::metaObjectData<EnabledProtocolsProxyModel, qt_meta_tag_ZN26EnabledProtocolsProxyModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EnabledProtocolsProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26EnabledProtocolsProxyModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26EnabledProtocolsProxyModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN26EnabledProtocolsProxyModelE_t>.metaTypes,
    nullptr
} };

void EnabledProtocolsProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EnabledProtocolsProxyModel *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *EnabledProtocolsProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EnabledProtocolsProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26EnabledProtocolsProxyModelE_t>.strings))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int EnabledProtocolsProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
