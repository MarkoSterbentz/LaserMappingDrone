/****************************************************************************
** Meta object code from reading C++ file 'pqAnimatableProxyComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqAnimatableProxyComboBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimatableProxyComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqAnimatableProxyComboBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   60,   26,   26, 0x09,
      97,   60,   26,   26, 0x09,
     132,   60,   26,   26, 0x09,
     177,  173,   26,   26, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqAnimatableProxyComboBox[] = {
    "pqAnimatableProxyComboBox\0\0"
    "currentProxyChanged(vtkSMProxy*)\0src\0"
    "onSourceAdded(pqPipelineSource*)\0"
    "onSourceRemoved(pqPipelineSource*)\0"
    "onNameChanged(pqServerManagerModelItem*)\0"
    "idx\0onCurrentSourceChanged(int)\0"
};

void pqAnimatableProxyComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqAnimatableProxyComboBox *_t = static_cast<pqAnimatableProxyComboBox *>(_o);
        switch (_id) {
        case 0: _t->currentProxyChanged((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 1: _t->onSourceAdded((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 2: _t->onSourceRemoved((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 3: _t->onNameChanged((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 4: _t->onCurrentSourceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqAnimatableProxyComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqAnimatableProxyComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_pqAnimatableProxyComboBox,
      qt_meta_data_pqAnimatableProxyComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqAnimatableProxyComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqAnimatableProxyComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqAnimatableProxyComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimatableProxyComboBox))
        return static_cast<void*>(const_cast< pqAnimatableProxyComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int pqAnimatableProxyComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void pqAnimatableProxyComboBox::currentProxyChanged(vtkSMProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
