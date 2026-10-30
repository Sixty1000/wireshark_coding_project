/****************************************************************************
** Meta object code from reading C++ file 'welcome_page.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/welcome_page.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'welcome_page.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11WelcomePageE_t {};
} // unnamed namespace

template <> constexpr inline auto WelcomePage::qt_create_metaobjectdata<qt_meta_tag_ZN11WelcomePageE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WelcomePage",
        "startCapture",
        "",
        "ifaces",
        "recentFileActivated",
        "cfile",
        "captureFilterSyntaxChanged",
        "valid",
        "showExtcapOptions",
        "QString&",
        "device_name",
        "startCaptureOnClose",
        "interfacesChanged",
        "interfaceSelected",
        "on_recentLabel_clicked",
        "on_captureLabel_clicked",
        "on_helpLabel_clicked",
        "setCaptureFilterText",
        "capture_filter",
        "appInitialized",
        "interfaceListChanged",
        "setReleaseLabel",
        "captureFilterTextEdited",
        "updateRecentCaptures",
        "openRecentItem",
        "QListWidgetItem*",
        "item",
        "showRecentContextMenu",
        "QPoint",
        "pos",
        "showRecentFolder",
        "copyRecentPath",
        "removeRecentPath",
        "on_interfaceFrame_showExtcapOptions",
        "on_interfaceFrame_startCapture",
        "captureStarting"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'startCapture'
        QtMocHelpers::SignalData<void(QStringList)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 3 },
        }}),
        // Signal 'recentFileActivated'
        QtMocHelpers::SignalData<void(QString)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'captureFilterSyntaxChanged'
        QtMocHelpers::SignalData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Signal 'showExtcapOptions'
        QtMocHelpers::SignalData<void(QString &, bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 }, { QMetaType::Bool, 11 },
        }}),
        // Signal 'interfacesChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'interfaceSelected'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_recentLabel_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_captureLabel_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_helpLabel_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setCaptureFilterText'
        QtMocHelpers::SlotData<void(const QString)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
        // Slot 'appInitialized'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'interfaceListChanged'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setReleaseLabel'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'captureFilterTextEdited'
        QtMocHelpers::SlotData<void(const QString)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
        // Slot 'updateRecentCaptures'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'openRecentItem'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Slot 'showRecentContextMenu'
        QtMocHelpers::SlotData<void(QPoint)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 28, 29 },
        }}),
        // Slot 'showRecentFolder'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copyRecentPath'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'removeRecentPath'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_interfaceFrame_showExtcapOptions'
        QtMocHelpers::SlotData<void(QString, bool)>(33, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 10 }, { QMetaType::Bool, 11 },
        }}),
        // Slot 'on_interfaceFrame_startCapture'
        QtMocHelpers::SlotData<void(QStringList)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QStringList, 2 },
        }}),
        // Slot 'captureStarting'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WelcomePage, qt_meta_tag_ZN11WelcomePageE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WelcomePage::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11WelcomePageE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11WelcomePageE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11WelcomePageE_t>.metaTypes,
    nullptr
} };

void WelcomePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WelcomePage *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->startCapture((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 1: _t->recentFileActivated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->captureFilterSyntaxChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->showExtcapOptions((*reinterpret_cast<std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->interfacesChanged(); break;
        case 5: _t->interfaceSelected(); break;
        case 6: _t->on_recentLabel_clicked(); break;
        case 7: _t->on_captureLabel_clicked(); break;
        case 8: _t->on_helpLabel_clicked(); break;
        case 9: _t->setCaptureFilterText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->appInitialized(); break;
        case 11: _t->interfaceListChanged(); break;
        case 12: _t->setReleaseLabel(); break;
        case 13: _t->captureFilterTextEdited((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->updateRecentCaptures(); break;
        case 15: _t->openRecentItem((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 16: _t->showRecentContextMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 17: _t->showRecentFolder(); break;
        case 18: _t->copyRecentPath(); break;
        case 19: _t->removeRecentPath(); break;
        case 20: _t->on_interfaceFrame_showExtcapOptions((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 21: _t->on_interfaceFrame_startCapture((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 22: _t->captureStarting(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WelcomePage::*)(QStringList )>(_a, &WelcomePage::startCapture, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WelcomePage::*)(QString )>(_a, &WelcomePage::recentFileActivated, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WelcomePage::*)(bool )>(_a, &WelcomePage::captureFilterSyntaxChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (WelcomePage::*)(QString & , bool )>(_a, &WelcomePage::showExtcapOptions, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (WelcomePage::*)()>(_a, &WelcomePage::interfacesChanged, 4))
            return;
    }
}

const QMetaObject *WelcomePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WelcomePage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11WelcomePageE_t>.strings))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int WelcomePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void WelcomePage::startCapture(QStringList _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void WelcomePage::recentFileActivated(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void WelcomePage::captureFilterSyntaxChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void WelcomePage::showExtcapOptions(QString & _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void WelcomePage::interfacesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
