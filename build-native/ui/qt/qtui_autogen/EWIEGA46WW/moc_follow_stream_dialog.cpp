/****************************************************************************
** Meta object code from reading C++ file 'follow_stream_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/follow_stream_dialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'follow_stream_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18FollowStreamDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto FollowStreamDialog::qt_create_metaobjectdata<qt_meta_tag_ZN18FollowStreamDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FollowStreamDialog",
        "updateFilter",
        "",
        "filter",
        "force",
        "goToPacket",
        "packet_num",
        "cbCharsetCurrentIndexChanged",
        "idx",
        "deltaComboBoxCurrentIndexChanged",
        "cbDirectionsCurrentIndexChanged",
        "bFindClicked",
        "leFindReturnPressed",
        "helpButton",
        "backButton",
        "close",
        "filterOut",
        "useRegexFind",
        "use_regex",
        "findText",
        "go_back",
        "saveAs",
        "printStream",
        "fillHintLabel",
        "pkt",
        "goToPacketForTextPos",
        "streamNumberSpinBoxValueChanged",
        "stream_num",
        "subStreamNumberSpinBoxValueChanged",
        "sub_stream_num",
        "buttonBoxRejected"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'updateFilter'
        QtMocHelpers::SignalData<void(QString, bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::Bool, 4 },
        }}),
        // Signal 'goToPacket'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'cbCharsetCurrentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'deltaComboBoxCurrentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'cbDirectionsCurrentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'bFindClicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'leFindReturnPressed'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'helpButton'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'backButton'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'close'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'filterOut'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'useRegexFind'
        QtMocHelpers::SlotData<void(bool)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'findText'
        QtMocHelpers::SlotData<void(bool)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 20 },
        }}),
        // Slot 'findText'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'saveAs'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'printStream'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'fillHintLabel'
        QtMocHelpers::SlotData<void(int)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
        // Slot 'fillHintLabel'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'goToPacketForTextPos'
        QtMocHelpers::SlotData<void(int)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
        // Slot 'goToPacketForTextPos'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'streamNumberSpinBoxValueChanged'
        QtMocHelpers::SlotData<void(int)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 27 },
        }}),
        // Slot 'subStreamNumberSpinBoxValueChanged'
        QtMocHelpers::SlotData<void(int)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 29 },
        }}),
        // Slot 'buttonBoxRejected'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FollowStreamDialog, qt_meta_tag_ZN18FollowStreamDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FollowStreamDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<WiresharkDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18FollowStreamDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18FollowStreamDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18FollowStreamDialogE_t>.metaTypes,
    nullptr
} };

void FollowStreamDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FollowStreamDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->goToPacket((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->cbCharsetCurrentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->deltaComboBoxCurrentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->cbDirectionsCurrentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->bFindClicked(); break;
        case 6: _t->leFindReturnPressed(); break;
        case 7: _t->helpButton(); break;
        case 8: _t->backButton(); break;
        case 9: _t->close(); break;
        case 10: _t->filterOut(); break;
        case 11: _t->useRegexFind((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->findText((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->findText(); break;
        case 14: _t->saveAs(); break;
        case 15: _t->printStream(); break;
        case 16: _t->fillHintLabel((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->fillHintLabel(); break;
        case 18: _t->goToPacketForTextPos((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->goToPacketForTextPos(); break;
        case 20: _t->streamNumberSpinBoxValueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->subStreamNumberSpinBoxValueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->buttonBoxRejected(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FollowStreamDialog::*)(QString , bool )>(_a, &FollowStreamDialog::updateFilter, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FollowStreamDialog::*)(int )>(_a, &FollowStreamDialog::goToPacket, 1))
            return;
    }
}

const QMetaObject *FollowStreamDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FollowStreamDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18FollowStreamDialogE_t>.strings))
        return static_cast<void*>(this);
    return WiresharkDialog::qt_metacast(_clname);
}

int FollowStreamDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
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
void FollowStreamDialog::updateFilter(QString _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void FollowStreamDialog::goToPacket(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
