/****************************************************************************
** Meta object code from reading C++ file 'pqVCRToolbar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqVCRToolbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqVCRToolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqVCRToolbar[] = {

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
      16,   14,   13,   13, 0x09,
      45,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqVCRToolbar[] = {
    "pqVCRToolbar\0\0,\0setTimeRanges(double,double)\0"
    "onPlaying(bool)\0"
};

void pqVCRToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqVCRToolbar *_t = static_cast<pqVCRToolbar *>(_o);
        switch (_id) {
        case 0: _t->setTimeRanges((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->onPlaying((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqVCRToolbar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqVCRToolbar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_pqVCRToolbar,
      qt_meta_data_pqVCRToolbar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqVCRToolbar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqVCRToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqVCRToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqVCRToolbar))
        return static_cast<void*>(const_cast< pqVCRToolbar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int pqVCRToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
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
