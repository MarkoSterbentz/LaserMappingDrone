/****************************************************************************
** Meta object code from reading C++ file 'pqColorAnnotationsPropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqColorAnnotationsPropertyWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqColorAnnotationsPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqColorAnnotationsPropertyWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       2,   89, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x05,
      55,   33,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      78,   33,   33,   33, 0x08,
      94,   33,   33,   33, 0x08,
     113,   33,   33,   33, 0x08,
     136,   33,   33,   33, 0x08,
     177,   33,   33,   33, 0x08,
     217,  200,   33,   33, 0x08,
     260,  256,   33,   33, 0x08,
     297,  289,   33,   33, 0x08,
     334,   33,   33,   33, 0x28,
     349,   33,   33,   33, 0x08,
     364,   33,   33,   33, 0x08,
     400,   33,   33,   33, 0x08,
     427,   33,   33,   33, 0x08,

 // properties: name, type, flags
     461,  445, 0x09095103,
     473,  445, 0x09095103,

       0        // eod
};

static const char qt_meta_stringdata_pqColorAnnotationsPropertyWidget[] = {
    "pqColorAnnotationsPropertyWidget\0\0"
    "annotationsChanged()\0indexedColorsChanged()\0"
    "addAnnotation()\0removeAnnotation()\0"
    "addActiveAnnotations()\0"
    "addActiveAnnotationsFromVisibleSources()\0"
    "removeAllAnnotations()\0topleft,btmright\0"
    "onDataChanged(QModelIndex,QModelIndex)\0"
    "idx\0onDoubleClicked(QModelIndex)\0"
    "add_new\0choosePreset(const pqColorMapModel*)\0"
    "choosePreset()\0saveAsPreset()\0"
    "applyPreset(const pqColorMapModel*)\0"
    "updateIndexedLookupState()\0editPastLastRow()\0"
    "QList<QVariant>\0annotations\0indexedColors\0"
};

void pqColorAnnotationsPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqColorAnnotationsPropertyWidget *_t = static_cast<pqColorAnnotationsPropertyWidget *>(_o);
        switch (_id) {
        case 0: _t->annotationsChanged(); break;
        case 1: _t->indexedColorsChanged(); break;
        case 2: _t->addAnnotation(); break;
        case 3: _t->removeAnnotation(); break;
        case 4: _t->addActiveAnnotations(); break;
        case 5: _t->addActiveAnnotationsFromVisibleSources(); break;
        case 6: _t->removeAllAnnotations(); break;
        case 7: _t->onDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 8: _t->onDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->choosePreset((*reinterpret_cast< const pqColorMapModel*(*)>(_a[1]))); break;
        case 10: _t->choosePreset(); break;
        case 11: _t->saveAsPreset(); break;
        case 12: _t->applyPreset((*reinterpret_cast< const pqColorMapModel*(*)>(_a[1]))); break;
        case 13: _t->updateIndexedLookupState(); break;
        case 14: _t->editPastLastRow(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqColorAnnotationsPropertyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqColorAnnotationsPropertyWidget::staticMetaObject = {
    { &pqPropertyWidget::staticMetaObject, qt_meta_stringdata_pqColorAnnotationsPropertyWidget,
      qt_meta_data_pqColorAnnotationsPropertyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqColorAnnotationsPropertyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqColorAnnotationsPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqColorAnnotationsPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqColorAnnotationsPropertyWidget))
        return static_cast<void*>(const_cast< pqColorAnnotationsPropertyWidget*>(this));
    return pqPropertyWidget::qt_metacast(_clname);
}

int pqColorAnnotationsPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QVariant>*>(_v) = annotations(); break;
        case 1: *reinterpret_cast< QList<QVariant>*>(_v) = indexedColors(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAnnotations(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 1: setIndexedColors(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqColorAnnotationsPropertyWidget::annotationsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqColorAnnotationsPropertyWidget::indexedColorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
