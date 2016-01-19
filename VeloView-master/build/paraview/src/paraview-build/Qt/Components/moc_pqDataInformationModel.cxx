/****************************************************************************
** Meta object code from reading C++ file 'pqDataInformationModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqDataInformationModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDataInformationModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqDataInformationModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   24,   23,   23, 0x0a,
      60,   24,   23,   23, 0x0a,
      97,   92,   23,   23, 0x0a,
     134,  120,   23,   23, 0x08,
     165,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqDataInformationModel[] = {
    "pqDataInformationModel\0\0source\0"
    "addSource(pqPipelineSource*)\0"
    "removeSource(pqPipelineSource*)\0view\0"
    "setActiveView(pqView*)\0changedSource\0"
    "dataUpdated(pqPipelineSource*)\0"
    "refreshGeometrySizes()\0"
};

void pqDataInformationModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqDataInformationModel *_t = static_cast<pqDataInformationModel *>(_o);
        switch (_id) {
        case 0: _t->addSource((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 1: _t->removeSource((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 2: _t->setActiveView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 3: _t->dataUpdated((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 4: _t->refreshGeometrySizes(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqDataInformationModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqDataInformationModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_pqDataInformationModel,
      qt_meta_data_pqDataInformationModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqDataInformationModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqDataInformationModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqDataInformationModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqDataInformationModel))
        return static_cast<void*>(const_cast< pqDataInformationModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int pqDataInformationModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
