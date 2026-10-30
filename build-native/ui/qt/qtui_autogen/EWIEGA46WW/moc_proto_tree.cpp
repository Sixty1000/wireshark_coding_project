/****************************************************************************
** Meta object code from reading C++ file 'proto_tree.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/proto_tree.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'proto_tree.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9ProtoTreeE_t {};
} // unnamed namespace

template <> constexpr inline auto ProtoTree::qt_create_metaobjectdata<qt_meta_tag_ZN9ProtoTreeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ProtoTree",
        "fieldSelected",
        "",
        "FieldInformation*",
        "openPacketInNewWindow",
        "goToPacket",
        "relatedFrame",
        "ft_framenum_type_t",
        "showProtocolPreferences",
        "module_name",
        "editProtocolPreference",
        "preference*",
        "pref",
        "pref_module*",
        "module",
        "setCaptureFile",
        "capture_file*",
        "cf",
        "setMonospaceFont",
        "QFont",
        "mono_font",
        "syncExpanded",
        "QModelIndex",
        "index",
        "syncCollapsed",
        "expandSubtrees",
        "collapseSubtrees",
        "expandAll",
        "collapseAll",
        "itemClicked",
        "itemDoubleClicked",
        "selectedFieldChanged",
        "selectedFrameChanged",
        "QList<int>",
        "selectionChanged",
        "QItemSelection",
        "selected",
        "deselected",
        "ctxCopyVisibleItems",
        "ctxCopyAsFilter",
        "ctxCopySelectedInfo",
        "ctxOpenUrlWiki",
        "updateContentWidth",
        "connectToMainWindow"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'fieldSelected'
        QtMocHelpers::SignalData<void(FieldInformation *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'openPacketInNewWindow'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'goToPacket'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'relatedFrame'
        QtMocHelpers::SignalData<void(int, ft_framenum_type_t)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { 0x80000000 | 7, 2 },
        }}),
        // Signal 'showProtocolPreferences'
        QtMocHelpers::SignalData<void(const QString)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Signal 'editProtocolPreference'
        QtMocHelpers::SignalData<void(preference *, pref_module *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 }, { 0x80000000 | 13, 14 },
        }}),
        // Slot 'setCaptureFile'
        QtMocHelpers::SlotData<void(capture_file *)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Slot 'setMonospaceFont'
        QtMocHelpers::SlotData<void(const QFont &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'syncExpanded'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'syncCollapsed'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'expandSubtrees'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'collapseSubtrees'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'expandAll'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'collapseAll'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'itemClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'itemDoubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'selectedFieldChanged'
        QtMocHelpers::SlotData<void(FieldInformation *)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'selectedFrameChanged'
        QtMocHelpers::SlotData<void(QList<int>)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 33, 2 },
        }}),
        // Slot 'selectionChanged'
        QtMocHelpers::SlotData<void(const QItemSelection &, const QItemSelection &)>(34, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 35, 36 }, { 0x80000000 | 35, 37 },
        }}),
        // Slot 'ctxCopyVisibleItems'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'ctxCopyAsFilter'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'ctxCopySelectedInfo'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'ctxOpenUrlWiki'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'updateContentWidth'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'connectToMainWindow'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ProtoTree, qt_meta_tag_ZN9ProtoTreeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ProtoTree::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9ProtoTreeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9ProtoTreeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9ProtoTreeE_t>.metaTypes,
    nullptr
} };

void ProtoTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ProtoTree *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fieldSelected((*reinterpret_cast<std::add_pointer_t<FieldInformation*>>(_a[1]))); break;
        case 1: _t->openPacketInNewWindow((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->goToPacket((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->relatedFrame((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<ft_framenum_type_t>>(_a[2]))); break;
        case 4: _t->showProtocolPreferences((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->editProtocolPreference((*reinterpret_cast<std::add_pointer_t<preference*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<pref_module*>>(_a[2]))); break;
        case 6: _t->setCaptureFile((*reinterpret_cast<std::add_pointer_t<capture_file*>>(_a[1]))); break;
        case 7: _t->setMonospaceFont((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1]))); break;
        case 8: _t->syncExpanded((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 9: _t->syncCollapsed((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 10: _t->expandSubtrees(); break;
        case 11: _t->collapseSubtrees(); break;
        case 12: _t->expandAll(); break;
        case 13: _t->collapseAll(); break;
        case 14: _t->itemClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 15: _t->itemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 16: _t->selectedFieldChanged((*reinterpret_cast<std::add_pointer_t<FieldInformation*>>(_a[1]))); break;
        case 17: _t->selectedFrameChanged((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 18: _t->selectionChanged((*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 19: _t->ctxCopyVisibleItems(); break;
        case 20: _t->ctxCopyAsFilter(); break;
        case 21: _t->ctxCopySelectedInfo(); break;
        case 22: _t->ctxOpenUrlWiki(); break;
        case 23: _t->updateContentWidth(); break;
        case 24: _t->connectToMainWindow(); break;
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
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FieldInformation* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ProtoTree::*)(FieldInformation * )>(_a, &ProtoTree::fieldSelected, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProtoTree::*)(bool )>(_a, &ProtoTree::openPacketInNewWindow, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProtoTree::*)(int )>(_a, &ProtoTree::goToPacket, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProtoTree::*)(int , ft_framenum_type_t )>(_a, &ProtoTree::relatedFrame, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProtoTree::*)(const QString )>(_a, &ProtoTree::showProtocolPreferences, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProtoTree::*)(preference * , pref_module * )>(_a, &ProtoTree::editProtocolPreference, 5))
            return;
    }
}

const QMetaObject *ProtoTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProtoTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9ProtoTreeE_t>.strings))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int ProtoTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void ProtoTree::fieldSelected(FieldInformation * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void ProtoTree::openPacketInNewWindow(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void ProtoTree::goToPacket(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void ProtoTree::relatedFrame(int _t1, ft_framenum_type_t _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void ProtoTree::showProtocolPreferences(const QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void ProtoTree::editProtocolPreference(preference * _t1, pref_module * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}
QT_WARNING_POP
