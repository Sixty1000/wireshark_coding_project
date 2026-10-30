/****************************************************************************
** Meta object code from reading C++ file 'rtp_analysis_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/rtp_analysis_dialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rtp_analysis_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17RtpAnalysisDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto RtpAnalysisDialog::qt_create_metaobjectdata<qt_meta_tag_ZN17RtpAnalysisDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "RtpAnalysisDialog",
        "goToPacket",
        "",
        "packet_num",
        "rtpPlayerDialogReplaceRtpStreams",
        "QList<rtpstream_id_t*>",
        "stream_ids",
        "rtpPlayerDialogAddRtpStreams",
        "rtpPlayerDialogRemoveRtpStreams",
        "updateFilter",
        "filter",
        "force",
        "rtpPlayerReplace",
        "rtpPlayerAdd",
        "rtpPlayerRemove",
        "updateWidgets",
        "on_actionGoToPacket_triggered",
        "on_actionNextProblem_triggered",
        "on_actionSaveOneCsv_triggered",
        "on_actionSaveAllCsv_triggered",
        "on_actionSaveGraph_triggered",
        "on_buttonBox_helpRequested",
        "showStreamMenu",
        "QPoint",
        "pos",
        "showGraphMenu",
        "graphClicked",
        "QMouseEvent*",
        "event",
        "closeTab",
        "index",
        "rowCheckboxChanged",
        "checked",
        "singleCheckboxChanged",
        "on_actionPrepareFilterOne_triggered",
        "on_actionPrepareFilterAll_triggered"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'goToPacket'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'rtpPlayerDialogReplaceRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'rtpPlayerDialogAddRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'rtpPlayerDialogRemoveRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'updateFilter'
        QtMocHelpers::SignalData<void(QString, bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 }, { QMetaType::Bool, 11 },
        }}),
        // Signal 'updateFilter'
        QtMocHelpers::SignalData<void(QString)>(9, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'rtpPlayerReplace'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rtpPlayerAdd'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rtpPlayerRemove'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateWidgets'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_actionGoToPacket_triggered'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNextProblem_triggered'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveOneCsv_triggered'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveAllCsv_triggered'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveGraph_triggered'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_helpRequested'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showStreamMenu'
        QtMocHelpers::SlotData<void(QPoint)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 23, 24 },
        }}),
        // Slot 'showGraphMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 23, 24 },
        }}),
        // Slot 'graphClicked'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Slot 'closeTab'
        QtMocHelpers::SlotData<void(int)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 30 },
        }}),
        // Slot 'rowCheckboxChanged'
        QtMocHelpers::SlotData<void(int)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 32 },
        }}),
        // Slot 'singleCheckboxChanged'
        QtMocHelpers::SlotData<void(int)>(33, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 32 },
        }}),
        // Slot 'on_actionPrepareFilterOne_triggered'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPrepareFilterAll_triggered'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RtpAnalysisDialog, qt_meta_tag_ZN17RtpAnalysisDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject RtpAnalysisDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<WiresharkDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17RtpAnalysisDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17RtpAnalysisDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17RtpAnalysisDialogE_t>.metaTypes,
    nullptr
} };

void RtpAnalysisDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RtpAnalysisDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->goToPacket((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->rtpPlayerDialogReplaceRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 2: _t->rtpPlayerDialogAddRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 3: _t->rtpPlayerDialogRemoveRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 4: _t->updateFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 5: _t->updateFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->rtpPlayerReplace(); break;
        case 7: _t->rtpPlayerAdd(); break;
        case 8: _t->rtpPlayerRemove(); break;
        case 9: _t->updateWidgets(); break;
        case 10: _t->on_actionGoToPacket_triggered(); break;
        case 11: _t->on_actionNextProblem_triggered(); break;
        case 12: _t->on_actionSaveOneCsv_triggered(); break;
        case 13: _t->on_actionSaveAllCsv_triggered(); break;
        case 14: _t->on_actionSaveGraph_triggered(); break;
        case 15: _t->on_buttonBox_helpRequested(); break;
        case 16: _t->showStreamMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 17: _t->showGraphMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 18: _t->graphClicked((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 19: _t->closeTab((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->rowCheckboxChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->singleCheckboxChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->on_actionPrepareFilterOne_triggered(); break;
        case 23: _t->on_actionPrepareFilterAll_triggered(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (RtpAnalysisDialog::*)(int )>(_a, &RtpAnalysisDialog::goToPacket, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpAnalysisDialog::*)(QVector<rtpstream_id_t*> )>(_a, &RtpAnalysisDialog::rtpPlayerDialogReplaceRtpStreams, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpAnalysisDialog::*)(QVector<rtpstream_id_t*> )>(_a, &RtpAnalysisDialog::rtpPlayerDialogAddRtpStreams, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpAnalysisDialog::*)(QVector<rtpstream_id_t*> )>(_a, &RtpAnalysisDialog::rtpPlayerDialogRemoveRtpStreams, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpAnalysisDialog::*)(QString , bool )>(_a, &RtpAnalysisDialog::updateFilter, 4))
            return;
    }
}

const QMetaObject *RtpAnalysisDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RtpAnalysisDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17RtpAnalysisDialogE_t>.strings))
        return static_cast<void*>(this);
    return WiresharkDialog::qt_metacast(_clname);
}

int RtpAnalysisDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void RtpAnalysisDialog::goToPacket(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void RtpAnalysisDialog::rtpPlayerDialogReplaceRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void RtpAnalysisDialog::rtpPlayerDialogAddRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void RtpAnalysisDialog::rtpPlayerDialogRemoveRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void RtpAnalysisDialog::updateFilter(QString _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}
QT_WARNING_POP
