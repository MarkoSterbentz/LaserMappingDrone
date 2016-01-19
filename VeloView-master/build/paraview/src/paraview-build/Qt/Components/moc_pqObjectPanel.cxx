/****************************************************************************
** Meta object code from reading C++ file 'pqObjectPanel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqObjectPanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqObjectPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqObjectPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      29,   14,   14,   14, 0x0a,
      38,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqObjectPanel[] = {
    "pqObjectPanel\0\0setModified()\0accept()\0"
    "reset()\0"
};

void pqObjectPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqObjectPanel *_t = static_cast<pqObjectPanel *>(_o);
        switch (_id) {
        case 0: _t->setModified(); break;
        case 1: _t->accept(); break;
        case 2: _t->reset(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqObjectPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqObjectPanel::staticMetaObject = {
    { &pqProxyPanel::staticMetaObject, qt_meta_stringdata_pqObjectPanel,
      qt_meta_data_pqObjectPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqObjectPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqObjectPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqObjectPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqObjectPanel))
        return static_cast<void*>(const_cast< pqObjectPanel*>(this));
    return pqProxyPanel::qt_metacast(_clname);
}

int pqObjectPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqProxyPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
