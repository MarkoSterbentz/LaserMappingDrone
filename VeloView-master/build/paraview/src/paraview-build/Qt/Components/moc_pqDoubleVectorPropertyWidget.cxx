/****************************************************************************
** Meta object code from reading C++ file 'pqDoubleVectorPropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqDoubleVectorPropertyWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDoubleVectorPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqDoubleVectorPropertyWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,
      47,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   29,   29,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqDoubleVectorPropertyWidget[] = {
    "pqDoubleVectorPropertyWidget\0\0"
    "clearHighlight()\0highlightResetButton()\0"
    "resetButtonClicked()\0"
};

void pqDoubleVectorPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqDoubleVectorPropertyWidget *_t = static_cast<pqDoubleVectorPropertyWidget *>(_o);
        switch (_id) {
        case 0: _t->clearHighlight(); break;
        case 1: _t->highlightResetButton(); break;
        case 2: _t->resetButtonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqDoubleVectorPropertyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqDoubleVectorPropertyWidget::staticMetaObject = {
    { &pqPropertyWidget::staticMetaObject, qt_meta_stringdata_pqDoubleVectorPropertyWidget,
      qt_meta_data_pqDoubleVectorPropertyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqDoubleVectorPropertyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqDoubleVectorPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqDoubleVectorPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqDoubleVectorPropertyWidget))
        return static_cast<void*>(const_cast< pqDoubleVectorPropertyWidget*>(this));
    return pqPropertyWidget::qt_metacast(_clname);
}

int pqDoubleVectorPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void pqDoubleVectorPropertyWidget::clearHighlight()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqDoubleVectorPropertyWidget::highlightResetButton()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
