/****************************************************************************
** Meta object code from reading C++ file 'sequence_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/sequence_dialog.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sequence_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14SequenceDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto SequenceDialog::qt_create_metaobjectdata<qt_meta_tag_ZN14SequenceDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SequenceDialog",
        "rtpStreamsDialogSelectRtpStreams",
        "",
        "QList<rtpstream_id_t*>",
        "stream_infos",
        "rtpStreamsDialogDeselectRtpStreams",
        "rtpPlayerDialogReplaceRtpStreams",
        "stream_ids",
        "rtpPlayerDialogAddRtpStreams",
        "rtpPlayerDialogRemoveRtpStreams",
        "updateWidgets",
        "hScrollBarChanged",
        "value",
        "vScrollBarChanged",
        "xAxisChanged",
        "QCPRange",
        "range",
        "yAxisChanged",
        "showContextMenu",
        "QPoint",
        "pos",
        "diagramClicked",
        "QMouseEvent*",
        "event",
        "axisDoubleClicked",
        "QCPAxis*",
        "axis",
        "QCPAxis::SelectablePart",
        "part",
        "mouseReleased",
        "mouseMoved",
        "mouseWheeled",
        "QWheelEvent*",
        "fillDiagram",
        "resetView",
        "exportDiagram",
        "layoutAxisLabels",
        "addressChanged",
        "index",
        "displayFilterCheckBoxToggled",
        "checked",
        "on_buttonBox_clicked",
        "QAbstractButton*",
        "button",
        "on_actionGoToPacket_triggered",
        "on_actionGoToNextPacket_triggered",
        "on_actionGoToPreviousPacket_triggered",
        "on_flowComboBox_activated",
        "on_actionMoveRight10_triggered",
        "on_actionMoveLeft10_triggered",
        "on_actionMoveUp10_triggered",
        "on_actionMoveDown10_triggered",
        "on_actionMoveRight1_triggered",
        "on_actionMoveLeft1_triggered",
        "on_actionMoveUp1_triggered",
        "on_actionMoveDown1_triggered",
        "on_actionZoomIn_triggered",
        "on_actionZoomOut_triggered",
        "on_actionSelectRtpStreams_triggered",
        "on_actionDeselectRtpStreams_triggered",
        "on_buttonBox_helpRequested",
        "rtpPlayerReplace",
        "rtpPlayerAdd",
        "rtpPlayerRemove"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'rtpStreamsDialogSelectRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'rtpStreamsDialogDeselectRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'rtpPlayerDialogReplaceRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 7 },
        }}),
        // Signal 'rtpPlayerDialogAddRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 7 },
        }}),
        // Signal 'rtpPlayerDialogRemoveRtpStreams'
        QtMocHelpers::SignalData<void(QVector<rtpstream_id_t*>)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 7 },
        }}),
        // Slot 'updateWidgets'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'hScrollBarChanged'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'vScrollBarChanged'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'xAxisChanged'
        QtMocHelpers::SlotData<void(QCPRange)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Slot 'yAxisChanged'
        QtMocHelpers::SlotData<void(QCPRange)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Slot 'showContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'diagramClicked'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'axisDoubleClicked'
        QtMocHelpers::SlotData<void(QCPAxis *, QCPAxis::SelectablePart, QMouseEvent *)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 25, 26 }, { 0x80000000 | 27, 28 }, { 0x80000000 | 22, 23 },
        }}),
        // Slot 'mouseReleased'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'mouseMoved'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'mouseWheeled'
        QtMocHelpers::SlotData<void(QWheelEvent *)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 32, 23 },
        }}),
        // Slot 'fillDiagram'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'resetView'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'exportDiagram'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'layoutAxisLabels'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addressChanged'
        QtMocHelpers::SlotData<void(int)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 38 },
        }}),
        // Slot 'displayFilterCheckBoxToggled'
        QtMocHelpers::SlotData<void(bool)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 40 },
        }}),
        // Slot 'on_buttonBox_clicked'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 42, 43 },
        }}),
        // Slot 'on_actionGoToPacket_triggered'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGoToNextPacket_triggered'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGoToPreviousPacket_triggered'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_flowComboBox_activated'
        QtMocHelpers::SlotData<void(int)>(47, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 38 },
        }}),
        // Slot 'on_actionMoveRight10_triggered'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveLeft10_triggered'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveUp10_triggered'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveDown10_triggered'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveRight1_triggered'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveLeft1_triggered'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveUp1_triggered'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveDown1_triggered'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomIn_triggered'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomOut_triggered'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSelectRtpStreams_triggered'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDeselectRtpStreams_triggered'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_helpRequested'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'rtpPlayerReplace'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'rtpPlayerAdd'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'rtpPlayerRemove'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SequenceDialog, qt_meta_tag_ZN14SequenceDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SequenceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<WiresharkDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SequenceDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SequenceDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14SequenceDialogE_t>.metaTypes,
    nullptr
} };

void SequenceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SequenceDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->rtpStreamsDialogSelectRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 1: _t->rtpStreamsDialogDeselectRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 2: _t->rtpPlayerDialogReplaceRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 3: _t->rtpPlayerDialogAddRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 4: _t->rtpPlayerDialogRemoveRtpStreams((*reinterpret_cast<std::add_pointer_t<QList<rtpstream_id_t*>>>(_a[1]))); break;
        case 5: _t->updateWidgets(); break;
        case 6: _t->hScrollBarChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->vScrollBarChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->xAxisChanged((*reinterpret_cast<std::add_pointer_t<QCPRange>>(_a[1]))); break;
        case 9: _t->yAxisChanged((*reinterpret_cast<std::add_pointer_t<QCPRange>>(_a[1]))); break;
        case 10: _t->showContextMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 11: _t->diagramClicked((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 12: _t->axisDoubleClicked((*reinterpret_cast<std::add_pointer_t<QCPAxis*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QCPAxis::SelectablePart>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[3]))); break;
        case 13: _t->mouseReleased((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 14: _t->mouseMoved((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 15: _t->mouseWheeled((*reinterpret_cast<std::add_pointer_t<QWheelEvent*>>(_a[1]))); break;
        case 16: _t->fillDiagram(); break;
        case 17: _t->resetView(); break;
        case 18: _t->exportDiagram(); break;
        case 19: _t->layoutAxisLabels(); break;
        case 20: _t->addressChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->displayFilterCheckBoxToggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->on_buttonBox_clicked((*reinterpret_cast<std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 23: _t->on_actionGoToPacket_triggered(); break;
        case 24: _t->on_actionGoToNextPacket_triggered(); break;
        case 25: _t->on_actionGoToPreviousPacket_triggered(); break;
        case 26: _t->on_flowComboBox_activated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->on_actionMoveRight10_triggered(); break;
        case 28: _t->on_actionMoveLeft10_triggered(); break;
        case 29: _t->on_actionMoveUp10_triggered(); break;
        case 30: _t->on_actionMoveDown10_triggered(); break;
        case 31: _t->on_actionMoveRight1_triggered(); break;
        case 32: _t->on_actionMoveLeft1_triggered(); break;
        case 33: _t->on_actionMoveUp1_triggered(); break;
        case 34: _t->on_actionMoveDown1_triggered(); break;
        case 35: _t->on_actionZoomIn_triggered(); break;
        case 36: _t->on_actionZoomOut_triggered(); break;
        case 37: _t->on_actionSelectRtpStreams_triggered(); break;
        case 38: _t->on_actionDeselectRtpStreams_triggered(); break;
        case 39: _t->on_buttonBox_helpRequested(); break;
        case 40: _t->rtpPlayerReplace(); break;
        case 41: _t->rtpPlayerAdd(); break;
        case 42: _t->rtpPlayerRemove(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis::SelectablePart >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SequenceDialog::*)(QVector<rtpstream_id_t*> )>(_a, &SequenceDialog::rtpStreamsDialogSelectRtpStreams, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SequenceDialog::*)(QVector<rtpstream_id_t*> )>(_a, &SequenceDialog::rtpStreamsDialogDeselectRtpStreams, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SequenceDialog::*)(QVector<rtpstream_id_t*> )>(_a, &SequenceDialog::rtpPlayerDialogReplaceRtpStreams, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SequenceDialog::*)(QVector<rtpstream_id_t*> )>(_a, &SequenceDialog::rtpPlayerDialogAddRtpStreams, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SequenceDialog::*)(QVector<rtpstream_id_t*> )>(_a, &SequenceDialog::rtpPlayerDialogRemoveRtpStreams, 4))
            return;
    }
}

const QMetaObject *SequenceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SequenceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SequenceDialogE_t>.strings))
        return static_cast<void*>(this);
    return WiresharkDialog::qt_metacast(_clname);
}

int SequenceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
    return _id;
}

// SIGNAL 0
void SequenceDialog::rtpStreamsDialogSelectRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void SequenceDialog::rtpStreamsDialogDeselectRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void SequenceDialog::rtpPlayerDialogReplaceRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void SequenceDialog::rtpPlayerDialogAddRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void SequenceDialog::rtpPlayerDialogRemoveRtpStreams(QVector<rtpstream_id_t*> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
