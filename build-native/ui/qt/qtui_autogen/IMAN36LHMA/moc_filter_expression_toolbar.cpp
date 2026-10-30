/****************************************************************************
** Meta object code from reading C++ file 'filter_expression_toolbar.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/widgets/filter_expression_toolbar.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filter_expression_toolbar.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23FilterExpressionToolBarE_t {};
} // unnamed namespace

template <> constexpr inline auto FilterExpressionToolBar::qt_create_metaobjectdata<qt_meta_tag_ZN23FilterExpressionToolBarE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FilterExpressionToolBar",
        "filterSelected",
        "",
        "filterPreferences",
        "filterEdit",
        "uatIndex",
        "filterExpressionsChanged",
        "onCustomMenuHandler",
        "QPoint",
        "pos",
        "onActionMoved",
        "QAction*",
        "action",
        "oldPos",
        "newPos",
        "onFilterDropped",
        "description",
        "filter",
        "removeFilter",
        "disableFilter",
        "editFilter",
        "filterClicked",
        "toolBarShowPreferences",
        "closeMenu"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'filterSelected'
        QtMocHelpers::SignalData<void(QString, bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 }, { QMetaType::Bool, 2 },
        }}),
        // Signal 'filterPreferences'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'filterEdit'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'filterExpressionsChanged'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCustomMenuHandler'
        QtMocHelpers::SlotData<void(const QPoint &)>(7, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'onActionMoved'
        QtMocHelpers::SlotData<void(QAction *, int, int)>(10, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 11, 12 }, { QMetaType::Int, 13 }, { QMetaType::Int, 14 },
        }}),
        // Slot 'onFilterDropped'
        QtMocHelpers::SlotData<void(QString, QString)>(15, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 16 }, { QMetaType::QString, 17 },
        }}),
        // Slot 'removeFilter'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'disableFilter'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editFilter'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'filterClicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toolBarShowPreferences'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'closeMenu'
        QtMocHelpers::SlotData<void(QAction *)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FilterExpressionToolBar, qt_meta_tag_ZN23FilterExpressionToolBarE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FilterExpressionToolBar::staticMetaObject = { {
    QMetaObject::SuperData::link<DragDropToolBar::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23FilterExpressionToolBarE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23FilterExpressionToolBarE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23FilterExpressionToolBarE_t>.metaTypes,
    nullptr
} };

void FilterExpressionToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FilterExpressionToolBar *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->filterSelected((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->filterPreferences(); break;
        case 2: _t->filterEdit((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->filterExpressionsChanged(); break;
        case 4: _t->onCustomMenuHandler((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 5: _t->onActionMoved((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 6: _t->onFilterDropped((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->removeFilter(); break;
        case 8: _t->disableFilter(); break;
        case 9: _t->editFilter(); break;
        case 10: _t->filterClicked(); break;
        case 11: _t->toolBarShowPreferences(); break;
        case 12: _t->closeMenu((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FilterExpressionToolBar::*)(QString , bool )>(_a, &FilterExpressionToolBar::filterSelected, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FilterExpressionToolBar::*)()>(_a, &FilterExpressionToolBar::filterPreferences, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (FilterExpressionToolBar::*)(int )>(_a, &FilterExpressionToolBar::filterEdit, 2))
            return;
    }
}

const QMetaObject *FilterExpressionToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilterExpressionToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23FilterExpressionToolBarE_t>.strings))
        return static_cast<void*>(this);
    return DragDropToolBar::qt_metacast(_clname);
}

int FilterExpressionToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DragDropToolBar::qt_metacall(_c, _id, _a);
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
void FilterExpressionToolBar::filterSelected(QString _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void FilterExpressionToolBar::filterPreferences()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FilterExpressionToolBar::filterEdit(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
