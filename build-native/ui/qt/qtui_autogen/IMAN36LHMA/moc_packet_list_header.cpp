/****************************************************************************
** Meta object code from reading C++ file 'packet_list_header.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/widgets/packet_list_header.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'packet_list_header.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16PacketListHeaderE_t {};
} // unnamed namespace

template <> constexpr inline auto PacketListHeader::qt_create_metaobjectdata<qt_meta_tag_ZN16PacketListHeaderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PacketListHeader",
        "resetColumnWidth",
        "",
        "col",
        "updatePackets",
        "redraw",
        "showColumnPreferences",
        "pane_name",
        "editColumn",
        "column",
        "columnsChanged",
        "columnVisibilityTriggered",
        "setAlignment",
        "QAction*",
        "showColumnPrefs",
        "doEditColumn",
        "doResolveNames",
        "resizeToContent",
        "removeColumn",
        "resizeToWidth"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'resetColumnWidth'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'updatePackets'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Signal 'showColumnPreferences'
        QtMocHelpers::SignalData<void(QString)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'editColumn'
        QtMocHelpers::SignalData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Signal 'columnsChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'columnVisibilityTriggered'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setAlignment'
        QtMocHelpers::SlotData<void(QAction *)>(12, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 13, 2 },
        }}),
        // Slot 'showColumnPrefs'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'doEditColumn'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'doResolveNames'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'resizeToContent'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'removeColumn'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'resizeToWidth'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PacketListHeader, qt_meta_tag_ZN16PacketListHeaderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PacketListHeader::staticMetaObject = { {
    QMetaObject::SuperData::link<QHeaderView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16PacketListHeaderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16PacketListHeaderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16PacketListHeaderE_t>.metaTypes,
    nullptr
} };

void PacketListHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PacketListHeader *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->resetColumnWidth((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->updatePackets((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->showColumnPreferences((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->editColumn((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->columnsChanged(); break;
        case 5: _t->columnVisibilityTriggered(); break;
        case 6: _t->setAlignment((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 7: _t->showColumnPrefs(); break;
        case 8: _t->doEditColumn(); break;
        case 9: _t->doResolveNames(); break;
        case 10: _t->resizeToContent(); break;
        case 11: _t->removeColumn(); break;
        case 12: _t->resizeToWidth(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PacketListHeader::*)(int )>(_a, &PacketListHeader::resetColumnWidth, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PacketListHeader::*)(bool )>(_a, &PacketListHeader::updatePackets, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PacketListHeader::*)(QString )>(_a, &PacketListHeader::showColumnPreferences, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PacketListHeader::*)(int )>(_a, &PacketListHeader::editColumn, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PacketListHeader::*)()>(_a, &PacketListHeader::columnsChanged, 4))
            return;
    }
}

const QMetaObject *PacketListHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PacketListHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16PacketListHeaderE_t>.strings))
        return static_cast<void*>(this);
    return QHeaderView::qt_metacast(_clname);
}

int PacketListHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHeaderView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void PacketListHeader::resetColumnWidth(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void PacketListHeader::updatePackets(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void PacketListHeader::showColumnPreferences(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void PacketListHeader::editColumn(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void PacketListHeader::columnsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
