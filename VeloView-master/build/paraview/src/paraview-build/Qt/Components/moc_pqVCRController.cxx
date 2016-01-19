/****************************************************************************
** Meta object code from reading C++ file 'pqVCRController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqVCRController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqVCRController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqVCRController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      35,   16,   16,   16, 0x05,
      49,   16,   16,   16, 0x05,
      63,   16,   16,   16, 0x05,
      76,   74,   16,   16, 0x05,
     102,   16,   16,   16, 0x05,
     128,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     152,   16,   16,   16, 0x0a,
     189,   16,   16,   16, 0x0a,
     211,   16,   16,   16, 0x0a,
     226,   16,   16,   16, 0x0a,
     244,   16,   16,   16, 0x0a,
     258,   16,   16,   16, 0x0a,
     272,   16,   16,   16, 0x0a,
     281,   16,   16,   16, 0x0a,
     299,  291,   16,   16, 0x0a,
     312,   16,   16,   16, 0x09,
     321,   16,   16,   16, 0x09,
     345,   16,   16,   16, 0x09,
     359,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqVCRController[] = {
    "pqVCRController\0\0timestepChanged()\0"
    "playing(bool)\0enabled(bool)\0loop(bool)\0"
    ",\0timeRanges(double,double)\0"
    "beginNonUndoableChanges()\0"
    "endNonUndoableChanges()\0"
    "setAnimationScene(pqAnimationScene*)\0"
    "onTimeRangesChanged()\0onFirstFrame()\0"
    "onPreviousFrame()\0onNextFrame()\0"
    "onLastFrame()\0onPlay()\0onPause()\0"
    "checked\0onLoop(bool)\0onTick()\0"
    "onLoopPropertyChanged()\0onBeginPlay()\0"
    "onEndPlay()\0"
};

void pqVCRController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqVCRController *_t = static_cast<pqVCRController *>(_o);
        switch (_id) {
        case 0: _t->timestepChanged(); break;
        case 1: _t->playing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->enabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->loop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->timeRanges((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->beginNonUndoableChanges(); break;
        case 6: _t->endNonUndoableChanges(); break;
        case 7: _t->setAnimationScene((*reinterpret_cast< pqAnimationScene*(*)>(_a[1]))); break;
        case 8: _t->onTimeRangesChanged(); break;
        case 9: _t->onFirstFrame(); break;
        case 10: _t->onPreviousFrame(); break;
        case 11: _t->onNextFrame(); break;
        case 12: _t->onLastFrame(); break;
        case 13: _t->onPlay(); break;
        case 14: _t->onPause(); break;
        case 15: _t->onLoop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->onTick(); break;
        case 17: _t->onLoopPropertyChanged(); break;
        case 18: _t->onBeginPlay(); break;
        case 19: _t->onEndPlay(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqVCRController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqVCRController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqVCRController,
      qt_meta_data_pqVCRController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqVCRController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqVCRController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqVCRController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqVCRController))
        return static_cast<void*>(const_cast< pqVCRController*>(this));
    return QObject::qt_metacast(_clname);
}

int pqVCRController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void pqVCRController::timestepChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqVCRController::playing(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqVCRController::enabled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqVCRController::loop(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqVCRController::timeRanges(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqVCRController::beginNonUndoableChanges()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void pqVCRController::endNonUndoableChanges()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
