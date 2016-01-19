/****************************************************************************
** Meta object code from reading C++ file 'pqProxyInformationWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqProxyInformationWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProxyInformationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqProxyInformationWidget[] = {

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
      26,   25,   25,   25, 0x0a,
      57,   46,   25,   25, 0x0a,
      91,   86,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqProxyInformationWidget[] = {
    "pqProxyInformationWidget\0\0updateInformation()\0"
    "outputport\0setOutputPort(pqOutputPort*)\0"
    "item\0onItemClicked(QTreeWidgetItem*)\0"
};

void pqProxyInformationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqProxyInformationWidget *_t = static_cast<pqProxyInformationWidget *>(_o);
        switch (_id) {
        case 0: _t->updateInformation(); break;
        case 1: _t->setOutputPort((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 2: _t->onItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqProxyInformationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqProxyInformationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqProxyInformationWidget,
      qt_meta_data_pqProxyInformationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqProxyInformationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqProxyInformationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqProxyInformationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqProxyInformationWidget))
        return static_cast<void*>(const_cast< pqProxyInformationWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqProxyInformationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
