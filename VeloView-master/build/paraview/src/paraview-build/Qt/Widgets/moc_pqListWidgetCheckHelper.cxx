/****************************************************************************
** Meta object code from reading C++ file 'pqListWidgetCheckHelper.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqListWidgetCheckHelper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqListWidgetCheckHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqListWidgetCheckHelper[] = {

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
      30,   25,   24,   24, 0x09,
      62,   25,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqListWidgetCheckHelper[] = {
    "pqListWidgetCheckHelper\0\0item\0"
    "onItemClicked(QListWidgetItem*)\0"
    "onItemPressed(QListWidgetItem*)\0"
};

void pqListWidgetCheckHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqListWidgetCheckHelper *_t = static_cast<pqListWidgetCheckHelper *>(_o);
        switch (_id) {
        case 0: _t->onItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->onItemPressed((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqListWidgetCheckHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqListWidgetCheckHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqListWidgetCheckHelper,
      qt_meta_data_pqListWidgetCheckHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqListWidgetCheckHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqListWidgetCheckHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqListWidgetCheckHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqListWidgetCheckHelper))
        return static_cast<void*>(const_cast< pqListWidgetCheckHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int pqListWidgetCheckHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
