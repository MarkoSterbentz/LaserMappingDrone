/****************************************************************************
** Meta object code from reading C++ file 'pqProxySILModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqProxySILModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProxySILModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqProxySILModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   16,   16,   16, 0x0a,
      60,   16,   16,   16, 0x0a,
      93,   83,   16,   16, 0x09,
     136,   16,   16,   16, 0x09,

 // properties: name, type, flags
     175,  159, 0x09095103,

       0        // eod
};

static const char qt_meta_stringdata_pqProxySILModel[] = {
    "pqProxySILModel\0\0valuesChanged()\0"
    "setValues(QList<QVariant>)\0"
    "toggleRootCheckState()\0idx1,idx2\0"
    "sourceDataChanged(QModelIndex,QModelIndex)\0"
    "onCheckStatusChanged()\0QList<QVariant>\0"
    "values\0"
};

void pqProxySILModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqProxySILModel *_t = static_cast<pqProxySILModel *>(_o);
        switch (_id) {
        case 0: _t->valuesChanged(); break;
        case 1: _t->setValues((*reinterpret_cast< const QList<QVariant>(*)>(_a[1]))); break;
        case 2: _t->toggleRootCheckState(); break;
        case 3: _t->sourceDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->onCheckStatusChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqProxySILModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqProxySILModel::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_pqProxySILModel,
      qt_meta_data_pqProxySILModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqProxySILModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqProxySILModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqProxySILModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqProxySILModel))
        return static_cast<void*>(const_cast< pqProxySILModel*>(this));
    return QAbstractProxyModel::qt_metacast(_clname);
}

int pqProxySILModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QVariant>*>(_v) = values(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setValues(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqProxySILModel::valuesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
