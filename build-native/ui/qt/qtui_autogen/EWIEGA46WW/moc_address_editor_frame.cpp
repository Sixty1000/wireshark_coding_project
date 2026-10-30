/****************************************************************************
** Meta object code from reading C++ file 'address_editor_frame.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/address_editor_frame.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'address_editor_frame.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18AddressEditorFrameE_t {};
} // unnamed namespace

template <> constexpr inline auto AddressEditorFrame::qt_create_metaobjectdata<qt_meta_tag_ZN18AddressEditorFrameE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AddressEditorFrame",
        "showNameResolutionPreferences",
        "",
        "module_name",
        "redissectPackets",
        "editAddresses",
        "CaptureFile&",
        "cf",
        "column",
        "displayPreviousUserDefinedHostname",
        "updateWidgets",
        "on_nameResolutionPreferencesToolButton_clicked",
        "on_addressComboBox_currentIndexChanged",
        "idx",
        "on_nameLineEdit_textEdited",
        "on_buttonBox_accepted",
        "on_buttonBox_rejected"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showNameResolutionPreferences'
        QtMocHelpers::SignalData<void(const QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'redissectPackets'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editAddresses'
        QtMocHelpers::SlotData<void(CaptureFile &, int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { QMetaType::Int, 8 },
        }}),
        // Slot 'editAddresses'
        QtMocHelpers::SlotData<void(CaptureFile &)>(5, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'displayPreviousUserDefinedHostname'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateWidgets'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nameResolutionPreferencesToolButton_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_addressComboBox_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'on_nameLineEdit_textEdited'
        QtMocHelpers::SlotData<void(const QString &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'on_buttonBox_accepted'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_rejected'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AddressEditorFrame, qt_meta_tag_ZN18AddressEditorFrameE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AddressEditorFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<AccordionFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18AddressEditorFrameE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18AddressEditorFrameE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18AddressEditorFrameE_t>.metaTypes,
    nullptr
} };

void AddressEditorFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AddressEditorFrame *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showNameResolutionPreferences((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->redissectPackets(); break;
        case 2: _t->editAddresses((*reinterpret_cast<std::add_pointer_t<CaptureFile&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->editAddresses((*reinterpret_cast<std::add_pointer_t<CaptureFile&>>(_a[1]))); break;
        case 4: _t->displayPreviousUserDefinedHostname(); break;
        case 5: _t->updateWidgets(); break;
        case 6: _t->on_nameResolutionPreferencesToolButton_clicked(); break;
        case 7: _t->on_addressComboBox_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_nameLineEdit_textEdited((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_buttonBox_accepted(); break;
        case 10: _t->on_buttonBox_rejected(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AddressEditorFrame::*)(const QString )>(_a, &AddressEditorFrame::showNameResolutionPreferences, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AddressEditorFrame::*)()>(_a, &AddressEditorFrame::redissectPackets, 1))
            return;
    }
}

const QMetaObject *AddressEditorFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddressEditorFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18AddressEditorFrameE_t>.strings))
        return static_cast<void*>(this);
    return AccordionFrame::qt_metacast(_clname);
}

int AddressEditorFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AccordionFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void AddressEditorFrame::showNameResolutionPreferences(const QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void AddressEditorFrame::redissectPackets()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
