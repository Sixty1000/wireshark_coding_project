/****************************************************************************
** Meta object code from reading C++ file 'filter_expression_frame.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/filter_expression_frame.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filter_expression_frame.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN21FilterExpressionFrameE_t {};
} // unnamed namespace

template <> constexpr inline auto FilterExpressionFrame::qt_create_metaobjectdata<qt_meta_tag_ZN21FilterExpressionFrameE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FilterExpressionFrame",
        "showPreferencesDialog",
        "",
        "pane_name",
        "filterExpressionsChanged",
        "updateWidgets",
        "on_filterExpressionPreferencesPushButton_clicked",
        "on_labelLineEdit_textChanged",
        "on_displayFilterLineEdit_textChanged",
        "on_buttonBox_accepted",
        "on_buttonBox_rejected"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showPreferencesDialog'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'filterExpressionsChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateWidgets'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_filterExpressionPreferencesPushButton_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_labelLineEdit_textChanged'
        QtMocHelpers::SlotData<void(const QString)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'on_displayFilterLineEdit_textChanged'
        QtMocHelpers::SlotData<void(const QString)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'on_buttonBox_accepted'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_rejected'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FilterExpressionFrame, qt_meta_tag_ZN21FilterExpressionFrameE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FilterExpressionFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<AccordionFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21FilterExpressionFrameE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21FilterExpressionFrameE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21FilterExpressionFrameE_t>.metaTypes,
    nullptr
} };

void FilterExpressionFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FilterExpressionFrame *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showPreferencesDialog((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->filterExpressionsChanged(); break;
        case 2: _t->updateWidgets(); break;
        case 3: _t->on_filterExpressionPreferencesPushButton_clicked(); break;
        case 4: _t->on_labelLineEdit_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_displayFilterLineEdit_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_buttonBox_accepted(); break;
        case 7: _t->on_buttonBox_rejected(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FilterExpressionFrame::*)(QString )>(_a, &FilterExpressionFrame::showPreferencesDialog, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FilterExpressionFrame::*)()>(_a, &FilterExpressionFrame::filterExpressionsChanged, 1))
            return;
    }
}

const QMetaObject *FilterExpressionFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilterExpressionFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21FilterExpressionFrameE_t>.strings))
        return static_cast<void*>(this);
    return AccordionFrame::qt_metacast(_clname);
}

int FilterExpressionFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AccordionFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void FilterExpressionFrame::showPreferencesDialog(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void FilterExpressionFrame::filterExpressionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
