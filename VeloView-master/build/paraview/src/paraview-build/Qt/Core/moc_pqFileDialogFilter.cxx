/****************************************************************************
** Meta object code from reading C++ file 'pqFileDialogFilter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqFileDialogFilter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFileDialogFilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqFileDialogFilter[] = {

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
      27,   20,   19,   19, 0x0a,
      53,   46,   19,   19, 0x0a,
      78,   19,   73,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqFileDialogFilter[] = {
    "pqFileDialogFilter\0\0filter\0"
    "setFilter(QString)\0hidden\0setShowHidden(bool)\0"
    "bool\0getShowHidden()\0"
};

void pqFileDialogFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqFileDialogFilter *_t = static_cast<pqFileDialogFilter *>(_o);
        switch (_id) {
        case 0: _t->setFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setShowHidden((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->getShowHidden();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqFileDialogFilter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqFileDialogFilter::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_pqFileDialogFilter,
      qt_meta_data_pqFileDialogFilter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqFileDialogFilter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqFileDialogFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqFileDialogFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqFileDialogFilter))
        return static_cast<void*>(const_cast< pqFileDialogFilter*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int pqFileDialogFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
