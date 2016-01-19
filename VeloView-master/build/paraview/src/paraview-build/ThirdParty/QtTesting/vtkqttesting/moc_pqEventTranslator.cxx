/****************************************************************************
** Meta object code from reading C++ file 'pqEventTranslator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../paraview/ThirdParty/QtTesting/vtkqttesting/pqEventTranslator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqEventTranslator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqEventTranslator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      44,   19,   18,   18, 0x05,
      81,   18,   18,   18, 0x05,
      91,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     101,   19,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqEventTranslator[] = {
    "pqEventTranslator\0\0Object,Command,Arguments\0"
    "recordEvent(QString,QString,QString)\0"
    "started()\0stopped()\0"
    "onRecordEvent(QObject*,QString,QString)\0"
};

void pqEventTranslator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqEventTranslator *_t = static_cast<pqEventTranslator *>(_o);
        switch (_id) {
        case 0: _t->recordEvent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->started(); break;
        case 2: _t->stopped(); break;
        case 3: _t->onRecordEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqEventTranslator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqEventTranslator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqEventTranslator,
      qt_meta_data_pqEventTranslator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqEventTranslator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqEventTranslator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqEventTranslator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqEventTranslator))
        return static_cast<void*>(const_cast< pqEventTranslator*>(this));
    return QObject::qt_metacast(_clname);
}

int pqEventTranslator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void pqEventTranslator::recordEvent(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqEventTranslator::started()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqEventTranslator::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
