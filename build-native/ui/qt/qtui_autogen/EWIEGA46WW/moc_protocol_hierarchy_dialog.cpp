/****************************************************************************
** Meta object code from reading C++ file 'protocol_hierarchy_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/protocol_hierarchy_dialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'protocol_hierarchy_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23ProtocolHierarchyDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto ProtocolHierarchyDialog::qt_create_metaobjectdata<qt_meta_tag_ZN23ProtocolHierarchyDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ProtocolHierarchyDialog",
        "filterAction",
        "",
        "filter",
        "FilterAction::Action",
        "action",
        "FilterAction::ActionType",
        "type",
        "showProtoHierMenu",
        "QPoint",
        "pos",
        "filterActionTriggered",
        "on_actionCopyAsCsv_triggered",
        "on_actionCopyAsYaml_triggered",
        "on_actionCopyProtoList_triggered",
        "on_actionDisableProtos_triggered",
        "on_actionRevertProtos_triggered",
        "on_buttonBox_helpRequested"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'filterAction'
        QtMocHelpers::SignalData<void(QString, FilterAction::Action, FilterAction::ActionType)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'showProtoHierMenu'
        QtMocHelpers::SlotData<void(QPoint)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'filterActionTriggered'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopyAsCsv_triggered'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopyAsYaml_triggered'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopyProtoList_triggered'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDisableProtos_triggered'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRevertProtos_triggered'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_helpRequested'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ProtocolHierarchyDialog, qt_meta_tag_ZN23ProtocolHierarchyDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ProtocolHierarchyDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<WiresharkDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23ProtocolHierarchyDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23ProtocolHierarchyDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23ProtocolHierarchyDialogE_t>.metaTypes,
    nullptr
} };

void ProtocolHierarchyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ProtocolHierarchyDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->filterAction((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<FilterAction::Action>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<FilterAction::ActionType>>(_a[3]))); break;
        case 1: _t->showProtoHierMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 2: _t->filterActionTriggered(); break;
        case 3: _t->on_actionCopyAsCsv_triggered(); break;
        case 4: _t->on_actionCopyAsYaml_triggered(); break;
        case 5: _t->on_actionCopyProtoList_triggered(); break;
        case 6: _t->on_actionDisableProtos_triggered(); break;
        case 7: _t->on_actionRevertProtos_triggered(); break;
        case 8: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ProtocolHierarchyDialog::*)(QString , FilterAction::Action , FilterAction::ActionType )>(_a, &ProtocolHierarchyDialog::filterAction, 0))
            return;
    }
}

const QMetaObject *ProtocolHierarchyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProtocolHierarchyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23ProtocolHierarchyDialogE_t>.strings))
        return static_cast<void*>(this);
    return WiresharkDialog::qt_metacast(_clname);
}

int ProtocolHierarchyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ProtocolHierarchyDialog::filterAction(QString _t1, FilterAction::Action _t2, FilterAction::ActionType _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
