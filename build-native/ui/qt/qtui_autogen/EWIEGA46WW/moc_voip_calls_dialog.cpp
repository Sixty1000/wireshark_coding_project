/****************************************************************************
** Meta object code from reading C++ file 'voip_calls_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/voip_calls_dialog.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'voip_calls_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15VoipCallsDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto VoipCallsDialog::qt_create_metaobjectdata<qt_meta_tag_ZN15VoipCallsDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VoipCallsDialog",
        "updateFilter",
        "",
        "filter",
        "force",
        "captureFileChanged",
        "capture_file*",
        "cf",
        "goToPacket",
        "packet_num",
        "rtpPlayerDialogReplaceRtpStreams",
        "QList<rtpstream_id_t*>",
        "stream_ids",
        "rtpPlayerDialogAddRtpStreams",
        "rtpPlayerDialogRemoveRtpStreams",
        "rtpStreamsDialogSelectRtpStreams",
        "rtpStreamsDialogDeselectRtpStreams",
        "displayFilterSuccess",
        "success",
        "rtpPlayerReplace",
        "rtpPlayerAdd",
        "rtpPlayerRemove",
        "changeEvent",
        "QEvent*",
        "event",
        "selectAll",
        "selectNone",
        "copyAsCSV",
        "copyAsYAML",
        "switchTimeOfDay",
        "on_callTreeView_activated",
        "QModelIndex",
        "index",
        "on_buttonBox_clicked",
        "QAbstractButton*",
        "button",
        "on_buttonBox_helpRequested",
        "updateWidgets",
        "captureEvent",
        "CaptureEvent",
        "e",
        "displayFilterCheckBoxToggled",
        "checked",
        "on_actionSelectAll_triggered",
        "on_actionSelectInvert_triggered",
        "on_actionSelectNone_triggered",
        "on_actionSelectRtpStreams_triggered",
        "on_actionDeselectRtpStreams_triggered"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'updateFilter'
        QtMocHelpers::SignalData<void(QString, bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::Bool, 4 },
        }}),
        // Signal 'updateFilter'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'captureFileChanged'
        QtMocHelpers::SignalData<void(capture_file *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'goToPacket'
        QtMocHelpers::SignalData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Signal 'rtpPlayerDialogReplaceRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'rtpPlayerDialogAddRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'rtpPlayerDialogRemoveRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'rtpStreamsDialogSelectRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'rtpStreamsDialogDeselectRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
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
        // Slot 'changeEvent'
        QtMocHelpers::SlotData<void(QEvent *)>(22, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 23, 24 },
        }}),
        // Slot 'selectAll'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'selectNone'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copyAsCSV'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copyAsYAML'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'switchTimeOfDay'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_callTreeView_activated'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 31, 32 },
        }}),
        // Slot 'on_buttonBox_clicked'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(33, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 34, 35 },
        }}),
        // Slot 'on_buttonBox_helpRequested'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateWidgets'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'captureEvent'
        QtMocHelpers::SlotData<void(CaptureEvent)>(38, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 39, 40 },
        }}),
        // Slot 'displayFilterCheckBoxToggled'
        QtMocHelpers::SlotData<void(bool)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 42 },
        }}),
        // Slot 'on_actionSelectAll_triggered'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSelectInvert_triggered'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSelectNone_triggered'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSelectRtpStreams_triggered'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDeselectRtpStreams_triggered'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VoipCallsDialog, qt_meta_tag_ZN15VoipCallsDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VoipCallsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<WiresharkDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15VoipCallsDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15VoipCallsDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15VoipCallsDialogE_t>.metaTypes,
    nullptr
} };

void VoipCallsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VoipCallsDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->updateFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->captureFileChanged((*reinterpret_cast<std::add_pointer_t<capture_file*>>(_a[1]))); break;
        case 3: _t->goToPacket((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->rtpPlayerDialogReplaceRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 5: _t->rtpPlayerDialogAddRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 6: _t->rtpPlayerDialogRemoveRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 7: _t->rtpStreamsDialogSelectRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 8: _t->rtpStreamsDialogDeselectRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 9: _t->displayFilterSuccess((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->rtpPlayerReplace(); break;
        case 11: _t->rtpPlayerAdd(); break;
        case 12: _t->rtpPlayerRemove(); break;
        case 13: _t->changeEvent((*reinterpret_cast<std::add_pointer_t<QEvent*>>(_a[1]))); break;
        case 14: _t->selectAll(); break;
        case 15: _t->selectNone(); break;
        case 16: _t->copyAsCSV(); break;
        case 17: _t->copyAsYAML(); break;
        case 18: _t->switchTimeOfDay(); break;
        case 19: _t->on_callTreeView_activated((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 20: _t->on_buttonBox_clicked((*reinterpret_cast<std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 21: _t->on_buttonBox_helpRequested(); break;
        case 22: _t->updateWidgets(); break;
        case 23: _t->captureEvent((*reinterpret_cast<std::add_pointer_t<CaptureEvent>>(_a[1]))); break;
        case 24: _t->displayFilterCheckBoxToggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->on_actionSelectAll_triggered(); break;
        case 26: _t->on_actionSelectInvert_triggered(); break;
        case 27: _t->on_actionSelectNone_triggered(); break;
        case 28: _t->on_actionSelectRtpStreams_triggered(); break;
        case 29: _t->on_actionDeselectRtpStreams_triggered(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VoipCallsDialog::*)(QString , bool )>(_a, &VoipCallsDialog::updateFilter, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (VoipCallsDialog::*)(capture_file * )>(_a, &VoipCallsDialog::captureFileChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (VoipCallsDialog::*)(int )>(_a, &VoipCallsDialog::goToPacket, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (VoipCallsDialog::*)(QVector<rtpstream_id_t*> )>(_a, &VoipCallsDialog::rtpPlayerDialogReplaceRtpStreams, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (VoipCallsDialog::*)(QVector<rtpstream_id_t*> )>(_a, &VoipCallsDialog::rtpPlayerDialogAddRtpStreams, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (VoipCallsDialog::*)(QVector<rtpstream_id_t*> )>(_a, &VoipCallsDialog::rtpPlayerDialogRemoveRtpStreams, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (VoipCallsDialog::*)(QVector<rtpstream_id_t*> )>(_a, &VoipCallsDialog::rtpStreamsDialogSelectRtpStreams, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (VoipCallsDialog::*)(QVector<rtpstream_id_t*> )>(_a, &VoipCallsDialog::rtpStreamsDialogDeselectRtpStreams, 8))
            return;
    }
}

const QMetaObject *VoipCallsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VoipCallsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15VoipCallsDialogE_t>.strings))
        return static_cast<void*>(this);
    return WiresharkDialog::qt_metacast(_clname);
}

int VoipCallsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void VoipCallsDialog::updateFilter(QString _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 2
void VoipCallsDialog::captureFileChanged(capture_file * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void VoipCallsDialog::goToPacket(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void VoipCallsDialog::rtpPlayerDialogReplaceRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void VoipCallsDialog::rtpPlayerDialogAddRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void VoipCallsDialog::rtpPlayerDialogRemoveRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void VoipCallsDialog::rtpStreamsDialogSelectRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void VoipCallsDialog::rtpStreamsDialogDeselectRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}
QT_WARNING_POP
