/****************************************************************************
** Meta object code from reading C++ file 'pqFiltersMenuReaction.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqFiltersMenuReaction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFiltersMenuReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqFiltersMenuReaction[] = {

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
      42,   23,   22,   22, 0x0a,
      66,   22,   22,   22, 0x2a,
     115,  104,   86,   22, 0x0a,
     145,  104,   22,   22, 0x09,
     174,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqFiltersMenuReaction[] = {
    "pqFiltersMenuReaction\0\0updateOnlyToolbars\0"
    "updateEnableState(bool)\0updateEnableState()\0"
    "pqPipelineSource*\0group,name\0"
    "createFilter(QString,QString)\0"
    "onTriggered(QString,QString)\0"
    "setEnableStateDirty()\0"
};

void pqFiltersMenuReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqFiltersMenuReaction *_t = static_cast<pqFiltersMenuReaction *>(_o);
        switch (_id) {
        case 0: _t->updateEnableState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateEnableState(); break;
        case 2: { pqPipelineSource* _r = _t->createFilter((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< pqPipelineSource**>(_a[0]) = _r; }  break;
        case 3: _t->onTriggered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->setEnableStateDirty(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqFiltersMenuReaction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqFiltersMenuReaction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqFiltersMenuReaction,
      qt_meta_data_pqFiltersMenuReaction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqFiltersMenuReaction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqFiltersMenuReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqFiltersMenuReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqFiltersMenuReaction))
        return static_cast<void*>(const_cast< pqFiltersMenuReaction*>(this));
    return QObject::qt_metacast(_clname);
}

int pqFiltersMenuReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
