/****************************************************************************
** Meta object code from reading C++ file 'pqTextureComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqTextureComboBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTextureComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqTextureComboBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   19,   18,   18, 0x0a,
      71,   65,   18,   18, 0x0a,
     100,   18,   18,   18, 0x0a,
     109,   18,   18,   18, 0x09,
     129,   18,   18,   18, 0x09,
     146,   18,   18,   18, 0x09,
     167,   18,   18,   18, 0x09,
     194,  184,   18,   18, 0x09,
     232,  219,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqTextureComboBox[] = {
    "pqTextureComboBox\0\0repr\0"
    "setRepresentation(pqDataRepresentation*)\0"
    "rview\0setRenderView(pqRenderView*)\0"
    "reload()\0updateEnableState()\0"
    "onActivated(int)\0updateFromProperty()\0"
    "updateTextures()\0groupname\0"
    "proxyRegistered(QString)\0group,,proxy\0"
    "proxyUnRegistered(QString,QString,vtkSMProxy*)\0"
};

void pqTextureComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqTextureComboBox *_t = static_cast<pqTextureComboBox *>(_o);
        switch (_id) {
        case 0: _t->setRepresentation((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 1: _t->setRenderView((*reinterpret_cast< pqRenderView*(*)>(_a[1]))); break;
        case 2: _t->reload(); break;
        case 3: _t->updateEnableState(); break;
        case 4: _t->onActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateFromProperty(); break;
        case 6: _t->updateTextures(); break;
        case 7: _t->proxyRegistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->proxyUnRegistered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqTextureComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqTextureComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_pqTextureComboBox,
      qt_meta_data_pqTextureComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqTextureComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqTextureComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqTextureComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqTextureComboBox))
        return static_cast<void*>(const_cast< pqTextureComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int pqTextureComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
