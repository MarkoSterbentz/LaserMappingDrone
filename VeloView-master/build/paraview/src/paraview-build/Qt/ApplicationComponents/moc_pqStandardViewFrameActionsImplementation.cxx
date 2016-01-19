/****************************************************************************
** Meta object code from reading C++ file 'pqStandardViewFrameActionsImplementation.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqStandardViewFrameActionsImplementation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqStandardViewFrameActionsImplementation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqStandardViewFrameActionsImplementation[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   41,   41,   41, 0x09,
      67,   41,   41,   41, 0x09,
      77,   41,   41,   41, 0x09,
     107,   41,   41,   41, 0x09,
     138,   41,   41,   41, 0x09,
     168,   41,   41,   41, 0x09,
     199,   41,   41,   41, 0x09,
     223,   41,   41,   41, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqStandardViewFrameActionsImplementation[] = {
    "pqStandardViewFrameActionsImplementation\0"
    "\0aboutToShowConvertMenu()\0invoked()\0"
    "selectSurfaceCellsTrigerred()\0"
    "selectSurfacePointsTrigerred()\0"
    "selectFrustumCellsTriggered()\0"
    "selectFrustumPointsTriggered()\0"
    "selectBlocksTriggered()\0"
    "manageGroupExclusivity(QAction*)\0"
};

void pqStandardViewFrameActionsImplementation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqStandardViewFrameActionsImplementation *_t = static_cast<pqStandardViewFrameActionsImplementation *>(_o);
        switch (_id) {
        case 0: _t->aboutToShowConvertMenu(); break;
        case 1: _t->invoked(); break;
        case 2: _t->selectSurfaceCellsTrigerred(); break;
        case 3: _t->selectSurfacePointsTrigerred(); break;
        case 4: _t->selectFrustumCellsTriggered(); break;
        case 5: _t->selectFrustumPointsTriggered(); break;
        case 6: _t->selectBlocksTriggered(); break;
        case 7: _t->manageGroupExclusivity((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqStandardViewFrameActionsImplementation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqStandardViewFrameActionsImplementation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqStandardViewFrameActionsImplementation,
      qt_meta_data_pqStandardViewFrameActionsImplementation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqStandardViewFrameActionsImplementation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqStandardViewFrameActionsImplementation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqStandardViewFrameActionsImplementation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqStandardViewFrameActionsImplementation))
        return static_cast<void*>(const_cast< pqStandardViewFrameActionsImplementation*>(this));
    if (!strcmp(_clname, "pqViewFrameActionsInterface"))
        return static_cast< pqViewFrameActionsInterface*>(const_cast< pqStandardViewFrameActionsImplementation*>(this));
    if (!strcmp(_clname, "com.kitware/paraview/viewframeactions"))
        return static_cast< pqViewFrameActionsInterface*>(const_cast< pqStandardViewFrameActionsImplementation*>(this));
    return QObject::qt_metacast(_clname);
}

int pqStandardViewFrameActionsImplementation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
