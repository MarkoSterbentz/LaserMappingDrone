/****************************************************************************
** Meta object code from reading C++ file 'vtkQtDebugLeaksView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../paraview/VTK/GUISupport/Qt/vtkQtDebugLeaksView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vtkQtDebugLeaksView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_vtkQtDebugLeaksView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   21,   20,   20, 0x09,
      62,   20,   20,   20, 0x09,
     105,   94,   20,   20, 0x09,
     134,   20,   20,   20, 0x09,
     152,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_vtkQtDebugLeaksView[] = {
    "vtkQtDebugLeaksView\0\0current\0"
    "onCurrentRowChanged(QModelIndex)\0"
    "onRowDoubleClicked(QModelIndex)\0"
    "filterText\0onFilterTextChanged(QString)\0"
    "onFilterToggled()\0onFilterHelp()\0"
};

void vtkQtDebugLeaksView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        vtkQtDebugLeaksView *_t = static_cast<vtkQtDebugLeaksView *>(_o);
        switch (_id) {
        case 0: _t->onCurrentRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->onRowDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->onFilterTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onFilterToggled(); break;
        case 4: _t->onFilterHelp(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData vtkQtDebugLeaksView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject vtkQtDebugLeaksView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_vtkQtDebugLeaksView,
      qt_meta_data_vtkQtDebugLeaksView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &vtkQtDebugLeaksView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *vtkQtDebugLeaksView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *vtkQtDebugLeaksView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vtkQtDebugLeaksView))
        return static_cast<void*>(const_cast< vtkQtDebugLeaksView*>(this));
    return QWidget::qt_metacast(_clname);
}

int vtkQtDebugLeaksView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
