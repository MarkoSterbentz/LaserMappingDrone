/****************************************************************************
** Meta object code from reading C++ file 'pqCheckBoxPixMaps.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqCheckBoxPixMaps.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCheckBoxPixMaps.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqCheckBoxPixMaps[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_pqCheckBoxPixMaps[] = {
    "pqCheckBoxPixMaps\0"
};

void pqCheckBoxPixMaps::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqCheckBoxPixMaps::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqCheckBoxPixMaps::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqCheckBoxPixMaps,
      qt_meta_data_pqCheckBoxPixMaps, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqCheckBoxPixMaps::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqCheckBoxPixMaps::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqCheckBoxPixMaps::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqCheckBoxPixMaps))
        return static_cast<void*>(const_cast< pqCheckBoxPixMaps*>(this));
    return QObject::qt_metacast(_clname);
}

int pqCheckBoxPixMaps::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
