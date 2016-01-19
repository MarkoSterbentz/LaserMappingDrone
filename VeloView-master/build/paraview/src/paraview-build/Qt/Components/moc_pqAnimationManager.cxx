/****************************************************************************
** Meta object code from reading C++ file 'pqAnimationManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqAnimationManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimationManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqAnimationManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   20,   19,   19, 0x05,
      64,   20,   19,   19, 0x05,
      97,   95,   19,   19, 0x05,
     123,   19,   19,   19, 0x05,
     149,   19,   19,   19, 0x05,
     173,   19,   19,   19, 0x05,
     225,  192,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     260,   19,   19,   19, 0x0a,
     293,   19,   19,   19, 0x09,
     316,   19,   19,   19, 0x09,
     341,   19,   19,   19, 0x09,
     353,   19,   19,   19, 0x09,
     373,   19,   19,   19, 0x09,
     385,   19,   19,   19, 0x09,
     401,   19,   19,   19, 0x09,
     423,  418,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqAnimationManager[] = {
    "pqAnimationManager\0\0scene\0"
    "activeSceneChanged(pqAnimationScene*)\0"
    "activeServerChanged(pqServer*)\0,\0"
    "saveProgress(QString,int)\0"
    "beginNonUndoableChanges()\0"
    "endNonUndoableChanges()\0disconnectServer()\0"
    "filename,magnification,frameRate\0"
    "writeAnimation(QString,int,double)\0"
    "onActiveServerChanged(pqServer*)\0"
    "onProxyAdded(pqProxy*)\0onProxyRemoved(pqProxy*)\0"
    "updateGUI()\0updateViewModules()\0"
    "onTick(int)\0onWidthEdited()\0"
    "onHeightEdited()\0lock\0onLockAspectRatio(bool)\0"
};

void pqAnimationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqAnimationManager *_t = static_cast<pqAnimationManager *>(_o);
        switch (_id) {
        case 0: _t->activeSceneChanged((*reinterpret_cast< pqAnimationScene*(*)>(_a[1]))); break;
        case 1: _t->activeServerChanged((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 2: _t->saveProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->beginNonUndoableChanges(); break;
        case 4: _t->endNonUndoableChanges(); break;
        case 5: _t->disconnectServer(); break;
        case 6: _t->writeAnimation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 7: _t->onActiveServerChanged((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 8: _t->onProxyAdded((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 9: _t->onProxyRemoved((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 10: _t->updateGUI(); break;
        case 11: _t->updateViewModules(); break;
        case 12: _t->onTick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->onWidthEdited(); break;
        case 14: _t->onHeightEdited(); break;
        case 15: _t->onLockAspectRatio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqAnimationManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqAnimationManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqAnimationManager,
      qt_meta_data_pqAnimationManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqAnimationManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqAnimationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqAnimationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimationManager))
        return static_cast<void*>(const_cast< pqAnimationManager*>(this));
    return QObject::qt_metacast(_clname);
}

int pqAnimationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void pqAnimationManager::activeSceneChanged(pqAnimationScene * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqAnimationManager::activeServerChanged(pqServer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqAnimationManager::saveProgress(const QString & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqAnimationManager::beginNonUndoableChanges()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void pqAnimationManager::endNonUndoableChanges()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void pqAnimationManager::disconnectServer()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void pqAnimationManager::writeAnimation(const QString & _t1, int _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
