/****************************************************************************
** Meta object code from reading C++ file 'main_status_bar.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/main_status_bar.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_status_bar.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13MainStatusBarE_t {};
} // unnamed namespace

template <> constexpr inline auto MainStatusBar::qt_create_metaobjectdata<qt_meta_tag_ZN13MainStatusBarE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainStatusBar",
        "showExpertInfo",
        "",
        "editCaptureComment",
        "stopLoading",
        "setCaptureFile",
        "capture_file*",
        "cf",
        "selectedFieldChanged",
        "FieldInformation*",
        "highlightedFieldChanged",
        "selectedFrameChanged",
        "QList<int>",
        "updateCaptureStatistics",
        "capture_session*",
        "cap_session",
        "updateCaptureFixedStatistics",
        "captureEventHandler",
        "CaptureEvent",
        "ev",
        "appInitialized",
        "toggleBackground",
        "enabled",
        "setProfileName",
        "switchToProfile",
        "manageProfile",
        "showProfileMenu",
        "QPoint",
        "global_pos",
        "Qt::MouseButton",
        "button"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showExpertInfo'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'editCaptureComment'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'stopLoading'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setCaptureFile'
        QtMocHelpers::SlotData<void(capture_file *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'selectedFieldChanged'
        QtMocHelpers::SlotData<void(FieldInformation *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 2 },
        }}),
        // Slot 'highlightedFieldChanged'
        QtMocHelpers::SlotData<void(FieldInformation *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 2 },
        }}),
        // Slot 'selectedFrameChanged'
        QtMocHelpers::SlotData<void(QList<int>)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 2 },
        }}),
        // Slot 'updateCaptureStatistics'
        QtMocHelpers::SlotData<void(capture_session *)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Slot 'updateCaptureFixedStatistics'
        QtMocHelpers::SlotData<void(capture_session *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Slot 'captureEventHandler'
        QtMocHelpers::SlotData<void(CaptureEvent)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'appInitialized'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleBackground'
        QtMocHelpers::SlotData<void(bool)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'setProfileName'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'switchToProfile'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'manageProfile'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showProfileMenu'
        QtMocHelpers::SlotData<void(const QPoint &, Qt::MouseButton)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 27, 28 }, { 0x80000000 | 29, 30 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainStatusBar, qt_meta_tag_ZN13MainStatusBarE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainStatusBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QStatusBar::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13MainStatusBarE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13MainStatusBarE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13MainStatusBarE_t>.metaTypes,
    nullptr
} };

void MainStatusBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainStatusBar *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showExpertInfo(); break;
        case 1: _t->editCaptureComment(); break;
        case 2: _t->stopLoading(); break;
        case 3: _t->setCaptureFile((*reinterpret_cast<std::add_pointer_t<capture_file*>>(_a[1]))); break;
        case 4: _t->selectedFieldChanged((*reinterpret_cast<std::add_pointer_t<FieldInformation*>>(_a[1]))); break;
        case 5: _t->highlightedFieldChanged((*reinterpret_cast<std::add_pointer_t<FieldInformation*>>(_a[1]))); break;
        case 6: _t->selectedFrameChanged((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 7: _t->updateCaptureStatistics((*reinterpret_cast<std::add_pointer_t<capture_session*>>(_a[1]))); break;
        case 8: _t->updateCaptureFixedStatistics((*reinterpret_cast<std::add_pointer_t<capture_session*>>(_a[1]))); break;
        case 9: _t->captureEventHandler((*reinterpret_cast<std::add_pointer_t<CaptureEvent>>(_a[1]))); break;
        case 10: _t->appInitialized(); break;
        case 11: _t->toggleBackground((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->setProfileName(); break;
        case 13: _t->switchToProfile(); break;
        case 14: _t->manageProfile(); break;
        case 15: _t->showProfileMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::MouseButton>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FieldInformation* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FieldInformation* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainStatusBar::*)()>(_a, &MainStatusBar::showExpertInfo, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainStatusBar::*)()>(_a, &MainStatusBar::editCaptureComment, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainStatusBar::*)()>(_a, &MainStatusBar::stopLoading, 2))
            return;
    }
}

const QMetaObject *MainStatusBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainStatusBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13MainStatusBarE_t>.strings))
        return static_cast<void*>(this);
    return QStatusBar::qt_metacast(_clname);
}

int MainStatusBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStatusBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void MainStatusBar::showExpertInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainStatusBar::editCaptureComment()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainStatusBar::stopLoading()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
