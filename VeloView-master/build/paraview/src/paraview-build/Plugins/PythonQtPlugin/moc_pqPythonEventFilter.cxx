/****************************************************************************
** Meta object code from reading C++ file 'pqPythonEventFilter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Plugins/PythonQtPlugin/pqPythonEventFilter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPythonEventFilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPythonEventFilter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   61,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqPythonEventFilter[] = {
    "pqPythonEventFilter\0\0obj,event\0"
    "handleEvent(QObject*,QEvent*)\0result\0"
    "setEventHandlerResult(bool)\0"
};

void pqPythonEventFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPythonEventFilter *_t = static_cast<pqPythonEventFilter *>(_o);
        switch (_id) {
        case 0: _t->handleEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 1: _t->setEventHandlerResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPythonEventFilter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPythonEventFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPythonEventFilter,
      qt_meta_data_pqPythonEventFilter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPythonEventFilter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPythonEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPythonEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPythonEventFilter))
        return static_cast<void*>(const_cast< pqPythonEventFilter*>(this));
    return QObject::qt_metacast(_clname);
}

int pqPythonEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void pqPythonEventFilter::handleEvent(QObject * _t1, QEvent * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
