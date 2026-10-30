/****************************************************************************
** Meta object code from reading C++ file 'capture_options_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/capture_options_dialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'capture_options_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN21InterfaceTreeDelegateE_t {};
} // unnamed namespace

template <> constexpr inline auto InterfaceTreeDelegate::qt_create_metaobjectdata<qt_meta_tag_ZN21InterfaceTreeDelegateE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "InterfaceTreeDelegate",
        "filterChanged",
        "",
        "filter",
        "linkTypeChanged",
        "selected_link_type",
        "snapshotLengthChanged",
        "value",
        "bufferSizeChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'filterChanged'
        QtMocHelpers::SignalData<void(const QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'linkTypeChanged'
        QtMocHelpers::SlotData<void(const QString)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'snapshotLengthChanged'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'bufferSizeChanged'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InterfaceTreeDelegate, qt_meta_tag_ZN21InterfaceTreeDelegateE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject InterfaceTreeDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21InterfaceTreeDelegateE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21InterfaceTreeDelegateE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21InterfaceTreeDelegateE_t>.metaTypes,
    nullptr
} };

void InterfaceTreeDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InterfaceTreeDelegate *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->filterChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->linkTypeChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->snapshotLengthChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->bufferSizeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InterfaceTreeDelegate::*)(const QString )>(_a, &InterfaceTreeDelegate::filterChanged, 0))
            return;
    }
}

const QMetaObject *InterfaceTreeDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterfaceTreeDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21InterfaceTreeDelegateE_t>.strings))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int InterfaceTreeDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void InterfaceTreeDelegate::filterChanged(const QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN20CaptureOptionsDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto CaptureOptionsDialog::qt_create_metaobjectdata<qt_meta_tag_ZN20CaptureOptionsDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CaptureOptionsDialog",
        "startCapture",
        "",
        "stopCapture",
        "setSelectedInterfaces",
        "setFilterValid",
        "valid",
        "capture_filter",
        "interfacesChanged",
        "ifsChanged",
        "interfaceListChanged",
        "captureFilterTextEdited",
        "text",
        "showExtcapOptions",
        "QString&",
        "device_name",
        "startCaptureOnClose",
        "interfaceSelected",
        "on_capturePromModeCheckBox_toggled",
        "checked",
        "on_captureMonitorModeCheckBox_toggled",
        "on_gbStopCaptureAuto_toggled",
        "on_cbUpdatePacketsRT_toggled",
        "on_cbAutoScroll_toggled",
        "on_gbNewFileAuto_toggled",
        "on_cbExtraCaptureInfo_toggled",
        "on_cbResolveMacAddresses_toggled",
        "on_compileBPF_clicked",
        "on_manageButton_clicked",
        "on_cbResolveNetworkNames_toggled",
        "on_cbResolveTransportNames_toggled",
        "on_buttonBox_accepted",
        "on_buttonBox_rejected",
        "on_buttonBox_helpRequested",
        "filterEdited",
        "updateWidgets",
        "updateStatistics",
        "refreshInterfaceList",
        "updateLocalInterfaces",
        "browseButtonClicked",
        "interfaceItemChanged",
        "QTreeWidgetItem*",
        "item",
        "column",
        "itemClicked",
        "itemDoubleClicked",
        "changeEvent",
        "QEvent*",
        "event",
        "tempDirBrowseButtonClicked",
        "MBComboBoxIndexChanged",
        "index",
        "stopMBComboBoxIndexChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'startCapture'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'stopCapture'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'setSelectedInterfaces'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'setFilterValid'
        QtMocHelpers::SignalData<void(bool, const QString)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 }, { QMetaType::QString, 7 },
        }}),
        // Signal 'interfacesChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ifsChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'interfaceListChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'captureFilterTextEdited'
        QtMocHelpers::SignalData<void(const QString &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Signal 'showExtcapOptions'
        QtMocHelpers::SignalData<void(QString &, bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 }, { QMetaType::Bool, 16 },
        }}),
        // Slot 'interfaceSelected'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_capturePromModeCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'on_captureMonitorModeCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'on_gbStopCaptureAuto_toggled'
        QtMocHelpers::SlotData<void(bool)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'on_cbUpdatePacketsRT_toggled'
        QtMocHelpers::SlotData<void(bool)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'on_cbAutoScroll_toggled'
        QtMocHelpers::SlotData<void(bool)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'on_gbNewFileAuto_toggled'
        QtMocHelpers::SlotData<void(bool)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'on_cbExtraCaptureInfo_toggled'
        QtMocHelpers::SlotData<void(bool)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'on_cbResolveMacAddresses_toggled'
        QtMocHelpers::SlotData<void(bool)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'on_compileBPF_clicked'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_manageButton_clicked'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cbResolveNetworkNames_toggled'
        QtMocHelpers::SlotData<void(bool)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'on_cbResolveTransportNames_toggled'
        QtMocHelpers::SlotData<void(bool)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'on_buttonBox_accepted'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_rejected'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_helpRequested'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'filterEdited'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateWidgets'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateStatistics'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'refreshInterfaceList'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateLocalInterfaces'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'browseButtonClicked'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'interfaceItemChanged'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 41, 42 }, { QMetaType::Int, 43 },
        }}),
        // Slot 'itemClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 41, 42 }, { QMetaType::Int, 43 },
        }}),
        // Slot 'itemDoubleClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(45, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 41, 42 }, { QMetaType::Int, 43 },
        }}),
        // Slot 'changeEvent'
        QtMocHelpers::SlotData<void(QEvent *)>(46, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 47, 48 },
        }}),
        // Slot 'tempDirBrowseButtonClicked'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'MBComboBoxIndexChanged'
        QtMocHelpers::SlotData<void(int)>(50, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 51 },
        }}),
        // Slot 'stopMBComboBoxIndexChanged'
        QtMocHelpers::SlotData<void(int)>(52, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 51 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CaptureOptionsDialog, qt_meta_tag_ZN20CaptureOptionsDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CaptureOptionsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<GeometryStateDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20CaptureOptionsDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20CaptureOptionsDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20CaptureOptionsDialogE_t>.metaTypes,
    nullptr
} };

void CaptureOptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CaptureOptionsDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->startCapture(); break;
        case 1: _t->stopCapture(); break;
        case 2: _t->setSelectedInterfaces(); break;
        case 3: _t->setFilterValid((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->interfacesChanged(); break;
        case 5: _t->ifsChanged(); break;
        case 6: _t->interfaceListChanged(); break;
        case 7: _t->captureFilterTextEdited((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->showExtcapOptions((*reinterpret_cast<std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 9: _t->interfaceSelected(); break;
        case 10: _t->on_capturePromModeCheckBox_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->on_captureMonitorModeCheckBox_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->on_gbStopCaptureAuto_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->on_cbUpdatePacketsRT_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->on_cbAutoScroll_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->on_gbNewFileAuto_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->on_cbExtraCaptureInfo_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->on_cbResolveMacAddresses_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->on_compileBPF_clicked(); break;
        case 19: _t->on_manageButton_clicked(); break;
        case 20: _t->on_cbResolveNetworkNames_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->on_cbResolveTransportNames_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->on_buttonBox_accepted(); break;
        case 23: _t->on_buttonBox_rejected(); break;
        case 24: _t->on_buttonBox_helpRequested(); break;
        case 25: _t->filterEdited(); break;
        case 26: _t->updateWidgets(); break;
        case 27: _t->updateStatistics(); break;
        case 28: _t->refreshInterfaceList(); break;
        case 29: _t->updateLocalInterfaces(); break;
        case 30: _t->browseButtonClicked(); break;
        case 31: _t->interfaceItemChanged((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 32: _t->itemClicked((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 33: _t->itemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 34: _t->changeEvent((*reinterpret_cast<std::add_pointer_t<QEvent*>>(_a[1]))); break;
        case 35: _t->tempDirBrowseButtonClicked(); break;
        case 36: _t->MBComboBoxIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 37: _t->stopMBComboBoxIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CaptureOptionsDialog::*)()>(_a, &CaptureOptionsDialog::startCapture, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CaptureOptionsDialog::*)()>(_a, &CaptureOptionsDialog::stopCapture, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CaptureOptionsDialog::*)()>(_a, &CaptureOptionsDialog::setSelectedInterfaces, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CaptureOptionsDialog::*)(bool , const QString )>(_a, &CaptureOptionsDialog::setFilterValid, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (CaptureOptionsDialog::*)()>(_a, &CaptureOptionsDialog::interfacesChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (CaptureOptionsDialog::*)()>(_a, &CaptureOptionsDialog::ifsChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (CaptureOptionsDialog::*)()>(_a, &CaptureOptionsDialog::interfaceListChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (CaptureOptionsDialog::*)(const QString & )>(_a, &CaptureOptionsDialog::captureFilterTextEdited, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (CaptureOptionsDialog::*)(QString & , bool )>(_a, &CaptureOptionsDialog::showExtcapOptions, 8))
            return;
    }
}

const QMetaObject *CaptureOptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaptureOptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20CaptureOptionsDialogE_t>.strings))
        return static_cast<void*>(this);
    return GeometryStateDialog::qt_metacast(_clname);
}

int CaptureOptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeometryStateDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 38;
    }
    return _id;
}

// SIGNAL 0
void CaptureOptionsDialog::startCapture()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CaptureOptionsDialog::stopCapture()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CaptureOptionsDialog::setSelectedInterfaces()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CaptureOptionsDialog::setFilterValid(bool _t1, const QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void CaptureOptionsDialog::interfacesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void CaptureOptionsDialog::ifsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void CaptureOptionsDialog::interfaceListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void CaptureOptionsDialog::captureFilterTextEdited(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void CaptureOptionsDialog::showExtcapOptions(QString & _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1, _t2);
}
QT_WARNING_POP
