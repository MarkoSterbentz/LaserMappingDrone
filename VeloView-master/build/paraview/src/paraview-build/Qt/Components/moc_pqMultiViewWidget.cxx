/****************************************************************************
** Meta object code from reading C++ file 'pqMultiViewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqMultiViewWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqMultiViewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqMultiViewWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   18,   18,   18, 0x0a,
      45,   18,   18,   18, 0x0a,
      68,   18,   18,   18, 0x0a,
      86,   18,   18,   18, 0x0a,
     114,   18,   18,   18, 0x0a,
     132,   18,   18,   18, 0x0a,
     150,   18,   18,   18, 0x0a,
     170,   18,   18,   18, 0x0a,
     178,   18,   18,   18, 0x0a,
     196,   18,   18,   18, 0x09,
     223,   18,   18,   18, 0x09,
     245,  239,   18,   18, 0x09,
     275,  270,   18,   18, 0x09,
     295,  239,   18,   18, 0x09,
     320,   18,   18,   18, 0x09,
     343,   18,   18,   18, 0x09,
     366,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqMultiViewWidget[] = {
    "pqMultiViewWidget\0\0frameActivated()\0"
    "reload()\0assignToFrame(pqView*)\0"
    "makeFrameActive()\0setDecorationsVisible(bool)\0"
    "showDecorations()\0hideDecorations()\0"
    "lockViewSize(QSize)\0reset()\0"
    "destroyAllViews()\0standardButtonPressed(int)\0"
    "splitterMoved()\0frame\0makeActive(pqViewFrame*)\0"
    "view\0markActive(pqView*)\0"
    "markActive(pqViewFrame*)\0"
    "swapPositions(QString)\0proxyRemoved(pqProxy*)\0"
    "viewAdded(pqView*)\0"
};

void pqMultiViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqMultiViewWidget *_t = static_cast<pqMultiViewWidget *>(_o);
        switch (_id) {
        case 0: _t->frameActivated(); break;
        case 1: _t->reload(); break;
        case 2: _t->assignToFrame((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 3: _t->makeFrameActive(); break;
        case 4: _t->setDecorationsVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showDecorations(); break;
        case 6: _t->hideDecorations(); break;
        case 7: _t->lockViewSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 8: _t->reset(); break;
        case 9: _t->destroyAllViews(); break;
        case 10: _t->standardButtonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->splitterMoved(); break;
        case 12: _t->makeActive((*reinterpret_cast< pqViewFrame*(*)>(_a[1]))); break;
        case 13: _t->markActive((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 14: _t->markActive((*reinterpret_cast< pqViewFrame*(*)>(_a[1]))); break;
        case 15: _t->swapPositions((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->proxyRemoved((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 17: _t->viewAdded((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqMultiViewWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqMultiViewWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqMultiViewWidget,
      qt_meta_data_pqMultiViewWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqMultiViewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqMultiViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqMultiViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqMultiViewWidget))
        return static_cast<void*>(const_cast< pqMultiViewWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqMultiViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void pqMultiViewWidget::frameActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
