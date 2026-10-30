/****************************************************************************
** Meta object code from reading C++ file 'uat_frame.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/uat_frame.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uat_frame.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8UatFrameE_t {};
} // unnamed namespace

template <> constexpr inline auto UatFrame::qt_create_metaobjectdata<qt_meta_tag_ZN8UatFrameE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "UatFrame",
        "copyFromProfile",
        "",
        "filename",
        "modelDataChanged",
        "QModelIndex",
        "topLeft",
        "modelRowsRemoved",
        "modelRowsReset",
        "uatTreeViewSelectionChanged",
        "QItemSelection",
        "selected",
        "deselected",
        "on_uatTreeView_currentItemChanged",
        "current",
        "previous",
        "on_newToolButton_clicked",
        "on_deleteToolButton_clicked",
        "on_copyToolButton_clicked",
        "on_moveUpToolButton_clicked",
        "on_moveDownToolButton_clicked",
        "on_clearToolButton_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'copyFromProfile'
        QtMocHelpers::SlotData<void(QString)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'modelDataChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'modelRowsRemoved'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'modelRowsReset'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'uatTreeViewSelectionChanged'
        QtMocHelpers::SlotData<void(const QItemSelection &, const QItemSelection &)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 11 }, { 0x80000000 | 10, 12 },
        }}),
        // Slot 'on_uatTreeView_currentItemChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 14 }, { 0x80000000 | 5, 15 },
        }}),
        // Slot 'on_newToolButton_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_deleteToolButton_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_copyToolButton_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_moveUpToolButton_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_moveDownToolButton_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_clearToolButton_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UatFrame, qt_meta_tag_ZN8UatFrameE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject UatFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8UatFrameE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8UatFrameE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8UatFrameE_t>.metaTypes,
    nullptr
} };

void UatFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UatFrame *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->copyFromProfile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->modelDataChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->modelRowsRemoved(); break;
        case 3: _t->modelRowsReset(); break;
        case 4: _t->uatTreeViewSelectionChanged((*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 5: _t->on_uatTreeView_currentItemChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 6: _t->on_newToolButton_clicked(); break;
        case 7: _t->on_deleteToolButton_clicked(); break;
        case 8: _t->on_copyToolButton_clicked(); break;
        case 9: _t->on_moveUpToolButton_clicked(); break;
        case 10: _t->on_moveDownToolButton_clicked(); break;
        case 11: _t->on_clearToolButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *UatFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UatFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8UatFrameE_t>.strings))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int UatFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
