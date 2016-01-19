/****************************************************************************
** Meta object code from reading C++ file 'pqAnimationTrack.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqAnimationTrack.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimationTrack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqAnimationTrack[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      36,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   53,   17,   17, 0x0a,
      79,   77,   17,   17, 0x0a,
     110,  103,   17,   17, 0x0a,

 // properties: name, type, flags
     136,  127, 0xff095103,

       0        // eod
};

static const char qt_meta_stringdata_pqAnimationTrack[] = {
    "pqAnimationTrack\0\0propertyChanged()\0"
    "enabledChanged()\0p\0setProperty(QVariant)\0"
    "r\0setBoundingRect(QRectF)\0enable\0"
    "setEnabled(bool)\0QVariant\0property\0"
};

void pqAnimationTrack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqAnimationTrack *_t = static_cast<pqAnimationTrack *>(_o);
        switch (_id) {
        case 0: _t->propertyChanged(); break;
        case 1: _t->enabledChanged(); break;
        case 2: _t->setProperty((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->setBoundingRect((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 4: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqAnimationTrack::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqAnimationTrack::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqAnimationTrack,
      qt_meta_data_pqAnimationTrack, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqAnimationTrack::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqAnimationTrack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqAnimationTrack::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimationTrack))
        return static_cast<void*>(const_cast< pqAnimationTrack*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< pqAnimationTrack*>(this));
    return QObject::qt_metacast(_clname);
}

int pqAnimationTrack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = property(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setProperty(*reinterpret_cast< QVariant*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqAnimationTrack::propertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqAnimationTrack::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
