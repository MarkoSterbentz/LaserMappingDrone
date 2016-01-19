/****************************************************************************
** Meta object code from reading C++ file 'pqColorPresetManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqColorPresetManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqColorPresetManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqColorPresetManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   22,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   68,   21,   21, 0x0a,
     102,   68,   21,   21, 0x0a,
     130,   21,   21,   21, 0x08,
     147,   21,   21,   21, 0x08,
     164,   21,   21,   21, 0x08,
     184,   21,   21,   21, 0x08,
     201,   21,   21,   21, 0x08,
     221,  217,   21,   21, 0x08,
     245,   21,   21,   21, 0x08,
     285,  267,   21,   21, 0x08,
     320,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqColorPresetManager[] = {
    "pqColorPresetManager\0\0preset\0"
    "currentChanged(const pqColorMapModel*)\0"
    "files\0importColorMap(QStringList)\0"
    "exportColorMap(QStringList)\0"
    "importColorMap()\0exportColorMap()\0"
    "normalizeSelected()\0removeSelected()\0"
    "updateButtons()\0pos\0showContextMenu(QPoint)\0"
    "handleItemActivated()\0parent,first,last\0"
    "selectNewItem(QModelIndex,int,int)\0"
    "selectionChanged()\0"
};

void pqColorPresetManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqColorPresetManager *_t = static_cast<pqColorPresetManager *>(_o);
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< const pqColorMapModel*(*)>(_a[1]))); break;
        case 1: _t->importColorMap((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->exportColorMap((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->importColorMap(); break;
        case 4: _t->exportColorMap(); break;
        case 5: _t->normalizeSelected(); break;
        case 6: _t->removeSelected(); break;
        case 7: _t->updateButtons(); break;
        case 8: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->handleItemActivated(); break;
        case 10: _t->selectNewItem((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->selectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqColorPresetManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqColorPresetManager::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqColorPresetManager,
      qt_meta_data_pqColorPresetManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqColorPresetManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqColorPresetManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqColorPresetManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqColorPresetManager))
        return static_cast<void*>(const_cast< pqColorPresetManager*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqColorPresetManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void pqColorPresetManager::currentChanged(const pqColorMapModel * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
