/****************************************************************************
** Meta object code from reading C++ file 'pqPipelineModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqPipelineModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPipelineModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPipelineModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   52,   16,   16, 0x0a,
      80,   52,   16,   16, 0x0a,
     111,  104,   16,   16, 0x0a,
     140,  104,   16,   16, 0x0a,
     185,  172,   16,   16, 0x0a,
     240,  172,   16,   16, 0x0a,
     305,  298,   16,   16, 0x0a,
     322,   52,   16,   16, 0x08,
     361,   16,   16,   16, 0x08,
     387,  381,   16,   16, 0x08,
     432,   16,   16,   16, 0x28,
     468,   16,   16,   16, 0x08,
     511,   16,   16,   16, 0x08,
     544,  381,   16,   16, 0x08,
     591,   16,   16,   16, 0x28,
     629,   52,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqPipelineModel[] = {
    "pqPipelineModel\0\0index\0"
    "firstChildAdded(QModelIndex)\0server\0"
    "addServer(pqServer*)\0removeServer(pqServer*)\0"
    "source\0addSource(pqPipelineSource*)\0"
    "removeSource(pqPipelineSource*)\0"
    "source,sink,\0"
    "addConnection(pqPipelineSource*,pqPipelineSource*,int)\0"
    "removeConnection(pqPipelineSource*,pqPipelineSource*,int)\0"
    "module\0setView(pqView*)\0"
    "onInsituConnectionInitiated(pqServer*)\0"
    "serverDataChanged()\0,type\0"
    "updateVisibility(pqPipelineSource*,ItemType)\0"
    "updateVisibility(pqPipelineSource*)\0"
    "delayedUpdateVisibility(pqPipelineSource*)\0"
    "delayedUpdateVisibilityTimeout()\0"
    "updateData(pqServerManagerModelItem*,ItemType)\0"
    "updateData(pqServerManagerModelItem*)\0"
    "updateDataServer(pqServer*)\0"
};

void pqPipelineModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPipelineModel *_t = static_cast<pqPipelineModel *>(_o);
        switch (_id) {
        case 0: _t->firstChildAdded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->addServer((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 2: _t->removeServer((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 3: _t->addSource((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 4: _t->removeSource((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 5: _t->addConnection((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->removeConnection((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 8: _t->onInsituConnectionInitiated((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 9: _t->serverDataChanged(); break;
        case 10: _t->updateVisibility((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< ItemType(*)>(_a[2]))); break;
        case 11: _t->updateVisibility((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 12: _t->delayedUpdateVisibility((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 13: _t->delayedUpdateVisibilityTimeout(); break;
        case 14: _t->updateData((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1])),(*reinterpret_cast< ItemType(*)>(_a[2]))); break;
        case 15: _t->updateData((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 16: _t->updateDataServer((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPipelineModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPipelineModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_pqPipelineModel,
      qt_meta_data_pqPipelineModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPipelineModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPipelineModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPipelineModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPipelineModel))
        return static_cast<void*>(const_cast< pqPipelineModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int pqPipelineModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void pqPipelineModel::firstChildAdded(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
