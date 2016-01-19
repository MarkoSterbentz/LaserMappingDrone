/****************************************************************************
** Meta object code from reading C++ file 'pqComparativeCueWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqComparativeCueWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqComparativeCueWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqComparativeCueWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   40,   23,   23, 0x0a,
      61,   23,   23,   23, 0x09,
      73,   23,   23,   23, 0x09,
      91,   23,   23,   23, 0x09,
     116,  112,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqComparativeCueWidget[] = {
    "pqComparativeCueWidget\0\0valuesChanged()\0"
    "w,h\0setSize(int,int)\0updateGUI()\0"
    "updateGUIOnIdle()\0onSelectionChanged()\0"
    "x,y\0onCellChanged(int,int)\0"
};

void pqComparativeCueWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqComparativeCueWidget *_t = static_cast<pqComparativeCueWidget *>(_o);
        switch (_id) {
        case 0: _t->valuesChanged(); break;
        case 1: _t->setSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->updateGUI(); break;
        case 3: _t->updateGUIOnIdle(); break;
        case 4: _t->onSelectionChanged(); break;
        case 5: _t->onCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqComparativeCueWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqComparativeCueWidget::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_pqComparativeCueWidget,
      qt_meta_data_pqComparativeCueWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqComparativeCueWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqComparativeCueWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqComparativeCueWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqComparativeCueWidget))
        return static_cast<void*>(const_cast< pqComparativeCueWidget*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int pqComparativeCueWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void pqComparativeCueWidget::valuesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
