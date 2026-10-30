/****************************************************************************
** Meta object code from reading C++ file 'interface_frame.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/interface_frame.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interface_frame.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14InterfaceFrameE_t {};
} // unnamed namespace

template <> constexpr inline auto InterfaceFrame::qt_create_metaobjectdata<qt_meta_tag_ZN14InterfaceFrameE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "InterfaceFrame",
        "showExtcapOptions",
        "",
        "device_name",
        "startCaptureOnClose",
        "startCapture",
        "itemSelectionChanged",
        "typeSelectionChanged",
        "scanLocalInterfaces",
        "GList*",
        "filter_list",
        "updateSelectedInterfaces",
        "interfaceListChanged",
        "toggleHiddenInterfaces",
        "showRunOnFile",
        "showContextMenu",
        "QPoint",
        "pos",
        "interfaceTreeSelectionChanged",
        "QItemSelection",
        "selected",
        "deselected",
        "on_interfaceTree_doubleClicked",
        "QModelIndex",
        "index",
        "on_interfaceTree_clicked",
        "updateStatistics",
        "actionButton_toggled",
        "checked",
        "triggeredIfTypeButton",
        "on_warningLabel_linkActivated",
        "link"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showExtcapOptions'
        QtMocHelpers::SignalData<void(QString, bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::Bool, 4 },
        }}),
        // Signal 'startCapture'
        QtMocHelpers::SignalData<void(QStringList)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 2 },
        }}),
        // Signal 'itemSelectionChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'typeSelectionChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'scanLocalInterfaces'
        QtMocHelpers::SlotData<void(GList *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'scanLocalInterfaces'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'updateSelectedInterfaces'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'interfaceListChanged'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggleHiddenInterfaces'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showRunOnFile'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showContextMenu'
        QtMocHelpers::SlotData<void(QPoint)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Slot 'interfaceTreeSelectionChanged'
        QtMocHelpers::SlotData<void(const QItemSelection &, const QItemSelection &)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 19, 20 }, { 0x80000000 | 19, 21 },
        }}),
        // Slot 'on_interfaceTree_doubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 23, 24 },
        }}),
        // Slot 'on_interfaceTree_clicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 23, 24 },
        }}),
        // Slot 'updateStatistics'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'actionButton_toggled'
        QtMocHelpers::SlotData<void(bool)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 28 },
        }}),
        // Slot 'triggeredIfTypeButton'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_warningLabel_linkActivated'
        QtMocHelpers::SlotData<void(const QString &)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 31 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InterfaceFrame, qt_meta_tag_ZN14InterfaceFrameE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject InterfaceFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14InterfaceFrameE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14InterfaceFrameE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14InterfaceFrameE_t>.metaTypes,
    nullptr
} };

void InterfaceFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InterfaceFrame *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showExtcapOptions((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->startCapture((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 2: _t->itemSelectionChanged(); break;
        case 3: _t->typeSelectionChanged(); break;
        case 4: _t->scanLocalInterfaces((*reinterpret_cast<std::add_pointer_t<GList*>>(_a[1]))); break;
        case 5: _t->scanLocalInterfaces(); break;
        case 6: _t->updateSelectedInterfaces(); break;
        case 7: _t->interfaceListChanged(); break;
        case 8: _t->toggleHiddenInterfaces(); break;
        case 9: _t->showRunOnFile(); break;
        case 10: _t->showContextMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 11: _t->interfaceTreeSelectionChanged((*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 12: _t->on_interfaceTree_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 13: _t->on_interfaceTree_clicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 14: _t->updateStatistics(); break;
        case 15: _t->actionButton_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->triggeredIfTypeButton(); break;
        case 17: _t->on_warningLabel_linkActivated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
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
        if (QtMocHelpers::indexOfMethod<void (InterfaceFrame::*)(QString , bool )>(_a, &InterfaceFrame::showExtcapOptions, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InterfaceFrame::*)(QStringList )>(_a, &InterfaceFrame::startCapture, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InterfaceFrame::*)()>(_a, &InterfaceFrame::itemSelectionChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (InterfaceFrame::*)()>(_a, &InterfaceFrame::typeSelectionChanged, 3))
            return;
    }
}

const QMetaObject *InterfaceFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterfaceFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14InterfaceFrameE_t>.strings))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int InterfaceFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void InterfaceFrame::showExtcapOptions(QString _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void InterfaceFrame::startCapture(QStringList _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void InterfaceFrame::itemSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void InterfaceFrame::typeSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
