/****************************************************************************
** Meta object code from reading C++ file 'pqContourWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqContourWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqContourWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqContourWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      37,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   16,   16,   16, 0x0a,
      68,   16,   16,   16, 0x0a,
      93,   16,   16,   16, 0x0a,
     109,   16,   16,   16, 0x0a,
     122,   16,   16,   16, 0x0a,
     139,   16,   16,   16, 0x0a,
     155,   16,   16,   16, 0x0a,
     163,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqContourWidget[] = {
    "pqContourWidget\0\0contourLoopClosed()\0"
    "contourDone()\0removeAllNodes()\0"
    "checkContourLoopClosed()\0closeLoop(bool)\0"
    "updateMode()\0toggleEditMode()\0"
    "finishContour()\0reset()\0deleteAllNodes()\0"
};

void pqContourWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqContourWidget *_t = static_cast<pqContourWidget *>(_o);
        switch (_id) {
        case 0: _t->contourLoopClosed(); break;
        case 1: _t->contourDone(); break;
        case 2: _t->removeAllNodes(); break;
        case 3: _t->checkContourLoopClosed(); break;
        case 4: _t->closeLoop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->updateMode(); break;
        case 6: _t->toggleEditMode(); break;
        case 7: _t->finishContour(); break;
        case 8: _t->reset(); break;
        case 9: _t->deleteAllNodes(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqContourWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqContourWidget::staticMetaObject = {
    { &pq3DWidget::staticMetaObject, qt_meta_stringdata_pqContourWidget,
      qt_meta_data_pqContourWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqContourWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqContourWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqContourWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqContourWidget))
        return static_cast<void*>(const_cast< pqContourWidget*>(this));
    return pq3DWidget::qt_metacast(_clname);
}

int pqContourWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pq3DWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void pqContourWidget::contourLoopClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqContourWidget::contourDone()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
