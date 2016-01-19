/****************************************************************************
** Meta object code from reading C++ file 'pqFileDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Core/pqFileDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFileDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqFileDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      48,   13,   13,   13, 0x05,
      75,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      97,   13,   13,   13, 0x08,
     112,   13,   13,   13, 0x08,
     132,   13,   13,   13, 0x08,
     147,   13,   13,   13, 0x08,
     164,   13,   13,   13, 0x08,
     184,   13,   13,   13, 0x08,
     212,   13,   13,   13, 0x08,
     236,   13,   13,   13, 0x08,
     265,   13,   13,   13, 0x08,
     296,   13,   13,   13, 0x08,
     323,   13,   13,   13, 0x08,
     355,   13,   13,   13, 0x08,
     385,   13,   13,   13, 0x08,
     416,   13,   13,   13, 0x08,
     443,  438,   13,   13, 0x08,
     467,   13,   13,   13, 0x08,
     494,  490,   13,   13, 0x08,
     525,   13,   13,   13, 0x08,
     545,   13,   13,   13, 0x08,
     577,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqFileDialog[] = {
    "pqFileDialog\0\0filesSelected(QList<QStringList>)\0"
    "filesSelected(QStringList)\0"
    "fileAccepted(QString)\0onModelReset()\0"
    "onNavigate(QString)\0onNavigateUp()\0"
    "onNavigateBack()\0onNavigateForward()\0"
    "onNavigateDown(QModelIndex)\0"
    "onFilterChange(QString)\0"
    "onClickedRecent(QModelIndex)\0"
    "onClickedFavorite(QModelIndex)\0"
    "onClickedFile(QModelIndex)\0"
    "onActivateFavorite(QModelIndex)\0"
    "onActivateRecent(QModelIndex)\0"
    "onDoubleClickFile(QModelIndex)\0"
    "onTextEdited(QString)\0hide\0"
    "onShowHiddenFiles(bool)\0fileSelectionChanged()\0"
    "pos\0onContextMenuRequested(QPoint)\0"
    "onCreateNewFolder()\0addToFilesSelected(QStringList)\0"
    "emitFilesSelectionDone()\0"
};

void pqFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqFileDialog *_t = static_cast<pqFileDialog *>(_o);
        switch (_id) {
        case 0: _t->filesSelected((*reinterpret_cast< const QList<QStringList>(*)>(_a[1]))); break;
        case 1: _t->filesSelected((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->fileAccepted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onModelReset(); break;
        case 4: _t->onNavigate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onNavigateUp(); break;
        case 6: _t->onNavigateBack(); break;
        case 7: _t->onNavigateForward(); break;
        case 8: _t->onNavigateDown((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->onFilterChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->onClickedRecent((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->onClickedFavorite((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->onClickedFile((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->onActivateFavorite((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 14: _t->onActivateRecent((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 15: _t->onDoubleClickFile((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 16: _t->onTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->onShowHiddenFiles((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 18: _t->fileSelectionChanged(); break;
        case 19: _t->onContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 20: _t->onCreateNewFolder(); break;
        case 21: _t->addToFilesSelected((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 22: _t->emitFilesSelectionDone(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqFileDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqFileDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqFileDialog,
      qt_meta_data_pqFileDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqFileDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqFileDialog))
        return static_cast<void*>(const_cast< pqFileDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void pqFileDialog::filesSelected(const QList<QStringList> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqFileDialog::filesSelected(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqFileDialog::fileAccepted(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
