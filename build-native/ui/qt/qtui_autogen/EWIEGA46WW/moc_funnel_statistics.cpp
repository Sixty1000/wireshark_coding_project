/****************************************************************************
** Meta object code from reading C++ file 'funnel_statistics.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/funnel_statistics.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'funnel_statistics.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16FunnelStatisticsE_t {};
} // unnamed namespace

template <> constexpr inline auto FunnelStatistics::qt_create_metaobjectdata<qt_meta_tag_ZN16FunnelStatisticsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FunnelStatistics",
        "openCaptureFile",
        "",
        "cf_path",
        "filter",
        "setDisplayFilter",
        "FilterAction::Action",
        "action",
        "FilterAction::ActionType",
        "filterType",
        "funnelActionTriggered",
        "displayFilterTextChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'openCaptureFile'
        QtMocHelpers::SignalData<void(QString, QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::QString, 4 },
        }}),
        // Signal 'setDisplayFilter'
        QtMocHelpers::SignalData<void(QString, FilterAction::Action, FilterAction::ActionType)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'funnelActionTriggered'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'displayFilterTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FunnelStatistics, qt_meta_tag_ZN16FunnelStatisticsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FunnelStatistics::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16FunnelStatisticsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16FunnelStatisticsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16FunnelStatisticsE_t>.metaTypes,
    nullptr
} };

void FunnelStatistics::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FunnelStatistics *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->openCaptureFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->setDisplayFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<FilterAction::Action>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<FilterAction::ActionType>>(_a[3]))); break;
        case 2: _t->funnelActionTriggered(); break;
        case 3: _t->displayFilterTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FunnelStatistics::*)(QString , QString )>(_a, &FunnelStatistics::openCaptureFile, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FunnelStatistics::*)(QString , FilterAction::Action , FilterAction::ActionType )>(_a, &FunnelStatistics::setDisplayFilter, 1))
            return;
    }
}

const QMetaObject *FunnelStatistics::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FunnelStatistics::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16FunnelStatisticsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FunnelStatistics::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void FunnelStatistics::openCaptureFile(QString _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void FunnelStatistics::setDisplayFilter(QString _t1, FilterAction::Action _t2, FilterAction::ActionType _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}
namespace {
struct qt_meta_tag_ZN12FunnelActionE_t {};
} // unnamed namespace

template <> constexpr inline auto FunnelAction::qt_create_metaobjectdata<qt_meta_tag_ZN12FunnelActionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FunnelAction",
        "triggerPacketCallback",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'triggerPacketCallback'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FunnelAction, qt_meta_tag_ZN12FunnelActionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FunnelAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12FunnelActionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12FunnelActionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12FunnelActionE_t>.metaTypes,
    nullptr
} };

void FunnelAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FunnelAction *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->triggerPacketCallback(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *FunnelAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FunnelAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12FunnelActionE_t>.strings))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int FunnelAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN19FunnelConsoleActionE_t {};
} // unnamed namespace

template <> constexpr inline auto FunnelConsoleAction::qt_create_metaobjectdata<qt_meta_tag_ZN19FunnelConsoleActionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FunnelConsoleAction"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FunnelConsoleAction, qt_meta_tag_ZN19FunnelConsoleActionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FunnelConsoleAction::staticMetaObject = { {
    QMetaObject::SuperData::link<FunnelAction::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19FunnelConsoleActionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19FunnelConsoleActionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19FunnelConsoleActionE_t>.metaTypes,
    nullptr
} };

void FunnelConsoleAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FunnelConsoleAction *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *FunnelConsoleAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FunnelConsoleAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19FunnelConsoleActionE_t>.strings))
        return static_cast<void*>(this);
    return FunnelAction::qt_metacast(_clname);
}

int FunnelConsoleAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FunnelAction::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
