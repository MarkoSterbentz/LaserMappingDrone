/****************************************************************************
** Meta object code from reading C++ file 'pqProgressManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqProgressManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProgressManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqProgressManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      44,   27,   18,   18, 0x05,
      66,   18,   18,   18, 0x05,
      87,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     105,   27,   18,   18, 0x0a,
     130,   18,   18,   18, 0x0a,
     154,   18,   18,   18, 0x0a,
     170,   18,   18,   18, 0x0a,
     184,   18,   18,   18, 0x0a,
     205,   18,   18,   18, 0x0a,
     220,   18,   18,   18, 0x09,
     238,   18,   18,   18, 0x09,
     254,   18,   18,   18, 0x09,
     277,   18,   18,   18, 0x09,
     299,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqProgressManager[] = {
    "pqProgressManager\0\0abort()\0message,progress\0"
    "progress(QString,int)\0enableProgress(bool)\0"
    "enableAbort(bool)\0setProgress(QString,int)\0"
    "setEnableProgress(bool)\0beginProgress()\0"
    "endProgress()\0setEnableAbort(bool)\0"
    "triggerAbort()\0onStartProgress()\0"
    "onEndProgress()\0onProgress(vtkObject*)\0"
    "onMessage(vtkObject*)\0onServerAdded(pqServer*)\0"
};

void pqProgressManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqProgressManager *_t = static_cast<pqProgressManager *>(_o);
        switch (_id) {
        case 0: _t->abort(); break;
        case 1: _t->progress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->enableProgress((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enableAbort((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->setEnableProgress((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->beginProgress(); break;
        case 7: _t->endProgress(); break;
        case 8: _t->setEnableAbort((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->triggerAbort(); break;
        case 10: _t->onStartProgress(); break;
        case 11: _t->onEndProgress(); break;
        case 12: _t->onProgress((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 13: _t->onMessage((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 14: _t->onServerAdded((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqProgressManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqProgressManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqProgressManager,
      qt_meta_data_pqProgressManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqProgressManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqProgressManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqProgressManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqProgressManager))
        return static_cast<void*>(const_cast< pqProgressManager*>(this));
    return QObject::qt_metacast(_clname);
}

int pqProgressManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void pqProgressManager::abort()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqProgressManager::progress(const QString & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqProgressManager::enableProgress(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqProgressManager::enableAbort(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
