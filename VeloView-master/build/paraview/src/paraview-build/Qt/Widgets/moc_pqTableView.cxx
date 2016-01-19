/****************************************************************************
** Meta object code from reading C++ file 'pqTableView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqTableView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTableView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqTableView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,

 // properties: name, type, flags
      36,   32, 0x02095103,
      67,   32, 0x02095103,
      83,   32, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_pqTableView[] = {
    "pqTableView\0\0invalidateLayout()\0int\0"
    "maximumRowCountBeforeScrolling\0"
    "minimumRowCount\0padding\0"
};

void pqTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqTableView *_t = static_cast<pqTableView *>(_o);
        switch (_id) {
        case 0: _t->invalidateLayout(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqTableView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqTableView::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_pqTableView,
      qt_meta_data_pqTableView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqTableView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqTableView))
        return static_cast<void*>(const_cast< pqTableView*>(this));
    return QTableView::qt_metacast(_clname);
}

int pqTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = maximumRowCountBeforeScrolling(); break;
        case 1: *reinterpret_cast< int*>(_v) = minimumRowCount(); break;
        case 2: *reinterpret_cast< int*>(_v) = padding(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMaximumRowCountBeforeScrolling(*reinterpret_cast< int*>(_v)); break;
        case 1: setMinimumRowCount(*reinterpret_cast< int*>(_v)); break;
        case 2: setPadding(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
