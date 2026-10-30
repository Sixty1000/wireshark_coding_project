/****************************************************************************
** Meta object code from reading C++ file 'bluetooth_att_server_attributes_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/bluetooth_att_server_attributes_dialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetooth_att_server_attributes_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN34BluetoothAttServerAttributesDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto BluetoothAttServerAttributesDialog::qt_create_metaobjectdata<qt_meta_tag_ZN34BluetoothAttServerAttributesDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BluetoothAttServerAttributesDialog",
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
        "on_tableTreeWidget_itemActivated",
        "QTreeWidgetItem*",
        "item",
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
        "interfaceCurrentIndexChanged",
        "index",
        "deviceCurrentIndexChanged",
        "removeDuplicatesStateChanged",
        "Qt::CheckState",
        "state"
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
        // Slot 'on_tableTreeWidget_itemActivated'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 14, 15 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'on_buttonBox_clicked'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Slot 'on_actionMark_Unmark_Cell_triggered'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMark_Unmark_Row_triggered'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopy_Cell_triggered'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopy_Rows_triggered'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopy_All_triggered'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSave_as_image_triggered'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'tableContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 26, 27 },
        }}),
        // Slot 'interfaceCurrentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 29 },
        }}),
        // Slot 'deviceCurrentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 29 },
        }}),
        // Slot 'removeDuplicatesStateChanged'
        QtMocHelpers::SlotData<void(Qt::CheckState)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 32, 33 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BluetoothAttServerAttributesDialog, qt_meta_tag_ZN34BluetoothAttServerAttributesDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BluetoothAttServerAttributesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<WiresharkDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN34BluetoothAttServerAttributesDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN34BluetoothAttServerAttributesDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN34BluetoothAttServerAttributesDialogE_t>.metaTypes,
    nullptr
} };

void BluetoothAttServerAttributesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BluetoothAttServerAttributesDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->updateFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->captureFileChanged((*reinterpret_cast<std::add_pointer_t<capture_file*>>(_a[1]))); break;
        case 3: _t->goToPacket((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->changeEvent((*reinterpret_cast<std::add_pointer_t<QEvent*>>(_a[1]))); break;
        case 5: _t->on_tableTreeWidget_itemActivated((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->on_buttonBox_clicked((*reinterpret_cast<std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 7: _t->on_actionMark_Unmark_Cell_triggered(); break;
        case 8: _t->on_actionMark_Unmark_Row_triggered(); break;
        case 9: _t->on_actionCopy_Cell_triggered(); break;
        case 10: _t->on_actionCopy_Rows_triggered(); break;
        case 11: _t->on_actionCopy_All_triggered(); break;
        case 12: _t->on_actionSave_as_image_triggered(); break;
        case 13: _t->tableContextMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 14: _t->interfaceCurrentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->deviceCurrentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->removeDuplicatesStateChanged((*reinterpret_cast<std::add_pointer_t<Qt::CheckState>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (BluetoothAttServerAttributesDialog::*)(QString , bool )>(_a, &BluetoothAttServerAttributesDialog::updateFilter, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (BluetoothAttServerAttributesDialog::*)(capture_file * )>(_a, &BluetoothAttServerAttributesDialog::captureFileChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (BluetoothAttServerAttributesDialog::*)(int )>(_a, &BluetoothAttServerAttributesDialog::goToPacket, 3))
            return;
    }
}

const QMetaObject *BluetoothAttServerAttributesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BluetoothAttServerAttributesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN34BluetoothAttServerAttributesDialogE_t>.strings))
        return static_cast<void*>(this);
    return WiresharkDialog::qt_metacast(_clname);
}

int BluetoothAttServerAttributesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void BluetoothAttServerAttributesDialog::updateFilter(QString _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 2
void BluetoothAttServerAttributesDialog::captureFileChanged(capture_file * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void BluetoothAttServerAttributesDialog::goToPacket(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
