/****************************************************************************
** Meta object code from reading C++ file 'field_filter_edit.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/widgets/field_filter_edit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'field_filter_edit.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15FieldFilterEditE_t {};
} // unnamed namespace

template <> constexpr inline auto FieldFilterEdit::qt_create_metaobjectdata<qt_meta_tag_ZN15FieldFilterEditE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FieldFilterEdit",
        "pushFilterSyntaxStatus",
        "",
        "popFilterSyntaxStatus",
        "pushFilterSyntaxWarning",
        "filterPackets",
        "new_filter",
        "force",
        "checkFilter",
        "applyDisplayFilter",
        "filter_text",
        "clearFilter",
        "changeEvent",
        "QEvent*",
        "event",
        "showFilters",
        "prepareFilter"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pushFilterSyntaxStatus'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'popFilterSyntaxStatus'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pushFilterSyntaxWarning'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'filterPackets'
        QtMocHelpers::SignalData<void(QString, bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 }, { QMetaType::Bool, 7 },
        }}),
        // Slot 'checkFilter'
        QtMocHelpers::SlotData<bool()>(8, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'applyDisplayFilter'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'checkFilter'
        QtMocHelpers::SlotData<void(const QString &)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'clearFilter'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeEvent'
        QtMocHelpers::SlotData<void(QEvent *)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Slot 'showFilters'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'prepareFilter'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FieldFilterEdit, qt_meta_tag_ZN15FieldFilterEditE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FieldFilterEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<SyntaxLineEdit::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15FieldFilterEditE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15FieldFilterEditE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15FieldFilterEditE_t>.metaTypes,
    nullptr
} };

void FieldFilterEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FieldFilterEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pushFilterSyntaxStatus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->popFilterSyntaxStatus(); break;
        case 2: _t->pushFilterSyntaxWarning((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->filterPackets((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: { bool _r = _t->checkFilter();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->applyDisplayFilter(); break;
        case 6: _t->checkFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->clearFilter(); break;
        case 8: _t->changeEvent((*reinterpret_cast<std::add_pointer_t<QEvent*>>(_a[1]))); break;
        case 9: _t->showFilters(); break;
        case 10: _t->prepareFilter(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FieldFilterEdit::*)(const QString & )>(_a, &FieldFilterEdit::pushFilterSyntaxStatus, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FieldFilterEdit::*)()>(_a, &FieldFilterEdit::popFilterSyntaxStatus, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (FieldFilterEdit::*)(const QString & )>(_a, &FieldFilterEdit::pushFilterSyntaxWarning, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (FieldFilterEdit::*)(QString , bool )>(_a, &FieldFilterEdit::filterPackets, 3))
            return;
    }
}

const QMetaObject *FieldFilterEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FieldFilterEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15FieldFilterEditE_t>.strings))
        return static_cast<void*>(this);
    return SyntaxLineEdit::qt_metacast(_clname);
}

int FieldFilterEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SyntaxLineEdit::qt_metacall(_c, _id, _a);
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
void FieldFilterEdit::pushFilterSyntaxStatus(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void FieldFilterEdit::popFilterSyntaxStatus()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FieldFilterEdit::pushFilterSyntaxWarning(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void FieldFilterEdit::filterPackets(QString _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}
QT_WARNING_POP
