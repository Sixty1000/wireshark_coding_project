/****************************************************************************
** Meta object code from reading C++ file 'bluetooth_hci_summary_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/bluetooth_hci_summary_dialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetooth_hci_summary_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN25BluetoothHciSummaryDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto BluetoothHciSummaryDialog::qt_create_metaobjectdata<qt_meta_tag_ZN25BluetoothHciSummaryDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BluetoothHciSummaryDialog",
        "updateFilter",
        "",
        "filter",
        "force",
        "captureFileChanged",
        "capture_file*",
        "cf",
        "goToPacket",
        "packet_num",
        "changeEvent",
        "QEvent*",
        "event",
        "recursiveCopyTreeItems",
        "QTreeWidgetItem*",
        "item",
        "QString&",
        "copy",
        "ident_level",
        "on_tableTreeWidget_itemActivated",
        "on_buttonBox_clicked",
        "QAbstractButton*",
        "button",
        "on_actionMark_Unmark_Cell_triggered",
        "on_actionMark_Unmark_Row_triggered",
        "on_actionCopy_Cell_triggered",
        "on_actionCopy_Rows_triggered",
        "on_actionCopy_All_triggered",
        "on_actionSave_as_image_triggered",
        "tableContextMenu",
        "QPoint",
        "pos",
        "tableItemExpanded",
        "tableItemCollapsed",
        "interfaceCurrentIndexChanged",
        "index",
        "adapterCurrentIndexChanged",
        "displayFilterLineEditAccepted",
        "resultsFilterLineEditChanged",
        "text"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'updateFilter'
        QtMocHelpers::SignalData<void(QString, bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::Bool, 4 },
        }}),
        // Signal 'updateFilter'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'captureFileChanged'
        QtMocHelpers::SignalData<void(capture_file *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'goToPacket'
        QtMocHelpers::SignalData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'changeEvent'
        QtMocHelpers::SlotData<void(QEvent *)>(10, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'recursiveCopyTreeItems'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, QString &, int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 14, 15 }, { 0x80000000 | 16, 17 }, { QMetaType::Int, 18 },
        }}),
        // Slot 'on_tableTreeWidget_itemActivated'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 14, 15 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'on_buttonBox_clicked'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Slot 'on_actionMark_Unmark_Cell_triggered'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMark_Unmark_Row_triggered'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopy_Cell_triggered'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopy_Rows_triggered'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopy_All_triggered'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSave_as_image_triggered'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'tableContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 30, 31 },
        }}),
        // Slot 'tableItemExpanded'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Slot 'tableItemCollapsed'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *)>(33, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Slot 'interfaceCurrentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 35 },
        }}),
        // Slot 'adapterCurrentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(36, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 35 },
        }}),
        // Slot 'displayFilterLineEditAccepted'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'resultsFilterLineEditChanged'
        QtMocHelpers::SlotData<void(const QString &)>(38, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 39 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BluetoothHciSummaryDialog, qt_meta_tag_ZN25BluetoothHciSummaryDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BluetoothHciSummaryDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<WiresharkDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25BluetoothHciSummaryDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25BluetoothHciSummaryDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25BluetoothHciSummaryDialogE_t>.metaTypes,
    nullptr
} };

void BluetoothHciSummaryDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BluetoothHciSummaryDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->updateFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->captureFileChanged((*reinterpret_cast<std::add_pointer_t<capture_file*>>(_a[1]))); break;
        case 3: _t->goToPacket((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->changeEvent((*reinterpret_cast<std::add_pointer_t<QEvent*>>(_a[1]))); break;
        case 5: _t->recursiveCopyTreeItems((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 6: _t->on_tableTreeWidget_itemActivated((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->on_buttonBox_clicked((*reinterpret_cast<std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 8: _t->on_actionMark_Unmark_Cell_triggered(); break;
        case 9: _t->on_actionMark_Unmark_Row_triggered(); break;
        case 10: _t->on_actionCopy_Cell_triggered(); break;
        case 11: _t->on_actionCopy_Rows_triggered(); break;
        case 12: _t->on_actionCopy_All_triggered(); break;
        case 13: _t->on_actionSave_as_image_triggered(); break;
        case 14: _t->tableContextMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 15: _t->tableItemExpanded((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 16: _t->tableItemCollapsed((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 17: _t->interfaceCurrentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->adapterCurrentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->displayFilterLineEditAccepted(); break;
        case 20: _t->resultsFilterLineEditChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (BluetoothHciSummaryDialog::*)(QString , bool )>(_a, &BluetoothHciSummaryDialog::updateFilter, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (BluetoothHciSummaryDialog::*)(capture_file * )>(_a, &BluetoothHciSummaryDialog::captureFileChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (BluetoothHciSummaryDialog::*)(int )>(_a, &BluetoothHciSummaryDialog::goToPacket, 3))
            return;
    }
}

const QMetaObject *BluetoothHciSummaryDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BluetoothHciSummaryDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25BluetoothHciSummaryDialogE_t>.strings))
        return static_cast<void*>(this);
    return WiresharkDialog::qt_metacast(_clname);
}

int BluetoothHciSummaryDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void BluetoothHciSummaryDialog::updateFilter(QString _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 2
void BluetoothHciSummaryDialog::captureFileChanged(capture_file * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void BluetoothHciSummaryDialog::goToPacket(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
