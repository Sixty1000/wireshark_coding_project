/****************************************************************************
** Meta object code from reading C++ file 'extcap_argument.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/extcap_argument.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extcap_argument.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14ExtcapArgumentE_t {};
} // unnamed namespace

template <> constexpr inline auto ExtcapArgument::qt_create_metaobjectdata<qt_meta_tag_ZN14ExtcapArgumentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExtcapArgument",
        "valueChanged",
        "",
        "setDefaultValue",
        "onStringChanged",
        "onIntChanged",
        "onBoolChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setDefaultValue'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onStringChanged'
        QtMocHelpers::SlotData<void(QString)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'onIntChanged'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onBoolChanged'
        QtMocHelpers::SlotData<void(bool)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExtcapArgument, qt_meta_tag_ZN14ExtcapArgumentE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExtcapArgument::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14ExtcapArgumentE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14ExtcapArgumentE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14ExtcapArgumentE_t>.metaTypes,
    nullptr
} };

void ExtcapArgument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExtcapArgument *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged(); break;
        case 1: _t->setDefaultValue(); break;
        case 2: _t->onStringChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->onIntChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onBoolChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ExtcapArgument::*)()>(_a, &ExtcapArgument::valueChanged, 0))
            return;
    }
}

const QMetaObject *ExtcapArgument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtcapArgument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14ExtcapArgumentE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ExtcapArgument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ExtcapArgument::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN10ExtArgTextE_t {};
} // unnamed namespace

template <> constexpr inline auto ExtArgText::qt_create_metaobjectdata<qt_meta_tag_ZN10ExtArgTextE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExtArgText",
        "setDefaultValue",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setDefaultValue'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExtArgText, qt_meta_tag_ZN10ExtArgTextE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExtArgText::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtcapArgument::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ExtArgTextE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ExtArgTextE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10ExtArgTextE_t>.metaTypes,
    nullptr
} };

void ExtArgText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExtArgText *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setDefaultValue(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ExtArgText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtArgText::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ExtArgTextE_t>.strings))
        return static_cast<void*>(this);
    return ExtcapArgument::qt_metacast(_clname);
}

int ExtArgText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtcapArgument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN12ExtArgNumberE_t {};
} // unnamed namespace

template <> constexpr inline auto ExtArgNumber::qt_create_metaobjectdata<qt_meta_tag_ZN12ExtArgNumberE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExtArgNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExtArgNumber, qt_meta_tag_ZN12ExtArgNumberE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExtArgNumber::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtArgText::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ExtArgNumberE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ExtArgNumberE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12ExtArgNumberE_t>.metaTypes,
    nullptr
} };

void ExtArgNumber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExtArgNumber *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *ExtArgNumber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtArgNumber::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ExtArgNumberE_t>.strings))
        return static_cast<void*>(this);
    return ExtArgText::qt_metacast(_clname);
}

int ExtArgNumber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtArgText::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN14ExtArgSelectorE_t {};
} // unnamed namespace

template <> constexpr inline auto ExtArgSelector::qt_create_metaobjectdata<qt_meta_tag_ZN14ExtArgSelectorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExtArgSelector",
        "setDefaultValue",
        "",
        "onReloadTriggered"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setDefaultValue'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onReloadTriggered'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExtArgSelector, qt_meta_tag_ZN14ExtArgSelectorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExtArgSelector::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtcapArgument::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14ExtArgSelectorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14ExtArgSelectorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14ExtArgSelectorE_t>.metaTypes,
    nullptr
} };

void ExtArgSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExtArgSelector *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setDefaultValue(); break;
        case 1: _t->onReloadTriggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ExtArgSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtArgSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14ExtArgSelectorE_t>.strings))
        return static_cast<void*>(this);
    return ExtcapArgument::qt_metacast(_clname);
}

int ExtArgSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
namespace {
struct qt_meta_tag_ZN18ExtArgEditSelectorE_t {};
} // unnamed namespace

template <> constexpr inline auto ExtArgEditSelector::qt_create_metaobjectdata<qt_meta_tag_ZN18ExtArgEditSelectorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExtArgEditSelector",
        "setDefaultValue",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setDefaultValue'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExtArgEditSelector, qt_meta_tag_ZN18ExtArgEditSelectorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExtArgEditSelector::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtArgSelector::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ExtArgEditSelectorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ExtArgEditSelectorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18ExtArgEditSelectorE_t>.metaTypes,
    nullptr
} };

void ExtArgEditSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExtArgEditSelector *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setDefaultValue(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ExtArgEditSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtArgEditSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ExtArgEditSelectorE_t>.strings))
        return static_cast<void*>(this);
    return ExtArgSelector::qt_metacast(_clname);
}

int ExtArgEditSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtArgSelector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN11ExtArgRadioE_t {};
} // unnamed namespace

template <> constexpr inline auto ExtArgRadio::qt_create_metaobjectdata<qt_meta_tag_ZN11ExtArgRadioE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExtArgRadio",
        "setDefaultValue",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setDefaultValue'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExtArgRadio, qt_meta_tag_ZN11ExtArgRadioE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExtArgRadio::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtcapArgument::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ExtArgRadioE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ExtArgRadioE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11ExtArgRadioE_t>.metaTypes,
    nullptr
} };

void ExtArgRadio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExtArgRadio *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setDefaultValue(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ExtArgRadio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtArgRadio::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ExtArgRadioE_t>.strings))
        return static_cast<void*>(this);
    return ExtcapArgument::qt_metacast(_clname);
}

int ExtArgRadio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtcapArgument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN10ExtArgBoolE_t {};
} // unnamed namespace

template <> constexpr inline auto ExtArgBool::qt_create_metaobjectdata<qt_meta_tag_ZN10ExtArgBoolE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExtArgBool",
        "setDefaultValue",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setDefaultValue'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExtArgBool, qt_meta_tag_ZN10ExtArgBoolE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExtArgBool::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtcapArgument::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ExtArgBoolE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ExtArgBoolE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10ExtArgBoolE_t>.metaTypes,
    nullptr
} };

void ExtArgBool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExtArgBool *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setDefaultValue(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ExtArgBool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtArgBool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ExtArgBoolE_t>.strings))
        return static_cast<void*>(this);
    return ExtcapArgument::qt_metacast(_clname);
}

int ExtArgBool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtcapArgument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN15ExtArgTimestampE_t {};
} // unnamed namespace

template <> constexpr inline auto ExtArgTimestamp::qt_create_metaobjectdata<qt_meta_tag_ZN15ExtArgTimestampE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExtArgTimestamp",
        "setDefaultValue",
        "",
        "onDateTimeChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setDefaultValue'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDateTimeChanged'
        QtMocHelpers::SlotData<void(QDateTime)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QDateTime, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExtArgTimestamp, qt_meta_tag_ZN15ExtArgTimestampE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExtArgTimestamp::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtcapArgument::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ExtArgTimestampE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ExtArgTimestampE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15ExtArgTimestampE_t>.metaTypes,
    nullptr
} };

void ExtArgTimestamp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExtArgTimestamp *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setDefaultValue(); break;
        case 1: _t->onDateTimeChanged((*reinterpret_cast<std::add_pointer_t<QDateTime>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ExtArgTimestamp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtArgTimestamp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ExtArgTimestampE_t>.strings))
        return static_cast<void*>(this);
    return ExtcapArgument::qt_metacast(_clname);
}

int ExtArgTimestamp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
