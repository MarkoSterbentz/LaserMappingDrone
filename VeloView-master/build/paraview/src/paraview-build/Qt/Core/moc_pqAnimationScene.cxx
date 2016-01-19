/****************************************************************************
** Meta object code from reading C++ file 'pqAnimationScene.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqAnimationScene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimationScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqAnimationScene[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      47,   17,   17,   17, 0x05,
      73,   17,   17,   17, 0x05,
     104,   17,   17,   17, 0x05,
     132,   17,   17,   17, 0x05,
     146,   17,   17,   17, 0x05,
     164,   17,   17,   17, 0x05,
     178,   17,   17,   17, 0x05,
     203,   17,   17,   17, 0x05,
     215,   17,   17,   17, 0x05,
     242,  225,   17,   17, 0x05,
     257,  252,   17,   17, 0x05,
     279,   17,   17,   17, 0x05,
     299,   17,   17,   17, 0x05,
     318,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     337,   17,   17,   17, 0x0a,
     344,   17,   17,   17, 0x0a,
     352,  252,   17,   17, 0x0a,
     377,   17,   17,   17, 0x08,
     407,  393,   17,   17, 0x08,
     444,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqAnimationScene[] = {
    "pqAnimationScene\0\0preAddedCue(pqAnimationCue*)\0"
    "addedCue(pqAnimationCue*)\0"
    "preRemovedCue(pqAnimationCue*)\0"
    "removedCue(pqAnimationCue*)\0cuesChanged()\0"
    "playModeChanged()\0loopChanged()\0"
    "clockTimeRangesChanged()\0beginPlay()\0"
    "endPlay()\0percentCompleted\0tick(int)\0"
    "time\0animationTime(double)\0"
    "frameCountChanged()\0timeStepsChanged()\0"
    "timeLabelChanged()\0play()\0pause()\0"
    "setAnimationTime(double)\0onCuesChanged()\0"
    "caller,,,info\0onTick(vtkObject*,ulong,void*,void*)\0"
    "onAnimationTimePropertyChanged()\0"
};

void pqAnimationScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqAnimationScene *_t = static_cast<pqAnimationScene *>(_o);
        switch (_id) {
        case 0: _t->preAddedCue((*reinterpret_cast< pqAnimationCue*(*)>(_a[1]))); break;
        case 1: _t->addedCue((*reinterpret_cast< pqAnimationCue*(*)>(_a[1]))); break;
        case 2: _t->preRemovedCue((*reinterpret_cast< pqAnimationCue*(*)>(_a[1]))); break;
        case 3: _t->removedCue((*reinterpret_cast< pqAnimationCue*(*)>(_a[1]))); break;
        case 4: _t->cuesChanged(); break;
        case 5: _t->playModeChanged(); break;
        case 6: _t->loopChanged(); break;
        case 7: _t->clockTimeRangesChanged(); break;
        case 8: _t->beginPlay(); break;
        case 9: _t->endPlay(); break;
        case 10: _t->tick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->animationTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->frameCountChanged(); break;
        case 13: _t->timeStepsChanged(); break;
        case 14: _t->timeLabelChanged(); break;
        case 15: _t->play(); break;
        case 16: _t->pause(); break;
        case 17: _t->setAnimationTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->onCuesChanged(); break;
        case 19: _t->onTick((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 20: _t->onAnimationTimePropertyChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqAnimationScene::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqAnimationScene::staticMetaObject = {
    { &pqProxy::staticMetaObject, qt_meta_stringdata_pqAnimationScene,
      qt_meta_data_pqAnimationScene, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqAnimationScene::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqAnimationScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqAnimationScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimationScene))
        return static_cast<void*>(const_cast< pqAnimationScene*>(this));
    return pqProxy::qt_metacast(_clname);
}

int pqAnimationScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void pqAnimationScene::preAddedCue(pqAnimationCue * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqAnimationScene::addedCue(pqAnimationCue * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqAnimationScene::preRemovedCue(pqAnimationCue * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqAnimationScene::removedCue(pqAnimationCue * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqAnimationScene::cuesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void pqAnimationScene::playModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void pqAnimationScene::loopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void pqAnimationScene::clockTimeRangesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void pqAnimationScene::beginPlay()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void pqAnimationScene::endPlay()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void pqAnimationScene::tick(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void pqAnimationScene::animationTime(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void pqAnimationScene::frameCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void pqAnimationScene::timeStepsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void pqAnimationScene::timeLabelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}
QT_END_MOC_NAMESPACE
