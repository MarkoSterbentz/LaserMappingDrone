/****************************************************************************
** Meta object code from reading C++ file 'pqDataRepresentation.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqDataRepresentation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDataRepresentation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqDataRepresentation[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      36,   21,   21,   21, 0x05,
      68,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      93,   21,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqDataRepresentation[] = {
    "pqDataRepresentation\0\0dataUpdated()\0"
    "colorTransferFunctionModified()\0"
    "colorArrayNameModified()\0onInputChanged()\0"
};

void pqDataRepresentation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqDataRepresentation *_t = static_cast<pqDataRepresentation *>(_o);
        switch (_id) {
        case 0: _t->dataUpdated(); break;
        case 1: _t->colorTransferFunctionModified(); break;
        case 2: _t->colorArrayNameModified(); break;
        case 3: _t->onInputChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqDataRepresentation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqDataRepresentation::staticMetaObject = {
    { &pqRepresentation::staticMetaObject, qt_meta_stringdata_pqDataRepresentation,
      qt_meta_data_pqDataRepresentation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqDataRepresentation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqDataRepresentation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqDataRepresentation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqDataRepresentation))
        return static_cast<void*>(const_cast< pqDataRepresentation*>(this));
    return pqRepresentation::qt_metacast(_clname);
}

int pqDataRepresentation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqRepresentation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void pqDataRepresentation::dataUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqDataRepresentation::colorTransferFunctionModified()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqDataRepresentation::colorArrayNameModified()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
