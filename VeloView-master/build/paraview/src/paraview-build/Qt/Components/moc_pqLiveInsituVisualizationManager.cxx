/****************************************************************************
** Meta object code from reading C++ file 'pqLiveInsituVisualizationManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqLiveInsituVisualizationManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqLiveInsituVisualizationManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqLiveInsituVisualizationManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x05,
      52,   33,   33,   33, 0x05,
      73,   33,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      97,   33,   33,   33, 0x09,
     116,   33,   33,   33, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqLiveInsituVisualizationManager[] = {
    "pqLiveInsituVisualizationManager\0\0"
    "insituConnected()\0insituDisconnected()\0"
    "nextTimestepAvailable()\0timestepsUpdated()\0"
    "sourceRemoved(pqPipelineSource*)\0"
};

void pqLiveInsituVisualizationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqLiveInsituVisualizationManager *_t = static_cast<pqLiveInsituVisualizationManager *>(_o);
        switch (_id) {
        case 0: _t->insituConnected(); break;
        case 1: _t->insituDisconnected(); break;
        case 2: _t->nextTimestepAvailable(); break;
        case 3: _t->timestepsUpdated(); break;
        case 4: _t->sourceRemoved((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqLiveInsituVisualizationManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqLiveInsituVisualizationManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqLiveInsituVisualizationManager,
      qt_meta_data_pqLiveInsituVisualizationManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqLiveInsituVisualizationManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqLiveInsituVisualizationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqLiveInsituVisualizationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqLiveInsituVisualizationManager))
        return static_cast<void*>(const_cast< pqLiveInsituVisualizationManager*>(this));
    return QObject::qt_metacast(_clname);
}

int pqLiveInsituVisualizationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void pqLiveInsituVisualizationManager::insituConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void pqLiveInsituVisualizationManager::insituDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void pqLiveInsituVisualizationManager::nextTimestepAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
