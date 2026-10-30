/****************************************************************************
** Meta object code from reading C++ file 'io_graph_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/io_graph_dialog.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'io_graph_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7IOGraphE_t {};
} // unnamed namespace

template <> constexpr inline auto IOGraph::qt_create_metaobjectdata<qt_meta_tag_ZN7IOGraphE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "IOGraph",
        "requestReplot",
        "",
        "requestRecalc",
        "requestRetap",
        "recalcGraphData",
        "capture_file*",
        "cap_file",
        "captureEvent",
        "CaptureEvent",
        "e",
        "reloadValueUnitField"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'requestReplot'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestRecalc'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestRetap'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'recalcGraphData'
        QtMocHelpers::SlotData<void(capture_file *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'captureEvent'
        QtMocHelpers::SlotData<void(CaptureEvent)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'reloadValueUnitField'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<IOGraph, qt_meta_tag_ZN7IOGraphE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject IOGraph::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7IOGraphE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7IOGraphE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7IOGraphE_t>.metaTypes,
    nullptr
} };

void IOGraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IOGraph *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->requestReplot(); break;
        case 1: _t->requestRecalc(); break;
        case 2: _t->requestRetap(); break;
        case 3: _t->recalcGraphData((*reinterpret_cast<std::add_pointer_t<capture_file*>>(_a[1]))); break;
        case 4: _t->captureEvent((*reinterpret_cast<std::add_pointer_t<CaptureEvent>>(_a[1]))); break;
        case 5: _t->reloadValueUnitField(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (IOGraph::*)()>(_a, &IOGraph::requestReplot, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (IOGraph::*)()>(_a, &IOGraph::requestRecalc, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (IOGraph::*)()>(_a, &IOGraph::requestRetap, 2))
            return;
    }
}

const QMetaObject *IOGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IOGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7IOGraphE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int IOGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void IOGraph::requestReplot()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void IOGraph::requestRecalc()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void IOGraph::requestRetap()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
namespace {
struct qt_meta_tag_ZN13IOGraphDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto IOGraphDialog::qt_create_metaobjectdata<qt_meta_tag_ZN13IOGraphDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "IOGraphDialog",
        "goToPacket",
        "",
        "packet_num",
        "recalcGraphData",
        "capture_file*",
        "cap_file",
        "intervalChanged",
        "interval",
        "reloadValueUnitFields",
        "scheduleReplot",
        "now",
        "scheduleRecalc",
        "scheduleRetap",
        "reloadFields",
        "modelDataChanged",
        "QModelIndex",
        "topLeft",
        "bottomRight",
        "QList<int>",
        "roles",
        "modelRowsReset",
        "modelRowsInserted",
        "parent",
        "first",
        "last",
        "modelRowsRemoved",
        "modelRowsMoved",
        "sourceParent",
        "sourceStart",
        "sourceEnd",
        "destinationParent",
        "destinationRow",
        "applyChanges",
        "copyFromProfile",
        "filename",
        "updateWidgets",
        "showContextMenu",
        "QPoint",
        "pos",
        "graphClicked",
        "QMouseEvent*",
        "event",
        "mouseMoved",
        "mouseReleased",
        "selectedFrameChanged",
        "frames",
        "moveLegend",
        "resetAxes",
        "updateStatistics",
        "copyAsCsvClicked",
        "graphUatSelectionChanged",
        "QItemSelection",
        "selected",
        "deselected",
        "on_intervalComboBox_currentIndexChanged",
        "index",
        "on_todCheckBox_toggled",
        "checked",
        "on_graphUat_currentItemChanged",
        "current",
        "previous",
        "on_logCheckBox_toggled",
        "on_automaticUpdateCheckBox_toggled",
        "on_enableLegendCheckBox_toggled",
        "on_newToolButton_clicked",
        "on_deleteToolButton_clicked",
        "on_copyToolButton_clicked",
        "on_clearToolButton_clicked",
        "on_moveUpwardsToolButton_clicked",
        "on_moveDownwardsToolButton_clicked",
        "on_dragRadioButton_toggled",
        "on_zoomRadioButton_toggled",
        "on_actionReset_triggered",
        "on_actionZoomIn_triggered",
        "on_actionZoomInX_triggered",
        "on_actionZoomInY_triggered",
        "on_actionZoomOut_triggered",
        "on_actionZoomOutX_triggered",
        "on_actionZoomOutY_triggered",
        "on_actionMoveUp10_triggered",
        "on_actionMoveLeft10_triggered",
        "on_actionMoveRight10_triggered",
        "on_actionMoveDown10_triggered",
        "on_actionMoveUp1_triggered",
        "on_actionMoveLeft1_triggered",
        "on_actionMoveRight1_triggered",
        "on_actionMoveDown1_triggered",
        "on_actionGoToPacket_triggered",
        "on_actionDragZoom_triggered",
        "on_actionToggleTimeOrigin_triggered",
        "on_actionCrosshairs_triggered",
        "on_buttonBox_helpRequested",
        "on_buttonBox_accepted",
        "buttonBoxClicked",
        "QAbstractButton*",
        "button",
        "actionLegendTriggered"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'goToPacket'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'recalcGraphData'
        QtMocHelpers::SignalData<void(capture_file *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'intervalChanged'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Signal 'reloadValueUnitFields'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'scheduleReplot'
        QtMocHelpers::SlotData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Slot 'scheduleReplot'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'scheduleRecalc'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Slot 'scheduleRecalc'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'scheduleRetap'
        QtMocHelpers::SlotData<void(bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Slot 'scheduleRetap'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'reloadFields'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'modelDataChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &, const QVector<int> &)>(15, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 16, 17 }, { 0x80000000 | 16, 18 }, { 0x80000000 | 19, 20 },
        }}),
        // Slot 'modelRowsReset'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'modelRowsInserted'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(22, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 16, 23 }, { QMetaType::Int, 24 }, { QMetaType::Int, 25 },
        }}),
        // Slot 'modelRowsRemoved'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(26, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 16, 23 }, { QMetaType::Int, 24 }, { QMetaType::Int, 25 },
        }}),
        // Slot 'modelRowsMoved'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int, const QModelIndex &, int)>(27, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 16, 28 }, { QMetaType::Int, 29 }, { QMetaType::Int, 30 }, { 0x80000000 | 16, 31 },
            { QMetaType::Int, 32 },
        }}),
        // Slot 'applyChanges'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copyFromProfile'
        QtMocHelpers::SlotData<void(QString)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 35 },
        }}),
        // Slot 'updateWidgets'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 38, 39 },
        }}),
        // Slot 'graphClicked'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 41, 42 },
        }}),
        // Slot 'mouseMoved'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 41, 42 },
        }}),
        // Slot 'mouseReleased'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 41, 42 },
        }}),
        // Slot 'selectedFrameChanged'
        QtMocHelpers::SlotData<void(QList<int>)>(45, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 19, 46 },
        }}),
        // Slot 'moveLegend'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'resetAxes'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateStatistics'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copyAsCsvClicked'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'graphUatSelectionChanged'
        QtMocHelpers::SlotData<void(const QItemSelection &, const QItemSelection &)>(51, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 52, 53 }, { 0x80000000 | 52, 54 },
        }}),
        // Slot 'on_intervalComboBox_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(55, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 56 },
        }}),
        // Slot 'on_todCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(57, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 58 },
        }}),
        // Slot 'on_graphUat_currentItemChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &)>(59, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 16, 60 }, { 0x80000000 | 16, 61 },
        }}),
        // Slot 'on_logCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(62, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 58 },
        }}),
        // Slot 'on_automaticUpdateCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(63, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 58 },
        }}),
        // Slot 'on_enableLegendCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(64, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 58 },
        }}),
        // Slot 'on_newToolButton_clicked'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_deleteToolButton_clicked'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_copyToolButton_clicked'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_clearToolButton_clicked'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_moveUpwardsToolButton_clicked'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_moveDownwardsToolButton_clicked'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_dragRadioButton_toggled'
        QtMocHelpers::SlotData<void(bool)>(71, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 58 },
        }}),
        // Slot 'on_zoomRadioButton_toggled'
        QtMocHelpers::SlotData<void(bool)>(72, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 58 },
        }}),
        // Slot 'on_actionReset_triggered'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomIn_triggered'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomInX_triggered'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomInY_triggered'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomOut_triggered'
        QtMocHelpers::SlotData<void()>(77, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomOutX_triggered'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomOutY_triggered'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveUp10_triggered'
        QtMocHelpers::SlotData<void()>(80, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveLeft10_triggered'
        QtMocHelpers::SlotData<void()>(81, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveRight10_triggered'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveDown10_triggered'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveUp1_triggered'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveLeft1_triggered'
        QtMocHelpers::SlotData<void()>(85, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveRight1_triggered'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveDown1_triggered'
        QtMocHelpers::SlotData<void()>(87, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGoToPacket_triggered'
        QtMocHelpers::SlotData<void()>(88, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDragZoom_triggered'
        QtMocHelpers::SlotData<void()>(89, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionToggleTimeOrigin_triggered'
        QtMocHelpers::SlotData<void()>(90, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCrosshairs_triggered'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_helpRequested'
        QtMocHelpers::SlotData<void()>(92, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_accepted'
        QtMocHelpers::SlotData<void()>(93, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'buttonBoxClicked'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(94, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 95, 96 },
        }}),
        // Slot 'actionLegendTriggered'
        QtMocHelpers::SlotData<void(bool)>(97, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 58 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<IOGraphDialog, qt_meta_tag_ZN13IOGraphDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject IOGraphDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<WiresharkDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13IOGraphDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13IOGraphDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13IOGraphDialogE_t>.metaTypes,
    nullptr
} };

void IOGraphDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IOGraphDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->goToPacket((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->recalcGraphData((*reinterpret_cast<std::add_pointer_t<capture_file*>>(_a[1]))); break;
        case 2: _t->intervalChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->reloadValueUnitFields(); break;
        case 4: _t->scheduleReplot((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->scheduleReplot(); break;
        case 6: _t->scheduleRecalc((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->scheduleRecalc(); break;
        case 8: _t->scheduleRetap((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->scheduleRetap(); break;
        case 10: _t->reloadFields(); break;
        case 11: _t->modelDataChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[3]))); break;
        case 12: _t->modelRowsReset(); break;
        case 13: _t->modelRowsInserted((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 14: _t->modelRowsRemoved((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 15: _t->modelRowsMoved((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5]))); break;
        case 16: _t->applyChanges(); break;
        case 17: _t->copyFromProfile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->updateWidgets(); break;
        case 19: _t->showContextMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 20: _t->graphClicked((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 21: _t->mouseMoved((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 22: _t->mouseReleased((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 23: _t->selectedFrameChanged((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 24: _t->moveLegend(); break;
        case 25: _t->resetAxes(); break;
        case 26: _t->updateStatistics(); break;
        case 27: _t->copyAsCsvClicked(); break;
        case 28: _t->graphUatSelectionChanged((*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 29: _t->on_intervalComboBox_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->on_todCheckBox_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->on_graphUat_currentItemChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 32: _t->on_logCheckBox_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 33: _t->on_automaticUpdateCheckBox_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->on_enableLegendCheckBox_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 35: _t->on_newToolButton_clicked(); break;
        case 36: _t->on_deleteToolButton_clicked(); break;
        case 37: _t->on_copyToolButton_clicked(); break;
        case 38: _t->on_clearToolButton_clicked(); break;
        case 39: _t->on_moveUpwardsToolButton_clicked(); break;
        case 40: _t->on_moveDownwardsToolButton_clicked(); break;
        case 41: _t->on_dragRadioButton_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 42: _t->on_zoomRadioButton_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 43: _t->on_actionReset_triggered(); break;
        case 44: _t->on_actionZoomIn_triggered(); break;
        case 45: _t->on_actionZoomInX_triggered(); break;
        case 46: _t->on_actionZoomInY_triggered(); break;
        case 47: _t->on_actionZoomOut_triggered(); break;
        case 48: _t->on_actionZoomOutX_triggered(); break;
        case 49: _t->on_actionZoomOutY_triggered(); break;
        case 50: _t->on_actionMoveUp10_triggered(); break;
        case 51: _t->on_actionMoveLeft10_triggered(); break;
        case 52: _t->on_actionMoveRight10_triggered(); break;
        case 53: _t->on_actionMoveDown10_triggered(); break;
        case 54: _t->on_actionMoveUp1_triggered(); break;
        case 55: _t->on_actionMoveLeft1_triggered(); break;
        case 56: _t->on_actionMoveRight1_triggered(); break;
        case 57: _t->on_actionMoveDown1_triggered(); break;
        case 58: _t->on_actionGoToPacket_triggered(); break;
        case 59: _t->on_actionDragZoom_triggered(); break;
        case 60: _t->on_actionToggleTimeOrigin_triggered(); break;
        case 61: _t->on_actionCrosshairs_triggered(); break;
        case 62: _t->on_buttonBox_helpRequested(); break;
        case 63: _t->on_buttonBox_accepted(); break;
        case 64: _t->buttonBoxClicked((*reinterpret_cast<std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 65: _t->actionLegendTriggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (IOGraphDialog::*)(int )>(_a, &IOGraphDialog::goToPacket, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (IOGraphDialog::*)(capture_file * )>(_a, &IOGraphDialog::recalcGraphData, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (IOGraphDialog::*)(int )>(_a, &IOGraphDialog::intervalChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (IOGraphDialog::*)()>(_a, &IOGraphDialog::reloadValueUnitFields, 3))
            return;
    }
}

const QMetaObject *IOGraphDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IOGraphDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13IOGraphDialogE_t>.strings))
        return static_cast<void*>(this);
    return WiresharkDialog::qt_metacast(_clname);
}

int IOGraphDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 66)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 66;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 66)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 66;
    }
    return _id;
}

// SIGNAL 0
void IOGraphDialog::goToPacket(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void IOGraphDialog::recalcGraphData(capture_file * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void IOGraphDialog::intervalChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void IOGraphDialog::reloadValueUnitFields()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
