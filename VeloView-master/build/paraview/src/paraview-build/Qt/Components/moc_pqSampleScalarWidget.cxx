/****************************************************************************
** Meta object code from reading C++ file 'pqSampleScalarWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqSampleScalarWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSampleScalarWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSampleScalarWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,   69, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   21,   21,   21, 0x08,
      60,   58,   21,   21, 0x08,
     110,   21,   21,   21, 0x08,
     121,   21,   21,   21, 0x08,
     135,   21,   21,   21, 0x08,
     148,   21,   21,   21, 0x08,
     161,   21,   21,   21, 0x08,
     175,   21,   21,   21, 0x08,
     202,   21,   21,   21, 0x08,
     232,   21,   21,   21, 0x08,

 // properties: name, type, flags
     281,  268, 0x09095103,

       0        // eod
};

static const char qt_meta_stringdata_pqSampleScalarWidget[] = {
    "pqSampleScalarWidget\0\0samplesChanged()\0"
    "onSamplesChanged()\0,\0"
    "onSelectionChanged(QItemSelection,QItemSelection)\0"
    "onDelete()\0onDeleteAll()\0onNewValue()\0"
    "onNewRange()\0onSelectAll()\0"
    "onScientificNotation(bool)\0"
    "onControlledPropertyChanged()\0"
    "onControlledPropertyDomainChanged()\0"
    "QVariantList\0samples\0"
};

void pqSampleScalarWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSampleScalarWidget *_t = static_cast<pqSampleScalarWidget *>(_o);
        switch (_id) {
        case 0: _t->samplesChanged(); break;
        case 1: _t->onSamplesChanged(); break;
        case 2: _t->onSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 3: _t->onDelete(); break;
        case 4: _t->onDeleteAll(); break;
        case 5: _t->onNewValue(); break;
        case 6: _t->onNewRange(); break;
        case 7: _t->onSelectAll(); break;
        case 8: _t->onScientificNotation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onControlledPropertyChanged(); break;
        case 10: _t->onControlledPropertyDomainChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSampleScalarWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSampleScalarWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqSampleScalarWidget,
      qt_meta_data_pqSampleScalarWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSampleScalarWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSampleScalarWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSampleScalarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSampleScalarWidget))
        return static_cast<void*>(const_cast< pqSampleScalarWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqSampleScalarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = samples(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSamples(*reinterpret_cast< QVariantList*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqSampleScalarWidget::samplesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
