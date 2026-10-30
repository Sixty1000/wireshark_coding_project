/****************************************************************************
** Meta object code from reading C++ file 'rtp_audio_stream.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../ui/qt/rtp_audio_stream.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rtp_audio_stream.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14RtpAudioStreamE_t {};
} // unnamed namespace

template <> constexpr inline auto RtpAudioStream::qt_create_metaobjectdata<qt_meta_tag_ZN14RtpAudioStreamE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "RtpAudioStream",
        "processedSecs",
        "",
        "secs",
        "playbackError",
        "error_msg",
        "finishedPlaying",
        "RtpAudioStream*",
        "stream",
        "QAudio::Error",
        "error",
        "outputStateChanged",
        "QAudio::State",
        "new_state",
        "delayedStopStream"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'processedSecs'
        QtMocHelpers::SignalData<void(double)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 3 },
        }}),
        // Signal 'playbackError'
        QtMocHelpers::SignalData<void(const QString)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'finishedPlaying'
        QtMocHelpers::SignalData<void(RtpAudioStream *, QAudio::Error)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Slot 'outputStateChanged'
        QtMocHelpers::SlotData<void(QAudio::State)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'delayedStopStream'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RtpAudioStream, qt_meta_tag_ZN14RtpAudioStreamE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject RtpAudioStream::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14RtpAudioStreamE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14RtpAudioStreamE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14RtpAudioStreamE_t>.metaTypes,
    nullptr
} };

void RtpAudioStream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RtpAudioStream *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->processedSecs((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->playbackError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->finishedPlaying((*reinterpret_cast<std::add_pointer_t<RtpAudioStream*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QAudio::Error>>(_a[2]))); break;
        case 3: _t->outputStateChanged((*reinterpret_cast<std::add_pointer_t<QAudio::State>>(_a[1]))); break;
        case 4: _t->delayedStopStream(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< RtpAudioStream* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (RtpAudioStream::*)(double )>(_a, &RtpAudioStream::processedSecs, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpAudioStream::*)(const QString )>(_a, &RtpAudioStream::playbackError, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (RtpAudioStream::*)(RtpAudioStream * , QAudio::Error )>(_a, &RtpAudioStream::finishedPlaying, 2))
            return;
    }
}

const QMetaObject *RtpAudioStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RtpAudioStream::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14RtpAudioStreamE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RtpAudioStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void RtpAudioStream::processedSecs(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void RtpAudioStream::playbackError(const QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void RtpAudioStream::finishedPlaying(RtpAudioStream * _t1, QAudio::Error _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}
QT_WARNING_POP
