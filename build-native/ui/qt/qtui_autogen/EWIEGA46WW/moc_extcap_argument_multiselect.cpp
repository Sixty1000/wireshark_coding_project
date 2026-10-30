/****************************************************************************
** Meta object code from reading C++ file 'extcap_argument_multiselect.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/extcap_argument_multiselect.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extcap_argument_multiselect.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17ExtArgMultiSelectE_t {};
} // unnamed namespace

template <> constexpr inline auto ExtArgMultiSelect::qt_create_metaobjectdata<qt_meta_tag_ZN17ExtArgMultiSelectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExtArgMultiSelect",
        "setDefaultValue",
        "",
        "itemChanged",
        "QStandardItem*"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setDefaultValue'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QStandardItem *)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExtArgMultiSelect, qt_meta_tag_ZN17ExtArgMultiSelectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExtArgMultiSelect::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtcapArgument::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ExtArgMultiSelectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ExtArgMultiSelectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17ExtArgMultiSelectE_t>.metaTypes,
    nullptr
} };

void ExtArgMultiSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExtArgMultiSelect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setDefaultValue(); break;
        case 1: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QStandardItem*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ExtArgMultiSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtArgMultiSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ExtArgMultiSelectE_t>.strings))
        return static_cast<void*>(this);
    return ExtcapArgument::qt_metacast(_clname);
}

int ExtArgMultiSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
