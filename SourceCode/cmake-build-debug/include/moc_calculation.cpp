/****************************************************************************
** Meta object code from reading C++ file 'calculation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/calculation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
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
    QByteArrayData data[14];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calculation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calculation_t qt_meta_stringdata_Calculation = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Calculation"
QT_MOC_LITERAL(1, 12, 17), // "dataApptoxiamtion"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "QList<double>"
QT_MOC_LITERAL(4, 45, 10), // "QList<int>"
QT_MOC_LITERAL(5, 56, 8), // "finished"
QT_MOC_LITERAL(6, 65, 8), // "dataToUI"
QT_MOC_LITERAL(7, 74, 2), // "O3"
QT_MOC_LITERAL(8, 77, 3), // "NO2"
QT_MOC_LITERAL(9, 81, 3), // "SO2"
QT_MOC_LITERAL(10, 85, 4), // "PM10"
QT_MOC_LITERAL(11, 90, 12), // "dataToMarker"
QT_MOC_LITERAL(12, 103, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(13, 118, 9) // "searching"

    },
    "Calculation\0dataApptoxiamtion\0\0"
    "QList<double>\0QList<int>\0finished\0"
    "dataToUI\0O3\0NO2\0SO2\0PM10\0dataToMarker\0"
    "QGeoCoordinate\0searching"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calculation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   39,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    5,   53,    2, 0x06 /* Public */,
      11,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    3,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    2,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    7,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 12,    2,

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
        case 0: _t->dataApptoxiamtion((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<int>(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3])),(*reinterpret_cast< QList<double>(*)>(_a[4])),(*reinterpret_cast< QList<double>(*)>(_a[5])),(*reinterpret_cast< QList<double>(*)>(_a[6]))); break;
        case 1: _t->finished(); break;
        case 2: _t->dataToUI((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 3: _t->dataToMarker((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 4: _t->searching((*reinterpret_cast< QDateTime(*)>(_a[1])),(*reinterpret_cast< QDateTime(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Calculation::*_t)(QList<double> , QList<int> , QList<double> , QList<double> , QList<double> , QList<double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Calculation::dataApptoxiamtion)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Calculation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Calculation::finished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Calculation::*_t)(QString , double , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Calculation::dataToUI)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Calculation::*_t)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Calculation::dataToMarker)) {
                *result = 3;
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
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Calculation::dataApptoxiamtion(QList<double> _t1, QList<int> _t2, QList<double> _t3, QList<double> _t4, QList<double> _t5, QList<double> _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Calculation::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Calculation::dataToUI(QString _t1, double _t2, double _t3, double _t4, double _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Calculation::dataToMarker(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
