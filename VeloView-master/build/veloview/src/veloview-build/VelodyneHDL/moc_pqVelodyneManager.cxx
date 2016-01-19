/****************************************************************************
** Meta object code from reading C++ file 'pqVelodyneManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../VelodyneHDL/pqVelodyneManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqVelodyneManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqVelodyneManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   18,   18,   18, 0x0a,
      51,   18,   18,   18, 0x0a,
      78,   66,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqVelodyneManager[] = {
    "pqVelodyneManager\0\0sourceCreated()\0"
    "pythonStartup()\0onOpenSensor()\0"
    "gridVisible\0onMeasurementGrid(bool)\0"
};

void pqVelodyneManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqVelodyneManager *_t = static_cast<pqVelodyneManager *>(_o);
        switch (_id) {
        case 0: _t->sourceCreated(); break;
        case 1: _t->pythonStartup(); break;
        case 2: _t->onOpenSensor(); break;
        case 3: _t->onMeasurementGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqVelodyneManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqVelodyneManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqVelodyneManager,
      qt_meta_data_pqVelodyneManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqVelodyneManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqVelodyneManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqVelodyneManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqVelodyneManager))
        return static_cast<void*>(const_cast< pqVelodyneManager*>(this));
    return QObject::qt_metacast(_clname);
}

int pqVelodyneManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void pqVelodyneManager::sourceCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
