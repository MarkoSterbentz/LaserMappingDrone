/****************************************************************************
** Meta object code from reading C++ file 'pqFindDataSelectionDisplayFrame.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqFindDataSelectionDisplayFrame.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFindDataSelectionDisplayFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqFindDataSelectionDisplayFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x0a,
      64,   32,   32,   32, 0x0a,
      81,   32,   32,   32, 0x08,
      95,   32,   32,   32, 0x08,
     112,   32,   32,   32, 0x08,
     130,   32,   32,   32, 0x08,
     158,   32,   32,   32, 0x08,
     187,   32,   32,   32, 0x08,
     209,   32,   32,   32, 0x08,

 // properties: name, type, flags
     232,  227, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_pqFindDataSelectionDisplayFrame[] = {
    "pqFindDataSelectionDisplayFrame\0\0"
    "setSelectedPort(pqOutputPort*)\0"
    "setView(pqView*)\0updatePanel()\0"
    "fillCellLabels()\0fillPointLabels()\0"
    "cellLabelSelected(QAction*)\0"
    "pointLabelSelected(QAction*)\0"
    "editLabelProperties()\0showFrustum(bool)\0"
    "bool\0useVerticalLayout\0"
};

void pqFindDataSelectionDisplayFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqFindDataSelectionDisplayFrame *_t = static_cast<pqFindDataSelectionDisplayFrame *>(_o);
        switch (_id) {
        case 0: _t->setSelectedPort((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 1: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 2: _t->updatePanel(); break;
        case 3: _t->fillCellLabels(); break;
        case 4: _t->fillPointLabels(); break;
        case 5: _t->cellLabelSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->pointLabelSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->editLabelProperties(); break;
        case 8: _t->showFrustum((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqFindDataSelectionDisplayFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqFindDataSelectionDisplayFrame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqFindDataSelectionDisplayFrame,
      qt_meta_data_pqFindDataSelectionDisplayFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqFindDataSelectionDisplayFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqFindDataSelectionDisplayFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqFindDataSelectionDisplayFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqFindDataSelectionDisplayFrame))
        return static_cast<void*>(const_cast< pqFindDataSelectionDisplayFrame*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqFindDataSelectionDisplayFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = useVerticalLayout(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setUseVerticalLayout(*reinterpret_cast< bool*>(_v)); break;
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
QT_END_MOC_NAMESPACE
