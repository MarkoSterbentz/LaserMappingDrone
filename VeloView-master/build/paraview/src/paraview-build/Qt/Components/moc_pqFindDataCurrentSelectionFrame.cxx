/****************************************************************************
** Meta object code from reading C++ file 'pqFindDataCurrentSelectionFrame.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqFindDataCurrentSelectionFrame.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFindDataCurrentSelectionFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqFindDataCurrentSelectionFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   32,   32,   32, 0x08,
      88,   32,   32,   32, 0x08,
     106,   32,   32,   32, 0x08,
     128,   32,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqFindDataCurrentSelectionFrame[] = {
    "pqFindDataCurrentSelectionFrame\0\0"
    "showing(pqOutputPort*)\0"
    "showSelectedData(pqOutputPort*)\0"
    "updateFieldType()\0invertSelection(bool)\0"
    "updateSpreadSheet()\0"
};

void pqFindDataCurrentSelectionFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqFindDataCurrentSelectionFrame *_t = static_cast<pqFindDataCurrentSelectionFrame *>(_o);
        switch (_id) {
        case 0: _t->showing((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 1: _t->showSelectedData((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 2: _t->updateFieldType(); break;
        case 3: _t->invertSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateSpreadSheet(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqFindDataCurrentSelectionFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqFindDataCurrentSelectionFrame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqFindDataCurrentSelectionFrame,
      qt_meta_data_pqFindDataCurrentSelectionFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqFindDataCurrentSelectionFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqFindDataCurrentSelectionFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqFindDataCurrentSelectionFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqFindDataCurrentSelectionFrame))
        return static_cast<void*>(const_cast< pqFindDataCurrentSelectionFrame*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqFindDataCurrentSelectionFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void pqFindDataCurrentSelectionFrame::showing(pqOutputPort * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
