/****************************************************************************
** Meta object code from reading C++ file 'rtp_player_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/rtp_player_dialog.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rtp_player_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15RtpPlayerDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto RtpPlayerDialog::qt_create_metaobjectdata<qt_meta_tag_ZN15RtpPlayerDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "RtpPlayerDialog",
        "packetsMarked",
        "",
        "updateFilter",
        "filter",
        "force",
        "goToPacket",
        "packet_num",
        "rtpAnalysisDialogReplaceRtpStreams",
        "QList<rtpstream_id_t*>",
        "stream_infos",
        "rtpAnalysisDialogAddRtpStreams",
        "rtpAnalysisDialogRemoveRtpStreams",
        "rtpAnalysisReplace",
        "rtpAnalysisAdd",
        "rtpAnalysisRemove",
        "retapPackets",
        "captureEvent",
        "CaptureEvent",
        "e",
        "rescanPackets",
        "rescale_axes",
        "createPlot",
        "updateWidgets",
        "itemEntered",
        "QTreeWidgetItem*",
        "item",
        "column",
        "mouseMovePlot",
        "QMouseEvent*",
        "event",
        "mouseMoveUpdate",
        "showGraphContextMenu",
        "QPoint",
        "pos",
        "graphClicked",
        "graphDoubleClicked",
        "plotClicked",
        "QCPAbstractPlottable*",
        "plottable",
        "dataIndex",
        "updateHintLabel",
        "resetXAxis",
        "updateGraphs",
        "playFinished",
        "RtpAudioStream*",
        "stream",
        "QAudio::Error",
        "error",
        "setPlayPosition",
        "secs",
        "setPlaybackError",
        "playback_error",
        "changeAudioRoutingOnItem",
        "ti",
        "AudioRouting",
        "new_audio_routing",
        "changeAudioRouting",
        "invertAudioMutingOnItem",
        "on_playButton_clicked",
        "on_pauseButton_clicked",
        "on_stopButton_clicked",
        "on_actionReset_triggered",
        "on_actionZoomIn_triggered",
        "on_actionZoomOut_triggered",
        "on_actionMoveLeft10_triggered",
        "on_actionMoveRight10_triggered",
        "on_actionMoveLeft1_triggered",
        "on_actionMoveRight1_triggered",
        "on_actionGoToPacket_triggered",
        "on_actionGoToSetupPacketPlot_triggered",
        "on_actionGoToSetupPacketTree_triggered",
        "on_actionRemoveStream_triggered",
        "on_actionAudioRoutingP_triggered",
        "on_actionAudioRoutingL_triggered",
        "on_actionAudioRoutingLR_triggered",
        "on_actionAudioRoutingR_triggered",
        "on_actionAudioRoutingMute_triggered",
        "on_actionAudioRoutingUnmute_triggered",
        "on_actionAudioRoutingMuteInvert_triggered",
        "on_streamTreeWidget_itemSelectionChanged",
        "on_streamTreeWidget_itemDoubleClicked",
        "on_outputDeviceComboBox_currentTextChanged",
        "on_outputAudioRate_currentTextChanged",
        "on_jitterSpinBox_valueChanged",
        "on_timingComboBox_currentIndexChanged",
        "on_todCheckBox_toggled",
        "checked",
        "on_buttonBox_helpRequested",
        "on_actionSelectAll_triggered",
        "on_actionSelectInvert_triggered",
        "on_actionSelectNone_triggered",
        "outputNotify",
        "on_actionPlay_triggered",
        "on_actionStop_triggered",
        "on_actionSaveAudioFromCursor_triggered",
        "on_actionSaveAudioSyncStream_triggered",
        "on_actionSaveAudioSyncFile_triggered",
        "on_actionSavePayload_triggered",
        "on_actionSelectInaudible_triggered",
        "on_actionDeselectInaudible_triggered",
        "on_actionPrepareFilter_triggered",
        "on_actionReadCapture_triggered",
        "sinkStateChanged",
        "currentOutputDeviceName"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'packetsMarked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'updateFilter'
        QtMocHelpers::SignalData<void(QString, bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { QMetaType::Bool, 5 },
        }}),
        // Signal 'updateFilter'
        QtMocHelpers::SignalData<void(QString)>(3, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Signal 'goToPacket'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Signal 'rtpAnalysisDialogReplaceRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'rtpAnalysisDialogAddRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'rtpAnalysisDialogRemoveRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'rtpAnalysisReplace'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rtpAnalysisAdd'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rtpAnalysisRemove'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'retapPackets'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'captureEvent'
        QtMocHelpers::SlotData<void(CaptureEvent)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'rescanPackets'
        QtMocHelpers::SlotData<void(bool)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'rescanPackets'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'createPlot'
        QtMocHelpers::SlotData<void(bool)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'createPlot'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'updateWidgets'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'itemEntered'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 25, 26 }, { QMetaType::Int, 27 },
        }}),
        // Slot 'mouseMovePlot'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 29, 30 },
        }}),
        // Slot 'mouseMoveUpdate'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showGraphContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 33, 34 },
        }}),
        // Slot 'graphClicked'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(35, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 29, 30 },
        }}),
        // Slot 'graphDoubleClicked'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(36, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 29, 30 },
        }}),
        // Slot 'plotClicked'
        QtMocHelpers::SlotData<void(QCPAbstractPlottable *, int, QMouseEvent *)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 29, 30 },
        }}),
        // Slot 'updateHintLabel'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'resetXAxis'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateGraphs'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'playFinished'
        QtMocHelpers::SlotData<void(RtpAudioStream *, QAudio::Error)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 45, 46 }, { 0x80000000 | 47, 48 },
        }}),
        // Slot 'setPlayPosition'
        QtMocHelpers::SlotData<void(double)>(49, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 50 },
        }}),
        // Slot 'setPlaybackError'
        QtMocHelpers::SlotData<void(const QString)>(51, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 52 },
        }}),
        // Slot 'changeAudioRoutingOnItem'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, AudioRouting)>(53, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 25, 54 }, { 0x80000000 | 55, 56 },
        }}),
        // Slot 'changeAudioRouting'
        QtMocHelpers::SlotData<void(AudioRouting)>(57, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 55, 56 },
        }}),
        // Slot 'invertAudioMutingOnItem'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *)>(58, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 25, 54 },
        }}),
        // Slot 'on_playButton_clicked'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pauseButton_clicked'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_stopButton_clicked'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionReset_triggered'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomIn_triggered'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomOut_triggered'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveLeft10_triggered'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveRight10_triggered'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveLeft1_triggered'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveRight1_triggered'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGoToPacket_triggered'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGoToSetupPacketPlot_triggered'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGoToSetupPacketTree_triggered'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemoveStream_triggered'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAudioRoutingP_triggered'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAudioRoutingL_triggered'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAudioRoutingLR_triggered'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAudioRoutingR_triggered'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAudioRoutingMute_triggered'
        QtMocHelpers::SlotData<void()>(77, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAudioRoutingUnmute_triggered'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAudioRoutingMuteInvert_triggered'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_streamTreeWidget_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(80, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_streamTreeWidget_itemDoubleClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, const int)>(81, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 25, 26 }, { QMetaType::Int, 27 },
        }}),
        // Slot 'on_outputDeviceComboBox_currentTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(82, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'on_outputAudioRate_currentTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(83, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'on_jitterSpinBox_valueChanged'
        QtMocHelpers::SlotData<void(double)>(84, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 2 },
        }}),
        // Slot 'on_timingComboBox_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(85, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'on_todCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(86, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 87 },
        }}),
        // Slot 'on_buttonBox_helpRequested'
        QtMocHelpers::SlotData<void()>(88, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSelectAll_triggered'
        QtMocHelpers::SlotData<void()>(89, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSelectInvert_triggered'
        QtMocHelpers::SlotData<void()>(90, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSelectNone_triggered'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'outputNotify'
        QtMocHelpers::SlotData<void()>(92, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPlay_triggered'
        QtMocHelpers::SlotData<void()>(93, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionStop_triggered'
        QtMocHelpers::SlotData<void()>(94, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveAudioFromCursor_triggered'
        QtMocHelpers::SlotData<void()>(95, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveAudioSyncStream_triggered'
        QtMocHelpers::SlotData<void()>(96, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveAudioSyncFile_triggered'
        QtMocHelpers::SlotData<void()>(97, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSavePayload_triggered'
        QtMocHelpers::SlotData<void()>(98, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSelectInaudible_triggered'
        QtMocHelpers::SlotData<void()>(99, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDeselectInaudible_triggered'
        QtMocHelpers::SlotData<void()>(100, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPrepareFilter_triggered'
        QtMocHelpers::SlotData<void()>(101, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionReadCapture_triggered'
        QtMocHelpers::SlotData<void()>(102, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'sinkStateChanged'
        QtMocHelpers::SlotData<void()>(103, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'currentOutputDeviceName'
        QtMocHelpers::PropertyData<QString>(104, QMetaType::QString, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RtpPlayerDialog, qt_meta_tag_ZN15RtpPlayerDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject RtpPlayerDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<WiresharkDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15RtpPlayerDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15RtpPlayerDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15RtpPlayerDialogE_t>.metaTypes,
    nullptr
} };

void RtpPlayerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RtpPlayerDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->packetsMarked(); break;
        case 1: _t->updateFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 2: _t->updateFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->goToPacket((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->rtpAnalysisDialogReplaceRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 5: _t->rtpAnalysisDialogAddRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 6: _t->rtpAnalysisDialogRemoveRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 7: _t->rtpAnalysisReplace(); break;
        case 8: _t->rtpAnalysisAdd(); break;
        case 9: _t->rtpAnalysisRemove(); break;
        case 10: _t->retapPackets(); break;
        case 11: _t->captureEvent((*reinterpret_cast<std::add_pointer_t<CaptureEvent>>(_a[1]))); break;
        case 12: _t->rescanPackets((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->rescanPackets(); break;
        case 14: _t->createPlot((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->createPlot(); break;
        case 16: _t->updateWidgets(); break;
        case 17: _t->itemEntered((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 18: _t->mouseMovePlot((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 19: _t->mouseMoveUpdate(); break;
        case 20: _t->showGraphContextMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 21: _t->graphClicked((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 22: _t->graphDoubleClicked((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 23: _t->plotClicked((*reinterpret_cast<std::add_pointer_t<QCPAbstractPlottable*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[3]))); break;
        case 24: _t->updateHintLabel(); break;
        case 25: _t->resetXAxis(); break;
        case 26: _t->updateGraphs(); break;
        case 27: _t->playFinished((*reinterpret_cast<std::add_pointer_t<RtpAudioStream*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QAudio::Error>>(_a[2]))); break;
        case 28: _t->setPlayPosition((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 29: _t->setPlaybackError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->changeAudioRoutingOnItem((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<AudioRouting>>(_a[2]))); break;
        case 31: _t->changeAudioRouting((*reinterpret_cast<std::add_pointer_t<AudioRouting>>(_a[1]))); break;
        case 32: _t->invertAudioMutingOnItem((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 33: _t->on_playButton_clicked(); break;
        case 34: _t->on_pauseButton_clicked(); break;
        case 35: _t->on_stopButton_clicked(); break;
        case 36: _t->on_actionReset_triggered(); break;
        case 37: _t->on_actionZoomIn_triggered(); break;
        case 38: _t->on_actionZoomOut_triggered(); break;
        case 39: _t->on_actionMoveLeft10_triggered(); break;
        case 40: _t->on_actionMoveRight10_triggered(); break;
        case 41: _t->on_actionMoveLeft1_triggered(); break;
        case 42: _t->on_actionMoveRight1_triggered(); break;
        case 43: _t->on_actionGoToPacket_triggered(); break;
        case 44: _t->on_actionGoToSetupPacketPlot_triggered(); break;
        case 45: _t->on_actionGoToSetupPacketTree_triggered(); break;
        case 46: _t->on_actionRemoveStream_triggered(); break;
        case 47: _t->on_actionAudioRoutingP_triggered(); break;
        case 48: _t->on_actionAudioRoutingL_triggered(); break;
        case 49: _t->on_actionAudioRoutingLR_triggered(); break;
        case 50: _t->on_actionAudioRoutingR_triggered(); break;
        case 51: _t->on_actionAudioRoutingMute_triggered(); break;
        case 52: _t->on_actionAudioRoutingUnmute_triggered(); break;
        case 53: _t->on_actionAudioRoutingMuteInvert_triggered(); break;
        case 54: _t->on_streamTreeWidget_itemSelectionChanged(); break;
        case 55: _t->on_streamTreeWidget_itemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 56: _t->on_outputDeviceComboBox_currentTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 57: _t->on_outputAudioRate_currentTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 58: _t->on_jitterSpinBox_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 59: _t->on_timingComboBox_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 60: _t->on_todCheckBox_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 61: _t->on_buttonBox_helpRequested(); break;
        case 62: _t->on_actionSelectAll_triggered(); break;
        case 63: _t->on_actionSelectInvert_triggered(); break;
        case 64: _t->on_actionSelectNone_triggered(); break;
        case 65: _t->outputNotify(); break;
        case 66: _t->on_actionPlay_triggered(); break;
        case 67: _t->on_actionStop_triggered(); break;
        case 68: _t->on_actionSaveAudioFromCursor_triggered(); break;
        case 69: _t->on_actionSaveAudioSyncStream_triggered(); break;
        case 70: _t->on_actionSaveAudioSyncFile_triggered(); break;
        case 71: _t->on_actionSavePayload_triggered(); break;
        case 72: _t->on_actionSelectInaudible_triggered(); break;
        case 73: _t->on_actionDeselectInaudible_triggered(); break;
        case 74: _t->on_actionPrepareFilter_triggered(); break;
        case 75: _t->on_actionReadCapture_triggered(); break;
        case 76: _t->sinkStateChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractPlottable* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< RtpAudioStream* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioRouting >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioRouting >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (RtpPlayerDialog::*)()>(_a, &RtpPlayerDialog::packetsMarked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpPlayerDialog::*)(QString , bool )>(_a, &RtpPlayerDialog::updateFilter, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpPlayerDialog::*)(int )>(_a, &RtpPlayerDialog::goToPacket, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpPlayerDialog::*)(QVector<rtpstream_id_t*> )>(_a, &RtpPlayerDialog::rtpAnalysisDialogReplaceRtpStreams, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpPlayerDialog::*)(QVector<rtpstream_id_t*> )>(_a, &RtpPlayerDialog::rtpAnalysisDialogAddRtpStreams, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpPlayerDialog::*)(QVector<rtpstream_id_t*> )>(_a, &RtpPlayerDialog::rtpAnalysisDialogRemoveRtpStreams, 6))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->currentOutputDeviceName(); break;
        default: break;
        }
    }
}

const QMetaObject *RtpPlayerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RtpPlayerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15RtpPlayerDialogE_t>.strings))
        return static_cast<void*>(this);
    return WiresharkDialog::qt_metacast(_clname);
}

int RtpPlayerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 77)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 77;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 77)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 77;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void RtpPlayerDialog::packetsMarked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RtpPlayerDialog::updateFilter(QString _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 3
void RtpPlayerDialog::goToPacket(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void RtpPlayerDialog::rtpAnalysisDialogReplaceRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void RtpPlayerDialog::rtpAnalysisDialogAddRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void RtpPlayerDialog::rtpAnalysisDialogRemoveRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
