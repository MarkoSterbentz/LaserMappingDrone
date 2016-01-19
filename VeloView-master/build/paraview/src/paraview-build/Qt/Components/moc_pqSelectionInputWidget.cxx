/****************************************************************************
** Meta object code from reading C++ file 'pqSelectionInputWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqSelectionInputWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSelectionInputWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSelectionInputWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   52,   23,   23, 0x0a,
      86,   23,   23,   23, 0x0a,
     119,   23,   23,   23, 0x0a,
     131,   23,   23,   23, 0x0a,
     144,   23,   23,   23, 0x09,
     166,   23,   23,   23, 0x09,
     193,   23,   23,   23, 0x09,

 // properties: name, type, flags
      52,  208, 0x0019510b,

       0        // eod
};

static const char qt_meta_stringdata_pqSelectionInputWidget[] = {
    "pqSelectionInputWidget\0\0"
    "selectionChanged(pqSMProxy)\0selection\0"
    "setSelection(pqSMProxy)\0"
    "initializeDefaultValueIfNeeded()\0"
    "preAccept()\0postAccept()\0copyActiveSelection()\0"
    "onActiveSelectionChanged()\0updateLabels()\0"
    "pqSMProxy\0"
};

void pqSelectionInputWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSelectionInputWidget *_t = static_cast<pqSelectionInputWidget *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< pqSMProxy(*)>(_a[1]))); break;
        case 1: _t->setSelection((*reinterpret_cast< pqSMProxy(*)>(_a[1]))); break;
        case 2: _t->initializeDefaultValueIfNeeded(); break;
        case 3: _t->preAccept(); break;
        case 4: _t->postAccept(); break;
        case 5: _t->copyActiveSelection(); break;
        case 6: _t->onActiveSelectionChanged(); break;
        case 7: _t->updateLabels(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSelectionInputWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSelectionInputWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqSelectionInputWidget,
      qt_meta_data_pqSelectionInputWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSelectionInputWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSelectionInputWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSelectionInputWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSelectionInputWidget))
        return static_cast<void*>(const_cast< pqSelectionInputWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqSelectionInputWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< pqSMProxy*>(_v) = selection(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSelection(*reinterpret_cast< pqSMProxy*>(_v)); break;
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
void pqSelectionInputWidget::selectionChanged(pqSMProxy _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
