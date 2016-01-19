/****************************************************************************
** Meta object code from reading C++ file 'pqServerConnectDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqServerConnectDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqServerConnectDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqServerConnectDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x09,
      50,   46,   22,   22, 0x09,
      72,   22,   22,   22, 0x09,
      85,   22,   22,   22, 0x09,
      97,   22,   22,   22, 0x09,
     116,   22,   22,   22, 0x09,
     132,   22,   22,   22, 0x09,
     159,   22,   22,   22, 0x09,
     186,   22,   22,   22, 0x09,
     206,   22,   22,   22, 0x09,
     222,   22,   22,   22, 0x09,
     237,   22,   22,   22, 0x09,
     251,   22,   22,   22, 0x09,
     265,   22,   22,   22, 0x09,
     287,  275,   22,   22, 0x09,
     310,   22,   22,   22, 0x09,
     327,  325,   22,   22, 0x09,
     382,   22,   22,   22, 0x09,
     423,  415,   22,   22, 0x09,
     444,   22,   22,   22, 0x09,
     476,   22,   22,   22, 0x09,
     492,   22,   22,   22, 0x09,
     506,   22,   22,   22, 0x09,
     524,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqServerConnectDialog[] = {
    "pqServerConnectDialog\0\0updateConfigurations()\0"
    "row\0onServerSelected(int)\0editServer()\0"
    "addServer()\0updateServerType()\0"
    "goToFirstPage()\0acceptConfigurationPage1()\0"
    "acceptConfigurationPage2()\0"
    "editServerStartup()\0onNameChanged()\0"
    "deleteServer()\0loadServers()\0saveServers()\0"
    "connect()\0page_number\0updateDialogTitle(int)\0"
    "fetchServers()\0,\0"
    "authenticationRequired(QNetworkReply*,QAuthenticator*)\0"
    "updateImportableConfigurations()\0"
    "message\0importError(QString)\0"
    "importServersSelectionChanged()\0"
    "importServers()\0editSources()\0"
    "saveSourcesList()\0cancelEditSources()\0"
};

void pqServerConnectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqServerConnectDialog *_t = static_cast<pqServerConnectDialog *>(_o);
        switch (_id) {
        case 0: _t->updateConfigurations(); break;
        case 1: _t->onServerSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->editServer(); break;
        case 3: _t->addServer(); break;
        case 4: _t->updateServerType(); break;
        case 5: _t->goToFirstPage(); break;
        case 6: _t->acceptConfigurationPage1(); break;
        case 7: _t->acceptConfigurationPage2(); break;
        case 8: _t->editServerStartup(); break;
        case 9: _t->onNameChanged(); break;
        case 10: _t->deleteServer(); break;
        case 11: _t->loadServers(); break;
        case 12: _t->saveServers(); break;
        case 13: _t->connect(); break;
        case 14: _t->updateDialogTitle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->fetchServers(); break;
        case 16: _t->authenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 17: _t->updateImportableConfigurations(); break;
        case 18: _t->importError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->importServersSelectionChanged(); break;
        case 20: _t->importServers(); break;
        case 21: _t->editSources(); break;
        case 22: _t->saveSourcesList(); break;
        case 23: _t->cancelEditSources(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqServerConnectDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqServerConnectDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqServerConnectDialog,
      qt_meta_data_pqServerConnectDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqServerConnectDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqServerConnectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqServerConnectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqServerConnectDialog))
        return static_cast<void*>(const_cast< pqServerConnectDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqServerConnectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
