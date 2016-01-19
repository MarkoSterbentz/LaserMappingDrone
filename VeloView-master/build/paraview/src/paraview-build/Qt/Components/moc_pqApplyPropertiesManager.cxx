/****************************************************************************
** Meta object code from reading C++ file 'pqApplyPropertiesManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqApplyPropertiesManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqApplyPropertiesManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqApplyPropertiesManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,
      37,   25,   25,   25, 0x05,
      45,   25,   25,   25, 0x05,
      65,   57,   25,   25, 0x05,
      89,   57,   25,   25, 0x05,
     113,   57,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     138,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqApplyPropertiesManager[] = {
    "pqApplyPropertiesManager\0\0preApply()\0"
    "apply()\0postApply()\0enabled\0"
    "applyStateChanged(bool)\0resetStateChanged(bool)\0"
    "deleteStateChanged(bool)\0applyProperties()\0"
};

void pqApplyPropertiesManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqApplyPropertiesManager *_t = static_cast<pqApplyPropertiesManager *>(_o);
        switch (_id) {
        case 0: _t->preApply(); break;
        case 1: _t->apply(); break;
        case 2: _t->postApply(); break;
        case 3: _t->applyStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->resetStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->deleteStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->applyProperties(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqApplyPropertiesManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqApplyPropertiesManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqApplyPropertiesManager,
      qt_meta_data_pqApplyPropertiesManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqApplyPropertiesManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqApplyPropertiesManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqApplyPropertiesManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqApplyPropertiesManager))
        return static_cast<void*>(const_cast< pqApplyPropertiesManager*>(this));
    return QObject::qt_metacast(_clname);
}

int pqApplyPropertiesManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void pqApplyPropertiesManager::preApply()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqApplyPropertiesManager::apply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqApplyPropertiesManager::postApply()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void pqApplyPropertiesManager::applyStateChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqApplyPropertiesManager::resetStateChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqApplyPropertiesManager::deleteStateChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
