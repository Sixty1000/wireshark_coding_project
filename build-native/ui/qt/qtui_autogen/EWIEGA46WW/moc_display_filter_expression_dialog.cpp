/****************************************************************************
** Meta object code from reading C++ file 'display_filter_expression_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/display_filter_expression_dialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'display_filter_expression_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN29DisplayFilterExpressionDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto DisplayFilterExpressionDialog::qt_create_metaobjectdata<qt_meta_tag_ZN29DisplayFilterExpressionDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DisplayFilterExpressionDialog",
        "insertDisplayFilter",
        "",
        "filter",
        "addTreeItem",
        "result",
        "fillTree",
        "updateWidgets",
        "on_fieldTreeWidget_itemSelectionChanged",
        "on_relationListWidget_itemSelectionChanged",
        "on_enumListWidget_itemSelectionChanged",
        "on_searchLineEdit_textChanged",
        "search_re",
        "on_buttonBox_accepted",
        "on_buttonBox_helpRequested"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'insertDisplayFilter'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'addTreeItem'
        QtMocHelpers::SlotData<void(int)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'fillTree'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateWidgets'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_fieldTreeWidget_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_relationListWidget_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_enumListWidget_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_searchLineEdit_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Slot 'on_buttonBox_accepted'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_helpRequested'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DisplayFilterExpressionDialog, qt_meta_tag_ZN29DisplayFilterExpressionDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DisplayFilterExpressionDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<GeometryStateDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN29DisplayFilterExpressionDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN29DisplayFilterExpressionDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN29DisplayFilterExpressionDialogE_t>.metaTypes,
    nullptr
} };

void DisplayFilterExpressionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DisplayFilterExpressionDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->insertDisplayFilter((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->addTreeItem((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->fillTree(); break;
        case 3: _t->updateWidgets(); break;
        case 4: _t->on_fieldTreeWidget_itemSelectionChanged(); break;
        case 5: _t->on_relationListWidget_itemSelectionChanged(); break;
        case 6: _t->on_enumListWidget_itemSelectionChanged(); break;
        case 7: _t->on_searchLineEdit_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->on_buttonBox_accepted(); break;
        case 9: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DisplayFilterExpressionDialog::*)(const QString & )>(_a, &DisplayFilterExpressionDialog::insertDisplayFilter, 0))
            return;
    }
}

const QMetaObject *DisplayFilterExpressionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisplayFilterExpressionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN29DisplayFilterExpressionDialogE_t>.strings))
        return static_cast<void*>(this);
    return GeometryStateDialog::qt_metacast(_clname);
}

int DisplayFilterExpressionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeometryStateDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DisplayFilterExpressionDialog::insertDisplayFilter(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
