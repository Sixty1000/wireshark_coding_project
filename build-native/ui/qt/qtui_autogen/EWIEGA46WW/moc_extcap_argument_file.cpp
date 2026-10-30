/****************************************************************************
** Meta object code from reading C++ file 'extcap_argument_file.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/extcap_argument_file.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extcap_argument_file.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN27ExtcapArgumentFileSelectionE_t {};
} // unnamed namespace

template <> constexpr inline auto ExtcapArgumentFileSelection::qt_create_metaobjectdata<qt_meta_tag_ZN27ExtcapArgumentFileSelectionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExtcapArgumentFileSelection",
        "openFileDialog",
        "",
        "clearFilename"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'openFileDialog'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clearFilename'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExtcapArgumentFileSelection, qt_meta_tag_ZN27ExtcapArgumentFileSelectionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExtcapArgumentFileSelection::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtcapArgument::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN27ExtcapArgumentFileSelectionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN27ExtcapArgumentFileSelectionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN27ExtcapArgumentFileSelectionE_t>.metaTypes,
    nullptr
} };

void ExtcapArgumentFileSelection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExtcapArgumentFileSelection *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->openFileDialog(); break;
        case 1: _t->clearFilename(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ExtcapArgumentFileSelection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtcapArgumentFileSelection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN27ExtcapArgumentFileSelectionE_t>.strings))
        return static_cast<void*>(this);
    return ExtcapArgument::qt_metacast(_clname);
}

int ExtcapArgumentFileSelection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtcapArgument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
