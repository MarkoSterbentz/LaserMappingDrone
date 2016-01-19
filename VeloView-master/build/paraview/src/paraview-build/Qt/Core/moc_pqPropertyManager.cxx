/****************************************************************************
** Meta object code from reading C++ file 'pqPropertyManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqPropertyManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPropertyManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPropertyManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      30,   18,   18,   18, 0x05,
      46,   18,   18,   18, 0x05,
      57,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   18,   18,   18, 0x0a,
      77,   18,   18,   18, 0x0a,
      86,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqPropertyManager[] = {
    "pqPropertyManager\0\0modified()\0"
    "aboutToAccept()\0accepted()\0rejected()\0"
    "accept()\0reject()\0propertyChanged()\0"
};

void pqPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPropertyManager *_t = static_cast<pqPropertyManager *>(_o);
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->aboutToAccept(); break;
        case 2: _t->accepted(); break;
        case 3: _t->rejected(); break;
        case 4: _t->accept(); break;
        case 5: _t->reject(); break;
        case 6: _t->propertyChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqPropertyManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPropertyManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPropertyManager,
      qt_meta_data_pqPropertyManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPropertyManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPropertyManager))
        return static_cast<void*>(const_cast< pqPropertyManager*>(this));
    return QObject::qt_metacast(_clname);
}

int pqPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void pqPropertyManager::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqPropertyManager::aboutToAccept()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqPropertyManager::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void pqPropertyManager::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
