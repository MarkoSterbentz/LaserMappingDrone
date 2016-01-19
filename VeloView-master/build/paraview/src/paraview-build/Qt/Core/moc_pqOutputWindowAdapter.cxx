/****************************************************************************
** Meta object code from reading C++ file 'pqOutputWindowAdapter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqOutputWindowAdapter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqOutputWindowAdapter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqOutputWindowAdapter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      44,   22,   22,   22, 0x05,
      70,   22,   22,   22, 0x05,
      98,   22,   22,   22, 0x05,
     133,   22,   22,   22, 0x05,
     162,   22,   22,   22, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_pqOutputWindowAdapter[] = {
    "pqOutputWindowAdapter\0\0displayText(QString)\0"
    "displayErrorText(QString)\0"
    "displayWarningText(QString)\0"
    "displayGenericWarningText(QString)\0"
    "displayTextInWindow(QString)\0"
    "displayErrorTextInWindow(QString)\0"
};

void pqOutputWindowAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqOutputWindowAdapter *_t = static_cast<pqOutputWindowAdapter *>(_o);
        switch (_id) {
        case 0: _t->displayText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->displayErrorText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->displayWarningText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->displayGenericWarningText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->displayTextInWindow((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->displayErrorTextInWindow((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqOutputWindowAdapter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqOutputWindowAdapter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqOutputWindowAdapter,
      qt_meta_data_pqOutputWindowAdapter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqOutputWindowAdapter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqOutputWindowAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqOutputWindowAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqOutputWindowAdapter))
        return static_cast<void*>(const_cast< pqOutputWindowAdapter*>(this));
    if (!strcmp(_clname, "vtkOutputWindow"))
        return static_cast< vtkOutputWindow*>(const_cast< pqOutputWindowAdapter*>(this));
    return QObject::qt_metacast(_clname);
}

int pqOutputWindowAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void pqOutputWindowAdapter::displayText(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqOutputWindowAdapter::displayErrorText(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqOutputWindowAdapter::displayWarningText(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqOutputWindowAdapter::displayGenericWarningText(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqOutputWindowAdapter::displayTextInWindow(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqOutputWindowAdapter::displayErrorTextInWindow(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
