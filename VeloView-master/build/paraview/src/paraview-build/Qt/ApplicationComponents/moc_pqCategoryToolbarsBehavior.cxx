/****************************************************************************
** Meta object code from reading C++ file 'pqCategoryToolbarsBehavior.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqCategoryToolbarsBehavior.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCategoryToolbarsBehavior.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqCategoryToolbarsBehavior[] = {

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
      28,   27,   27,   27, 0x09,
      45,   27,   27,   27, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqCategoryToolbarsBehavior[] = {
    "pqCategoryToolbarsBehavior\0\0"
    "updateToolbars()\0prepareForTest()\0"
};

void pqCategoryToolbarsBehavior::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqCategoryToolbarsBehavior *_t = static_cast<pqCategoryToolbarsBehavior *>(_o);
        switch (_id) {
        case 0: _t->updateToolbars(); break;
        case 1: _t->prepareForTest(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqCategoryToolbarsBehavior::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqCategoryToolbarsBehavior::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqCategoryToolbarsBehavior,
      qt_meta_data_pqCategoryToolbarsBehavior, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqCategoryToolbarsBehavior::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqCategoryToolbarsBehavior::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqCategoryToolbarsBehavior::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqCategoryToolbarsBehavior))
        return static_cast<void*>(const_cast< pqCategoryToolbarsBehavior*>(this));
    return QObject::qt_metacast(_clname);
}

int pqCategoryToolbarsBehavior::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
