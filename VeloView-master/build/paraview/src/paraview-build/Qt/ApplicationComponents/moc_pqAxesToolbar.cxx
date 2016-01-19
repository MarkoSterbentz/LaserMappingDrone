/****************************************************************************
** Meta object code from reading C++ file 'pqAxesToolbar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqAxesToolbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAxesToolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqAxesToolbar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x09,
      36,   14,   14,   14, 0x09,
      57,   14,   14,   14, 0x09,
      83,   14,   14,   14, 0x09,
     130,  128,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqAxesToolbar[] = {
    "pqAxesToolbar\0\0updateEnabledState()\0"
    "showCenterAxes(bool)\0showOrientationAxes(bool)\0"
    "resetCenterOfRotationToCenterOfCurrentData()\0"
    ",\0pickCenterOfRotation(int,int)\0"
};

void pqAxesToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqAxesToolbar *_t = static_cast<pqAxesToolbar *>(_o);
        switch (_id) {
        case 0: _t->updateEnabledState(); break;
        case 1: _t->showCenterAxes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->showOrientationAxes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->resetCenterOfRotationToCenterOfCurrentData(); break;
        case 4: _t->pickCenterOfRotation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqAxesToolbar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqAxesToolbar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_pqAxesToolbar,
      qt_meta_data_pqAxesToolbar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqAxesToolbar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqAxesToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqAxesToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqAxesToolbar))
        return static_cast<void*>(const_cast< pqAxesToolbar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int pqAxesToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
