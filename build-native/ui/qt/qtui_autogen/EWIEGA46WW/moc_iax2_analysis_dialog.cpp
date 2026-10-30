/****************************************************************************
** Meta object code from reading C++ file 'iax2_analysis_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/iax2_analysis_dialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iax2_analysis_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18Iax2AnalysisDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto Iax2AnalysisDialog::qt_create_metaobjectdata<qt_meta_tag_ZN18Iax2AnalysisDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Iax2AnalysisDialog",
        "goToPacket",
        "",
        "packet_num",
        "updateWidgets",
        "on_actionGoToPacket_triggered",
        "on_actionNextProblem_triggered",
        "on_fJitterCheckBox_toggled",
        "checked",
        "on_fDiffCheckBox_toggled",
        "on_rJitterCheckBox_toggled",
        "on_rDiffCheckBox_toggled",
        "on_actionSaveAudio_triggered",
        "on_actionSaveForwardAudio_triggered",
        "on_actionSaveReverseAudio_triggered",
        "on_actionSaveCsv_triggered",
        "on_actionSaveForwardCsv_triggered",
        "on_actionSaveReverseCsv_triggered",
        "on_actionSaveGraph_triggered",
        "on_buttonBox_helpRequested",
        "showStreamMenu",
        "QPoint",
        "pos",
        "showGraphMenu",
        "graphClicked",
        "QMouseEvent*",
        "event"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'goToPacket'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'updateWidgets'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_actionGoToPacket_triggered'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNextProblem_triggered'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_fJitterCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Slot 'on_fDiffCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Slot 'on_rJitterCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Slot 'on_rDiffCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Slot 'on_actionSaveAudio_triggered'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveForwardAudio_triggered'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveReverseAudio_triggered'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveCsv_triggered'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveForwardCsv_triggered'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveReverseCsv_triggered'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveGraph_triggered'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_helpRequested'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showStreamMenu'
        QtMocHelpers::SlotData<void(QPoint)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Slot 'showGraphMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Slot 'graphClicked'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Iax2AnalysisDialog, qt_meta_tag_ZN18Iax2AnalysisDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Iax2AnalysisDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<WiresharkDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18Iax2AnalysisDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18Iax2AnalysisDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18Iax2AnalysisDialogE_t>.metaTypes,
    nullptr
} };

void Iax2AnalysisDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Iax2AnalysisDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->goToPacket((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->updateWidgets(); break;
        case 2: _t->on_actionGoToPacket_triggered(); break;
        case 3: _t->on_actionNextProblem_triggered(); break;
        case 4: _t->on_fJitterCheckBox_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->on_fDiffCheckBox_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->on_rJitterCheckBox_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->on_rDiffCheckBox_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_actionSaveAudio_triggered(); break;
        case 9: _t->on_actionSaveForwardAudio_triggered(); break;
        case 10: _t->on_actionSaveReverseAudio_triggered(); break;
        case 11: _t->on_actionSaveCsv_triggered(); break;
        case 12: _t->on_actionSaveForwardCsv_triggered(); break;
        case 13: _t->on_actionSaveReverseCsv_triggered(); break;
        case 14: _t->on_actionSaveGraph_triggered(); break;
        case 15: _t->on_buttonBox_helpRequested(); break;
        case 16: _t->showStreamMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 17: _t->showGraphMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 18: _t->graphClicked((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Iax2AnalysisDialog::*)(int )>(_a, &Iax2AnalysisDialog::goToPacket, 0))
            return;
    }
}

const QMetaObject *Iax2AnalysisDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Iax2AnalysisDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18Iax2AnalysisDialogE_t>.strings))
        return static_cast<void*>(this);
    return WiresharkDialog::qt_metacast(_clname);
}

int Iax2AnalysisDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Iax2AnalysisDialog::goToPacket(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
