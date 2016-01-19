/****************************************************************************
** Meta object code from reading C++ file 'pqSourcesMenuReaction.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqSourcesMenuReaction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSourcesMenuReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSourcesMenuReaction[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      43,   22,   22,   22, 0x0a,
      78,   67,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqSourcesMenuReaction[] = {
    "pqSourcesMenuReaction\0\0updateEnableState()\0"
    "updateEnableState(bool)\0group,name\0"
    "onTriggered(QString,QString)\0"
};

void pqSourcesMenuReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSourcesMenuReaction *_t = static_cast<pqSourcesMenuReaction *>(_o);
        switch (_id) {
        case 0: _t->updateEnableState(); break;
        case 1: _t->updateEnableState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onTriggered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSourcesMenuReaction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSourcesMenuReaction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqSourcesMenuReaction,
      qt_meta_data_pqSourcesMenuReaction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSourcesMenuReaction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSourcesMenuReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSourcesMenuReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSourcesMenuReaction))
        return static_cast<void*>(const_cast< pqSourcesMenuReaction*>(this));
    return QObject::qt_metacast(_clname);
}

int pqSourcesMenuReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
