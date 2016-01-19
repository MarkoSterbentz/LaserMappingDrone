/****************************************************************************
** Meta object code from reading C++ file 'pq3DWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pq3DWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pq3DWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pq3DWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      42,   11,   11,   11, 0x05,
      67,   11,   11,   11, 0x05,
      90,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     110,   11,   11,   11, 0x0a,
     133,   11,   11,   11, 0x0a,
     146,   11,   11,   11, 0x0a,
     159,   11,   11,   11, 0x0a,
     168,   11,   11,   11, 0x0a,
     179,   11,   11,   11, 0x0a,
     188,   11,   11,   11, 0x0a,
     196,   11,   11,   11, 0x0a,
     213,   11,   11,   11, 0x0a,
     231,  227,   11,   11, 0x0a,
     268,   11,  263,   11, 0x0a,
     293,   11,   11,   11, 0x09,
     302,   11,   11,   11, 0x09,
     317,  314,   11,   11, 0x09,
     344,   11,   11,   11, 0x09,
     374,  314,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pq3DWidget[] = {
    "pq3DWidget\0\0widgetVisibilityChanged(bool)\0"
    "widgetStartInteraction()\0"
    "widgetEndInteraction()\0widgetInteraction()\0"
    "setWidgetVisible(bool)\0showWidget()\0"
    "hideWidget()\0select()\0deselect()\0"
    "accept()\0reset()\0setView(pqView*)\0"
    "resetBounds()\0use\0setUseSelectionDataBounds(bool)\0"
    "bool\0useSelectionDataBounds()\0render()\0"
    "pickPoint()\0,,\0pick(double,double,double)\0"
    "updateMasterEnableState(bool)\0"
    "handleReferenceProxyUserEvent(vtkObject*,ulong,void*)\0"
};

void pq3DWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pq3DWidget *_t = static_cast<pq3DWidget *>(_o);
        switch (_id) {
        case 0: _t->widgetVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->widgetStartInteraction(); break;
        case 2: _t->widgetEndInteraction(); break;
        case 3: _t->widgetInteraction(); break;
        case 4: _t->setWidgetVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showWidget(); break;
        case 6: _t->hideWidget(); break;
        case 7: _t->select(); break;
        case 8: _t->deselect(); break;
        case 9: _t->accept(); break;
        case 10: _t->reset(); break;
        case 11: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 12: _t->resetBounds(); break;
        case 13: _t->setUseSelectionDataBounds((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: { bool _r = _t->useSelectionDataBounds();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: _t->render(); break;
        case 16: _t->pickPoint(); break;
        case 17: _t->pick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 18: _t->updateMasterEnableState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->handleReferenceProxyUserEvent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pq3DWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pq3DWidget::staticMetaObject = {
    { &pqProxyPanel::staticMetaObject, qt_meta_stringdata_pq3DWidget,
      qt_meta_data_pq3DWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pq3DWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pq3DWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pq3DWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pq3DWidget))
        return static_cast<void*>(const_cast< pq3DWidget*>(this));
    return pqProxyPanel::qt_metacast(_clname);
}

int pq3DWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqProxyPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void pq3DWidget::widgetVisibilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pq3DWidget::widgetStartInteraction()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pq3DWidget::widgetEndInteraction()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void pq3DWidget::widgetInteraction()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
