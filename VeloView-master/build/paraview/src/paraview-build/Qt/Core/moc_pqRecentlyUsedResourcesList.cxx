/****************************************************************************
** Meta object code from reading C++ file 'pqRecentlyUsedResourcesList.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqRecentlyUsedResourcesList.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqRecentlyUsedResourcesList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqRecentlyUsedResourcesList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_pqRecentlyUsedResourcesList[] = {
    "pqRecentlyUsedResourcesList\0\0changed()\0"
};

void pqRecentlyUsedResourcesList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqRecentlyUsedResourcesList *_t = static_cast<pqRecentlyUsedResourcesList *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqRecentlyUsedResourcesList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqRecentlyUsedResourcesList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqRecentlyUsedResourcesList,
      qt_meta_data_pqRecentlyUsedResourcesList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqRecentlyUsedResourcesList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqRecentlyUsedResourcesList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqRecentlyUsedResourcesList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqRecentlyUsedResourcesList))
        return static_cast<void*>(const_cast< pqRecentlyUsedResourcesList*>(this));
    return QObject::qt_metacast(_clname);
}

int pqRecentlyUsedResourcesList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void pqRecentlyUsedResourcesList::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
