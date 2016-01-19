/****************************************************************************
** Meta object code from reading C++ file 'vtkQtConnection.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../paraview/VTK/GUISupport/Qt/vtkQtConnection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vtkQtConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_vtkQtConnection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_vtkQtConnection[] = {
    "vtkQtConnection\0\0,,client_data,call_data,\0"
    "EmitExecute(vtkObject*,ulong,void*,void*,vtkCommand*)\0"
    "deleteConnection()\0"
};

void vtkQtConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        vtkQtConnection *_t = static_cast<vtkQtConnection *>(_o);
        switch (_id) {
        case 0: _t->EmitExecute((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4])),(*reinterpret_cast< vtkCommand*(*)>(_a[5]))); break;
        case 1: _t->deleteConnection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData vtkQtConnection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject vtkQtConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_vtkQtConnection,
      qt_meta_data_vtkQtConnection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &vtkQtConnection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *vtkQtConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *vtkQtConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vtkQtConnection))
        return static_cast<void*>(const_cast< vtkQtConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int vtkQtConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void vtkQtConnection::EmitExecute(vtkObject * _t1, unsigned long _t2, void * _t3, void * _t4, vtkCommand * _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
