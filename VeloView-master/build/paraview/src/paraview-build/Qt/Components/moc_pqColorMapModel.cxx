/****************************************************************************
** Meta object code from reading C++ file 'pqColorMapModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqColorMapModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqColorMapModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqColorMapModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      37,   16,   16,   16, 0x05,
      68,   56,   16,   16, 0x05,
      99,   93,   16,   16, 0x05,
     123,   16,   16,   16, 0x05,
     143,  137,   16,   16, 0x05,
     159,  137,   16,   16, 0x05,
     178,  137,   16,   16, 0x05,
     208,  196,   16,   16, 0x05,
     253,  239,   16,   16, 0x05,
     306,  286,   16,   16, 0x05,
     333,   16,   16,   16, 0x05,
     352,  137,   16,   16, 0x05,
     373,  137,   16,   16, 0x05,
     397,  137,   16,   16, 0x05,
     420,  196,   16,   16, 0x05,
     466,  455,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_pqColorMapModel[] = {
    "pqColorMapModel\0\0colorSpaceChanged()\0"
    "tableSizeChanged()\0index,color\0"
    "colorChanged(int,QColor)\0color\0"
    "nanColorChanged(QColor)\0pointsReset()\0"
    "index\0pointAdded(int)\0removingPoint(int)\0"
    "pointRemoved(int)\0index,value\0"
    "valueChanged(int,pqChartValue)\0"
    "index,opacity\0opacityChanged(int,pqChartValue)\0"
    "newIndexLookupValue\0indexedLookupChanged(bool)\0"
    "annotationsReset()\0annotationAdded(int)\0"
    "removingAnnotation(int)\0annotationRemoved(int)\0"
    "annotatedValueChanged(int,QString)\0"
    "index,note\0annotationChanged(int,QString)\0"
};

void pqColorMapModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqColorMapModel *_t = static_cast<pqColorMapModel *>(_o);
        switch (_id) {
        case 0: _t->colorSpaceChanged(); break;
        case 1: _t->tableSizeChanged(); break;
        case 2: _t->colorChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 3: _t->nanColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->pointsReset(); break;
        case 5: _t->pointAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->removingPoint((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->pointRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const pqChartValue(*)>(_a[2]))); break;
        case 9: _t->opacityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const pqChartValue(*)>(_a[2]))); break;
        case 10: _t->indexedLookupChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->annotationsReset(); break;
        case 12: _t->annotationAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->removingAnnotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->annotationRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->annotatedValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->annotationChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqColorMapModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqColorMapModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqColorMapModel,
      qt_meta_data_pqColorMapModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqColorMapModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqColorMapModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqColorMapModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqColorMapModel))
        return static_cast<void*>(const_cast< pqColorMapModel*>(this));
    return QObject::qt_metacast(_clname);
}

int pqColorMapModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void pqColorMapModel::colorSpaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqColorMapModel::tableSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqColorMapModel::colorChanged(int _t1, const QColor & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqColorMapModel::nanColorChanged(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqColorMapModel::pointsReset()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void pqColorMapModel::pointAdded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void pqColorMapModel::removingPoint(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void pqColorMapModel::pointRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void pqColorMapModel::valueChanged(int _t1, const pqChartValue & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void pqColorMapModel::opacityChanged(int _t1, const pqChartValue & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void pqColorMapModel::indexedLookupChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void pqColorMapModel::annotationsReset()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void pqColorMapModel::annotationAdded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void pqColorMapModel::removingAnnotation(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void pqColorMapModel::annotationRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void pqColorMapModel::annotatedValueChanged(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void pqColorMapModel::annotationChanged(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_END_MOC_NAMESPACE
