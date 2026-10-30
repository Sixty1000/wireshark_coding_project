/****************************************************************************
** Meta object code from reading C++ file 'capture_file_properties_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/capture_file_properties_dialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'capture_file_properties_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN27CaptureFilePropertiesDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto CaptureFilePropertiesDialog::qt_create_metaobjectdata<qt_meta_tag_ZN27CaptureFilePropertiesDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CaptureFilePropertiesDialog",
        "captureCommentChanged",
        "",
        "changeEvent",
        "QEvent*",
        "event",
        "updateWidgets",
        "addCaptureComment",
        "on_buttonBox_helpRequested",
        "on_buttonBox_clicked",
        "QAbstractButton*",
        "button",
        "on_buttonBox_rejected"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'captureCommentChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeEvent'
        QtMocHelpers::SlotData<void(QEvent *)>(3, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'updateWidgets'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addCaptureComment'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_helpRequested'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_clicked'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Slot 'on_buttonBox_rejected'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CaptureFilePropertiesDialog, qt_meta_tag_ZN27CaptureFilePropertiesDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CaptureFilePropertiesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<WiresharkDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN27CaptureFilePropertiesDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN27CaptureFilePropertiesDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN27CaptureFilePropertiesDialogE_t>.metaTypes,
    nullptr
} };

void CaptureFilePropertiesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CaptureFilePropertiesDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->captureCommentChanged(); break;
        case 1: _t->changeEvent((*reinterpret_cast<std::add_pointer_t<QEvent*>>(_a[1]))); break;
        case 2: _t->updateWidgets(); break;
        case 3: _t->addCaptureComment(); break;
        case 4: _t->on_buttonBox_helpRequested(); break;
        case 5: _t->on_buttonBox_clicked((*reinterpret_cast<std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 6: _t->on_buttonBox_rejected(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CaptureFilePropertiesDialog::*)()>(_a, &CaptureFilePropertiesDialog::captureCommentChanged, 0))
            return;
    }
}

const QMetaObject *CaptureFilePropertiesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaptureFilePropertiesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN27CaptureFilePropertiesDialogE_t>.strings))
        return static_cast<void*>(this);
    return WiresharkDialog::qt_metacast(_clname);
}

int CaptureFilePropertiesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CaptureFilePropertiesDialog::captureCommentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
