/****************************************************************************
** Meta object code from reading C++ file 'pqPropertyLinks.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqPropertyLinks.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPropertyLinks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPropertyLinks[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      35,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   16,   16,   16, 0x0a,
      80,   16,   16,   16, 0x0a,
      88,   16,   16,   16, 0x0a,
      97,   16,   16,   16, 0x0a,
     109,  105,   16,   16, 0x0a,
     141,  105,   16,   16, 0x0a,
     171,   16,   16,   16, 0x08,
     194,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqPropertyLinks[] = {
    "pqPropertyLinks\0\0qtWidgetChanged()\0"
    "smPropertyChanged()\0removeAllPropertyLinks()\0"
    "clear()\0accept()\0reset()\0val\0"
    "setUseUncheckedProperties(bool)\0"
    "setAutoUpdateVTKObjects(bool)\0"
    "onQtPropertyModified()\0onSMPropertyModified()\0"
};

void pqPropertyLinks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPropertyLinks *_t = static_cast<pqPropertyLinks *>(_o);
        switch (_id) {
        case 0: _t->qtWidgetChanged(); break;
        case 1: _t->smPropertyChanged(); break;
        case 2: _t->removeAllPropertyLinks(); break;
        case 3: _t->clear(); break;
        case 4: _t->accept(); break;
        case 5: _t->reset(); break;
        case 6: _t->setUseUncheckedProperties((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setAutoUpdateVTKObjects((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onQtPropertyModified(); break;
        case 9: _t->onSMPropertyModified(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPropertyLinks::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPropertyLinks::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPropertyLinks,
      qt_meta_data_pqPropertyLinks, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPropertyLinks::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPropertyLinks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPropertyLinks::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPropertyLinks))
        return static_cast<void*>(const_cast< pqPropertyLinks*>(this));
    return QObject::qt_metacast(_clname);
}

int pqPropertyLinks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void pqPropertyLinks::qtWidgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqPropertyLinks::smPropertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
