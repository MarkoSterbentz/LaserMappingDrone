/****************************************************************************
** Meta object code from reading C++ file 'pqChartSelectionReaction.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqChartSelectionReaction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqChartSelectionReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqChartSelectionReaction[] = {

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
      26,   25,   25,   25, 0x09,
      42,   25,   25,   25, 0x09,
      58,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqChartSelectionReaction[] = {
    "pqChartSelectionReaction\0\0triggered(bool)\0"
    "stopSelection()\0modifiersChanged()\0"
};

void pqChartSelectionReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqChartSelectionReaction *_t = static_cast<pqChartSelectionReaction *>(_o);
        switch (_id) {
        case 0: _t->triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->stopSelection(); break;
        case 2: _t->modifiersChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqChartSelectionReaction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqChartSelectionReaction::staticMetaObject = {
    { &pqReaction::staticMetaObject, qt_meta_stringdata_pqChartSelectionReaction,
      qt_meta_data_pqChartSelectionReaction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqChartSelectionReaction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqChartSelectionReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqChartSelectionReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqChartSelectionReaction))
        return static_cast<void*>(const_cast< pqChartSelectionReaction*>(this));
    return pqReaction::qt_metacast(_clname);
}

int pqChartSelectionReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqReaction::qt_metacall(_c, _id, _a);
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
