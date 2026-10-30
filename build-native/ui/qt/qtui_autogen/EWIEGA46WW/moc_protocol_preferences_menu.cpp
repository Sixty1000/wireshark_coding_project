/****************************************************************************
** Meta object code from reading C++ file 'protocol_preferences_menu.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/protocol_preferences_menu.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'protocol_preferences_menu.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23ProtocolPreferencesMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto ProtocolPreferencesMenu::qt_create_metaobjectdata<qt_meta_tag_ZN23ProtocolPreferencesMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ProtocolPreferencesMenu",
        "showProtocolPreferences",
        "",
        "module_name",
        "editProtocolPreference",
        "preference*",
        "pref",
        "pref_module*",
        "module",
        "disableProtocolTriggered",
        "modulePreferencesTriggered",
        "editorPreferenceTriggered",
        "boolPreferenceTriggered",
        "enumPreferenceTriggered",
        "uatPreferenceTriggered",
        "enumCustomTCPOverridePreferenceTriggered"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showProtocolPreferences'
        QtMocHelpers::SignalData<void(const QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'editProtocolPreference'
        QtMocHelpers::SignalData<void(preference *, pref_module *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Slot 'disableProtocolTriggered'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'modulePreferencesTriggered'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editorPreferenceTriggered'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'boolPreferenceTriggered'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enumPreferenceTriggered'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'uatPreferenceTriggered'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enumCustomTCPOverridePreferenceTriggered'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ProtocolPreferencesMenu, qt_meta_tag_ZN23ProtocolPreferencesMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ProtocolPreferencesMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23ProtocolPreferencesMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23ProtocolPreferencesMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23ProtocolPreferencesMenuE_t>.metaTypes,
    nullptr
} };

void ProtocolPreferencesMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ProtocolPreferencesMenu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showProtocolPreferences((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->editProtocolPreference((*reinterpret_cast<std::add_pointer_t<preference*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<pref_module*>>(_a[2]))); break;
        case 2: _t->disableProtocolTriggered(); break;
        case 3: _t->modulePreferencesTriggered(); break;
        case 4: _t->editorPreferenceTriggered(); break;
        case 5: _t->boolPreferenceTriggered(); break;
        case 6: _t->enumPreferenceTriggered(); break;
        case 7: _t->uatPreferenceTriggered(); break;
        case 8: _t->enumCustomTCPOverridePreferenceTriggered(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ProtocolPreferencesMenu::*)(const QString )>(_a, &ProtocolPreferencesMenu::showProtocolPreferences, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProtocolPreferencesMenu::*)(preference * , pref_module * )>(_a, &ProtocolPreferencesMenu::editProtocolPreference, 1))
            return;
    }
}

const QMetaObject *ProtocolPreferencesMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProtocolPreferencesMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23ProtocolPreferencesMenuE_t>.strings))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int ProtocolPreferencesMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
void ProtocolPreferencesMenu::showProtocolPreferences(const QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void ProtocolPreferencesMenu::editProtocolPreference(preference * _t1, pref_module * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
QT_WARNING_POP
