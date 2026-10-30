/****************************************************************************
** Meta object code from reading C++ file 'traffic_tree.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/widgets/traffic_tree.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'traffic_tree.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14MenuEditActionE_t {};
} // unnamed namespace

template <> constexpr inline auto MenuEditAction::qt_create_metaobjectdata<qt_meta_tag_ZN14MenuEditActionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MenuEditAction",
        "triggerEntry",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'triggerEntry'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MenuEditAction, qt_meta_tag_ZN14MenuEditActionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MenuEditAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidgetAction::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14MenuEditActionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14MenuEditActionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14MenuEditActionE_t>.metaTypes,
    nullptr
} };

void MenuEditAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MenuEditAction *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->triggerEntry(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *MenuEditAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuEditAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14MenuEditActionE_t>.strings))
        return static_cast<void*>(this);
    return QWidgetAction::qt_metacast(_clname);
}

int MenuEditAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidgetAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN21TrafficTreeHeaderViewE_t {};
} // unnamed namespace

template <> constexpr inline auto TrafficTreeHeaderView::qt_create_metaobjectdata<qt_meta_tag_ZN21TrafficTreeHeaderViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TrafficTreeHeaderView",
        "columnsHaveChanged",
        "",
        "QList<int>",
        "visible",
        "filterOnColumn",
        "column",
        "filterOn",
        "filterText",
        "headerContextMenu",
        "QPoint",
        "pos",
        "columnTriggered",
        "checked",
        "menuActionTriggered",
        "QAction*",
        "filterColumn"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'columnsHaveChanged'
        QtMocHelpers::SignalData<void(QList<int>)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'filterOnColumn'
        QtMocHelpers::SignalData<void(int, int, QString)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 }, { QMetaType::Int, 7 }, { QMetaType::QString, 8 },
        }}),
        // Slot 'headerContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Slot 'columnTriggered'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'columnTriggered'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'menuActionTriggered'
        QtMocHelpers::SlotData<void(QAction *)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Slot 'filterColumn'
        QtMocHelpers::SlotData<void(bool)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'filterColumn'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TrafficTreeHeaderView, qt_meta_tag_ZN21TrafficTreeHeaderViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TrafficTreeHeaderView::staticMetaObject = { {
    QMetaObject::SuperData::link<QHeaderView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21TrafficTreeHeaderViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21TrafficTreeHeaderViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21TrafficTreeHeaderViewE_t>.metaTypes,
    nullptr
} };

void TrafficTreeHeaderView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TrafficTreeHeaderView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->columnsHaveChanged((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 1: _t->filterOnColumn((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 2: _t->headerContextMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 3: _t->columnTriggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->columnTriggered(); break;
        case 5: _t->menuActionTriggered((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 6: _t->filterColumn((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->filterColumn(); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TrafficTreeHeaderView::*)(QList<int> )>(_a, &TrafficTreeHeaderView::columnsHaveChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TrafficTreeHeaderView::*)(int , int , QString )>(_a, &TrafficTreeHeaderView::filterOnColumn, 1))
            return;
    }
}

const QMetaObject *TrafficTreeHeaderView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrafficTreeHeaderView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21TrafficTreeHeaderViewE_t>.strings))
        return static_cast<void*>(this);
    return QHeaderView::qt_metacast(_clname);
}

int TrafficTreeHeaderView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHeaderView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void TrafficTreeHeaderView::columnsHaveChanged(QList<int> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void TrafficTreeHeaderView::filterOnColumn(int _t1, int _t2, QString _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}
namespace {
struct qt_meta_tag_ZN22TrafficDataFilterProxyE_t {};
} // unnamed namespace

template <> constexpr inline auto TrafficDataFilterProxy::qt_create_metaobjectdata<qt_meta_tag_ZN22TrafficDataFilterProxyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TrafficDataFilterProxy",
        "filterForColumn",
        "",
        "column",
        "filterOn",
        "filterText"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'filterForColumn'
        QtMocHelpers::SlotData<void(int, int, QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 }, { QMetaType::QString, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TrafficDataFilterProxy, qt_meta_tag_ZN22TrafficDataFilterProxyE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TrafficDataFilterProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22TrafficDataFilterProxyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22TrafficDataFilterProxyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22TrafficDataFilterProxyE_t>.metaTypes,
    nullptr
} };

void TrafficDataFilterProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TrafficDataFilterProxy *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->filterForColumn((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject *TrafficDataFilterProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrafficDataFilterProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22TrafficDataFilterProxyE_t>.strings))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int TrafficDataFilterProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN11TrafficTreeE_t {};
} // unnamed namespace

template <> constexpr inline auto TrafficTree::qt_create_metaobjectdata<qt_meta_tag_ZN11TrafficTreeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TrafficTree",
        "filterAction",
        "",
        "filter",
        "FilterAction::Action",
        "action",
        "FilterAction::ActionType",
        "type",
        "columnsHaveChanged",
        "QList<int>",
        "columns",
        "tapListenerEnabled",
        "enable",
        "disableTap",
        "columnsChanged",
        "customContextMenu",
        "QPoint",
        "pos",
        "useFilterAction",
        "clipboardAction",
        "resizeAction",
        "toggleSaveRawAction"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'filterAction'
        QtMocHelpers::SignalData<void(QString, FilterAction::Action, FilterAction::ActionType)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Signal 'columnsHaveChanged'
        QtMocHelpers::SignalData<void(QList<int>)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'tapListenerEnabled'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'disableTap'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'columnsChanged'
        QtMocHelpers::SlotData<void(QList<int>)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'customContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Slot 'useFilterAction'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clipboardAction'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'resizeAction'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleSaveRawAction'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TrafficTree, qt_meta_tag_ZN11TrafficTreeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TrafficTree::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11TrafficTreeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11TrafficTreeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11TrafficTreeE_t>.metaTypes,
    nullptr
} };

void TrafficTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TrafficTree *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->filterAction((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<FilterAction::Action>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<FilterAction::ActionType>>(_a[3]))); break;
        case 1: _t->columnsHaveChanged((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 2: _t->tapListenerEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->disableTap(); break;
        case 4: _t->columnsChanged((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 5: _t->customContextMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 6: _t->useFilterAction(); break;
        case 7: _t->clipboardAction(); break;
        case 8: _t->resizeAction(); break;
        case 9: _t->toggleSaveRawAction(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TrafficTree::*)(QString , FilterAction::Action , FilterAction::ActionType )>(_a, &TrafficTree::filterAction, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TrafficTree::*)(QList<int> )>(_a, &TrafficTree::columnsHaveChanged, 1))
            return;
    }
}

const QMetaObject *TrafficTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrafficTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11TrafficTreeE_t>.strings))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int TrafficTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void TrafficTree::filterAction(QString _t1, FilterAction::Action _t2, FilterAction::ActionType _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void TrafficTree::columnsHaveChanged(QList<int> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
