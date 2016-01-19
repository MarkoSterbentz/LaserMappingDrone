/****************************************************************************
** Meta object code from reading C++ file 'pqItemViewSearchWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqItemViewSearchWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqItemViewSearchWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqItemViewSearchWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       1,   39, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      43,   23,   23,   23, 0x09,
      65,   23,   23,   23, 0x09,
      80,   23,   23,   23, 0x09,
      91,   23,   23,   23, 0x09,

 // enums: name, flags, count, data
     106, 0x0,    3,   43,

 // enum data: key, value
     121, uint(pqItemViewSearchWidget::Current),
     129, uint(pqItemViewSearchWidget::Next),
     134, uint(pqItemViewSearchWidget::Previous),

       0        // eod
};

static const char qt_meta_stringdata_pqItemViewSearchWidget[] = {
    "pqItemViewSearchWidget\0\0showSearchWidget()\0"
    "updateSearch(QString)\0updateSearch()\0"
    "findNext()\0findPrevious()\0ItemSearchType\0"
    "Current\0Next\0Previous\0"
};

void pqItemViewSearchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqItemViewSearchWidget *_t = static_cast<pqItemViewSearchWidget *>(_o);
        switch (_id) {
        case 0: _t->showSearchWidget(); break;
        case 1: _t->updateSearch((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->updateSearch(); break;
        case 3: _t->findNext(); break;
        case 4: _t->findPrevious(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqItemViewSearchWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqItemViewSearchWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqItemViewSearchWidget,
      qt_meta_data_pqItemViewSearchWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqItemViewSearchWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqItemViewSearchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqItemViewSearchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqItemViewSearchWidget))
        return static_cast<void*>(const_cast< pqItemViewSearchWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqItemViewSearchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
