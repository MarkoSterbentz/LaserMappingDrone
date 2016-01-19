/****************************************************************************
** Meta object code from reading C++ file 'pqView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      26,    7,    7,    7, 0x05,
      65,    7,    7,    7, 0x05,
     106,    7,    7,    7, 0x05,
     120,    7,    7,    7, 0x05,
     145,  132,    7,    7, 0x05,
     201,    7,    7,    7, 0x05,
     222,    7,    7,    7, 0x05,
     250,  243,    7,    7, 0x05,
     274,  243,    7,    7, 0x05,
     296,    7,    7,    7, 0x05,
     312,    7,    7,    7, 0x05,
     351,  326,    7,    7, 0x05,
     381,  373,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     420,    7,    7,    7, 0x0a,
     429,    7,    7,    7, 0x0a,
     443,    7,    7,    7, 0x0a,
     466,    7,    7,    7, 0x0a,
     473,    7,    7,    7, 0x0a,
     480,    7,    7,    7, 0x0a,
     495,    7,    7,    7, 0x08,
     522,    7,    7,    7, 0x08,
     567,  562,    7,    7, 0x08,
     608,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqView[] = {
    "pqView\0\0updateDataEvent()\0"
    "representationAdded(pqRepresentation*)\0"
    "representationRemoved(pqRepresentation*)\0"
    "beginRender()\0endRender()\0repr,visible\0"
    "representationVisibilityChanged(pqRepresentation*,bool)\0"
    "canUndoChanged(bool)\0canRedoChanged(bool)\0"
    "opport\0selected(pqOutputPort*)\0"
    "picked(pqOutputPort*)\0beginProgress()\0"
    "endProgress()\0message,percent_progress\0"
    "progress(QString,int)\0opports\0"
    "multipleSelected(QList<pqOutputPort*>)\0"
    "render()\0forceRender()\0cancelPendingRenders()\0"
    "undo()\0redo()\0resetDisplay()\0"
    "onRepresentationsChanged()\0"
    "onRepresentationVisibilityChanged(bool)\0"
    "repr\0representationCreated(pqRepresentation*)\0"
    "tryRender()\0"
};

void pqView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqView *_t = static_cast<pqView *>(_o);
        switch (_id) {
        case 0: _t->updateDataEvent(); break;
        case 1: _t->representationAdded((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 2: _t->representationRemoved((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 3: _t->beginRender(); break;
        case 4: _t->endRender(); break;
        case 5: _t->representationVisibilityChanged((*reinterpret_cast< pqRepresentation*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->canUndoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->canRedoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->selected((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 9: _t->picked((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 10: _t->beginProgress(); break;
        case 11: _t->endProgress(); break;
        case 12: _t->progress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->multipleSelected((*reinterpret_cast< QList<pqOutputPort*>(*)>(_a[1]))); break;
        case 14: _t->render(); break;
        case 15: _t->forceRender(); break;
        case 16: _t->cancelPendingRenders(); break;
        case 17: _t->undo(); break;
        case 18: _t->redo(); break;
        case 19: _t->resetDisplay(); break;
        case 20: _t->onRepresentationsChanged(); break;
        case 21: _t->onRepresentationVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->representationCreated((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 23: _t->tryRender(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqView::staticMetaObject = {
    { &pqProxy::staticMetaObject, qt_meta_stringdata_pqView,
      qt_meta_data_pqView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqView))
        return static_cast<void*>(const_cast< pqView*>(this));
    return pqProxy::qt_metacast(_clname);
}

int pqView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void pqView::updateDataEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqView::representationAdded(pqRepresentation * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqView::representationRemoved(pqRepresentation * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqView::beginRender()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void pqView::endRender()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void pqView::representationVisibilityChanged(pqRepresentation * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void pqView::canUndoChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void pqView::canRedoChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void pqView::selected(pqOutputPort * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void pqView::picked(pqOutputPort * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void pqView::beginProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void pqView::endProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void pqView::progress(const QString & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void pqView::multipleSelected(QList<pqOutputPort*> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_END_MOC_NAMESPACE
