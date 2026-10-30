/****************************************************************************
** Meta object code from reading C++ file 'progress_frame.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/progress_frame.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'progress_frame.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13ProgressFrameE_t {};
} // unnamed namespace

template <> constexpr inline auto ProgressFrame::qt_create_metaobjectdata<qt_meta_tag_ZN13ProgressFrameE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ProgressFrame",
        "showRequested",
        "",
        "animate",
        "terminate_is_stop",
        "bool*",
        "stop_flag",
        "valueChanged",
        "value",
        "maximumValueChanged",
        "setHidden",
        "stopLoading",
        "showProgress",
        "progdlg*",
        "title",
        "showBusy",
        "setValue",
        "hide",
        "on_stopButton_clicked",
        "show",
        "setMaximumValue"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showRequested'
        QtMocHelpers::SignalData<void(bool, bool, bool *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 }, { QMetaType::Bool, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Signal 'maximumValueChanged'
        QtMocHelpers::SignalData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Signal 'setHidden'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'stopLoading'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showProgress'
        QtMocHelpers::SlotData<progdlg *(const QString &, bool, bool, bool *, int)>(12, 2, QMC::AccessPublic, 0x80000000 | 13, {{
            { QMetaType::QString, 14 }, { QMetaType::Bool, 3 }, { QMetaType::Bool, 4 }, { 0x80000000 | 5, 6 },
            { QMetaType::Int, 8 },
        }}),
        // Slot 'showProgress'
        QtMocHelpers::SlotData<progdlg *(const QString &, bool, bool, bool *)>(12, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 13, {{
            { QMetaType::QString, 14 }, { QMetaType::Bool, 3 }, { QMetaType::Bool, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'showBusy'
        QtMocHelpers::SlotData<progdlg *(bool, bool, bool *)>(15, 2, QMC::AccessPublic, 0x80000000 | 13, {{
            { QMetaType::Bool, 3 }, { QMetaType::Bool, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'hide'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_stopButton_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'show'
        QtMocHelpers::SlotData<void(bool, bool, bool *)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 3 }, { QMetaType::Bool, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'setMaximumValue'
        QtMocHelpers::SlotData<void(int)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ProgressFrame, qt_meta_tag_ZN13ProgressFrameE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ProgressFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ProgressFrameE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ProgressFrameE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13ProgressFrameE_t>.metaTypes,
    nullptr
} };

void ProgressFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ProgressFrame *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool*>>(_a[3]))); break;
        case 1: _t->valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->maximumValueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setHidden(); break;
        case 4: _t->stopLoading(); break;
        case 5: { progdlg* _r = _t->showProgress((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<bool*>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5])));
            if (_a[0]) *reinterpret_cast<progdlg**>(_a[0]) = std::move(_r); }  break;
        case 6: { progdlg* _r = _t->showProgress((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<bool*>>(_a[4])));
            if (_a[0]) *reinterpret_cast<progdlg**>(_a[0]) = std::move(_r); }  break;
        case 7: { progdlg* _r = _t->showBusy((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool*>>(_a[3])));
            if (_a[0]) *reinterpret_cast<progdlg**>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setValue((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->hide(); break;
        case 10: _t->on_stopButton_clicked(); break;
        case 11: _t->show((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool*>>(_a[3]))); break;
        case 12: _t->setMaximumValue((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ProgressFrame::*)(bool , bool , bool * )>(_a, &ProgressFrame::showRequested, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressFrame::*)(int )>(_a, &ProgressFrame::valueChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressFrame::*)(int )>(_a, &ProgressFrame::maximumValueChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressFrame::*)()>(_a, &ProgressFrame::setHidden, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressFrame::*)()>(_a, &ProgressFrame::stopLoading, 4))
            return;
    }
}

const QMetaObject *ProgressFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgressFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ProgressFrameE_t>.strings))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ProgressFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void ProgressFrame::showRequested(bool _t1, bool _t2, bool * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void ProgressFrame::valueChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void ProgressFrame::maximumValueChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void ProgressFrame::setHidden()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ProgressFrame::stopLoading()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
