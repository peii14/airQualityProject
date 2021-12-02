/****************************************************************************
** Meta object code from reading C++ file 'calculation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../calculation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calculation_t {
    QByteArrayData data[11];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calculation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calculation_t qt_meta_stringdata_Calculation = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Calculation"
QT_MOC_LITERAL(1, 12, 8), // "finished"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "dataToUI"
QT_MOC_LITERAL(4, 31, 2), // "O3"
QT_MOC_LITERAL(5, 34, 3), // "NO2"
QT_MOC_LITERAL(6, 38, 3), // "SO2"
QT_MOC_LITERAL(7, 42, 4), // "PM10"
QT_MOC_LITERAL(8, 47, 12), // "dataToMarker"
QT_MOC_LITERAL(9, 60, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(10, 75, 9) // "searching"

    },
    "Calculation\0finished\0\0dataToUI\0O3\0NO2\0"
    "SO2\0PM10\0dataToMarker\0QGeoCoordinate\0"
    "searching"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calculation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    5,   35,    2, 0x06 /* Public */,
       8,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    3,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 9,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QDateTime, QMetaType::Int,    2,    2,    2,

       0        // eod
};

void Calculation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Calculation *_t = static_cast<Calculation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->dataToUI((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 2: _t->dataToMarker((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 3: _t->searching((*reinterpret_cast< QDateTime(*)>(_a[1])),(*reinterpret_cast< QDateTime(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Calculation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Calculation::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Calculation::*_t)(bool , double , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Calculation::dataToUI)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Calculation::*_t)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Calculation::dataToMarker)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Calculation::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Calculation.data,
      qt_meta_data_Calculation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Calculation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calculation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calculation.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Read"))
        return static_cast< Read*>(this);
    return QThread::qt_metacast(_clname);
}

int Calculation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Calculation::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Calculation::dataToUI(bool _t1, double _t2, double _t3, double _t4, double _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Calculation::dataToMarker(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
