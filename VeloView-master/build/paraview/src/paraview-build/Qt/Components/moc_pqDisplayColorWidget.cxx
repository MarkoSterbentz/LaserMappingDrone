/****************************************************************************
** Meta object code from reading C++ file 'pqDisplayColorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqDisplayColorWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDisplayColorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqDisplayColorWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   46,   21,   21, 0x0a,
      95,   21,   21,   21, 0x08,
     120,   21,   21,   21, 0x08,
     139,   21,   21,   21, 0x08,
     159,   21,   21,   21, 0x08,
     189,   21,   21,   21, 0x08,
     214,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqDisplayColorWidget[] = {
    "pqDisplayColorWidget\0\0arraySelectionChanged()\0"
    "display\0setRepresentation(pqDataRepresentation*)\0"
    "refreshColorArrayNames()\0renderActiveView()\0"
    "refreshComponents()\0updateColorTransferFunction()\0"
    "componentNumberChanged()\0"
    "pruneOutOfDomainEntries()\0"
};

void pqDisplayColorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqDisplayColorWidget *_t = static_cast<pqDisplayColorWidget *>(_o);
        switch (_id) {
        case 0: _t->arraySelectionChanged(); break;
        case 1: _t->setRepresentation((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 2: _t->refreshColorArrayNames(); break;
        case 3: _t->renderActiveView(); break;
        case 4: _t->refreshComponents(); break;
        case 5: _t->updateColorTransferFunction(); break;
        case 6: _t->componentNumberChanged(); break;
        case 7: _t->pruneOutOfDomainEntries(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqDisplayColorWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqDisplayColorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqDisplayColorWidget,
      qt_meta_data_pqDisplayColorWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqDisplayColorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqDisplayColorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqDisplayColorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqDisplayColorWidget))
        return static_cast<void*>(const_cast< pqDisplayColorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqDisplayColorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void pqDisplayColorWidget::arraySelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
