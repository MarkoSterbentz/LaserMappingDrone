/****************************************************************************
** Meta object code from reading C++ file 'pqPropertyLinksConnection.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqPropertyLinksConnection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPropertyLinksConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPropertyLinksConnection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,
      48,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      83,   69,   26,   26, 0x0a,
     121,   69,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqPropertyLinksConnection[] = {
    "pqPropertyLinksConnection\0\0"
    "qtpropertyModified()\0smpropertyModified()\0"
    "use_unchecked\0copyValuesFromServerManagerToQt(bool)\0"
    "copyValuesFromQtToServerManager(bool)\0"
};

void pqPropertyLinksConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPropertyLinksConnection *_t = static_cast<pqPropertyLinksConnection *>(_o);
        switch (_id) {
        case 0: _t->qtpropertyModified(); break;
        case 1: _t->smpropertyModified(); break;
        case 2: _t->copyValuesFromServerManagerToQt((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->copyValuesFromQtToServerManager((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPropertyLinksConnection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPropertyLinksConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPropertyLinksConnection,
      qt_meta_data_pqPropertyLinksConnection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPropertyLinksConnection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPropertyLinksConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPropertyLinksConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPropertyLinksConnection))
        return static_cast<void*>(const_cast< pqPropertyLinksConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int pqPropertyLinksConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void pqPropertyLinksConnection::qtpropertyModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqPropertyLinksConnection::smpropertyModified()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
