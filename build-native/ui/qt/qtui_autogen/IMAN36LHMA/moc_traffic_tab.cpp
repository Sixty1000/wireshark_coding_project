/****************************************************************************
** Meta object code from reading C++ file 'traffic_tab.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/widgets/traffic_tab.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'traffic_tab.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10TrafficTabE_t {};
} // unnamed namespace

template <> constexpr inline auto TrafficTab::qt_create_metaobjectdata<qt_meta_tag_ZN10TrafficTabE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TrafficTab",
        "filterAction",
        "",
        "filter",
        "FilterAction::Action",
        "action",
        "FilterAction::ActionType",
        "type",
        "tabDataChanged",
        "idx",
        "retapRequired",
        "disablingTaps",
        "tabsChanged",
        "QList<int>",
        "protocols",
        "columnsHaveChanged",
        "columns",
        "useAbsoluteTime",
        "absolute",
        "setOpenTabs",
        "detachTab",
        "QPoint",
        "pos",
        "attachTab",
        "QWidget*",
        "content",
        "name",
        "modelReset",
        "doCurrentIndexChange",
        "QModelIndex",
        "cur",
        "prev"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'filterAction'
        QtMocHelpers::SignalData<void(QString, FilterAction::Action, FilterAction::ActionType)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Signal 'tabDataChanged'
        QtMocHelpers::SignalData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Signal 'retapRequired'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'disablingTaps'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tabsChanged'
        QtMocHelpers::SignalData<void(QList<int>)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'columnsHaveChanged'
        QtMocHelpers::SignalData<void(QList<int>)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 16 },
        }}),
        // Slot 'useAbsoluteTime'
        QtMocHelpers::SlotData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'setOpenTabs'
        QtMocHelpers::SlotData<void(QList<int>)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Slot 'detachTab'
        QtMocHelpers::SlotData<void(int, QPoint)>(20, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 9 }, { 0x80000000 | 21, 22 },
        }}),
        // Slot 'attachTab'
        QtMocHelpers::SlotData<void(QWidget *, QString)>(23, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 24, 25 }, { QMetaType::QString, 26 },
        }}),
        // Slot 'modelReset'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'doCurrentIndexChange'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 29, 30 }, { 0x80000000 | 29, 31 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TrafficTab, qt_meta_tag_ZN10TrafficTabE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TrafficTab::staticMetaObject = { {
    QMetaObject::SuperData::link<DetachableTabWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10TrafficTabE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10TrafficTabE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10TrafficTabE_t>.metaTypes,
    nullptr
} };

void TrafficTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TrafficTab *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->filterAction((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<FilterAction::Action>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<FilterAction::ActionType>>(_a[3]))); break;
        case 1: _t->tabDataChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->retapRequired(); break;
        case 3: _t->disablingTaps(); break;
        case 4: _t->tabsChanged((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 5: _t->columnsHaveChanged((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 6: _t->useAbsoluteTime((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setOpenTabs((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 8: _t->detachTab((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 9: _t->attachTab((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->modelReset(); break;
        case 11: _t->doCurrentIndexChange((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TrafficTab::*)(QString , FilterAction::Action , FilterAction::ActionType )>(_a, &TrafficTab::filterAction, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TrafficTab::*)(int )>(_a, &TrafficTab::tabDataChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TrafficTab::*)()>(_a, &TrafficTab::retapRequired, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TrafficTab::*)()>(_a, &TrafficTab::disablingTaps, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TrafficTab::*)(QList<int> )>(_a, &TrafficTab::tabsChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TrafficTab::*)(QList<int> )>(_a, &TrafficTab::columnsHaveChanged, 5))
            return;
    }
}

const QMetaObject *TrafficTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrafficTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10TrafficTabE_t>.strings))
        return static_cast<void*>(this);
    return DetachableTabWidget::qt_metacast(_clname);
}

int TrafficTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DetachableTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void TrafficTab::filterAction(QString _t1, FilterAction::Action _t2, FilterAction::ActionType _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void TrafficTab::tabDataChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void TrafficTab::retapRequired()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TrafficTab::disablingTaps()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TrafficTab::tabsChanged(QList<int> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void TrafficTab::columnsHaveChanged(QList<int> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}
QT_WARNING_POP
