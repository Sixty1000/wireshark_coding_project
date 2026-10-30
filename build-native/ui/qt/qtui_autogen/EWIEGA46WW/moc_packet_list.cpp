/****************************************************************************
** Meta object code from reading C++ file 'packet_list.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/packet_list.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'packet_list.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10PacketListE_t {};
} // unnamed namespace

template <> constexpr inline auto PacketList::qt_create_metaobjectdata<qt_meta_tag_ZN10PacketListE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PacketList",
        "packetDissectionChanged",
        "",
        "showColumnPreferences",
        "pane_name",
        "editColumn",
        "column",
        "packetListScrolled",
        "at_end",
        "showProtocolPreferences",
        "module_name",
        "editProtocolPreference",
        "preference*",
        "pref",
        "pref_module*",
        "module",
        "framesSelected",
        "QList<int>",
        "fieldSelected",
        "FieldInformation*",
        "rowsInserted",
        "QModelIndex",
        "parent",
        "start",
        "end",
        "drawRow",
        "QPainter*",
        "painter",
        "QStyleOptionViewItem",
        "option",
        "index",
        "setCaptureFile",
        "capture_file*",
        "cf",
        "setMonospaceFont",
        "QFont",
        "mono_font",
        "setRegularFont",
        "regular_font",
        "goNextPacket",
        "goPreviousPacket",
        "goFirstPacket",
        "goLastPacket",
        "goToPacket",
        "packet",
        "hf_id",
        "goNextHistoryPacket",
        "goPreviousHistoryPacket",
        "markFrame",
        "markAllDisplayedFrames",
        "set",
        "ignoreFrame",
        "ignoreAllDisplayedFrames",
        "setTimeReference",
        "unsetAllTimeReferences",
        "applyTimeShift",
        "recolorPackets",
        "redrawVisiblePackets",
        "redrawVisiblePacketsDontSelectCurrent",
        "colorsChanged",
        "columnsChanged",
        "fieldsChanged",
        "preferencesChanged",
        "freezePacketList",
        "changing_profile",
        "columnVisibilityTriggered",
        "sectionResized",
        "col",
        "new_width",
        "sectionMoved",
        "updateRowHeights",
        "ih_index",
        "copySummary",
        "vScrollBarActionTriggered",
        "drawFarOverlay",
        "drawNearOverlay",
        "updatePackets",
        "redraw",
        "ctxDecodeAsDialog",
        "SummaryCopyType",
        "CopyAsText",
        "CopyAsCSV",
        "CopyAsYAML"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'packetDissectionChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showColumnPreferences'
        QtMocHelpers::SignalData<void(QString)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Signal 'editColumn'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'packetListScrolled'
        QtMocHelpers::SignalData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Signal 'showProtocolPreferences'
        QtMocHelpers::SignalData<void(const QString)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Signal 'editProtocolPreference'
        QtMocHelpers::SignalData<void(preference *, pref_module *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 }, { 0x80000000 | 14, 15 },
        }}),
        // Signal 'framesSelected'
        QtMocHelpers::SignalData<void(QList<int>)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 2 },
        }}),
        // Signal 'fieldSelected'
        QtMocHelpers::SignalData<void(FieldInformation *)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 2 },
        }}),
        // Slot 'rowsInserted'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(20, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 21, 22 }, { QMetaType::Int, 23 }, { QMetaType::Int, 24 },
        }}),
        // Slot 'drawRow'
        QtMocHelpers::SlotData<void(QPainter *, const QStyleOptionViewItem &, const QModelIndex &) const>(25, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 26, 27 }, { 0x80000000 | 28, 29 }, { 0x80000000 | 21, 30 },
        }}),
        // Slot 'setCaptureFile'
        QtMocHelpers::SlotData<void(capture_file *)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 32, 33 },
        }}),
        // Slot 'setMonospaceFont'
        QtMocHelpers::SlotData<void(const QFont &)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 36 },
        }}),
        // Slot 'setRegularFont'
        QtMocHelpers::SlotData<void(const QFont &)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 38 },
        }}),
        // Slot 'goNextPacket'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'goPreviousPacket'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'goFirstPacket'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'goLastPacket'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'goToPacket'
        QtMocHelpers::SlotData<void(int, int)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 44 }, { QMetaType::Int, 45 },
        }}),
        // Slot 'goToPacket'
        QtMocHelpers::SlotData<void(int)>(43, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 44 },
        }}),
        // Slot 'goNextHistoryPacket'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'goPreviousHistoryPacket'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'markFrame'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'markAllDisplayedFrames'
        QtMocHelpers::SlotData<void(bool)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 50 },
        }}),
        // Slot 'ignoreFrame'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ignoreAllDisplayedFrames'
        QtMocHelpers::SlotData<void(bool)>(52, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 50 },
        }}),
        // Slot 'setTimeReference'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'unsetAllTimeReferences'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'applyTimeShift'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'recolorPackets'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'redrawVisiblePackets'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'redrawVisiblePacketsDontSelectCurrent'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'colorsChanged'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'columnsChanged'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'fieldsChanged'
        QtMocHelpers::SlotData<void(capture_file *)>(61, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 32, 33 },
        }}),
        // Slot 'preferencesChanged'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'freezePacketList'
        QtMocHelpers::SlotData<void(bool)>(63, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 64 },
        }}),
        // Slot 'columnVisibilityTriggered'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'sectionResized'
        QtMocHelpers::SlotData<void(int, int, int)>(66, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 67 }, { QMetaType::Int, 2 }, { QMetaType::Int, 68 },
        }}),
        // Slot 'sectionMoved'
        QtMocHelpers::SlotData<void(int, int, int)>(69, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'updateRowHeights'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(70, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 71 },
        }}),
        // Slot 'copySummary'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'vScrollBarActionTriggered'
        QtMocHelpers::SlotData<void(int)>(73, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'drawFarOverlay'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'drawNearOverlay'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updatePackets'
        QtMocHelpers::SlotData<void(bool)>(76, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 77 },
        }}),
        // Slot 'ctxDecodeAsDialog'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'SummaryCopyType'
        QtMocHelpers::EnumData<enum SummaryCopyType>(79, 79, QMC::EnumFlags{}).add({
            {   80, SummaryCopyType::CopyAsText },
            {   81, SummaryCopyType::CopyAsCSV },
            {   82, SummaryCopyType::CopyAsYAML },
        }),
    };
    return QtMocHelpers::metaObjectData<PacketList, qt_meta_tag_ZN10PacketListE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PacketList::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10PacketListE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10PacketListE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10PacketListE_t>.metaTypes,
    nullptr
} };

void PacketList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PacketList *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->packetDissectionChanged(); break;
        case 1: _t->showColumnPreferences((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->editColumn((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->packetListScrolled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->showProtocolPreferences((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->editProtocolPreference((*reinterpret_cast<std::add_pointer_t<preference*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<pref_module*>>(_a[2]))); break;
        case 6: _t->framesSelected((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 7: _t->fieldSelected((*reinterpret_cast<std::add_pointer_t<FieldInformation*>>(_a[1]))); break;
        case 8: _t->rowsInserted((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 9: _t->drawRow((*reinterpret_cast<std::add_pointer_t<QPainter*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStyleOptionViewItem>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[3]))); break;
        case 10: _t->setCaptureFile((*reinterpret_cast<std::add_pointer_t<capture_file*>>(_a[1]))); break;
        case 11: _t->setMonospaceFont((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1]))); break;
        case 12: _t->setRegularFont((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1]))); break;
        case 13: _t->goNextPacket(); break;
        case 14: _t->goPreviousPacket(); break;
        case 15: _t->goFirstPacket(); break;
        case 16: _t->goLastPacket(); break;
        case 17: _t->goToPacket((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 18: _t->goToPacket((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->goNextHistoryPacket(); break;
        case 20: _t->goPreviousHistoryPacket(); break;
        case 21: _t->markFrame(); break;
        case 22: _t->markAllDisplayedFrames((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->ignoreFrame(); break;
        case 24: _t->ignoreAllDisplayedFrames((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->setTimeReference(); break;
        case 26: _t->unsetAllTimeReferences(); break;
        case 27: _t->applyTimeShift(); break;
        case 28: _t->recolorPackets(); break;
        case 29: _t->redrawVisiblePackets(); break;
        case 30: _t->redrawVisiblePacketsDontSelectCurrent(); break;
        case 31: _t->colorsChanged(); break;
        case 32: _t->columnsChanged(); break;
        case 33: _t->fieldsChanged((*reinterpret_cast<std::add_pointer_t<capture_file*>>(_a[1]))); break;
        case 34: _t->preferencesChanged(); break;
        case 35: _t->freezePacketList((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 36: _t->columnVisibilityTriggered(); break;
        case 37: _t->sectionResized((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 38: _t->sectionMoved((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 39: _t->updateRowHeights((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 40: _t->copySummary(); break;
        case 41: _t->vScrollBarActionTriggered((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 42: _t->drawFarOverlay(); break;
        case 43: _t->drawNearOverlay(); break;
        case 44: _t->updatePackets((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 45: _t->ctxDecodeAsDialog(); break;
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
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PacketList::*)()>(_a, &PacketList::packetDissectionChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PacketList::*)(QString )>(_a, &PacketList::showColumnPreferences, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PacketList::*)(int )>(_a, &PacketList::editColumn, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PacketList::*)(bool )>(_a, &PacketList::packetListScrolled, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PacketList::*)(const QString )>(_a, &PacketList::showProtocolPreferences, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PacketList::*)(preference * , pref_module * )>(_a, &PacketList::editProtocolPreference, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PacketList::*)(QList<int> )>(_a, &PacketList::framesSelected, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (PacketList::*)(FieldInformation * )>(_a, &PacketList::fieldSelected, 7))
            return;
    }
}

const QMetaObject *PacketList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PacketList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10PacketListE_t>.strings))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int PacketList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
    return _id;
}

// SIGNAL 0
void PacketList::packetDissectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PacketList::showColumnPreferences(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void PacketList::editColumn(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void PacketList::packetListScrolled(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void PacketList::showProtocolPreferences(const QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void PacketList::editProtocolPreference(preference * _t1, pref_module * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void PacketList::framesSelected(QList<int> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void PacketList::fieldSelected(FieldInformation * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}
QT_WARNING_POP
