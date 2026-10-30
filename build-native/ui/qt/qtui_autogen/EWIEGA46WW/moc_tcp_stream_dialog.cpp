/****************************************************************************
** Meta object code from reading C++ file 'tcp_stream_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/tcp_stream_dialog.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcp_stream_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN25QCPErrorBarsNotSelectableE_t {};
} // unnamed namespace

template <> constexpr inline auto QCPErrorBarsNotSelectable::qt_create_metaobjectdata<qt_meta_tag_ZN25QCPErrorBarsNotSelectableE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCPErrorBarsNotSelectable"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QCPErrorBarsNotSelectable, qt_meta_tag_ZN25QCPErrorBarsNotSelectableE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCPErrorBarsNotSelectable::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPErrorBars::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QCPErrorBarsNotSelectableE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QCPErrorBarsNotSelectableE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25QCPErrorBarsNotSelectableE_t>.metaTypes,
    nullptr
} };

void QCPErrorBarsNotSelectable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCPErrorBarsNotSelectable *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QCPErrorBarsNotSelectable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPErrorBarsNotSelectable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QCPErrorBarsNotSelectableE_t>.strings))
        return static_cast<void*>(this);
    return QCPErrorBars::qt_metacast(_clname);
}

int QCPErrorBarsNotSelectable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPErrorBars::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN15TCPStreamDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto TCPStreamDialog::qt_create_metaobjectdata<qt_meta_tag_ZN15TCPStreamDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TCPStreamDialog",
        "goToPacket",
        "",
        "packet_num",
        "setCaptureFile",
        "capture_file*",
        "cf",
        "updateGraph",
        "showContextMenu",
        "QPoint",
        "pos",
        "graphClicked",
        "QMouseEvent*",
        "event",
        "axisClicked",
        "QCPAxis*",
        "axis",
        "QCPAxis::SelectablePart",
        "part",
        "mouseMoved",
        "mouseReleased",
        "transformYRange",
        "QCPRange",
        "y_range1",
        "on_buttonBox_accepted",
        "on_graphTypeComboBox_currentIndexChanged",
        "index",
        "on_resetButton_clicked",
        "on_streamNumberSpinBox_valueChanged",
        "new_stream",
        "on_streamNumberSpinBox_editingFinished",
        "on_maWindowSizeSpinBox_valueChanged",
        "new_ma_size",
        "on_maWindowSizeSpinBox_editingFinished",
        "on_selectSACKsCheckBox_stateChanged",
        "state",
        "on_otherDirectionButton_clicked",
        "on_dragRadioButton_toggled",
        "checked",
        "on_zoomRadioButton_toggled",
        "on_bySeqNumberCheckBox_stateChanged",
        "on_showSegLengthCheckBox_stateChanged",
        "on_showThroughputCheckBox_stateChanged",
        "on_showGoodputCheckBox_stateChanged",
        "on_showRcvWinCheckBox_stateChanged",
        "on_showBytesOutCheckBox_stateChanged",
        "on_actionZoomIn_triggered",
        "on_actionZoomInX_triggered",
        "on_actionZoomInY_triggered",
        "on_actionZoomOut_triggered",
        "on_actionZoomOutX_triggered",
        "on_actionZoomOutY_triggered",
        "on_actionReset_triggered",
        "on_actionMoveRight10_triggered",
        "on_actionMoveLeft10_triggered",
        "on_actionMoveUp10_triggered",
        "on_actionMoveDown10_triggered",
        "on_actionMoveRight1_triggered",
        "on_actionMoveLeft1_triggered",
        "on_actionMoveUp1_triggered",
        "on_actionMoveDown1_triggered",
        "on_actionNextStream_triggered",
        "on_actionPreviousStream_triggered",
        "on_actionSwitchDirection_triggered",
        "on_actionGoToPacket_triggered",
        "on_actionDragZoom_triggered",
        "on_actionToggleSequenceNumbers_triggered",
        "on_actionToggleTimeOrigin_triggered",
        "on_actionRoundTripTime_triggered",
        "on_actionThroughput_triggered",
        "on_actionStevens_triggered",
        "on_actionTcptrace_triggered",
        "on_actionWindowScaling_triggered",
        "on_buttonBox_helpRequested"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'goToPacket'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'setCaptureFile'
        QtMocHelpers::SlotData<void(capture_file *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'updateGraph'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'graphClicked'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'axisClicked'
        QtMocHelpers::SlotData<void(QCPAxis *, QCPAxis::SelectablePart, QMouseEvent *)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 15, 16 }, { 0x80000000 | 17, 18 }, { 0x80000000 | 12, 13 },
        }}),
        // Slot 'mouseMoved'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'mouseReleased'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'transformYRange'
        QtMocHelpers::SlotData<void(const QCPRange &)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'on_buttonBox_accepted'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_graphTypeComboBox_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Slot 'on_resetButton_clicked'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_streamNumberSpinBox_valueChanged'
        QtMocHelpers::SlotData<void(int)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 29 },
        }}),
        // Slot 'on_streamNumberSpinBox_editingFinished'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_maWindowSizeSpinBox_valueChanged'
        QtMocHelpers::SlotData<void(double)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 32 },
        }}),
        // Slot 'on_maWindowSizeSpinBox_editingFinished'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_selectSACKsCheckBox_stateChanged'
        QtMocHelpers::SlotData<void(int)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 35 },
        }}),
        // Slot 'on_otherDirectionButton_clicked'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_dragRadioButton_toggled'
        QtMocHelpers::SlotData<void(bool)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 38 },
        }}),
        // Slot 'on_zoomRadioButton_toggled'
        QtMocHelpers::SlotData<void(bool)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 38 },
        }}),
        // Slot 'on_bySeqNumberCheckBox_stateChanged'
        QtMocHelpers::SlotData<void(int)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 35 },
        }}),
        // Slot 'on_showSegLengthCheckBox_stateChanged'
        QtMocHelpers::SlotData<void(int)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 35 },
        }}),
        // Slot 'on_showThroughputCheckBox_stateChanged'
        QtMocHelpers::SlotData<void(int)>(42, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 35 },
        }}),
        // Slot 'on_showGoodputCheckBox_stateChanged'
        QtMocHelpers::SlotData<void(int)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 35 },
        }}),
        // Slot 'on_showRcvWinCheckBox_stateChanged'
        QtMocHelpers::SlotData<void(int)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 35 },
        }}),
        // Slot 'on_showBytesOutCheckBox_stateChanged'
        QtMocHelpers::SlotData<void(int)>(45, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 35 },
        }}),
        // Slot 'on_actionZoomIn_triggered'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomInX_triggered'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomInY_triggered'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomOut_triggered'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomOutX_triggered'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomOutY_triggered'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionReset_triggered'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveRight10_triggered'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveLeft10_triggered'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveUp10_triggered'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveDown10_triggered'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveRight1_triggered'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveLeft1_triggered'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveUp1_triggered'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveDown1_triggered'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNextStream_triggered'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPreviousStream_triggered'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSwitchDirection_triggered'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGoToPacket_triggered'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDragZoom_triggered'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionToggleSequenceNumbers_triggered'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionToggleTimeOrigin_triggered'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRoundTripTime_triggered'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionThroughput_triggered'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionStevens_triggered'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionTcptrace_triggered'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionWindowScaling_triggered'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_helpRequested'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TCPStreamDialog, qt_meta_tag_ZN15TCPStreamDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TCPStreamDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<GeometryStateDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15TCPStreamDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15TCPStreamDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15TCPStreamDialogE_t>.metaTypes,
    nullptr
} };

void TCPStreamDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TCPStreamDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->goToPacket((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->setCaptureFile((*reinterpret_cast<std::add_pointer_t<capture_file*>>(_a[1]))); break;
        case 2: _t->updateGraph(); break;
        case 3: _t->showContextMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 4: _t->graphClicked((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 5: _t->axisClicked((*reinterpret_cast<std::add_pointer_t<QCPAxis*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QCPAxis::SelectablePart>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[3]))); break;
        case 6: _t->mouseMoved((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 7: _t->mouseReleased((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 8: _t->transformYRange((*reinterpret_cast<std::add_pointer_t<QCPRange>>(_a[1]))); break;
        case 9: _t->on_buttonBox_accepted(); break;
        case 10: _t->on_graphTypeComboBox_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_resetButton_clicked(); break;
        case 12: _t->on_streamNumberSpinBox_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_streamNumberSpinBox_editingFinished(); break;
        case 14: _t->on_maWindowSizeSpinBox_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 15: _t->on_maWindowSizeSpinBox_editingFinished(); break;
        case 16: _t->on_selectSACKsCheckBox_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_otherDirectionButton_clicked(); break;
        case 18: _t->on_dragRadioButton_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->on_zoomRadioButton_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->on_bySeqNumberCheckBox_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->on_showSegLengthCheckBox_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->on_showThroughputCheckBox_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->on_showGoodputCheckBox_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->on_showRcvWinCheckBox_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->on_showBytesOutCheckBox_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->on_actionZoomIn_triggered(); break;
        case 27: _t->on_actionZoomInX_triggered(); break;
        case 28: _t->on_actionZoomInY_triggered(); break;
        case 29: _t->on_actionZoomOut_triggered(); break;
        case 30: _t->on_actionZoomOutX_triggered(); break;
        case 31: _t->on_actionZoomOutY_triggered(); break;
        case 32: _t->on_actionReset_triggered(); break;
        case 33: _t->on_actionMoveRight10_triggered(); break;
        case 34: _t->on_actionMoveLeft10_triggered(); break;
        case 35: _t->on_actionMoveUp10_triggered(); break;
        case 36: _t->on_actionMoveDown10_triggered(); break;
        case 37: _t->on_actionMoveRight1_triggered(); break;
        case 38: _t->on_actionMoveLeft1_triggered(); break;
        case 39: _t->on_actionMoveUp1_triggered(); break;
        case 40: _t->on_actionMoveDown1_triggered(); break;
        case 41: _t->on_actionNextStream_triggered(); break;
        case 42: _t->on_actionPreviousStream_triggered(); break;
        case 43: _t->on_actionSwitchDirection_triggered(); break;
        case 44: _t->on_actionGoToPacket_triggered(); break;
        case 45: _t->on_actionDragZoom_triggered(); break;
        case 46: _t->on_actionToggleSequenceNumbers_triggered(); break;
        case 47: _t->on_actionToggleTimeOrigin_triggered(); break;
        case 48: _t->on_actionRoundTripTime_triggered(); break;
        case 49: _t->on_actionThroughput_triggered(); break;
        case 50: _t->on_actionStevens_triggered(); break;
        case 51: _t->on_actionTcptrace_triggered(); break;
        case 52: _t->on_actionWindowScaling_triggered(); break;
        case 53: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis::SelectablePart >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TCPStreamDialog::*)(int )>(_a, &TCPStreamDialog::goToPacket, 0))
            return;
    }
}

const QMetaObject *TCPStreamDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TCPStreamDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15TCPStreamDialogE_t>.strings))
        return static_cast<void*>(this);
    return GeometryStateDialog::qt_metacast(_clname);
}

int TCPStreamDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeometryStateDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void TCPStreamDialog::goToPacket(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
