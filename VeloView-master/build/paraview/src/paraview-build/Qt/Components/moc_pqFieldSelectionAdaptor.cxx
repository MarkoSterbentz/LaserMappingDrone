/****************************************************************************
** Meta object code from reading C++ file 'pqFieldSelectionAdaptor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqFieldSelectionAdaptor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFieldSelectionAdaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqFieldSelectionAdaptor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   24,   24,   24, 0x0a,
      70,   24,   24,   24, 0x0a,
     101,   89,   24,   24, 0x0a,
     144,   24,   24,   24, 0x09,
     162,  156,   24,   24, 0x09,
     180,   24,   24,   24, 0x09,
     196,   24,   24,   24, 0x08,
     231,  220,   24,   24, 0x08,

 // properties: name, type, flags
     301,  293, 0x0a095103,
     315,  293, 0x0a095103,
     334,  322, 0x0b095103,

       0        // eod
};

static const char qt_meta_stringdata_pqFieldSelectionAdaptor[] = {
    "pqFieldSelectionAdaptor\0\0selectionChanged()\0"
    "setAttributeMode(QString)\0setScalar(QString)\0"
    "mode,scalar\0setAttributeModeAndScalar(QString,QString)\0"
    "updateGUI()\0index\0indexChanged(int)\0"
    "domainChanged()\0internalDomainChanged()\0"
    "caller,,,,\0"
    "blockDomainModified(vtkObject*,ulong,void*,void*,vtkCommand*)\0"
    "QString\0attributeMode\0scalar\0QStringList\0"
    "selection\0"
};

void pqFieldSelectionAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqFieldSelectionAdaptor *_t = static_cast<pqFieldSelectionAdaptor *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->setAttributeMode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setScalar((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setAttributeModeAndScalar((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->updateGUI(); break;
        case 5: _t->indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->domainChanged(); break;
        case 7: _t->internalDomainChanged(); break;
        case 8: _t->blockDomainModified((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4])),(*reinterpret_cast< vtkCommand*(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqFieldSelectionAdaptor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqFieldSelectionAdaptor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqFieldSelectionAdaptor,
      qt_meta_data_pqFieldSelectionAdaptor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqFieldSelectionAdaptor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqFieldSelectionAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqFieldSelectionAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqFieldSelectionAdaptor))
        return static_cast<void*>(const_cast< pqFieldSelectionAdaptor*>(this));
    return QObject::qt_metacast(_clname);
}

int pqFieldSelectionAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = attributeMode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = scalar(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = selection(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAttributeMode(*reinterpret_cast< QString*>(_v)); break;
        case 1: setScalar(*reinterpret_cast< QString*>(_v)); break;
        case 2: setSelection(*reinterpret_cast< QStringList*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqFieldSelectionAdaptor::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
