/****************************************************************************
** Meta object code from reading C++ file 'pqCalculatorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqCalculatorWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCalculatorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqCalculatorWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   20,   19,   19, 0x09,
      52,   19,   19,   19, 0x09,
      75,   19,   19,   19, 0x09,
     102,   97,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqCalculatorWidget[] = {
    "pqCalculatorWidget\0\0action\0"
    "variableChosen(QAction*)\0"
    "buttonPressed(QString)\0updateVariableNames()\0"
    "mode\0updateVariables(QString)\0"
};

void pqCalculatorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqCalculatorWidget *_t = static_cast<pqCalculatorWidget *>(_o);
        switch (_id) {
        case 0: _t->variableChosen((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->buttonPressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateVariableNames(); break;
        case 3: _t->updateVariables((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqCalculatorWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqCalculatorWidget::staticMetaObject = {
    { &pqPropertyWidget::staticMetaObject, qt_meta_stringdata_pqCalculatorWidget,
      qt_meta_data_pqCalculatorWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqCalculatorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqCalculatorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqCalculatorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqCalculatorWidget))
        return static_cast<void*>(const_cast< pqCalculatorWidget*>(this));
    return pqPropertyWidget::qt_metacast(_clname);
}

int pqCalculatorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
