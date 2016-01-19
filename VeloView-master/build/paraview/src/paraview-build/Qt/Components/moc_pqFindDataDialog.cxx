/****************************************************************************
** Meta object code from reading C++ file 'pqFindDataDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqFindDataDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFindDataDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqFindDataDialog[] = {

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
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   17,   17,   17, 0x08,
      57,   17,   17,   17, 0x08,
      75,   17,   17,   17, 0x08,
      94,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqFindDataDialog[] = {
    "pqFindDataDialog\0\0helpRequested()\0"
    "showing(pqOutputPort*)\0freezeSelection()\0"
    "extractSelection()\0extractSelectionOverTime()\0"
};

void pqFindDataDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqFindDataDialog *_t = static_cast<pqFindDataDialog *>(_o);
        switch (_id) {
        case 0: _t->helpRequested(); break;
        case 1: _t->showing((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 2: _t->freezeSelection(); break;
        case 3: _t->extractSelection(); break;
        case 4: _t->extractSelectionOverTime(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqFindDataDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqFindDataDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqFindDataDialog,
      qt_meta_data_pqFindDataDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqFindDataDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqFindDataDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqFindDataDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqFindDataDialog))
        return static_cast<void*>(const_cast< pqFindDataDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqFindDataDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void pqFindDataDialog::helpRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
