/****************************************************************************
** Meta object code from reading C++ file 'pqAnimatablePropertiesComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqAnimatablePropertiesComboBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimatablePropertiesComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqAnimatablePropertiesComboBox[] = {

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
      38,   32,   31,   31, 0x0a,
      61,   32,   31,   31, 0x0a,
     105,  101,   31,   31, 0x0a,
     135,  130,   31,   31, 0x0a,
     185,  160,   31,   31, 0x0a,
     220,   31,   31,   31, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqAnimatablePropertiesComboBox[] = {
    "pqAnimatablePropertiesComboBox\0\0proxy\0"
    "setSource(vtkSMProxy*)\0"
    "setSourceWithoutProperties(vtkSMProxy*)\0"
    "val\0setCollapseVectors(bool)\0size\0"
    "setVectorSizeFilter(int)\0"
    "label,propertyname,index\0"
    "addSMProperty(QString,QString,int)\0"
    "buildPropertyList()\0"
};

void pqAnimatablePropertiesComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqAnimatablePropertiesComboBox *_t = static_cast<pqAnimatablePropertiesComboBox *>(_o);
        switch (_id) {
        case 0: _t->setSource((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 1: _t->setSourceWithoutProperties((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 2: _t->setCollapseVectors((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setVectorSizeFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->addSMProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->buildPropertyList(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqAnimatablePropertiesComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqAnimatablePropertiesComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_pqAnimatablePropertiesComboBox,
      qt_meta_data_pqAnimatablePropertiesComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqAnimatablePropertiesComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqAnimatablePropertiesComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqAnimatablePropertiesComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimatablePropertiesComboBox))
        return static_cast<void*>(const_cast< pqAnimatablePropertiesComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int pqAnimatablePropertiesComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
