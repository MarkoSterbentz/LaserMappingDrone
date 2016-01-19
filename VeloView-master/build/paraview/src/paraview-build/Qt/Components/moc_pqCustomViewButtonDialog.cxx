/****************************************************************************
** Meta object code from reading C++ file 'pqCustomViewButtonDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqCustomViewButtonDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCustomViewButtonDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqCustomViewButtonDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x08,
      49,   25,   25,   25, 0x08,
      72,   25,   25,   25, 0x08,
      86,   83,   25,   25, 0x08,
     109,   25,   25,   25, 0x08,
     130,   25,   25,   25, 0x08,
     151,   25,   25,   25, 0x08,
     172,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqCustomViewButtonDialog[] = {
    "pqCustomViewButtonDialog\0\0"
    "importConfigurations()\0exportConfigurations()\0"
    "clearAll()\0id\0assignCurrentView(int)\0"
    "assignCurrentView0()\0assignCurrentView1()\0"
    "assignCurrentView2()\0assignCurrentView3()\0"
};

void pqCustomViewButtonDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqCustomViewButtonDialog *_t = static_cast<pqCustomViewButtonDialog *>(_o);
        switch (_id) {
        case 0: _t->importConfigurations(); break;
        case 1: _t->exportConfigurations(); break;
        case 2: _t->clearAll(); break;
        case 3: _t->assignCurrentView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->assignCurrentView0(); break;
        case 5: _t->assignCurrentView1(); break;
        case 6: _t->assignCurrentView2(); break;
        case 7: _t->assignCurrentView3(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqCustomViewButtonDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqCustomViewButtonDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqCustomViewButtonDialog,
      qt_meta_data_pqCustomViewButtonDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqCustomViewButtonDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqCustomViewButtonDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqCustomViewButtonDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqCustomViewButtonDialog))
        return static_cast<void*>(const_cast< pqCustomViewButtonDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqCustomViewButtonDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
