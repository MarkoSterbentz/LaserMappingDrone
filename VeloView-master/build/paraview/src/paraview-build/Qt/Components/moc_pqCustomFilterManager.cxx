/****************************************************************************
** Meta object code from reading C++ file 'pqCustomFilterManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqCustomFilterManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCustomFilterManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqCustomFilterManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   23,   22,   22, 0x0a,
      62,   56,   22,   22, 0x0a,
      87,   56,   22,   22, 0x0a,
     115,   22,   22,   22, 0x08,
     129,   22,   22,   22, 0x08,
     146,   22,   22,   22, 0x08,
     183,  163,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqCustomFilterManager[] = {
    "pqCustomFilterManager\0\0name\0"
    "selectCustomFilter(QString)\0files\0"
    "importFiles(QStringList)\0"
    "exportSelected(QStringList)\0importFiles()\0"
    "exportSelected()\0removeSelected()\0"
    "selected,deselected\0"
    "updateButtons(QItemSelection,QItemSelection)\0"
};

void pqCustomFilterManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqCustomFilterManager *_t = static_cast<pqCustomFilterManager *>(_o);
        switch (_id) {
        case 0: _t->selectCustomFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->importFiles((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->exportSelected((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->importFiles(); break;
        case 4: _t->exportSelected(); break;
        case 5: _t->removeSelected(); break;
        case 6: _t->updateButtons((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqCustomFilterManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqCustomFilterManager::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqCustomFilterManager,
      qt_meta_data_pqCustomFilterManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqCustomFilterManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqCustomFilterManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqCustomFilterManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqCustomFilterManager))
        return static_cast<void*>(const_cast< pqCustomFilterManager*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqCustomFilterManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
