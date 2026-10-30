/****************************************************************************
** Meta object code from reading C++ file 'capture_file_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/capture_file_dialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'capture_file_dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17CaptureFileDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto CaptureFileDialog::qt_create_metaobjectdata<qt_meta_tag_ZN17CaptureFileDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CaptureFileDialog",
        "accept",
        "",
        "exec",
        "open",
        "QString&",
        "file_name",
        "uint&",
        "type",
        "display_filter",
        "saveAs",
        "check_savability_t",
        "must_support_comments",
        "exportSelectedPackets",
        "packet_range_t*",
        "range",
        "selRange",
        "merge",
        "fixFilenameExtension",
        "preview",
        "path",
        "on_buttonBox_helpRequested"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'accept'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'exec'
        QtMocHelpers::SlotData<int()>(3, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'open'
        QtMocHelpers::SlotData<int(QString &, unsigned int &, QString &)>(4, 2, QMC::AccessPublic, QMetaType::Int, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 }, { 0x80000000 | 5, 9 },
        }}),
        // Slot 'saveAs'
        QtMocHelpers::SlotData<check_savability_t(QString &, bool)>(10, 2, QMC::AccessPublic, 0x80000000 | 11, {{
            { 0x80000000 | 5, 6 }, { QMetaType::Bool, 12 },
        }}),
        // Slot 'exportSelectedPackets'
        QtMocHelpers::SlotData<check_savability_t(QString &, packet_range_t *, QString)>(13, 2, QMC::AccessPublic, 0x80000000 | 11, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 14, 15 }, { QMetaType::QString, 16 },
        }}),
        // Slot 'exportSelectedPackets'
        QtMocHelpers::SlotData<check_savability_t(QString &, packet_range_t *)>(13, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 11, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 14, 15 },
        }}),
        // Slot 'merge'
        QtMocHelpers::SlotData<int(QString &, QString &)>(17, 2, QMC::AccessPublic, QMetaType::Int, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 5, 9 },
        }}),
        // Slot 'fixFilenameExtension'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'preview'
        QtMocHelpers::SlotData<void(const QString &)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 20 },
        }}),
        // Slot 'on_buttonBox_helpRequested'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CaptureFileDialog, qt_meta_tag_ZN17CaptureFileDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CaptureFileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<WiresharkFileDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17CaptureFileDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17CaptureFileDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17CaptureFileDialogE_t>.metaTypes,
    nullptr
} };

void CaptureFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CaptureFileDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: { int _r = _t->exec();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->open((*reinterpret_cast<std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString&>>(_a[3])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 3: { check_savability_t _r = _t->saveAs((*reinterpret_cast<std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<check_savability_t*>(_a[0]) = std::move(_r); }  break;
        case 4: { check_savability_t _r = _t->exportSelectedPackets((*reinterpret_cast<std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<packet_range_t*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<check_savability_t*>(_a[0]) = std::move(_r); }  break;
        case 5: { check_savability_t _r = _t->exportSelectedPackets((*reinterpret_cast<std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<packet_range_t*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<check_savability_t*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->merge((*reinterpret_cast<std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString&>>(_a[2])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->fixFilenameExtension(); break;
        case 8: _t->preview((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    }
}

const QMetaObject *CaptureFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaptureFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17CaptureFileDialogE_t>.strings))
        return static_cast<void*>(this);
    return WiresharkFileDialog::qt_metacast(_clname);
}

int CaptureFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkFileDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
