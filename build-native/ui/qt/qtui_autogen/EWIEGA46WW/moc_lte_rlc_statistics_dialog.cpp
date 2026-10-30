/****************************************************************************
** Meta object code from reading C++ file 'lte_rlc_statistics_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/lte_rlc_statistics_dialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lte_rlc_statistics_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22LteRlcStatisticsDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto LteRlcStatisticsDialog::qt_create_metaobjectdata<qt_meta_tag_ZN22LteRlcStatisticsDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "LteRlcStatisticsDialog",
        "launchRLCGraph",
        "",
        "channelKnown",
        "uint8_t",
        "version",
        "uint16_t",
        "ueid",
        "rlcMode",
        "channelType",
        "channelId",
        "direction",
        "fillTree",
        "updateItemSelectionChanged",
        "useRLCFramesFromMacCheckBoxToggled",
        "state",
        "launchULGraphButtonClicked",
        "launchDLGraphButtonClicked",
        "filterUpdated",
        "filter"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'launchRLCGraph'
        QtMocHelpers::SignalData<void(bool, uint8_t, uint16_t, uint8_t, uint16_t, uint16_t, uint8_t)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 }, { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 }, { 0x80000000 | 4, 8 },
            { 0x80000000 | 6, 9 }, { 0x80000000 | 6, 10 }, { 0x80000000 | 4, 11 },
        }}),
        // Slot 'fillTree'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateItemSelectionChanged'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'useRLCFramesFromMacCheckBoxToggled'
        QtMocHelpers::SlotData<void(bool)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'launchULGraphButtonClicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'launchDLGraphButtonClicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'filterUpdated'
        QtMocHelpers::SlotData<void(QString)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 19 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LteRlcStatisticsDialog, qt_meta_tag_ZN22LteRlcStatisticsDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject LteRlcStatisticsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<TapParameterDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22LteRlcStatisticsDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22LteRlcStatisticsDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22LteRlcStatisticsDialogE_t>.metaTypes,
    nullptr
} };

void LteRlcStatisticsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LteRlcStatisticsDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->launchRLCGraph((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint8_t>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<uint16_t>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<uint8_t>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<uint16_t>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<uint16_t>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<uint8_t>>(_a[7]))); break;
        case 1: _t->fillTree(); break;
        case 2: _t->updateItemSelectionChanged(); break;
        case 3: _t->useRLCFramesFromMacCheckBoxToggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->launchULGraphButtonClicked(); break;
        case 5: _t->launchDLGraphButtonClicked(); break;
        case 6: _t->filterUpdated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (LteRlcStatisticsDialog::*)(bool , uint8_t , uint16_t , uint8_t , uint16_t , uint16_t , uint8_t )>(_a, &LteRlcStatisticsDialog::launchRLCGraph, 0))
            return;
    }
}

const QMetaObject *LteRlcStatisticsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LteRlcStatisticsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22LteRlcStatisticsDialogE_t>.strings))
        return static_cast<void*>(this);
    return TapParameterDialog::qt_metacast(_clname);
}

int LteRlcStatisticsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TapParameterDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LteRlcStatisticsDialog::launchRLCGraph(bool _t1, uint8_t _t2, uint16_t _t3, uint8_t _t4, uint16_t _t5, uint16_t _t6, uint8_t _t7)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7);
}
QT_WARNING_POP
