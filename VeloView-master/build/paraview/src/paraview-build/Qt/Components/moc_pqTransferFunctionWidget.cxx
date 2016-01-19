/****************************************************************************
** Meta object code from reading C++ file 'pqTransferFunctionWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqTransferFunctionWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTransferFunctionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqTransferFunctionWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   26,   25,   25, 0x05,
      63,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      87,   26,   25,   25, 0x0a,
     119,  114,   25,   25, 0x0a,
     151,   25,   25,   25, 0x0a,
     160,   25,   25,   25, 0x09,
     184,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqTransferFunctionWidget[] = {
    "pqTransferFunctionWidget\0\0index\0"
    "currentPointChanged(vtkIdType)\0"
    "controlPointsModified()\0"
    "setCurrentPoint(vtkIdType)\0xpos\0"
    "setCurrentPointPosition(double)\0"
    "render()\0onCurrentChangedEvent()\0"
    "renderInternal()\0"
};

void pqTransferFunctionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqTransferFunctionWidget *_t = static_cast<pqTransferFunctionWidget *>(_o);
        switch (_id) {
        case 0: _t->currentPointChanged((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 1: _t->controlPointsModified(); break;
        case 2: _t->setCurrentPoint((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 3: _t->setCurrentPointPosition((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->render(); break;
        case 5: _t->onCurrentChangedEvent(); break;
        case 6: _t->renderInternal(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqTransferFunctionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqTransferFunctionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqTransferFunctionWidget,
      qt_meta_data_pqTransferFunctionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqTransferFunctionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqTransferFunctionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqTransferFunctionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqTransferFunctionWidget))
        return static_cast<void*>(const_cast< pqTransferFunctionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqTransferFunctionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void pqTransferFunctionWidget::currentPointChanged(vtkIdType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqTransferFunctionWidget::controlPointsModified()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
