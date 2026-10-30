/****************************************************************************
** Meta object code from reading C++ file 'main_application.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/main_application.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_application.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15MainApplicationE_t {};
} // unnamed namespace

template <> constexpr inline auto MainApplication::qt_create_metaobjectdata<qt_meta_tag_ZN15MainApplicationE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainApplication",
        "appInitialized",
        "",
        "localInterfaceEvent",
        "const char*",
        "ifname",
        "added",
        "up",
        "scanLocalInterfaces",
        "GList*",
        "filter_list",
        "localInterfaceListChanged",
        "openCaptureFile",
        "cf_path",
        "display_filter",
        "type",
        "openCaptureOptions",
        "recentPreferencesRead",
        "updateRecentCaptureStatus",
        "filename",
        "size",
        "accessible",
        "splashUpdate",
        "register_action_e",
        "action",
        "message",
        "profileChanging",
        "profileNameChanged",
        "profile_name",
        "freezePacketList",
        "changing_profile",
        "columnsChanged",
        "captureFilterListChanged",
        "displayFilterListChanged",
        "filterExpressionsChanged",
        "packetDissectionChanged",
        "colorsChanged",
        "preferencesChanged",
        "addressResolutionChanged",
        "columnDataChanged",
        "checkDisplayFilter",
        "fieldsChanged",
        "reloadLuaPlugins",
        "openStatCommandDialog",
        "menu_path",
        "arg",
        "userdata",
        "openTapParameterDialog",
        "cfg_str",
        "captureActive",
        "zoomRegularFont",
        "QFont",
        "font",
        "zoomMonospaceFont",
        "clearRecentCaptures",
        "refreshRecentCaptures",
        "captureEventHandler",
        "CaptureEvent",
        "flushAppSignals",
        "reloadDisplayFilterMacros",
        "updateTaps",
        "cleanup",
        "ifChangeEventsAvailable",
        "itemStatusFinished",
        "refreshPacketData"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'appInitialized'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'localInterfaceEvent'
        QtMocHelpers::SignalData<void(const char *, int, int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::Int, 6 }, { QMetaType::Int, 7 },
        }}),
        // Signal 'scanLocalInterfaces'
        QtMocHelpers::SignalData<void(GList *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'scanLocalInterfaces'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Signal 'localInterfaceListChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openCaptureFile'
        QtMocHelpers::SignalData<void(QString, QString, unsigned int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 }, { QMetaType::QString, 14 }, { QMetaType::UInt, 15 },
        }}),
        // Signal 'openCaptureOptions'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'recentPreferencesRead'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'updateRecentCaptureStatus'
        QtMocHelpers::SignalData<void(const QString &, qint64, bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 19 }, { QMetaType::LongLong, 20 }, { QMetaType::Bool, 21 },
        }}),
        // Signal 'splashUpdate'
        QtMocHelpers::SignalData<void(register_action_e, const char *)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 23, 24 }, { 0x80000000 | 4, 25 },
        }}),
        // Signal 'profileChanging'
        QtMocHelpers::SignalData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'profileNameChanged'
        QtMocHelpers::SignalData<void(const char *)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 28 },
        }}),
        // Signal 'freezePacketList'
        QtMocHelpers::SignalData<void(bool)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 30 },
        }}),
        // Signal 'columnsChanged'
        QtMocHelpers::SignalData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'captureFilterListChanged'
        QtMocHelpers::SignalData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'displayFilterListChanged'
        QtMocHelpers::SignalData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'filterExpressionsChanged'
        QtMocHelpers::SignalData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'packetDissectionChanged'
        QtMocHelpers::SignalData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'colorsChanged'
        QtMocHelpers::SignalData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'preferencesChanged'
        QtMocHelpers::SignalData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'addressResolutionChanged'
        QtMocHelpers::SignalData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'columnDataChanged'
        QtMocHelpers::SignalData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'checkDisplayFilter'
        QtMocHelpers::SignalData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fieldsChanged'
        QtMocHelpers::SignalData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'reloadLuaPlugins'
        QtMocHelpers::SignalData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openStatCommandDialog'
        QtMocHelpers::SignalData<void(const QString &, const char *, void *)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 44 }, { 0x80000000 | 4, 45 }, { QMetaType::VoidStar, 46 },
        }}),
        // Signal 'openTapParameterDialog'
        QtMocHelpers::SignalData<void(const QString, const QString, void *)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 48 }, { QMetaType::QString, 45 }, { QMetaType::VoidStar, 46 },
        }}),
        // Signal 'captureActive'
        QtMocHelpers::SignalData<void(int)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'zoomRegularFont'
        QtMocHelpers::SignalData<void(const QFont &)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 51, 52 },
        }}),
        // Signal 'zoomMonospaceFont'
        QtMocHelpers::SignalData<void(const QFont &)>(53, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 51, 52 },
        }}),
        // Slot 'clearRecentCaptures'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'refreshRecentCaptures'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'captureEventHandler'
        QtMocHelpers::SlotData<void(CaptureEvent)>(56, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 57, 2 },
        }}),
        // Slot 'flushAppSignals'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reloadDisplayFilterMacros'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateTaps'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'cleanup'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ifChangeEventsAvailable'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'itemStatusFinished'
        QtMocHelpers::SlotData<void(const QString, qint64, bool)>(63, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 19 }, { QMetaType::LongLong, 20 }, { QMetaType::Bool, 21 },
        }}),
        // Slot 'itemStatusFinished'
        QtMocHelpers::SlotData<void(const QString, qint64)>(63, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 19 }, { QMetaType::LongLong, 20 },
        }}),
        // Slot 'itemStatusFinished'
        QtMocHelpers::SlotData<void(const QString)>(63, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 19 },
        }}),
        // Slot 'itemStatusFinished'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'refreshPacketData'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainApplication, qt_meta_tag_ZN15MainApplicationE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<QApplication::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MainApplicationE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MainApplicationE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15MainApplicationE_t>.metaTypes,
    nullptr
} };

void MainApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainApplication *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->appInitialized(); break;
        case 1: _t->localInterfaceEvent((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->scanLocalInterfaces((*reinterpret_cast<std::add_pointer_t<GList*>>(_a[1]))); break;
        case 3: _t->scanLocalInterfaces(); break;
        case 4: _t->localInterfaceListChanged(); break;
        case 5: _t->openCaptureFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[3]))); break;
        case 6: _t->openCaptureOptions(); break;
        case 7: _t->recentPreferencesRead(); break;
        case 8: _t->updateRecentCaptureStatus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 9: _t->splashUpdate((*reinterpret_cast<std::add_pointer_t<register_action_e>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<const char*>>(_a[2]))); break;
        case 10: _t->profileChanging(); break;
        case 11: _t->profileNameChanged((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1]))); break;
        case 12: _t->freezePacketList((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->columnsChanged(); break;
        case 14: _t->captureFilterListChanged(); break;
        case 15: _t->displayFilterListChanged(); break;
        case 16: _t->filterExpressionsChanged(); break;
        case 17: _t->packetDissectionChanged(); break;
        case 18: _t->colorsChanged(); break;
        case 19: _t->preferencesChanged(); break;
        case 20: _t->addressResolutionChanged(); break;
        case 21: _t->columnDataChanged(); break;
        case 22: _t->checkDisplayFilter(); break;
        case 23: _t->fieldsChanged(); break;
        case 24: _t->reloadLuaPlugins(); break;
        case 25: _t->openStatCommandDialog((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<const char*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<void*>>(_a[3]))); break;
        case 26: _t->openTapParameterDialog((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<void*>>(_a[3]))); break;
        case 27: _t->captureActive((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 28: _t->zoomRegularFont((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1]))); break;
        case 29: _t->zoomMonospaceFont((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1]))); break;
        case 30: _t->clearRecentCaptures(); break;
        case 31: _t->refreshRecentCaptures(); break;
        case 32: _t->captureEventHandler((*reinterpret_cast<std::add_pointer_t<CaptureEvent>>(_a[1]))); break;
        case 33: _t->flushAppSignals(); break;
        case 34: _t->reloadDisplayFilterMacros(); break;
        case 35: _t->updateTaps(); break;
        case 36: _t->cleanup(); break;
        case 37: _t->ifChangeEventsAvailable(); break;
        case 38: _t->itemStatusFinished((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 39: _t->itemStatusFinished((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[2]))); break;
        case 40: _t->itemStatusFinished((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 41: _t->itemStatusFinished(); break;
        case 42: _t->refreshPacketData(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::appInitialized, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)(const char * , int , int )>(_a, &MainApplication::localInterfaceEvent, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)(GList * )>(_a, &MainApplication::scanLocalInterfaces, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::localInterfaceListChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)(QString , QString , unsigned int )>(_a, &MainApplication::openCaptureFile, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::openCaptureOptions, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::recentPreferencesRead, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)(const QString & , qint64 , bool )>(_a, &MainApplication::updateRecentCaptureStatus, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)(register_action_e , const char * )>(_a, &MainApplication::splashUpdate, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::profileChanging, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)(const char * )>(_a, &MainApplication::profileNameChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)(bool )>(_a, &MainApplication::freezePacketList, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::columnsChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::captureFilterListChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::displayFilterListChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::filterExpressionsChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::packetDissectionChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::colorsChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::preferencesChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::addressResolutionChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::columnDataChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::checkDisplayFilter, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::fieldsChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)()>(_a, &MainApplication::reloadLuaPlugins, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)(const QString & , const char * , void * )>(_a, &MainApplication::openStatCommandDialog, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)(const QString , const QString , void * )>(_a, &MainApplication::openTapParameterDialog, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)(int )>(_a, &MainApplication::captureActive, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)(const QFont & )>(_a, &MainApplication::zoomRegularFont, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainApplication::*)(const QFont & )>(_a, &MainApplication::zoomMonospaceFont, 29))
            return;
    }
}

const QMetaObject *MainApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MainApplicationE_t>.strings))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int MainApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 43;
    }
    return _id;
}

// SIGNAL 0
void MainApplication::appInitialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainApplication::localInterfaceEvent(const char * _t1, int _t2, int _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}

// SIGNAL 2
void MainApplication::scanLocalInterfaces(GList * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 4
void MainApplication::localInterfaceListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MainApplication::openCaptureFile(QString _t1, QString _t2, unsigned int _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2, _t3);
}

// SIGNAL 6
void MainApplication::openCaptureOptions()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MainApplication::recentPreferencesRead()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MainApplication::updateRecentCaptureStatus(const QString & _t1, qint64 _t2, bool _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1, _t2, _t3);
}

// SIGNAL 9
void MainApplication::splashUpdate(register_action_e _t1, const char * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1, _t2);
}

// SIGNAL 10
void MainApplication::profileChanging()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MainApplication::profileNameChanged(const char * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void MainApplication::freezePacketList(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void MainApplication::columnsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MainApplication::captureFilterListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MainApplication::displayFilterListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void MainApplication::filterExpressionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void MainApplication::packetDissectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void MainApplication::colorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void MainApplication::preferencesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void MainApplication::addressResolutionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void MainApplication::columnDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void MainApplication::checkDisplayFilter()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void MainApplication::fieldsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void MainApplication::reloadLuaPlugins()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void MainApplication::openStatCommandDialog(const QString & _t1, const char * _t2, void * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 25, nullptr, _t1, _t2, _t3);
}

// SIGNAL 26
void MainApplication::openTapParameterDialog(const QString _t1, const QString _t2, void * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 26, nullptr, _t1, _t2, _t3);
}

// SIGNAL 27
void MainApplication::captureActive(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 27, nullptr, _t1);
}

// SIGNAL 28
void MainApplication::zoomRegularFont(const QFont & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 28, nullptr, _t1);
}

// SIGNAL 29
void MainApplication::zoomMonospaceFont(const QFont & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 29, nullptr, _t1);
}
QT_WARNING_POP
