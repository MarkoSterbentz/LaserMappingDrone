/****************************************************************************
** Meta object code from reading C++ file 'pqSeriesEditorPropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqSeriesEditorPropertyWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSeriesEditorPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqSeriesEditorPropertyWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       7,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,
      56,   29,   29,   29, 0x05,
      77,   29,   29,   29, 0x05,
      98,   29,   29,   29, 0x05,
     127,   29,   29,   29, 0x05,
     152,   29,   29,   29, 0x05,
     179,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
     222,  205,   29,   29, 0x08,
     265,  261,   29,   29, 0x08,
     294,   29,   29,   29, 0x08,
     321,   29,   29,   29, 0x08,
     352,  345,   29,   29, 0x08,

 // properties: name, type, flags
     395,  379, 0x09495103,
     412,  379, 0x09495103,
     424,  379, 0x09495103,
     436,  379, 0x09495103,
     456,  379, 0x09495103,
     472,  379, 0x09495103,
     490,  379, 0x09495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

static const char qt_meta_stringdata_pqSeriesEditorPropertyWidget[] = {
    "pqSeriesEditorPropertyWidget\0\0"
    "seriesVisibilityChanged()\0"
    "seriesLabelChanged()\0seriesColorChanged()\0"
    "seriesLineThicknessChanged()\0"
    "seriesLineStyleChanged()\0"
    "seriesMarkerStyleChanged()\0"
    "seriesPlotCornerChanged()\0topleft,btmright\0"
    "onDataChanged(QModelIndex,QModelIndex)\0"
    "idx\0onDoubleClicked(QModelIndex)\0"
    "refreshPropertiesWidgets()\0"
    "savePropertiesWidgets()\0sender\0"
    "domainModified(vtkObject*)\0QList<QVariant>\0"
    "seriesVisibility\0seriesLabel\0seriesColor\0"
    "seriesLineThickness\0seriesLineStyle\0"
    "seriesMarkerStyle\0seriesPlotCorner\0"
};

void pqSeriesEditorPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqSeriesEditorPropertyWidget *_t = static_cast<pqSeriesEditorPropertyWidget *>(_o);
        switch (_id) {
        case 0: _t->seriesVisibilityChanged(); break;
        case 1: _t->seriesLabelChanged(); break;
        case 2: _t->seriesColorChanged(); break;
        case 3: _t->seriesLineThicknessChanged(); break;
        case 4: _t->seriesLineStyleChanged(); break;
        case 5: _t->seriesMarkerStyleChanged(); break;
        case 6: _t->seriesPlotCornerChanged(); break;
        case 7: _t->onDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 8: _t->onDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->refreshPropertiesWidgets(); break;
        case 10: _t->savePropertiesWidgets(); break;
        case 11: _t->domainModified((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqSeriesEditorPropertyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqSeriesEditorPropertyWidget::staticMetaObject = {
    { &pqPropertyWidget::staticMetaObject, qt_meta_stringdata_pqSeriesEditorPropertyWidget,
      qt_meta_data_pqSeriesEditorPropertyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqSeriesEditorPropertyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqSeriesEditorPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqSeriesEditorPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqSeriesEditorPropertyWidget))
        return static_cast<void*>(const_cast< pqSeriesEditorPropertyWidget*>(this));
    return pqPropertyWidget::qt_metacast(_clname);
}

int pqSeriesEditorPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QVariant>*>(_v) = seriesVisibility(); break;
        case 1: *reinterpret_cast< QList<QVariant>*>(_v) = seriesLabel(); break;
        case 2: *reinterpret_cast< QList<QVariant>*>(_v) = seriesColor(); break;
        case 3: *reinterpret_cast< QList<QVariant>*>(_v) = seriesLineThickness(); break;
        case 4: *reinterpret_cast< QList<QVariant>*>(_v) = seriesLineStyle(); break;
        case 5: *reinterpret_cast< QList<QVariant>*>(_v) = seriesMarkerStyle(); break;
        case 6: *reinterpret_cast< QList<QVariant>*>(_v) = seriesPlotCorner(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSeriesVisibility(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 1: setSeriesLabel(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 2: setSeriesColor(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 3: setSeriesLineThickness(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 4: setSeriesLineStyle(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 5: setSeriesMarkerStyle(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 6: setSeriesPlotCorner(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqSeriesEditorPropertyWidget::seriesVisibilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqSeriesEditorPropertyWidget::seriesLabelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqSeriesEditorPropertyWidget::seriesColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void pqSeriesEditorPropertyWidget::seriesLineThicknessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void pqSeriesEditorPropertyWidget::seriesLineStyleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void pqSeriesEditorPropertyWidget::seriesMarkerStyleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void pqSeriesEditorPropertyWidget::seriesPlotCornerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
