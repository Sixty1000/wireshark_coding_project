/****************************************************************************
** Meta object code from reading C++ file 'syntax_line_edit.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/widgets/syntax_line_edit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syntax_line_edit.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14SyntaxLineEditE_t {};
} // unnamed namespace

template <> constexpr inline auto SyntaxLineEdit::qt_create_metaobjectdata<qt_meta_tag_ZN14SyntaxLineEditE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SyntaxLineEdit",
        "setStyleSheet",
        "",
        "style_sheet",
        "insertFilter",
        "filter",
        "checkDisplayFilter",
        "checkFieldName",
        "field",
        "checkCustomColumn",
        "fields",
        "checkInteger",
        "number",
        "insertFieldCompletion",
        "completion_text",
        "syntaxState",
        "SyntaxState",
        "Empty",
        "Busy",
        "Invalid",
        "Deprecated",
        "Valid"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setStyleSheet'
        QtMocHelpers::SlotData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'insertFilter'
        QtMocHelpers::SlotData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'checkDisplayFilter'
        QtMocHelpers::SlotData<bool(QString)>(6, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'checkFieldName'
        QtMocHelpers::SlotData<void(QString)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 },
        }}),
        // Slot 'checkCustomColumn'
        QtMocHelpers::SlotData<void(QString)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'checkInteger'
        QtMocHelpers::SlotData<void(QString)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Slot 'insertFieldCompletion'
        QtMocHelpers::SlotData<void(const QString &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'syntaxState'
        QtMocHelpers::PropertyData<enum SyntaxState>(15, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'SyntaxState'
        QtMocHelpers::EnumData<enum SyntaxState>(16, 16, QMC::EnumFlags{}).add({
            {   17, SyntaxState::Empty },
            {   18, SyntaxState::Busy },
            {   19, SyntaxState::Invalid },
            {   20, SyntaxState::Deprecated },
            {   21, SyntaxState::Valid },
        }),
    };
    return QtMocHelpers::metaObjectData<SyntaxLineEdit, qt_meta_tag_ZN14SyntaxLineEditE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SyntaxLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SyntaxLineEditE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SyntaxLineEditE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14SyntaxLineEditE_t>.metaTypes,
    nullptr
} };

void SyntaxLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SyntaxLineEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setStyleSheet((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->insertFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: { bool _r = _t->checkDisplayFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->checkFieldName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->checkCustomColumn((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->checkInteger((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->insertFieldCompletion((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum SyntaxState*>(_v) = _t->syntaxState(); break;
        default: break;
        }
    }
}

const QMetaObject *SyntaxLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SyntaxLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SyntaxLineEditE_t>.strings))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int SyntaxLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
