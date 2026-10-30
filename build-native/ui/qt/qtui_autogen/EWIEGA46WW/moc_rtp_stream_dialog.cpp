/****************************************************************************
** Meta object code from reading C++ file 'rtp_stream_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/rtp_stream_dialog.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rtp_stream_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15RtpStreamDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto RtpStreamDialog::qt_create_metaobjectdata<qt_meta_tag_ZN15RtpStreamDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "RtpStreamDialog",
        "packetsMarked",
        "",
        "updateFilter",
        "filter",
        "force",
        "goToPacket",
        "packet_num",
        "rtpPlayerDialogReplaceRtpStreams",
        "QList<rtpstream_id_t*>",
        "stream_ids",
        "rtpPlayerDialogAddRtpStreams",
        "rtpPlayerDialogRemoveRtpStreams",
        "rtpAnalysisDialogReplaceRtpStreams",
        "stream_infos",
        "rtpAnalysisDialogAddRtpStreams",
        "rtpAnalysisDialogRemoveRtpStreams",
        "displayFilterSuccess",
        "success",
        "rtpPlayerReplace",
        "rtpPlayerAdd",
        "rtpPlayerRemove",
        "rtpAnalysisReplace",
        "rtpAnalysisAdd",
        "rtpAnalysisRemove",
        "showStreamMenu",
        "QPoint",
        "pos",
        "on_actionCopyAsCsv_triggered",
        "on_actionCopyAsYaml_triggered",
        "on_actionFindReverseNormal_triggered",
        "on_actionFindReversePair_triggered",
        "on_actionFindReverseSingle_triggered",
        "on_actionGoToSetup_triggered",
        "on_actionMarkPackets_triggered",
        "on_actionPrepareFilter_triggered",
        "on_streamTreeWidget_itemSelectionChanged",
        "on_buttonBox_helpRequested",
        "on_actionExportAsRtpDump_triggered",
        "captureEvent",
        "CaptureEvent",
        "e",
        "displayFilterCheckBoxToggled",
        "checked",
        "on_todCheckBox_toggled",
        "on_actionSelectAll_triggered",
        "on_actionSelectInvert_triggered",
        "on_actionSelectNone_triggered",
        "on_actionAnalyze_triggered"
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
        // Signal 'rtpPlayerDialogReplaceRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'rtpPlayerDialogAddRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'rtpPlayerDialogRemoveRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'rtpAnalysisDialogReplaceRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 14 },
        }}),
        // Signal 'rtpAnalysisDialogAddRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 14 },
        }}),
        // Signal 'rtpAnalysisDialogRemoveRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 14 },
        }}),
        // Slot 'displayFilterSuccess'
        QtMocHelpers::SlotData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'rtpPlayerReplace'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rtpPlayerAdd'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rtpPlayerRemove'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rtpAnalysisReplace'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rtpAnalysisAdd'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rtpAnalysisRemove'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showStreamMenu'
        QtMocHelpers::SlotData<void(QPoint)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 26, 27 },
        }}),
        // Slot 'on_actionCopyAsCsv_triggered'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopyAsYaml_triggered'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFindReverseNormal_triggered'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFindReversePair_triggered'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFindReverseSingle_triggered'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGoToSetup_triggered'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMarkPackets_triggered'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPrepareFilter_triggered'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_streamTreeWidget_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_helpRequested'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExportAsRtpDump_triggered'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'captureEvent'
        QtMocHelpers::SlotData<void(CaptureEvent)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 40, 41 },
        }}),
        // Slot 'displayFilterCheckBoxToggled'
        QtMocHelpers::SlotData<void(bool)>(42, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 43 },
        }}),
        // Slot 'on_todCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 43 },
        }}),
        // Slot 'on_actionSelectAll_triggered'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSelectInvert_triggered'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSelectNone_triggered'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAnalyze_triggered'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RtpStreamDialog, qt_meta_tag_ZN15RtpStreamDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject RtpStreamDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<WiresharkDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15RtpStreamDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15RtpStreamDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15RtpStreamDialogE_t>.metaTypes,
    nullptr
} };

void RtpStreamDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RtpStreamDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->packetsMarked(); break;
        case 1: _t->updateFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 2: _t->updateFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->goToPacket((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->rtpPlayerDialogReplaceRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 5: _t->rtpPlayerDialogAddRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 6: _t->rtpPlayerDialogRemoveRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 7: _t->rtpAnalysisDialogReplaceRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 8: _t->rtpAnalysisDialogAddRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 9: _t->rtpAnalysisDialogRemoveRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 10: _t->displayFilterSuccess((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->rtpPlayerReplace(); break;
        case 12: _t->rtpPlayerAdd(); break;
        case 13: _t->rtpPlayerRemove(); break;
        case 14: _t->rtpAnalysisReplace(); break;
        case 15: _t->rtpAnalysisAdd(); break;
        case 16: _t->rtpAnalysisRemove(); break;
        case 17: _t->showStreamMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 18: _t->on_actionCopyAsCsv_triggered(); break;
        case 19: _t->on_actionCopyAsYaml_triggered(); break;
        case 20: _t->on_actionFindReverseNormal_triggered(); break;
        case 21: _t->on_actionFindReversePair_triggered(); break;
        case 22: _t->on_actionFindReverseSingle_triggered(); break;
        case 23: _t->on_actionGoToSetup_triggered(); break;
        case 24: _t->on_actionMarkPackets_triggered(); break;
        case 25: _t->on_actionPrepareFilter_triggered(); break;
        case 26: _t->on_streamTreeWidget_itemSelectionChanged(); break;
        case 27: _t->on_buttonBox_helpRequested(); break;
        case 28: _t->on_actionExportAsRtpDump_triggered(); break;
        case 29: _t->captureEvent((*reinterpret_cast<std::add_pointer_t<CaptureEvent>>(_a[1]))); break;
        case 30: _t->displayFilterCheckBoxToggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->on_todCheckBox_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 32: _t->on_actionSelectAll_triggered(); break;
        case 33: _t->on_actionSelectInvert_triggered(); break;
        case 34: _t->on_actionSelectNone_triggered(); break;
        case 35: _t->on_actionAnalyze_triggered(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (RtpStreamDialog::*)()>(_a, &RtpStreamDialog::packetsMarked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpStreamDialog::*)(QString , bool )>(_a, &RtpStreamDialog::updateFilter, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpStreamDialog::*)(int )>(_a, &RtpStreamDialog::goToPacket, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpStreamDialog::*)(QVector<rtpstream_id_t*> )>(_a, &RtpStreamDialog::rtpPlayerDialogReplaceRtpStreams, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpStreamDialog::*)(QVector<rtpstream_id_t*> )>(_a, &RtpStreamDialog::rtpPlayerDialogAddRtpStreams, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpStreamDialog::*)(QVector<rtpstream_id_t*> )>(_a, &RtpStreamDialog::rtpPlayerDialogRemoveRtpStreams, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpStreamDialog::*)(QVector<rtpstream_id_t*> )>(_a, &RtpStreamDialog::rtpAnalysisDialogReplaceRtpStreams, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpStreamDialog::*)(QVector<rtpstream_id_t*> )>(_a, &RtpStreamDialog::rtpAnalysisDialogAddRtpStreams, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpStreamDialog::*)(QVector<rtpstream_id_t*> )>(_a, &RtpStreamDialog::rtpAnalysisDialogRemoveRtpStreams, 9))
            return;
    }
}

const QMetaObject *RtpStreamDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RtpStreamDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15RtpStreamDialogE_t>.strings))
        return static_cast<void*>(this);
    return WiresharkDialog::qt_metacast(_clname);
}

int RtpStreamDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void RtpStreamDialog::packetsMarked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RtpStreamDialog::updateFilter(QString _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 3
void RtpStreamDialog::goToPacket(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void RtpStreamDialog::rtpPlayerDialogReplaceRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void RtpStreamDialog::rtpPlayerDialogAddRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void RtpStreamDialog::rtpPlayerDialogRemoveRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void RtpStreamDialog::rtpAnalysisDialogReplaceRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void RtpStreamDialog::rtpAnalysisDialogAddRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void RtpStreamDialog::rtpAnalysisDialogRemoveRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}
QT_WARNING_POP
