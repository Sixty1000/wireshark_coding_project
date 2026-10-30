/****************************************************************************
** Meta object code from reading C++ file 'font_color_preferences_frame.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/font_color_preferences_frame.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'font_color_preferences_frame.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN25FontColorPreferencesFrameE_t {};
} // unnamed namespace

template <> constexpr inline auto FontColorPreferencesFrame::qt_create_metaobjectdata<qt_meta_tag_ZN25FontColorPreferencesFrameE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FontColorPreferencesFrame",
        "colorChanged",
        "",
        "pref_t*",
        "pref",
        "QColor",
        "cc",
        "on_fontPushButton_clicked",
        "on_activeFGPushButton_clicked",
        "on_activeBGPushButton_clicked",
        "on_activeStyleComboBox_currentIndexChanged",
        "index",
        "on_inactiveFGPushButton_clicked",
        "on_inactiveBGPushButton_clicked",
        "on_inactiveStyleComboBox_currentIndexChanged",
        "on_markedFGPushButton_clicked",
        "on_markedBGPushButton_clicked",
        "on_ignoredFGPushButton_clicked",
        "on_ignoredBGPushButton_clicked",
        "on_clientFGPushButton_clicked",
        "on_clientBGPushButton_clicked",
        "on_serverFGPushButton_clicked",
        "on_serverBGPushButton_clicked",
        "on_validFilterBGPushButton_clicked",
        "on_invalidFilterBGPushButton_clicked",
        "on_deprecatedFilterBGPushButton_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'colorChanged'
        QtMocHelpers::SlotData<void(pref_t *, const QColor &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'on_fontPushButton_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_activeFGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_activeBGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_activeStyleComboBox_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
        // Slot 'on_inactiveFGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_inactiveBGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_inactiveStyleComboBox_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
        // Slot 'on_markedFGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_markedBGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_ignoredFGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_ignoredBGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_clientFGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_clientBGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_serverFGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_serverBGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_validFilterBGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_invalidFilterBGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_deprecatedFilterBGPushButton_clicked'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FontColorPreferencesFrame, qt_meta_tag_ZN25FontColorPreferencesFrameE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FontColorPreferencesFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25FontColorPreferencesFrameE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25FontColorPreferencesFrameE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25FontColorPreferencesFrameE_t>.metaTypes,
    nullptr
} };

void FontColorPreferencesFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FontColorPreferencesFrame *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast<std::add_pointer_t<pref_t*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QColor>>(_a[2]))); break;
        case 1: _t->on_fontPushButton_clicked(); break;
        case 2: _t->on_activeFGPushButton_clicked(); break;
        case 3: _t->on_activeBGPushButton_clicked(); break;
        case 4: _t->on_activeStyleComboBox_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_inactiveFGPushButton_clicked(); break;
        case 6: _t->on_inactiveBGPushButton_clicked(); break;
        case 7: _t->on_inactiveStyleComboBox_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_markedFGPushButton_clicked(); break;
        case 9: _t->on_markedBGPushButton_clicked(); break;
        case 10: _t->on_ignoredFGPushButton_clicked(); break;
        case 11: _t->on_ignoredBGPushButton_clicked(); break;
        case 12: _t->on_clientFGPushButton_clicked(); break;
        case 13: _t->on_clientBGPushButton_clicked(); break;
        case 14: _t->on_serverFGPushButton_clicked(); break;
        case 15: _t->on_serverBGPushButton_clicked(); break;
        case 16: _t->on_validFilterBGPushButton_clicked(); break;
        case 17: _t->on_invalidFilterBGPushButton_clicked(); break;
        case 18: _t->on_deprecatedFilterBGPushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *FontColorPreferencesFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FontColorPreferencesFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25FontColorPreferencesFrameE_t>.strings))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int FontColorPreferencesFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
