/****************************************************************************
** Meta object code from reading C++ file 'coloring_rules_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/coloring_rules_dialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coloring_rules_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19ColoringRulesDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto ColoringRulesDialog::qt_create_metaobjectdata<qt_meta_tag_ZN19ColoringRulesDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ColoringRulesDialog",
        "filterAction",
        "",
        "filter",
        "FilterAction::Action",
        "action",
        "FilterAction::ActionType",
        "type",
        "copyFromProfile",
        "fileName",
        "colorRuleSelectionChanged",
        "QItemSelection",
        "selected",
        "deselected",
        "colorChanged",
        "foreground",
        "QColor",
        "cc",
        "on_fGPushButton_clicked",
        "on_bGPushButton_clicked",
        "on_displayFilterPushButton_clicked",
        "on_newToolButton_clicked",
        "on_deleteToolButton_clicked",
        "on_copyToolButton_clicked",
        "on_clearToolButton_clicked",
        "on_buttonBox_clicked",
        "QAbstractButton*",
        "button",
        "on_buttonBox_accepted",
        "on_buttonBox_helpRequested",
        "rowCountChanged",
        "invalidField",
        "QModelIndex",
        "index",
        "errMessage",
        "validField",
        "treeItemClicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'filterAction'
        QtMocHelpers::SignalData<void(QString, FilterAction::Action, FilterAction::ActionType)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'copyFromProfile'
        QtMocHelpers::SlotData<void(QString)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'colorRuleSelectionChanged'
        QtMocHelpers::SlotData<void(const QItemSelection &, const QItemSelection &)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 }, { 0x80000000 | 11, 13 },
        }}),
        // Slot 'colorChanged'
        QtMocHelpers::SlotData<void(bool, const QColor &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 15 }, { 0x80000000 | 16, 17 },
        }}),
        // Slot 'on_fGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_bGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_displayFilterPushButton_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_newToolButton_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_deleteToolButton_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_copyToolButton_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_clearToolButton_clicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_clicked'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 26, 27 },
        }}),
        // Slot 'on_buttonBox_accepted'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_helpRequested'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'rowCountChanged'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'invalidField'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QString &)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 32, 33 }, { QMetaType::QString, 34 },
        }}),
        // Slot 'validField'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(35, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 32, 33 },
        }}),
        // Slot 'treeItemClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(36, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 32, 33 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ColoringRulesDialog, qt_meta_tag_ZN19ColoringRulesDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ColoringRulesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<GeometryStateDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ColoringRulesDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ColoringRulesDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19ColoringRulesDialogE_t>.metaTypes,
    nullptr
} };

void ColoringRulesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ColoringRulesDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->filterAction((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<FilterAction::Action>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<FilterAction::ActionType>>(_a[3]))); break;
        case 1: _t->copyFromProfile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->colorRuleSelectionChanged((*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 3: _t->colorChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QColor>>(_a[2]))); break;
        case 4: _t->on_fGPushButton_clicked(); break;
        case 5: _t->on_bGPushButton_clicked(); break;
        case 6: _t->on_displayFilterPushButton_clicked(); break;
        case 7: _t->on_newToolButton_clicked(); break;
        case 8: _t->on_deleteToolButton_clicked(); break;
        case 9: _t->on_copyToolButton_clicked(); break;
        case 10: _t->on_clearToolButton_clicked(); break;
        case 11: _t->on_buttonBox_clicked((*reinterpret_cast<std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 12: _t->on_buttonBox_accepted(); break;
        case 13: _t->on_buttonBox_helpRequested(); break;
        case 14: _t->rowCountChanged(); break;
        case 15: _t->invalidField((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 16: _t->validField((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 17: _t->treeItemClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ColoringRulesDialog::*)(QString , FilterAction::Action , FilterAction::ActionType )>(_a, &ColoringRulesDialog::filterAction, 0))
            return;
    }
}

const QMetaObject *ColoringRulesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColoringRulesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ColoringRulesDialogE_t>.strings))
        return static_cast<void*>(this);
    return GeometryStateDialog::qt_metacast(_clname);
}

int ColoringRulesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeometryStateDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void ColoringRulesDialog::filterAction(QString _t1, FilterAction::Action _t2, FilterAction::ActionType _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
