/****************************************************************************
** Meta object code from reading C++ file 'pqDoubleSpinBoxEventTranslator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../paraview/ThirdParty/QtTesting/vtkqttesting/pqDoubleSpinBoxEventTranslator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDoubleSpinBoxEventTranslator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqDoubleSpinBoxEventTranslator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x08,
      61,   54,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqDoubleSpinBoxEventTranslator[] = {
    "pqDoubleSpinBoxEventTranslator\0\0"
    "onDestroyed(QObject*)\0number\0"
    "onValueChanged(double)\0"
};

void pqDoubleSpinBoxEventTranslator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqDoubleSpinBoxEventTranslator *_t = static_cast<pqDoubleSpinBoxEventTranslator *>(_o);
        switch (_id) {
        case 0: _t->onDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->onValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqDoubleSpinBoxEventTranslator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqDoubleSpinBoxEventTranslator::staticMetaObject = {
    { &pqWidgetEventTranslator::staticMetaObject, qt_meta_stringdata_pqDoubleSpinBoxEventTranslator,
      qt_meta_data_pqDoubleSpinBoxEventTranslator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqDoubleSpinBoxEventTranslator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqDoubleSpinBoxEventTranslator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqDoubleSpinBoxEventTranslator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqDoubleSpinBoxEventTranslator))
        return static_cast<void*>(const_cast< pqDoubleSpinBoxEventTranslator*>(this));
    return pqWidgetEventTranslator::qt_metacast(_clname);
}

int pqDoubleSpinBoxEventTranslator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqWidgetEventTranslator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
