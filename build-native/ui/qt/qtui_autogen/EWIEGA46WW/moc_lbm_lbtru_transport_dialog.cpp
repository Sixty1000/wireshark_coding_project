/****************************************************************************
** Meta object code from reading C++ file 'lbm_lbtru_transport_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/lbm_lbtru_transport_dialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lbm_lbtru_transport_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23LBMLBTRUTransportDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto LBMLBTRUTransportDialog::qt_create_metaobjectdata<qt_meta_tag_ZN23LBMLBTRUTransportDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "LBMLBTRUTransportDialog",
        "goToPacket",
        "",
        "packet_num",
        "setCaptureFile",
        "capture_file*",
        "cfile",
        "on_applyFilterButton_clicked",
        "sourcesDetailCurrentChanged",
        "index",
        "sourcesItemClicked",
        "QTreeWidgetItem*",
        "item",
        "column",
        "sourcesDetailItemDoubleClicked",
        "receiversDetailCurrentChanged",
        "receiversItemClicked",
        "receiversDetailItemDoubleClicked",
        "custom_source_context_menuRequested",
        "QPoint",
        "pos",
        "actionSourceDataFrames_triggered",
        "checked",
        "actionSourceDataBytes_triggered",
        "actionSourceDataFramesBytes_triggered",
        "actionSourceDataRate_triggered",
        "actionSourceRXDataFrames_triggered",
        "actionSourceRXDataBytes_triggered",
        "actionSourceRXDataFramesBytes_triggered",
        "actionSourceRXDataRate_triggered",
        "actionSourceNCFFrames_triggered",
        "actionSourceNCFCount_triggered",
        "actionSourceNCFBytes_triggered",
        "actionSourceNCFFramesBytes_triggered",
        "actionSourceNCFCountBytes_triggered",
        "actionSourceNCFFramesCount_triggered",
        "actionSourceNCFFramesCountBytes_triggered",
        "actionSourceNCFRate_triggered",
        "actionSourceSMFrames_triggered",
        "actionSourceSMBytes_triggered",
        "actionSourceSMFramesBytes_triggered",
        "actionSourceSMRate_triggered",
        "actionSourceAutoResizeColumns_triggered",
        "custom_receiver_context_menuRequested",
        "actionReceiverNAKFrames_triggered",
        "actionReceiverNAKCount_triggered",
        "actionReceiverNAKBytes_triggered",
        "actionReceiverNAKFramesCount_triggered",
        "actionReceiverNAKCountBytes_triggered",
        "actionReceiverNAKFramesBytes_triggered",
        "actionReceiverNAKFramesCountBytes_triggered",
        "actionReceiverNAKRate_triggered",
        "actionReceiverACKFrames_triggered",
        "actionReceiverACKBytes_triggered",
        "actionReceiverACKFramesBytes_triggered",
        "actionReceiverACKRate_triggered",
        "actionReceiverCREQFrames_triggered",
        "actionReceiverCREQBytes_triggered",
        "actionReceiverCREQFramesBytes_triggered",
        "actionReceiverCREQRate_triggered",
        "actionReceiverAutoResizeColumns_triggered"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'goToPacket'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'setCaptureFile'
        QtMocHelpers::SlotData<void(capture_file *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'on_applyFilterButton_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'sourcesDetailCurrentChanged'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'sourcesItemClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot 'sourcesDetailItemDoubleClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot 'receiversDetailCurrentChanged'
        QtMocHelpers::SlotData<void(int)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'receiversItemClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot 'receiversDetailItemDoubleClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot 'custom_source_context_menuRequested'
        QtMocHelpers::SlotData<void(const QPoint &)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'actionSourceDataFrames_triggered'
        QtMocHelpers::SlotData<void(bool)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceDataBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceDataFramesBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceDataRate_triggered'
        QtMocHelpers::SlotData<void(bool)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceRXDataFrames_triggered'
        QtMocHelpers::SlotData<void(bool)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceRXDataBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceRXDataFramesBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceRXDataRate_triggered'
        QtMocHelpers::SlotData<void(bool)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceNCFFrames_triggered'
        QtMocHelpers::SlotData<void(bool)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceNCFCount_triggered'
        QtMocHelpers::SlotData<void(bool)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceNCFBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceNCFFramesBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(33, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceNCFCountBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceNCFFramesCount_triggered'
        QtMocHelpers::SlotData<void(bool)>(35, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceNCFFramesCountBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(36, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceNCFRate_triggered'
        QtMocHelpers::SlotData<void(bool)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceSMFrames_triggered'
        QtMocHelpers::SlotData<void(bool)>(38, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceSMBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceSMFramesBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceSMRate_triggered'
        QtMocHelpers::SlotData<void(bool)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionSourceAutoResizeColumns_triggered'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'custom_receiver_context_menuRequested'
        QtMocHelpers::SlotData<void(const QPoint &)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'actionReceiverNAKFrames_triggered'
        QtMocHelpers::SlotData<void(bool)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionReceiverNAKCount_triggered'
        QtMocHelpers::SlotData<void(bool)>(45, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionReceiverNAKBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(46, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionReceiverNAKFramesCount_triggered'
        QtMocHelpers::SlotData<void(bool)>(47, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionReceiverNAKCountBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(48, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionReceiverNAKFramesBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(49, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionReceiverNAKFramesCountBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(50, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionReceiverNAKRate_triggered'
        QtMocHelpers::SlotData<void(bool)>(51, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionReceiverACKFrames_triggered'
        QtMocHelpers::SlotData<void(bool)>(52, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionReceiverACKBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(53, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionReceiverACKFramesBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(54, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionReceiverACKRate_triggered'
        QtMocHelpers::SlotData<void(bool)>(55, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionReceiverCREQFrames_triggered'
        QtMocHelpers::SlotData<void(bool)>(56, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionReceiverCREQBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(57, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionReceiverCREQFramesBytes_triggered'
        QtMocHelpers::SlotData<void(bool)>(58, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionReceiverCREQRate_triggered'
        QtMocHelpers::SlotData<void(bool)>(59, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'actionReceiverAutoResizeColumns_triggered'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LBMLBTRUTransportDialog, qt_meta_tag_ZN23LBMLBTRUTransportDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject LBMLBTRUTransportDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23LBMLBTRUTransportDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23LBMLBTRUTransportDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23LBMLBTRUTransportDialogE_t>.metaTypes,
    nullptr
} };

void LBMLBTRUTransportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LBMLBTRUTransportDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->goToPacket((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->setCaptureFile((*reinterpret_cast<std::add_pointer_t<capture_file*>>(_a[1]))); break;
        case 2: _t->on_applyFilterButton_clicked(); break;
        case 3: _t->sourcesDetailCurrentChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->sourcesItemClicked((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->sourcesDetailItemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->receiversDetailCurrentChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->receiversItemClicked((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->receiversDetailItemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->custom_source_context_menuRequested((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 10: _t->actionSourceDataFrames_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->actionSourceDataBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->actionSourceDataFramesBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->actionSourceDataRate_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->actionSourceRXDataFrames_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->actionSourceRXDataBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->actionSourceRXDataFramesBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->actionSourceRXDataRate_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->actionSourceNCFFrames_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->actionSourceNCFCount_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->actionSourceNCFBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->actionSourceNCFFramesBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->actionSourceNCFCountBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->actionSourceNCFFramesCount_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->actionSourceNCFFramesCountBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->actionSourceNCFRate_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->actionSourceSMFrames_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->actionSourceSMBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->actionSourceSMFramesBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 29: _t->actionSourceSMRate_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->actionSourceAutoResizeColumns_triggered(); break;
        case 31: _t->custom_receiver_context_menuRequested((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 32: _t->actionReceiverNAKFrames_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 33: _t->actionReceiverNAKCount_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->actionReceiverNAKBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 35: _t->actionReceiverNAKFramesCount_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 36: _t->actionReceiverNAKCountBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 37: _t->actionReceiverNAKFramesBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 38: _t->actionReceiverNAKFramesCountBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 39: _t->actionReceiverNAKRate_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 40: _t->actionReceiverACKFrames_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 41: _t->actionReceiverACKBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 42: _t->actionReceiverACKFramesBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 43: _t->actionReceiverACKRate_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 44: _t->actionReceiverCREQFrames_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 45: _t->actionReceiverCREQBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 46: _t->actionReceiverCREQFramesBytes_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 47: _t->actionReceiverCREQRate_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 48: _t->actionReceiverAutoResizeColumns_triggered(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (LBMLBTRUTransportDialog::*)(int )>(_a, &LBMLBTRUTransportDialog::goToPacket, 0))
            return;
    }
}

const QMetaObject *LBMLBTRUTransportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LBMLBTRUTransportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23LBMLBTRUTransportDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LBMLBTRUTransportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 49;
    }
    return _id;
}

// SIGNAL 0
void LBMLBTRUTransportDialog::goToPacket(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
