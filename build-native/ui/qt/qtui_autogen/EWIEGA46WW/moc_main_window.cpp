/****************************************************************************
** Meta object code from reading C++ file 'main_window.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/main_window.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "setCaptureFile",
        "",
        "capture_file*",
        "cf",
        "fieldSelected",
        "FieldInformation*",
        "framesSelected",
        "QList<int>",
        "filterAction",
        "filter",
        "FilterAction::Action",
        "action",
        "FilterAction::ActionType",
        "type",
        "displayFilterSuccess",
        "success",
        "setDisplayFilter",
        "filterType",
        "filterPackets",
        "showPreferencesDialog",
        "module_name",
        "showIOGraphDialog",
        "io_graph_item_unit_t",
        "layoutPanes",
        "applyRecentPaneGeometry",
        "addDisplayFilterTranslationActions",
        "QMenu*",
        "copy_menu",
        "updateDisplayFilterTranslationActions",
        "df_text",
        "copyDisplayFilterTranslation"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'setCaptureFile'
        QtMocHelpers::SignalData<void(capture_file *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'fieldSelected'
        QtMocHelpers::SignalData<void(FieldInformation *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Signal 'framesSelected'
        QtMocHelpers::SignalData<void(QList<int>)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Signal 'filterAction'
        QtMocHelpers::SignalData<void(QString, FilterAction::Action, FilterAction::ActionType)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 }, { 0x80000000 | 11, 12 }, { 0x80000000 | 13, 14 },
        }}),
        // Signal 'displayFilterSuccess'
        QtMocHelpers::SignalData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Slot 'setDisplayFilter'
        QtMocHelpers::SlotData<void(QString, FilterAction::Action, FilterAction::ActionType)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 }, { 0x80000000 | 11, 12 }, { 0x80000000 | 13, 18 },
        }}),
        // Slot 'filterPackets'
        QtMocHelpers::SlotData<void(QString, bool)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 }, { QMetaType::Bool, 2 },
        }}),
        // Slot 'showPreferencesDialog'
        QtMocHelpers::SlotData<void(QString)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 21 },
        }}),
        // Slot 'showIOGraphDialog'
        QtMocHelpers::SlotData<void(io_graph_item_unit_t, QString)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 23, 2 }, { QMetaType::QString, 2 },
        }}),
        // Slot 'layoutPanes'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'applyRecentPaneGeometry'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addDisplayFilterTranslationActions'
        QtMocHelpers::SlotData<void(QMenu *)>(26, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Slot 'updateDisplayFilterTranslationActions'
        QtMocHelpers::SlotData<void(const QString &)>(29, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 30 },
        }}),
        // Slot 'copyDisplayFilterTranslation'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setCaptureFile((*reinterpret_cast<std::add_pointer_t<capture_file*>>(_a[1]))); break;
        case 1: _t->fieldSelected((*reinterpret_cast<std::add_pointer_t<FieldInformation*>>(_a[1]))); break;
        case 2: _t->framesSelected((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 3: _t->filterAction((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<FilterAction::Action>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<FilterAction::ActionType>>(_a[3]))); break;
        case 4: _t->displayFilterSuccess((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setDisplayFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<FilterAction::Action>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<FilterAction::ActionType>>(_a[3]))); break;
        case 6: _t->filterPackets((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 7: _t->showPreferencesDialog((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->showIOGraphDialog((*reinterpret_cast<std::add_pointer_t<io_graph_item_unit_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->layoutPanes(); break;
        case 10: _t->applyRecentPaneGeometry(); break;
        case 11: _t->addDisplayFilterTranslationActions((*reinterpret_cast<std::add_pointer_t<QMenu*>>(_a[1]))); break;
        case 12: _t->updateDisplayFilterTranslationActions((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->copyDisplayFilterTranslation(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FieldInformation* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(capture_file * )>(_a, &MainWindow::setCaptureFile, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(FieldInformation * )>(_a, &MainWindow::fieldSelected, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(QList<int> )>(_a, &MainWindow::framesSelected, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(QString , FilterAction::Action , FilterAction::ActionType )>(_a, &MainWindow::filterAction, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(bool )>(_a, &MainWindow::displayFilterSuccess, 4))
            return;
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::setCaptureFile(capture_file * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void MainWindow::fieldSelected(FieldInformation * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void MainWindow::framesSelected(QList<int> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void MainWindow::filterAction(QString _t1, FilterAction::Action _t2, FilterAction::ActionType _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3);
}

// SIGNAL 4
void MainWindow::displayFilterSuccess(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
