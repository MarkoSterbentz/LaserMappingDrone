/****************************************************************************
** Meta object code from reading C++ file 'pqDisplayPanel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqDisplayPanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDisplayPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqDisplayPanel[] = {

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
      16,   15,   15,   15, 0x0a,
      28,   15,   15,   15, 0x0a,
      45,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqDisplayPanel[] = {
    "pqDisplayPanel\0\0reloadGUI()\0"
    "updateAllViews()\0dataUpdated()\0"
};

void pqDisplayPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqDisplayPanel *_t = static_cast<pqDisplayPanel *>(_o);
        switch (_id) {
        case 0: _t->reloadGUI(); break;
        case 1: _t->updateAllViews(); break;
        case 2: _t->dataUpdated(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqDisplayPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqDisplayPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqDisplayPanel,
      qt_meta_data_pqDisplayPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqDisplayPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqDisplayPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqDisplayPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqDisplayPanel))
        return static_cast<void*>(const_cast< pqDisplayPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqDisplayPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
