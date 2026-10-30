/****************************************************************************
** Meta object code from reading C++ file 'packet_list_model.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/models/packet_list_model.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'packet_list_model.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15PacketListModelE_t {};
} // unnamed namespace

template <> constexpr inline auto PacketListModel::qt_create_metaobjectdata<qt_meta_tag_ZN15PacketListModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PacketListModel",
        "packetAppended",
        "",
        "capture_file*",
        "cap_file",
        "frame_data*",
        "fdata",
        "qsizetype",
        "row",
        "goToPacket",
        "maxLineCountChanged",
        "QModelIndex",
        "ih_index",
        "itemHeightChanged",
        "bgColorizationProgress",
        "first",
        "last",
        "sort",
        "column",
        "Qt::SortOrder",
        "order",
        "stopSorting",
        "flushVisibleRows",
        "dissectIdle",
        "reset",
        "emitItemHeightChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'packetAppended'
        QtMocHelpers::SignalData<void(capture_file *, frame_data *, qsizetype)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'goToPacket'
        QtMocHelpers::SignalData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'maxLineCountChanged'
        QtMocHelpers::SignalData<void(const QModelIndex &) const>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'itemHeightChanged'
        QtMocHelpers::SignalData<void(const QModelIndex &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'bgColorizationProgress'
        QtMocHelpers::SignalData<void(int, int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 }, { QMetaType::Int, 16 },
        }}),
        // Slot 'sort'
        QtMocHelpers::SlotData<void(int, Qt::SortOrder)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 }, { 0x80000000 | 19, 20 },
        }}),
        // Slot 'sort'
        QtMocHelpers::SlotData<void(int)>(17, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 18 },
        }}),
        // Slot 'stopSorting'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'flushVisibleRows'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'dissectIdle'
        QtMocHelpers::SlotData<void(bool)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 24 },
        }}),
        // Slot 'dissectIdle'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'emitItemHeightChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PacketListModel, qt_meta_tag_ZN15PacketListModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PacketListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PacketListModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PacketListModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15PacketListModelE_t>.metaTypes,
    nullptr
} };

void PacketListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PacketListModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->packetAppended((*reinterpret_cast<std::add_pointer_t<capture_file*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<frame_data*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qsizetype>>(_a[3]))); break;
        case 1: _t->goToPacket((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->maxLineCountChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->itemHeightChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->bgColorizationProgress((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->sort((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::SortOrder>>(_a[2]))); break;
        case 6: _t->sort((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->stopSorting(); break;
        case 8: _t->flushVisibleRows(); break;
        case 9: _t->dissectIdle((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->dissectIdle(); break;
        case 11: _t->emitItemHeightChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PacketListModel::*)(capture_file * , frame_data * , qsizetype )>(_a, &PacketListModel::packetAppended, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PacketListModel::*)(int )>(_a, &PacketListModel::goToPacket, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PacketListModel::*)(const QModelIndex & ) const>(_a, &PacketListModel::maxLineCountChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PacketListModel::*)(const QModelIndex & )>(_a, &PacketListModel::itemHeightChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PacketListModel::*)(int , int )>(_a, &PacketListModel::bgColorizationProgress, 4))
            return;
    }
}

const QMetaObject *PacketListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PacketListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PacketListModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int PacketListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PacketListModel::packetAppended(capture_file * _t1, frame_data * _t2, qsizetype _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void PacketListModel::goToPacket(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void PacketListModel::maxLineCountChanged(const QModelIndex & _t1)const
{
    QMetaObject::activate<void>(const_cast< PacketListModel *>(this), &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void PacketListModel::itemHeightChanged(const QModelIndex & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void PacketListModel::bgColorizationProgress(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}
QT_WARNING_POP
