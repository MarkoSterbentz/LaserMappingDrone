/****************************************************************************
** Meta object code from reading C++ file 'pqPluginDecorators.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pqPluginDecorators.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPluginDecorators.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPluginDecorators[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   19,   20,   19, 0x0a,
     101,   19,   82,   19, 0x0a,
     158,   19,  137,   19, 0x0a,
     213,  208,  196,   19, 0x0a,
     259,  208,  242,   19, 0x0a,
     311,  208,  295,   19, 0x0a,
     357,  208,  347,   19, 0x0a,
     407,  208,  393,   19, 0x0a,
     439,  208,  432,   19, 0x0a,
     472,  462,   19,   19, 0x0a,
     506,  208,  502,   19, 0x0a,
     569,  208,  547,   19, 0x0a,
     620,  208,  611,   19, 0x0a,
     649,  208,   19,   19, 0x0a,
     697,   19,  676,   19, 0x0a,
     723,  208,   19,   19, 0x0a,
     791,  781,  772,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqPluginDecorators[] = {
    "pqPluginDecorators\0\0QList<pqPipelineSource*>\0"
    "static_pqLoadDataReaction_loadData()\0"
    "pqApplicationCore*\0"
    "static_pqApplicationCore_instance()\0"
    "pqPVApplicationCore*\0"
    "static_pqPVApplicationCore_instance()\0"
    "pqSettings*\0inst\0settings(pqApplicationCore*)\0"
    "pqPythonManager*\0pythonManager(pqPVApplicationCore*)\0"
    "pqPythonDialog*\0pythonShellDialog(pqPythonManager*)\0"
    "pqServer*\0getActiveServer(pqApplicationCore*)\0"
    "pqTimeKeeper*\0getTimeKeeper(pqServer*)\0"
    "double\0getTime(pqTimeKeeper*)\0inst,arg0\0"
    "setTime(pqTimeKeeper*,double)\0int\0"
    "getNumberOfTimeStepValues(pqTimeKeeper*)\0"
    "pqServerManagerModel*\0"
    "getServerManagerModel(pqApplicationCore*)\0"
    "QWidget*\0getWidget(pqRenderViewBase*)\0"
    "resetCamera(pqRenderView*)\0"
    "pqPythonEventFilter*\0new_pqPythonEventFilter()\0"
    "delete_pqPythonEventFilter(pqPythonEventFilter*)\0"
    "pqProxy*\0arg0,arg1\0"
    "static_pqPythonQtMethodHelpers_findProxyItem(pqServerManagerModel*,vtk"
    "SMProxy*)\0"
};

void pqPluginDecorators::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPluginDecorators *_t = static_cast<pqPluginDecorators *>(_o);
        switch (_id) {
        case 0: { QList<pqPipelineSource*> _r = _t->static_pqLoadDataReaction_loadData();
            if (_a[0]) *reinterpret_cast< QList<pqPipelineSource*>*>(_a[0]) = _r; }  break;
        case 1: { pqApplicationCore* _r = _t->static_pqApplicationCore_instance();
            if (_a[0]) *reinterpret_cast< pqApplicationCore**>(_a[0]) = _r; }  break;
        case 2: { pqPVApplicationCore* _r = _t->static_pqPVApplicationCore_instance();
            if (_a[0]) *reinterpret_cast< pqPVApplicationCore**>(_a[0]) = _r; }  break;
        case 3: { pqSettings* _r = _t->settings((*reinterpret_cast< pqApplicationCore*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< pqSettings**>(_a[0]) = _r; }  break;
        case 4: { pqPythonManager* _r = _t->pythonManager((*reinterpret_cast< pqPVApplicationCore*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< pqPythonManager**>(_a[0]) = _r; }  break;
        case 5: { pqPythonDialog* _r = _t->pythonShellDialog((*reinterpret_cast< pqPythonManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< pqPythonDialog**>(_a[0]) = _r; }  break;
        case 6: { pqServer* _r = _t->getActiveServer((*reinterpret_cast< pqApplicationCore*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< pqServer**>(_a[0]) = _r; }  break;
        case 7: { pqTimeKeeper* _r = _t->getTimeKeeper((*reinterpret_cast< pqServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< pqTimeKeeper**>(_a[0]) = _r; }  break;
        case 8: { double _r = _t->getTime((*reinterpret_cast< pqTimeKeeper*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 9: _t->setTime((*reinterpret_cast< pqTimeKeeper*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 10: { int _r = _t->getNumberOfTimeStepValues((*reinterpret_cast< pqTimeKeeper*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { pqServerManagerModel* _r = _t->getServerManagerModel((*reinterpret_cast< pqApplicationCore*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< pqServerManagerModel**>(_a[0]) = _r; }  break;
        case 12: { QWidget* _r = _t->getWidget((*reinterpret_cast< pqRenderViewBase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 13: _t->resetCamera((*reinterpret_cast< pqRenderView*(*)>(_a[1]))); break;
        case 14: { pqPythonEventFilter* _r = _t->new_pqPythonEventFilter();
            if (_a[0]) *reinterpret_cast< pqPythonEventFilter**>(_a[0]) = _r; }  break;
        case 15: _t->delete_pqPythonEventFilter((*reinterpret_cast< pqPythonEventFilter*(*)>(_a[1]))); break;
        case 16: { pqProxy* _r = _t->static_pqPythonQtMethodHelpers_findProxyItem((*reinterpret_cast< pqServerManagerModel*(*)>(_a[1])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< pqProxy**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPluginDecorators::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPluginDecorators::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPluginDecorators,
      qt_meta_data_pqPluginDecorators, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPluginDecorators::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPluginDecorators::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPluginDecorators::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPluginDecorators))
        return static_cast<void*>(const_cast< pqPluginDecorators*>(this));
    return QObject::qt_metacast(_clname);
}

int pqPluginDecorators::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
