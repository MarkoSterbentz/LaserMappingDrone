/****************************************************************************
** Meta object code from reading C++ file 'pqAnimationModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqAnimationModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimationModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqAnimationModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       6,   79, // properties
       1,   97, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      51,   17,   17,   17, 0x05,
      92,   74,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     163,   17,   17,   17, 0x0a,
     181,   17,   17,   17, 0x0a,
     195,   17,   17,   17, 0x0a,
     218,   17,   17,   17, 0x0a,
     239,   17,   17,   17, 0x0a,
     258,   17,   17,   17, 0x0a,
     294,  279,   17,   17, 0x0a,
     320,   17,   17,   17, 0x09,
     335,   17,   17,   17, 0x09,
     354,   17,   17,   17, 0x09,

 // properties: name, type, flags
     380,  371, 0x0009510b,
     389,  385, 0x02095103,
     402,  395, 0x06095103,
     414,  395, 0x06095103,
     424,  395, 0x06095103,
     437,  432, 0x01095103,

 // enums: name, flags, count, data
     371, 0x0,    3,  101,

 // enum data: key, value
     449, uint(pqAnimationModel::Real),
     454, uint(pqAnimationModel::Sequence),
     463, uint(pqAnimationModel::Custom),

       0        // eod
};

static const char qt_meta_stringdata_pqAnimationModel[] = {
    "pqAnimationModel\0\0trackSelected(pqAnimationTrack*)\0"
    "currentTimeSet(double)\0track,kf,end,time\0"
    "keyFrameTimeChanged(pqAnimationTrack*,pqAnimationKeyFrame*,int,double)\0"
    "setMode(ModeType)\0setTicks(int)\0"
    "setCurrentTime(double)\0setStartTime(double)\0"
    "setEndTime(double)\0setInteractive(bool)\0"
    "num,tick_marks\0setTickMarks(int,double*)\0"
    "resizeTracks()\0trackNameChanged()\0"
    "enabledChanged()\0ModeType\0mode\0int\0"
    "ticks\0double\0currentTime\0startTime\0"
    "endTime\0bool\0interactive\0Real\0Sequence\0"
    "Custom\0"
};

void pqAnimationModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqAnimationModel *_t = static_cast<pqAnimationModel *>(_o);
        switch (_id) {
        case 0: _t->trackSelected((*reinterpret_cast< pqAnimationTrack*(*)>(_a[1]))); break;
        case 1: _t->currentTimeSet((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->keyFrameTimeChanged((*reinterpret_cast< pqAnimationTrack*(*)>(_a[1])),(*reinterpret_cast< pqAnimationKeyFrame*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 3: _t->setMode((*reinterpret_cast< ModeType(*)>(_a[1]))); break;
        case 4: _t->setTicks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setCurrentTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setStartTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setEndTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setInteractive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setTickMarks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double*(*)>(_a[2]))); break;
        case 10: _t->resizeTracks(); break;
        case 11: _t->trackNameChanged(); break;
        case 12: _t->enabledChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqAnimationModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqAnimationModel::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_pqAnimationModel,
      qt_meta_data_pqAnimationModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqAnimationModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqAnimationModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqAnimationModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimationModel))
        return static_cast<void*>(const_cast< pqAnimationModel*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int pqAnimationModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ModeType*>(_v) = mode(); break;
        case 1: *reinterpret_cast< int*>(_v) = ticks(); break;
        case 2: *reinterpret_cast< double*>(_v) = currentTime(); break;
        case 3: *reinterpret_cast< double*>(_v) = startTime(); break;
        case 4: *reinterpret_cast< double*>(_v) = endTime(); break;
        case 5: *reinterpret_cast< bool*>(_v) = interactive(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMode(*reinterpret_cast< ModeType*>(_v)); break;
        case 1: setTicks(*reinterpret_cast< int*>(_v)); break;
        case 2: setCurrentTime(*reinterpret_cast< double*>(_v)); break;
        case 3: setStartTime(*reinterpret_cast< double*>(_v)); break;
        case 4: setEndTime(*reinterpret_cast< double*>(_v)); break;
        case 5: setInteractive(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqAnimationModel::trackSelected(pqAnimationTrack * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqAnimationModel::currentTimeSet(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqAnimationModel::keyFrameTimeChanged(pqAnimationTrack * _t1, pqAnimationKeyFrame * _t2, int _t3, double _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
