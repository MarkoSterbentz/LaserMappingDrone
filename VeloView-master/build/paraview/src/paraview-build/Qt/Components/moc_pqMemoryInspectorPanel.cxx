/****************************************************************************
** Meta object code from reading C++ file 'pqMemoryInspectorPanel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqMemoryInspectorPanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqMemoryInspectorPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqMemoryInspectorPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x09,
      45,   23,   23,   23, 0x09,
      68,   63,   23,   23, 0x09,
      91,   23,   23,   23, 0x09,
     109,   23,   23,   23, 0x09,
     128,   23,  124,   23, 0x09,
     141,   23,   23,   23, 0x09,
     156,  150,   23,   23, 0x09,
     183,  176,   23,   23, 0x09,
     214,  176,   23,   23, 0x09,
     245,  176,   23,   23, 0x09,
     280,  176,   23,   23, 0x09,
     317,   23,   23,   23, 0x09,
     345,  340,   23,   23, 0x09,
     389,   23,   23,   23, 0x09,
     420,  416,   23,   23, 0x09,
     450,   23,   23,   23, 0x09,
     466,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqMemoryInspectorPanel[] = {
    "pqMemoryInspectorPanel\0\0ServerDisconnected()\0"
    "ServerConnected()\0view\0ConnectToView(pqView*)\0"
    "RenderCompleted()\0EnableUpdate()\0int\0"
    "Initialize()\0Update()\0state\0"
    "SetAutoUpdate(bool)\0enable\0"
    "EnableStackTraceOnClient(bool)\0"
    "EnableStackTraceOnServer(bool)\0"
    "EnableStackTraceOnDataServer(bool)\0"
    "EnableStackTraceOnRenderServer(bool)\0"
    "ExecuteRemoteCommand()\0code\0"
    "RemoteCommandFailed(QProcess::ProcessError)\0"
    "ShowHostPropertiesDialog()\0pos\0"
    "ConfigViewContextMenu(QPoint)\0"
    "ShowOnlyNodes()\0ShowAllRanks()\0"
};

void pqMemoryInspectorPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqMemoryInspectorPanel *_t = static_cast<pqMemoryInspectorPanel *>(_o);
        switch (_id) {
        case 0: _t->ServerDisconnected(); break;
        case 1: _t->ServerConnected(); break;
        case 2: _t->ConnectToView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 3: _t->RenderCompleted(); break;
        case 4: _t->EnableUpdate(); break;
        case 5: { int _r = _t->Initialize();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->Update(); break;
        case 7: _t->SetAutoUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->EnableStackTraceOnClient((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->EnableStackTraceOnServer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->EnableStackTraceOnDataServer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->EnableStackTraceOnRenderServer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->ExecuteRemoteCommand(); break;
        case 13: _t->RemoteCommandFailed((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 14: _t->ShowHostPropertiesDialog(); break;
        case 15: _t->ConfigViewContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 16: _t->ShowOnlyNodes(); break;
        case 17: _t->ShowAllRanks(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqMemoryInspectorPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqMemoryInspectorPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqMemoryInspectorPanel,
      qt_meta_data_pqMemoryInspectorPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqMemoryInspectorPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqMemoryInspectorPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqMemoryInspectorPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqMemoryInspectorPanel))
        return static_cast<void*>(const_cast< pqMemoryInspectorPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqMemoryInspectorPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
