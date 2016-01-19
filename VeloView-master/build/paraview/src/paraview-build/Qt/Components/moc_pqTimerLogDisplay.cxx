/****************************************************************************
** Meta object code from reading C++ file 'pqTimerLogDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqTimerLogDisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTimerLogDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqTimerLogDisplay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      29,   18,   18,   18, 0x0a,
      43,   37,   18,   18, 0x0a,
      67,   37,   18,   18, 0x0a,
      94,   88,   18,   18, 0x0a,
     110,   18,   18,   18, 0x0a,
     126,  117,   18,   18, 0x0a,
     146,  140,   18,   18, 0x0a,
     164,   18,   18,   18, 0x0a,
     176,   18,   18,   18, 0x0a,
     194,  191,   18,   18, 0x09,
     220,  191,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqTimerLogDisplay[] = {
    "pqTimerLogDisplay\0\0refresh()\0clear()\0"
    "value\0setTimeThreshold(float)\0"
    "setBufferLength(int)\0state\0setEnable(bool)\0"
    "save()\0filename\0save(QString)\0files\0"
    "save(QStringList)\0saveState()\0"
    "restoreState()\0id\0setTimeThresholdById(int)\0"
    "setBufferLengthById(int)\0"
};

void pqTimerLogDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqTimerLogDisplay *_t = static_cast<pqTimerLogDisplay *>(_o);
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->clear(); break;
        case 2: _t->setTimeThreshold((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setBufferLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->save(); break;
        case 6: _t->save((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->save((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 8: _t->saveState(); break;
        case 9: _t->restoreState(); break;
        case 10: _t->setTimeThresholdById((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setBufferLengthById((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqTimerLogDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqTimerLogDisplay::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqTimerLogDisplay,
      qt_meta_data_pqTimerLogDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqTimerLogDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqTimerLogDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqTimerLogDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqTimerLogDisplay))
        return static_cast<void*>(const_cast< pqTimerLogDisplay*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqTimerLogDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
