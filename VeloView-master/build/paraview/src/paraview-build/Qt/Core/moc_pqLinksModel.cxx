/****************************************************************************
** Meta object code from reading C++ file 'pqLinksModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqLinksModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqLinksModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqLinksModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x09,
      42,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqLinksModel[] = {
    "pqLinksModel\0\0onSessionCreated(pqServer*)\0"
    "onSessionRemoved(pqServer*)\0"
};

void pqLinksModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqLinksModel *_t = static_cast<pqLinksModel *>(_o);
        switch (_id) {
        case 0: _t->onSessionCreated((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 1: _t->onSessionRemoved((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqLinksModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqLinksModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_pqLinksModel,
      qt_meta_data_pqLinksModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqLinksModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqLinksModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqLinksModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqLinksModel))
        return static_cast<void*>(const_cast< pqLinksModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int pqLinksModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_pqLinksModelObject[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      61,   19,   19,   19, 0x08,
      71,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqLinksModelObject[] = {
    "pqLinksModelObject\0\0"
    "proxyModified(pqServerManagerModelItem*)\0"
    "refresh()\0remove()\0"
};

void pqLinksModelObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqLinksModelObject *_t = static_cast<pqLinksModelObject *>(_o);
        switch (_id) {
        case 0: _t->proxyModified((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 1: _t->refresh(); break;
        case 2: _t->remove(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqLinksModelObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqLinksModelObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqLinksModelObject,
      qt_meta_data_pqLinksModelObject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqLinksModelObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqLinksModelObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqLinksModelObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqLinksModelObject))
        return static_cast<void*>(const_cast< pqLinksModelObject*>(this));
    return QObject::qt_metacast(_clname);
}

int pqLinksModelObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
