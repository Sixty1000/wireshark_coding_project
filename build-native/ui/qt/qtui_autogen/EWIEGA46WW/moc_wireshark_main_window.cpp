/****************************************************************************
** Meta object code from reading C++ file 'wireshark_main_window.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/wireshark_main_window.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wireshark_main_window.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19WiresharkMainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto WiresharkMainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN19WiresharkMainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WiresharkMainWindow",
        "captureChallengeRequested",
        "",
        "setDissectedCaptureFile",
        "capture_file*",
        "cf",
        "closePacketDialogs",
        "reloadFields",
        "packetInfoChanged",
        "_packet_info*",
        "pinfo",
        "fieldFilterChanged",
        "field_filter",
        "fieldHighlight",
        "FieldInformation*",
        "captureActive",
        "selectRtpStream",
        "rtpstream_id_t*",
        "id",
        "deselectRtpStream",
        "showExtcapOptions",
        "QString&",
        "device_name",
        "startCaptureOnClose",
        "openCaptureFile",
        "cf_path",
        "display_filter",
        "type",
        "is_tempfile",
        "filterPackets",
        "new_filter",
        "force",
        "updateForUnsavedChanges",
        "layoutToolbars",
        "updatePreferenceActions",
        "updateRecentActions",
        "setTitlebarForCaptureFile",
        "setWSWindowTitle",
        "title",
        "showCaptureOptionsDialog",
        "captureCapturePrepared",
        "capture_session*",
        "captureCaptureUpdateStarted",
        "captureCaptureUpdateFinished",
        "captureCaptureFixedFinished",
        "cap_session",
        "captureCaptureFailed",
        "captureFileOpened",
        "captureFileReadFinished",
        "captureFileClosing",
        "captureFileClosed",
        "launchRLCGraph",
        "channelKnown",
        "uint8_t",
        "RAT",
        "uint16_t",
        "ueid",
        "rlcMode",
        "channelType",
        "channelId",
        "direction",
        "rtpPlayerDialogReplaceRtpStreams",
        "QList<rtpstream_id_t*>",
        "stream_ids",
        "rtpPlayerDialogAddRtpStreams",
        "rtpPlayerDialogRemoveRtpStreams",
        "rtpAnalysisDialogReplaceRtpStreams",
        "rtpAnalysisDialogAddRtpStreams",
        "rtpAnalysisDialogRemoveRtpStreams",
        "rtpStreamsDialogSelectRtpStreams",
        "rtpStreamsDialogDeselectRtpStreams",
        "captureEventHandler",
        "CaptureEvent",
        "ev",
        "initViewColorizeMenu",
        "initConversationMenus",
        "addExportObjectsMenuItem",
        "const void*",
        "key",
        "value",
        "userdata",
        "initExportObjectsMenus",
        "addFollowStreamMenuItem",
        "initFollowStreamMenus",
        "startCapture",
        "pushLiveCaptureInProgress",
        "popLiveCaptureInProgress",
        "stopCapture",
        "loadWindowGeometry",
        "saveWindowGeometry",
        "mainStackChanged",
        "updateRecentCaptures",
        "recentActionTriggered",
        "addPacketComment",
        "editPacketComment",
        "deletePacketComment",
        "deleteCommentsFromPackets",
        "commentToMenuText",
        "text",
        "max_len",
        "setEditCommentsMenu",
        "setMenusForSelectedPacket",
        "setMenusForSelectedTreeRow",
        "fi",
        "interfaceSelectionChanged",
        "captureFilterSyntaxChanged",
        "valid",
        "redissectPackets",
        "checkDisplayFilter",
        "fieldsChanged",
        "reloadLuaPlugins",
        "showAccordionFrame",
        "AccordionFrame*",
        "show_frame",
        "toggle",
        "showColumnEditor",
        "column",
        "showPreferenceEditor",
        "addStatsPluginsToMenu",
        "addDynamicMenus",
        "reloadDynamicMenus",
        "addPluginIFStructures",
        "searchSubMenu",
        "QMenu*",
        "objectName",
        "activatePluginIFToolbar",
        "updateTitlebar",
        "startInterfaceCapture",
        "capture_filter",
        "applyGlobalCommandLineOptions",
        "setFeaturesEnabled",
        "enabled",
        "on_actionNewDisplayFilterExpression_triggered",
        "onFilterSelected",
        "onFilterPreferences",
        "onFilterEdit",
        "uatIndex",
        "queuedFilterAction",
        "filter",
        "FilterAction::Action",
        "action",
        "FilterAction::ActionType",
        "openStatCommandDialog",
        "menu_path",
        "const char*",
        "arg",
        "openTapParameterDialog",
        "cfg_str",
        "connectFileMenuActions",
        "exportPacketBytes",
        "exportPDU",
        "stripPacketHeaders",
        "exportTLSSessionKeys",
        "printFile",
        "connectEditMenuActions",
        "copySelectedItems",
        "WiresharkMainWindow::CopySelected",
        "selection_type",
        "findPacket",
        "editTimeShift",
        "editConfigurationProfiles",
        "editTimeShiftFinished",
        "addPacketCommentFinished",
        "PacketCommentDialog*",
        "pc_dialog",
        "result",
        "editPacketCommentFinished",
        "nComment",
        "deleteAllPacketComments",
        "deleteAllPacketCommentsFinished",
        "injectSecrets",
        "discardAllSecrets",
        "discardAllSecretsFinished",
        "showPreferencesDialog",
        "module_name",
        "connectViewMenuActions",
        "showHideMainWidgets",
        "QAction*",
        "setTimestampFormat",
        "setTimestampPrecision",
        "setTimeDisplaySecondsWithHoursAndMinutes",
        "checked",
        "editResolvedName",
        "setNameResolution",
        "zoomText",
        "showColoringRulesDialog",
        "colorizeConversation",
        "create_rule",
        "colorizeActionTriggered",
        "openPacketDialog",
        "from_reference",
        "reloadCaptureFileAsFormatOrCapture",
        "reloadCaptureFile",
        "connectGoMenuActions",
        "setPreviousFocus",
        "resetPreviousFocus",
        "connectCaptureMenuActions",
        "startCaptureTriggered",
        "connectAnalyzeMenuActions",
        "matchFieldFilter",
        "filter_type",
        "applyFieldAsColumn",
        "filterMenuAboutToShow",
        "applyConversationFilter",
        "applyExportObject",
        "openFollowStreamDialog",
        "proto_id",
        "stream_num",
        "sub_stream_num",
        "use_stream_index",
        "statCommandExpertInfo",
        "connectHelpMenuActions",
        "goToCancelClicked",
        "goToGoClicked",
        "goToLineEditReturnPressed",
        "connectStatisticsMenuActions",
        "showResolvedAddressesDialog",
        "showConversationsDialog",
        "showEndpointsDialog",
        "openTcpStreamDialog",
        "graph_type",
        "openSCTPAllAssocsDialog",
        "on_actionSCTPShowAllAssociations_triggered",
        "on_actionSCTPAnalyseThisAssociation_triggered",
        "on_actionSCTPFilterThisAssociation_triggered",
        "statCommandMulticastStatistics",
        "statCommandWlanStatistics",
        "openStatisticsTreeDialog",
        "abbr",
        "statCommandIOGraph",
        "showIOGraphDialog",
        "io_graph_item_unit_t",
        "value_units",
        "connectTelephonyMenuActions",
        "openTelephonyRtpStreamsDialog",
        "RtpStreamDialog*",
        "openTelephonyRtpPlayerDialog",
        "RtpPlayerDialog*",
        "openTelephonyRtpAnalysisDialog",
        "RtpAnalysisDialog*",
        "statCommandLteMacStatistics",
        "statCommandLteRlcStatistics",
        "openRtpStreamAnalysisDialog",
        "openRtpPlayerDialog",
        "connectWirelessMenuActions",
        "connectToolsMenuActions",
        "externalMenuItemTriggered",
        "on_actionContextWikiProtocolPage_triggered",
        "on_actionContextFilterFieldReference_triggered",
        "extcap_options_finished",
        "showExtcapOptionsDialog",
        "findRtpStreams",
        "QList<rtpstream_id_t*>*",
        "reverse",
        "openTLSKeylogDialog"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'captureChallengeRequested'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'setDissectedCaptureFile'
        QtMocHelpers::SignalData<void(capture_file *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Signal 'closePacketDialogs'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'reloadFields'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'packetInfoChanged'
        QtMocHelpers::SignalData<void(_packet_info *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'fieldFilterChanged'
        QtMocHelpers::SignalData<void(const QByteArray)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 12 },
        }}),
        // Signal 'fieldHighlight'
        QtMocHelpers::SignalData<void(FieldInformation *)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 2 },
        }}),
        // Signal 'captureActive'
        QtMocHelpers::SignalData<void(int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'selectRtpStream'
        QtMocHelpers::SignalData<void(rtpstream_id_t *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Signal 'deselectRtpStream'
        QtMocHelpers::SignalData<void(rtpstream_id_t *)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Signal 'showExtcapOptions'
        QtMocHelpers::SignalData<void(QString &, bool)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 22 }, { QMetaType::Bool, 23 },
        }}),
        // Slot 'openCaptureFile'
        QtMocHelpers::SlotData<bool(QString, QString, unsigned int, bool)>(24, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 25 }, { QMetaType::QString, 26 }, { QMetaType::UInt, 27 }, { QMetaType::Bool, 28 },
        }}),
        // Slot 'openCaptureFile'
        QtMocHelpers::SlotData<bool(QString, QString, unsigned int)>(24, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 25 }, { QMetaType::QString, 26 }, { QMetaType::UInt, 27 },
        }}),
        // Slot 'openCaptureFile'
        QtMocHelpers::SlotData<bool(QString, QString)>(24, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 25 }, { QMetaType::QString, 26 },
        }}),
        // Slot 'openCaptureFile'
        QtMocHelpers::SlotData<bool(QString)>(24, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 25 },
        }}),
        // Slot 'openCaptureFile'
        QtMocHelpers::SlotData<bool()>(24, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool),
        // Slot 'filterPackets'
        QtMocHelpers::SlotData<void(QString, bool)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 30 }, { QMetaType::Bool, 31 },
        }}),
        // Slot 'filterPackets'
        QtMocHelpers::SlotData<void(QString)>(29, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 30 },
        }}),
        // Slot 'filterPackets'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'updateForUnsavedChanges'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'layoutToolbars'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updatePreferenceActions'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateRecentActions'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setTitlebarForCaptureFile'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setWSWindowTitle'
        QtMocHelpers::SlotData<void(QString)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 38 },
        }}),
        // Slot 'setWSWindowTitle'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'showCaptureOptionsDialog'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'captureCapturePrepared'
        QtMocHelpers::SlotData<void(capture_session *)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 41, 2 },
        }}),
        // Slot 'captureCaptureUpdateStarted'
        QtMocHelpers::SlotData<void(capture_session *)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 41, 2 },
        }}),
        // Slot 'captureCaptureUpdateFinished'
        QtMocHelpers::SlotData<void(capture_session *)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 41, 2 },
        }}),
        // Slot 'captureCaptureFixedFinished'
        QtMocHelpers::SlotData<void(capture_session *)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 41, 45 },
        }}),
        // Slot 'captureCaptureFailed'
        QtMocHelpers::SlotData<void(capture_session *)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 41, 2 },
        }}),
        // Slot 'captureFileOpened'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'captureFileReadFinished'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'captureFileClosing'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'captureFileClosed'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'launchRLCGraph'
        QtMocHelpers::SlotData<void(bool, uint8_t, uint16_t, uint8_t, uint16_t, uint16_t, uint8_t)>(51, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 52 }, { 0x80000000 | 53, 54 }, { 0x80000000 | 55, 56 }, { 0x80000000 | 53, 57 },
            { 0x80000000 | 55, 58 }, { 0x80000000 | 55, 59 }, { 0x80000000 | 53, 60 },
        }}),
        // Slot 'rtpPlayerDialogReplaceRtpStreams'
        QtMocHelpers::SlotData<void(QVector<rtpstream_id_t*>)>(61, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 62, 63 },
        }}),
        // Slot 'rtpPlayerDialogAddRtpStreams'
        QtMocHelpers::SlotData<void(QVector<rtpstream_id_t*>)>(64, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 62, 63 },
        }}),
        // Slot 'rtpPlayerDialogRemoveRtpStreams'
        QtMocHelpers::SlotData<void(QVector<rtpstream_id_t*>)>(65, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 62, 63 },
        }}),
        // Slot 'rtpAnalysisDialogReplaceRtpStreams'
        QtMocHelpers::SlotData<void(QVector<rtpstream_id_t*>)>(66, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 62, 63 },
        }}),
        // Slot 'rtpAnalysisDialogAddRtpStreams'
        QtMocHelpers::SlotData<void(QVector<rtpstream_id_t*>)>(67, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 62, 63 },
        }}),
        // Slot 'rtpAnalysisDialogRemoveRtpStreams'
        QtMocHelpers::SlotData<void(QVector<rtpstream_id_t*>)>(68, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 62, 63 },
        }}),
        // Slot 'rtpStreamsDialogSelectRtpStreams'
        QtMocHelpers::SlotData<void(QVector<rtpstream_id_t*>)>(69, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 62, 63 },
        }}),
        // Slot 'rtpStreamsDialogDeselectRtpStreams'
        QtMocHelpers::SlotData<void(QVector<rtpstream_id_t*>)>(70, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 62, 63 },
        }}),
        // Slot 'captureEventHandler'
        QtMocHelpers::SlotData<void(CaptureEvent)>(71, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 72, 73 },
        }}),
        // Slot 'initViewColorizeMenu'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'initConversationMenus'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addExportObjectsMenuItem'
        QtMocHelpers::SlotData<bool(const void *, void *, void *)>(76, 2, QMC::AccessPrivate, QMetaType::Bool, {{
            { 0x80000000 | 77, 78 }, { QMetaType::VoidStar, 79 }, { QMetaType::VoidStar, 80 },
        }}),
        // Slot 'initExportObjectsMenus'
        QtMocHelpers::SlotData<void()>(81, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addFollowStreamMenuItem'
        QtMocHelpers::SlotData<bool(const void *, void *, void *)>(82, 2, QMC::AccessPrivate, QMetaType::Bool, {{
            { 0x80000000 | 77, 78 }, { QMetaType::VoidStar, 79 }, { QMetaType::VoidStar, 80 },
        }}),
        // Slot 'initFollowStreamMenus'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'startCapture'
        QtMocHelpers::SlotData<void(QStringList)>(84, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QStringList, 2 },
        }}),
        // Slot 'startCapture'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'pushLiveCaptureInProgress'
        QtMocHelpers::SlotData<void()>(85, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'popLiveCaptureInProgress'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'stopCapture'
        QtMocHelpers::SlotData<void()>(87, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadWindowGeometry'
        QtMocHelpers::SlotData<void()>(88, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveWindowGeometry'
        QtMocHelpers::SlotData<void()>(89, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'mainStackChanged'
        QtMocHelpers::SlotData<void(int)>(90, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'updateRecentCaptures'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'recentActionTriggered'
        QtMocHelpers::SlotData<void()>(92, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addPacketComment'
        QtMocHelpers::SlotData<void()>(93, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editPacketComment'
        QtMocHelpers::SlotData<void()>(94, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'deletePacketComment'
        QtMocHelpers::SlotData<void()>(95, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'deleteCommentsFromPackets'
        QtMocHelpers::SlotData<void()>(96, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'commentToMenuText'
        QtMocHelpers::SlotData<QString(QString, int)>(97, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { QMetaType::QString, 98 }, { QMetaType::Int, 99 },
        }}),
        // Slot 'commentToMenuText'
        QtMocHelpers::SlotData<QString(QString)>(97, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 98 },
        }}),
        // Slot 'setEditCommentsMenu'
        QtMocHelpers::SlotData<void()>(100, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setMenusForSelectedPacket'
        QtMocHelpers::SlotData<void()>(101, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setMenusForSelectedTreeRow'
        QtMocHelpers::SlotData<void(FieldInformation *)>(102, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 14, 103 },
        }}),
        // Slot 'setMenusForSelectedTreeRow'
        QtMocHelpers::SlotData<void()>(102, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'interfaceSelectionChanged'
        QtMocHelpers::SlotData<void()>(104, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'captureFilterSyntaxChanged'
        QtMocHelpers::SlotData<void(bool)>(105, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 106 },
        }}),
        // Slot 'redissectPackets'
        QtMocHelpers::SlotData<void()>(107, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'checkDisplayFilter'
        QtMocHelpers::SlotData<void()>(108, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'fieldsChanged'
        QtMocHelpers::SlotData<void()>(109, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'reloadLuaPlugins'
        QtMocHelpers::SlotData<void()>(110, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showAccordionFrame'
        QtMocHelpers::SlotData<void(AccordionFrame *, bool)>(111, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 112, 113 }, { QMetaType::Bool, 114 },
        }}),
        // Slot 'showAccordionFrame'
        QtMocHelpers::SlotData<void(AccordionFrame *)>(111, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 112, 113 },
        }}),
        // Slot 'showColumnEditor'
        QtMocHelpers::SlotData<void(int)>(115, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 116 },
        }}),
        // Slot 'showPreferenceEditor'
        QtMocHelpers::SlotData<void()>(117, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addStatsPluginsToMenu'
        QtMocHelpers::SlotData<void()>(118, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addDynamicMenus'
        QtMocHelpers::SlotData<void()>(119, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'reloadDynamicMenus'
        QtMocHelpers::SlotData<void()>(120, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addPluginIFStructures'
        QtMocHelpers::SlotData<void()>(121, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'searchSubMenu'
        QtMocHelpers::SlotData<QMenu *(QString)>(122, 2, QMC::AccessPrivate, 0x80000000 | 123, {{
            { QMetaType::QString, 124 },
        }}),
        // Slot 'activatePluginIFToolbar'
        QtMocHelpers::SlotData<void(bool)>(125, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'updateTitlebar'
        QtMocHelpers::SlotData<void()>(126, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'startInterfaceCapture'
        QtMocHelpers::SlotData<void(bool, const QString)>(127, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 106 }, { QMetaType::QString, 128 },
        }}),
        // Slot 'applyGlobalCommandLineOptions'
        QtMocHelpers::SlotData<void()>(129, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setFeaturesEnabled'
        QtMocHelpers::SlotData<void(bool)>(130, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 131 },
        }}),
        // Slot 'setFeaturesEnabled'
        QtMocHelpers::SlotData<void()>(130, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'on_actionNewDisplayFilterExpression_triggered'
        QtMocHelpers::SlotData<void()>(132, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFilterSelected'
        QtMocHelpers::SlotData<void(QString, bool)>(133, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 }, { QMetaType::Bool, 2 },
        }}),
        // Slot 'onFilterPreferences'
        QtMocHelpers::SlotData<void()>(134, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFilterEdit'
        QtMocHelpers::SlotData<void(int)>(135, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 136 },
        }}),
        // Slot 'queuedFilterAction'
        QtMocHelpers::SlotData<void(QString, FilterAction::Action, FilterAction::ActionType)>(137, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 138 }, { 0x80000000 | 139, 140 }, { 0x80000000 | 141, 27 },
        }}),
        // Slot 'openStatCommandDialog'
        QtMocHelpers::SlotData<void(const QString &, const char *, void *)>(142, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 143 }, { 0x80000000 | 144, 145 }, { QMetaType::VoidStar, 80 },
        }}),
        // Slot 'openTapParameterDialog'
        QtMocHelpers::SlotData<void(const QString, const QString, void *)>(146, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 147 }, { QMetaType::QString, 145 }, { QMetaType::VoidStar, 80 },
        }}),
        // Slot 'openTapParameterDialog'
        QtMocHelpers::SlotData<void()>(146, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'connectFileMenuActions'
        QtMocHelpers::SlotData<void()>(148, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'exportPacketBytes'
        QtMocHelpers::SlotData<void()>(149, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'exportPDU'
        QtMocHelpers::SlotData<void()>(150, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'stripPacketHeaders'
        QtMocHelpers::SlotData<void()>(151, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'exportTLSSessionKeys'
        QtMocHelpers::SlotData<void()>(152, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'printFile'
        QtMocHelpers::SlotData<void()>(153, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'connectEditMenuActions'
        QtMocHelpers::SlotData<void()>(154, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copySelectedItems'
        QtMocHelpers::SlotData<void(WiresharkMainWindow::CopySelected)>(155, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 156, 157 },
        }}),
        // Slot 'findPacket'
        QtMocHelpers::SlotData<void()>(158, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editTimeShift'
        QtMocHelpers::SlotData<void()>(159, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editConfigurationProfiles'
        QtMocHelpers::SlotData<void()>(160, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editTimeShiftFinished'
        QtMocHelpers::SlotData<void(int)>(161, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'addPacketCommentFinished'
        QtMocHelpers::SlotData<void(PacketCommentDialog *, int)>(162, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 163, 164 }, { QMetaType::Int, 165 },
        }}),
        // Slot 'editPacketCommentFinished'
        QtMocHelpers::SlotData<void(PacketCommentDialog *, int, unsigned )>(166, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 163, 164 }, { QMetaType::Int, 165 }, { QMetaType::UInt, 167 },
        }}),
        // Slot 'deleteAllPacketComments'
        QtMocHelpers::SlotData<void()>(168, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'deleteAllPacketCommentsFinished'
        QtMocHelpers::SlotData<void(int)>(169, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 165 },
        }}),
        // Slot 'injectSecrets'
        QtMocHelpers::SlotData<void()>(170, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'discardAllSecrets'
        QtMocHelpers::SlotData<void()>(171, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'discardAllSecretsFinished'
        QtMocHelpers::SlotData<void(int)>(172, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 165 },
        }}),
        // Slot 'showPreferencesDialog'
        QtMocHelpers::SlotData<void(QString)>(173, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 174 },
        }}),
        // Slot 'connectViewMenuActions'
        QtMocHelpers::SlotData<void()>(175, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showHideMainWidgets'
        QtMocHelpers::SlotData<void(QAction *)>(176, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 177, 140 },
        }}),
        // Slot 'setTimestampFormat'
        QtMocHelpers::SlotData<void(QAction *)>(178, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 177, 140 },
        }}),
        // Slot 'setTimestampPrecision'
        QtMocHelpers::SlotData<void(QAction *)>(179, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 177, 140 },
        }}),
        // Slot 'setTimeDisplaySecondsWithHoursAndMinutes'
        QtMocHelpers::SlotData<void(bool)>(180, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 181 },
        }}),
        // Slot 'editResolvedName'
        QtMocHelpers::SlotData<void()>(182, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setNameResolution'
        QtMocHelpers::SlotData<void()>(183, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'zoomText'
        QtMocHelpers::SlotData<void()>(184, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showColoringRulesDialog'
        QtMocHelpers::SlotData<void()>(185, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'colorizeConversation'
        QtMocHelpers::SlotData<void(bool)>(186, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 187 },
        }}),
        // Slot 'colorizeConversation'
        QtMocHelpers::SlotData<void()>(186, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'colorizeActionTriggered'
        QtMocHelpers::SlotData<void()>(188, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'openPacketDialog'
        QtMocHelpers::SlotData<void(bool)>(189, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 190 },
        }}),
        // Slot 'openPacketDialog'
        QtMocHelpers::SlotData<void()>(189, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'reloadCaptureFileAsFormatOrCapture'
        QtMocHelpers::SlotData<void()>(191, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'reloadCaptureFile'
        QtMocHelpers::SlotData<void()>(192, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'connectGoMenuActions'
        QtMocHelpers::SlotData<void()>(193, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setPreviousFocus'
        QtMocHelpers::SlotData<void()>(194, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'resetPreviousFocus'
        QtMocHelpers::SlotData<void()>(195, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'connectCaptureMenuActions'
        QtMocHelpers::SlotData<void()>(196, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'startCaptureTriggered'
        QtMocHelpers::SlotData<void()>(197, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'connectAnalyzeMenuActions'
        QtMocHelpers::SlotData<void()>(198, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'matchFieldFilter'
        QtMocHelpers::SlotData<void(FilterAction::Action, FilterAction::ActionType)>(199, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 139, 140 }, { 0x80000000 | 141, 200 },
        }}),
        // Slot 'applyFieldAsColumn'
        QtMocHelpers::SlotData<void()>(201, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'filterMenuAboutToShow'
        QtMocHelpers::SlotData<void()>(202, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'applyConversationFilter'
        QtMocHelpers::SlotData<void()>(203, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'applyExportObject'
        QtMocHelpers::SlotData<void()>(204, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'openFollowStreamDialog'
        QtMocHelpers::SlotData<void(int, unsigned , unsigned , bool)>(205, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 206 }, { QMetaType::UInt, 207 }, { QMetaType::UInt, 208 }, { QMetaType::Bool, 209 },
        }}),
        // Slot 'openFollowStreamDialog'
        QtMocHelpers::SlotData<void(int, unsigned , unsigned )>(205, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 206 }, { QMetaType::UInt, 207 }, { QMetaType::UInt, 208 },
        }}),
        // Slot 'openFollowStreamDialog'
        QtMocHelpers::SlotData<void(int)>(205, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 206 },
        }}),
        // Slot 'statCommandExpertInfo'
        QtMocHelpers::SlotData<void(const char *, void *)>(210, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 144, 2 }, { QMetaType::VoidStar, 2 },
        }}),
        // Slot 'connectHelpMenuActions'
        QtMocHelpers::SlotData<void()>(211, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'goToCancelClicked'
        QtMocHelpers::SlotData<void()>(212, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'goToGoClicked'
        QtMocHelpers::SlotData<void()>(213, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'goToLineEditReturnPressed'
        QtMocHelpers::SlotData<void()>(214, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'connectStatisticsMenuActions'
        QtMocHelpers::SlotData<void()>(215, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showResolvedAddressesDialog'
        QtMocHelpers::SlotData<void()>(216, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showConversationsDialog'
        QtMocHelpers::SlotData<void()>(217, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showEndpointsDialog'
        QtMocHelpers::SlotData<void()>(218, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'openTcpStreamDialog'
        QtMocHelpers::SlotData<void(int)>(219, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 220 },
        }}),
        // Slot 'openSCTPAllAssocsDialog'
        QtMocHelpers::SlotData<void()>(221, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSCTPShowAllAssociations_triggered'
        QtMocHelpers::SlotData<void()>(222, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSCTPAnalyseThisAssociation_triggered'
        QtMocHelpers::SlotData<void()>(223, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSCTPFilterThisAssociation_triggered'
        QtMocHelpers::SlotData<void()>(224, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'statCommandMulticastStatistics'
        QtMocHelpers::SlotData<void(const char *, void *)>(225, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 144, 145 }, { QMetaType::VoidStar, 2 },
        }}),
        // Slot 'statCommandWlanStatistics'
        QtMocHelpers::SlotData<void(const char *, void *)>(226, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 144, 145 }, { QMetaType::VoidStar, 2 },
        }}),
        // Slot 'openStatisticsTreeDialog'
        QtMocHelpers::SlotData<void(const char *)>(227, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 144, 228 },
        }}),
        // Slot 'statCommandIOGraph'
        QtMocHelpers::SlotData<void(const char *, void *)>(229, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 144, 2 }, { QMetaType::VoidStar, 2 },
        }}),
        // Slot 'showIOGraphDialog'
        QtMocHelpers::SlotData<void(io_graph_item_unit_t, QString)>(230, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 231, 232 }, { QMetaType::QString, 2 },
        }}),
        // Slot 'connectTelephonyMenuActions'
        QtMocHelpers::SlotData<void()>(233, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'openTelephonyRtpStreamsDialog'
        QtMocHelpers::SlotData<RtpStreamDialog *()>(234, 2, QMC::AccessPrivate, 0x80000000 | 235),
        // Slot 'openTelephonyRtpPlayerDialog'
        QtMocHelpers::SlotData<RtpPlayerDialog *()>(236, 2, QMC::AccessPrivate, 0x80000000 | 237),
        // Slot 'openTelephonyRtpAnalysisDialog'
        QtMocHelpers::SlotData<RtpAnalysisDialog *()>(238, 2, QMC::AccessPrivate, 0x80000000 | 239),
        // Slot 'statCommandLteMacStatistics'
        QtMocHelpers::SlotData<void(const char *, void *)>(240, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 144, 145 }, { QMetaType::VoidStar, 2 },
        }}),
        // Slot 'statCommandLteRlcStatistics'
        QtMocHelpers::SlotData<void(const char *, void *)>(241, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 144, 145 }, { QMetaType::VoidStar, 2 },
        }}),
        // Slot 'openRtpStreamAnalysisDialog'
        QtMocHelpers::SlotData<void()>(242, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'openRtpPlayerDialog'
        QtMocHelpers::SlotData<void()>(243, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'connectWirelessMenuActions'
        QtMocHelpers::SlotData<void()>(244, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'connectToolsMenuActions'
        QtMocHelpers::SlotData<void()>(245, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'externalMenuItemTriggered'
        QtMocHelpers::SlotData<void()>(246, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionContextWikiProtocolPage_triggered'
        QtMocHelpers::SlotData<void()>(247, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionContextFilterFieldReference_triggered'
        QtMocHelpers::SlotData<void()>(248, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'extcap_options_finished'
        QtMocHelpers::SlotData<void(int)>(249, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 165 },
        }}),
        // Slot 'showExtcapOptionsDialog'
        QtMocHelpers::SlotData<void(QString &, bool)>(250, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 22 }, { QMetaType::Bool, 23 },
        }}),
        // Slot 'findRtpStreams'
        QtMocHelpers::SlotData<QString(QVector<rtpstream_id_t*> *, bool)>(251, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { 0x80000000 | 252, 63 }, { QMetaType::Bool, 253 },
        }}),
        // Slot 'openTLSKeylogDialog'
        QtMocHelpers::SlotData<void()>(254, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WiresharkMainWindow, qt_meta_tag_ZN19WiresharkMainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WiresharkMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<MainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19WiresharkMainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19WiresharkMainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19WiresharkMainWindowE_t>.metaTypes,
    nullptr
} };

void WiresharkMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WiresharkMainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->captureChallengeRequested(); break;
        case 1: _t->setDissectedCaptureFile((*reinterpret_cast<std::add_pointer_t<capture_file*>>(_a[1]))); break;
        case 2: _t->closePacketDialogs(); break;
        case 3: _t->reloadFields(); break;
        case 4: _t->packetInfoChanged((*reinterpret_cast<std::add_pointer_t<_packet_info*>>(_a[1]))); break;
        case 5: _t->fieldFilterChanged((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 6: _t->fieldHighlight((*reinterpret_cast<std::add_pointer_t<FieldInformation*>>(_a[1]))); break;
        case 7: _t->captureActive((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->selectRtpStream((*reinterpret_cast<std::add_pointer_t<rtpstream_id_t*>>(_a[1]))); break;
        case 9: _t->deselectRtpStream((*reinterpret_cast<std::add_pointer_t<rtpstream_id_t*>>(_a[1]))); break;
        case 10: _t->showExtcapOptions((*reinterpret_cast<std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 11: { bool _r = _t->openCaptureFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[4])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->openCaptureFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->openCaptureFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->openCaptureFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->openCaptureFile();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->filterPackets((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 17: _t->filterPackets((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->filterPackets(); break;
        case 19: _t->updateForUnsavedChanges(); break;
        case 20: _t->layoutToolbars(); break;
        case 21: _t->updatePreferenceActions(); break;
        case 22: _t->updateRecentActions(); break;
        case 23: _t->setTitlebarForCaptureFile(); break;
        case 24: _t->setWSWindowTitle((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->setWSWindowTitle(); break;
        case 26: _t->showCaptureOptionsDialog(); break;
        case 27: _t->captureCapturePrepared((*reinterpret_cast<std::add_pointer_t<capture_session*>>(_a[1]))); break;
        case 28: _t->captureCaptureUpdateStarted((*reinterpret_cast<std::add_pointer_t<capture_session*>>(_a[1]))); break;
        case 29: _t->captureCaptureUpdateFinished((*reinterpret_cast<std::add_pointer_t<capture_session*>>(_a[1]))); break;
        case 30: _t->captureCaptureFixedFinished((*reinterpret_cast<std::add_pointer_t<capture_session*>>(_a[1]))); break;
        case 31: _t->captureCaptureFailed((*reinterpret_cast<std::add_pointer_t<capture_session*>>(_a[1]))); break;
        case 32: _t->captureFileOpened(); break;
        case 33: _t->captureFileReadFinished(); break;
        case 34: _t->captureFileClosing(); break;
        case 35: _t->captureFileClosed(); break;
        case 36: _t->launchRLCGraph((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint8_t>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<uint16_t>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<uint8_t>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<uint16_t>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<uint16_t>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<uint8_t>>(_a[7]))); break;
        case 37: _t->rtpPlayerDialogReplaceRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 38: _t->rtpPlayerDialogAddRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 39: _t->rtpPlayerDialogRemoveRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 40: _t->rtpAnalysisDialogReplaceRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 41: _t->rtpAnalysisDialogAddRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 42: _t->rtpAnalysisDialogRemoveRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 43: _t->rtpStreamsDialogSelectRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 44: _t->rtpStreamsDialogDeselectRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 45: _t->captureEventHandler((*reinterpret_cast<std::add_pointer_t<CaptureEvent>>(_a[1]))); break;
        case 46: _t->initViewColorizeMenu(); break;
        case 47: _t->initConversationMenus(); break;
        case 48: { bool _r = _t->addExportObjectsMenuItem((*reinterpret_cast<std::add_pointer_t<const void*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<void*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<void*>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 49: _t->initExportObjectsMenus(); break;
        case 50: { bool _r = _t->addFollowStreamMenuItem((*reinterpret_cast<std::add_pointer_t<const void*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<void*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<void*>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->initFollowStreamMenus(); break;
        case 52: _t->startCapture((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 53: _t->startCapture(); break;
        case 54: _t->pushLiveCaptureInProgress(); break;
        case 55: _t->popLiveCaptureInProgress(); break;
        case 56: _t->stopCapture(); break;
        case 57: _t->loadWindowGeometry(); break;
        case 58: _t->saveWindowGeometry(); break;
        case 59: _t->mainStackChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 60: _t->updateRecentCaptures(); break;
        case 61: _t->recentActionTriggered(); break;
        case 62: _t->addPacketComment(); break;
        case 63: _t->editPacketComment(); break;
        case 64: _t->deletePacketComment(); break;
        case 65: _t->deleteCommentsFromPackets(); break;
        case 66: { QString _r = _t->commentToMenuText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 67: { QString _r = _t->commentToMenuText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 68: _t->setEditCommentsMenu(); break;
        case 69: _t->setMenusForSelectedPacket(); break;
        case 70: _t->setMenusForSelectedTreeRow((*reinterpret_cast<std::add_pointer_t<FieldInformation*>>(_a[1]))); break;
        case 71: _t->setMenusForSelectedTreeRow(); break;
        case 72: _t->interfaceSelectionChanged(); break;
        case 73: _t->captureFilterSyntaxChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 74: _t->redissectPackets(); break;
        case 75: _t->checkDisplayFilter(); break;
        case 76: _t->fieldsChanged(); break;
        case 77: _t->reloadLuaPlugins(); break;
        case 78: _t->showAccordionFrame((*reinterpret_cast<std::add_pointer_t<AccordionFrame*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 79: _t->showAccordionFrame((*reinterpret_cast<std::add_pointer_t<AccordionFrame*>>(_a[1]))); break;
        case 80: _t->showColumnEditor((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 81: _t->showPreferenceEditor(); break;
        case 82: _t->addStatsPluginsToMenu(); break;
        case 83: _t->addDynamicMenus(); break;
        case 84: _t->reloadDynamicMenus(); break;
        case 85: _t->addPluginIFStructures(); break;
        case 86: { QMenu* _r = _t->searchSubMenu((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QMenu**>(_a[0]) = std::move(_r); }  break;
        case 87: _t->activatePluginIFToolbar((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 88: _t->updateTitlebar(); break;
        case 89: _t->startInterfaceCapture((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 90: _t->applyGlobalCommandLineOptions(); break;
        case 91: _t->setFeaturesEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 92: _t->setFeaturesEnabled(); break;
        case 93: _t->on_actionNewDisplayFilterExpression_triggered(); break;
        case 94: _t->onFilterSelected((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 95: _t->onFilterPreferences(); break;
        case 96: _t->onFilterEdit((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 97: _t->queuedFilterAction((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<FilterAction::Action>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<FilterAction::ActionType>>(_a[3]))); break;
        case 98: _t->openStatCommandDialog((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<const char*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<void*>>(_a[3]))); break;
        case 99: _t->openTapParameterDialog((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<void*>>(_a[3]))); break;
        case 100: _t->openTapParameterDialog(); break;
        case 101: _t->connectFileMenuActions(); break;
        case 102: _t->exportPacketBytes(); break;
        case 103: _t->exportPDU(); break;
        case 104: _t->stripPacketHeaders(); break;
        case 105: _t->exportTLSSessionKeys(); break;
        case 106: _t->printFile(); break;
        case 107: _t->connectEditMenuActions(); break;
        case 108: _t->copySelectedItems((*reinterpret_cast<std::add_pointer_t<WiresharkMainWindow::CopySelected>>(_a[1]))); break;
        case 109: _t->findPacket(); break;
        case 110: _t->editTimeShift(); break;
        case 111: _t->editConfigurationProfiles(); break;
        case 112: _t->editTimeShiftFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 113: _t->addPacketCommentFinished((*reinterpret_cast<std::add_pointer_t<PacketCommentDialog*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 114: _t->editPacketCommentFinished((*reinterpret_cast<std::add_pointer_t<PacketCommentDialog*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[3]))); break;
        case 115: _t->deleteAllPacketComments(); break;
        case 116: _t->deleteAllPacketCommentsFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 117: _t->injectSecrets(); break;
        case 118: _t->discardAllSecrets(); break;
        case 119: _t->discardAllSecretsFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 120: _t->showPreferencesDialog((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 121: _t->connectViewMenuActions(); break;
        case 122: _t->showHideMainWidgets((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 123: _t->setTimestampFormat((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 124: _t->setTimestampPrecision((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 125: _t->setTimeDisplaySecondsWithHoursAndMinutes((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 126: _t->editResolvedName(); break;
        case 127: _t->setNameResolution(); break;
        case 128: _t->zoomText(); break;
        case 129: _t->showColoringRulesDialog(); break;
        case 130: _t->colorizeConversation((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 131: _t->colorizeConversation(); break;
        case 132: _t->colorizeActionTriggered(); break;
        case 133: _t->openPacketDialog((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 134: _t->openPacketDialog(); break;
        case 135: _t->reloadCaptureFileAsFormatOrCapture(); break;
        case 136: _t->reloadCaptureFile(); break;
        case 137: _t->connectGoMenuActions(); break;
        case 138: _t->setPreviousFocus(); break;
        case 139: _t->resetPreviousFocus(); break;
        case 140: _t->connectCaptureMenuActions(); break;
        case 141: _t->startCaptureTriggered(); break;
        case 142: _t->connectAnalyzeMenuActions(); break;
        case 143: _t->matchFieldFilter((*reinterpret_cast<std::add_pointer_t<FilterAction::Action>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<FilterAction::ActionType>>(_a[2]))); break;
        case 144: _t->applyFieldAsColumn(); break;
        case 145: _t->filterMenuAboutToShow(); break;
        case 146: _t->applyConversationFilter(); break;
        case 147: _t->applyExportObject(); break;
        case 148: _t->openFollowStreamDialog((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[4]))); break;
        case 149: _t->openFollowStreamDialog((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[3]))); break;
        case 150: _t->openFollowStreamDialog((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 151: _t->statCommandExpertInfo((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<void*>>(_a[2]))); break;
        case 152: _t->connectHelpMenuActions(); break;
        case 153: _t->goToCancelClicked(); break;
        case 154: _t->goToGoClicked(); break;
        case 155: _t->goToLineEditReturnPressed(); break;
        case 156: _t->connectStatisticsMenuActions(); break;
        case 157: _t->showResolvedAddressesDialog(); break;
        case 158: _t->showConversationsDialog(); break;
        case 159: _t->showEndpointsDialog(); break;
        case 160: _t->openTcpStreamDialog((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 161: _t->openSCTPAllAssocsDialog(); break;
        case 162: _t->on_actionSCTPShowAllAssociations_triggered(); break;
        case 163: _t->on_actionSCTPAnalyseThisAssociation_triggered(); break;
        case 164: _t->on_actionSCTPFilterThisAssociation_triggered(); break;
        case 165: _t->statCommandMulticastStatistics((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<void*>>(_a[2]))); break;
        case 166: _t->statCommandWlanStatistics((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<void*>>(_a[2]))); break;
        case 167: _t->openStatisticsTreeDialog((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1]))); break;
        case 168: _t->statCommandIOGraph((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<void*>>(_a[2]))); break;
        case 169: _t->showIOGraphDialog((*reinterpret_cast<std::add_pointer_t<io_graph_item_unit_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 170: _t->connectTelephonyMenuActions(); break;
        case 171: { RtpStreamDialog* _r = _t->openTelephonyRtpStreamsDialog();
            if (_a[0]) *reinterpret_cast<RtpStreamDialog**>(_a[0]) = std::move(_r); }  break;
        case 172: { RtpPlayerDialog* _r = _t->openTelephonyRtpPlayerDialog();
            if (_a[0]) *reinterpret_cast<RtpPlayerDialog**>(_a[0]) = std::move(_r); }  break;
        case 173: { RtpAnalysisDialog* _r = _t->openTelephonyRtpAnalysisDialog();
            if (_a[0]) *reinterpret_cast<RtpAnalysisDialog**>(_a[0]) = std::move(_r); }  break;
        case 174: _t->statCommandLteMacStatistics((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<void*>>(_a[2]))); break;
        case 175: _t->statCommandLteRlcStatistics((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<void*>>(_a[2]))); break;
        case 176: _t->openRtpStreamAnalysisDialog(); break;
        case 177: _t->openRtpPlayerDialog(); break;
        case 178: _t->connectWirelessMenuActions(); break;
        case 179: _t->connectToolsMenuActions(); break;
        case 180: _t->externalMenuItemTriggered(); break;
        case 181: _t->on_actionContextWikiProtocolPage_triggered(); break;
        case 182: _t->on_actionContextFilterFieldReference_triggered(); break;
        case 183: _t->extcap_options_finished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 184: _t->showExtcapOptionsDialog((*reinterpret_cast<std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 185: { QString _r = _t->findRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 186: _t->openTLSKeylogDialog(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FieldInformation* >(); break;
            }
            break;
        case 70:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FieldInformation* >(); break;
            }
            break;
        case 122:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 123:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 124:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WiresharkMainWindow::*)()>(_a, &WiresharkMainWindow::captureChallengeRequested, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WiresharkMainWindow::*)(capture_file * )>(_a, &WiresharkMainWindow::setDissectedCaptureFile, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WiresharkMainWindow::*)()>(_a, &WiresharkMainWindow::closePacketDialogs, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (WiresharkMainWindow::*)()>(_a, &WiresharkMainWindow::reloadFields, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (WiresharkMainWindow::*)(_packet_info * )>(_a, &WiresharkMainWindow::packetInfoChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (WiresharkMainWindow::*)(const QByteArray )>(_a, &WiresharkMainWindow::fieldFilterChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (WiresharkMainWindow::*)(FieldInformation * )>(_a, &WiresharkMainWindow::fieldHighlight, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (WiresharkMainWindow::*)(int )>(_a, &WiresharkMainWindow::captureActive, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (WiresharkMainWindow::*)(rtpstream_id_t * )>(_a, &WiresharkMainWindow::selectRtpStream, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (WiresharkMainWindow::*)(rtpstream_id_t * )>(_a, &WiresharkMainWindow::deselectRtpStream, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (WiresharkMainWindow::*)(QString & , bool )>(_a, &WiresharkMainWindow::showExtcapOptions, 10))
            return;
    }
}

const QMetaObject *WiresharkMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WiresharkMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19WiresharkMainWindowE_t>.strings))
        return static_cast<void*>(this);
    return MainWindow::qt_metacast(_clname);
}

int WiresharkMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 187)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 187;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 187)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 187;
    }
    return _id;
}

// SIGNAL 0
void WiresharkMainWindow::captureChallengeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WiresharkMainWindow::setDissectedCaptureFile(capture_file * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void WiresharkMainWindow::closePacketDialogs()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WiresharkMainWindow::reloadFields()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WiresharkMainWindow::packetInfoChanged(_packet_info * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void WiresharkMainWindow::fieldFilterChanged(const QByteArray _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void WiresharkMainWindow::fieldHighlight(FieldInformation * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void WiresharkMainWindow::captureActive(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void WiresharkMainWindow::selectRtpStream(rtpstream_id_t * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void WiresharkMainWindow::deselectRtpStream(rtpstream_id_t * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void WiresharkMainWindow::showExtcapOptions(QString & _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1, _t2);
}
QT_WARNING_POP
