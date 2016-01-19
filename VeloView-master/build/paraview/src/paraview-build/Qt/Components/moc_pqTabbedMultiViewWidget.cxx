/****************************************************************************
** Meta object code from reading C++ file 'pqTabbedMultiViewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqTabbedMultiViewWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTabbedMultiViewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqTabbedMultiViewWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   24,   24,   24, 0x0a,
      58,   24,   24,   24, 0x0a,
      79,   24,   24,   24, 0x0a,
     112,   24,   24,   24, 0x0a,
     126,   24,   24,   24, 0x0a,
     145,   24,   24,   24, 0x0a,
     170,   24,   24,   24, 0x0a,
     190,   24,   24,   24, 0x0a,
     198,   24,   24,   24, 0x09,
     219,   24,   24,   24, 0x09,
     242,   24,   24,   24, 0x09,
     267,   24,   24,   24, 0x09,
     290,   24,   24,   24, 0x09,
     307,   24,   24,   24, 0x09,
     323,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqTabbedMultiViewWidget[] = {
    "pqTabbedMultiViewWidget\0\0viewSizeLocked(bool)\0"
    "createTab()\0createTab(pqServer*)\0"
    "createTab(vtkSMViewLayoutProxy*)\0"
    "closeTab(int)\0toggleFullScreen()\0"
    "toggleWidgetDecoration()\0lockViewSize(QSize)\0"
    "reset()\0proxyAdded(pqProxy*)\0"
    "proxyRemoved(pqProxy*)\0serverRemoved(pqServer*)\0"
    "currentTabChanged(int)\0frameActivated()\0"
    "onStateLoaded()\0aboutToCreateView(pqServer*)\0"
};

void pqTabbedMultiViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqTabbedMultiViewWidget *_t = static_cast<pqTabbedMultiViewWidget *>(_o);
        switch (_id) {
        case 0: _t->viewSizeLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->createTab(); break;
        case 2: _t->createTab((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 3: _t->createTab((*reinterpret_cast< vtkSMViewLayoutProxy*(*)>(_a[1]))); break;
        case 4: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->toggleFullScreen(); break;
        case 6: _t->toggleWidgetDecoration(); break;
        case 7: _t->lockViewSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 8: _t->reset(); break;
        case 9: _t->proxyAdded((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 10: _t->proxyRemoved((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 11: _t->serverRemoved((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 12: _t->currentTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->frameActivated(); break;
        case 14: _t->onStateLoaded(); break;
        case 15: _t->aboutToCreateView((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqTabbedMultiViewWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqTabbedMultiViewWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqTabbedMultiViewWidget,
      qt_meta_data_pqTabbedMultiViewWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqTabbedMultiViewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqTabbedMultiViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqTabbedMultiViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqTabbedMultiViewWidget))
        return static_cast<void*>(const_cast< pqTabbedMultiViewWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqTabbedMultiViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void pqTabbedMultiViewWidget::viewSizeLocked(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
