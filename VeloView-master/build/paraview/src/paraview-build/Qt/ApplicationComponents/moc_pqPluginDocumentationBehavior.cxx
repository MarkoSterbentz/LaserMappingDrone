/****************************************************************************
** Meta object code from reading C++ file 'pqPluginDocumentationBehavior.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqPluginDocumentationBehavior.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPluginDocumentationBehavior.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPluginDocumentationBehavior[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x09,
      58,   30,   30,   30, 0x09,
      74,   30,   30,   30, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqPluginDocumentationBehavior[] = {
    "pqPluginDocumentationBehavior\0\0"
    "updatePlugin(vtkPVPlugin*)\0updatePlugins()\0"
    "refreshHelpEngine()\0"
};

void pqPluginDocumentationBehavior::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPluginDocumentationBehavior *_t = static_cast<pqPluginDocumentationBehavior *>(_o);
        switch (_id) {
        case 0: _t->updatePlugin((*reinterpret_cast< vtkPVPlugin*(*)>(_a[1]))); break;
        case 1: _t->updatePlugins(); break;
        case 2: _t->refreshHelpEngine(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPluginDocumentationBehavior::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPluginDocumentationBehavior::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPluginDocumentationBehavior,
      qt_meta_data_pqPluginDocumentationBehavior, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPluginDocumentationBehavior::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPluginDocumentationBehavior::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPluginDocumentationBehavior::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPluginDocumentationBehavior))
        return static_cast<void*>(const_cast< pqPluginDocumentationBehavior*>(this));
    return QObject::qt_metacast(_clname);
}

int pqPluginDocumentationBehavior::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
