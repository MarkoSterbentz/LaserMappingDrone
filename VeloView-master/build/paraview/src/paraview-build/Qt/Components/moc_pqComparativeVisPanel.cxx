/****************************************************************************
** Meta object code from reading C++ file 'pqComparativeVisPanel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqComparativeVisPanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqComparativeVisPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqComparativeVisPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      40,   22,   22,   22, 0x09,
      55,   22,   22,   22, 0x09,
      78,   22,   22,   22, 0x09,
     106,   22,   22,   22, 0x09,
     126,  120,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqComparativeVisPanel[] = {
    "pqComparativeVisPanel\0\0setView(pqView*)\0"
    "addParameter()\0updateParametersList()\0"
    "parameterSelectionChanged()\0sizeUpdated()\0"
    "index\0removeParameter(int)\0"
};

void pqComparativeVisPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqComparativeVisPanel *_t = static_cast<pqComparativeVisPanel *>(_o);
        switch (_id) {
        case 0: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 1: _t->addParameter(); break;
        case 2: _t->updateParametersList(); break;
        case 3: _t->parameterSelectionChanged(); break;
        case 4: _t->sizeUpdated(); break;
        case 5: _t->removeParameter((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqComparativeVisPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqComparativeVisPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqComparativeVisPanel,
      qt_meta_data_pqComparativeVisPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqComparativeVisPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqComparativeVisPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqComparativeVisPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqComparativeVisPanel))
        return static_cast<void*>(const_cast< pqComparativeVisPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqComparativeVisPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
