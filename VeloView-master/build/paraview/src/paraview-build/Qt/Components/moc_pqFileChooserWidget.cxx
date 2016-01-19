/****************************************************************************
** Meta object code from reading C++ file 'pqFileChooserWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqFileChooserWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFileChooserWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqFileChooserWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      51,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      76,   20,   20,   20, 0x09,
     100,   89,   20,   20, 0x09,

 // properties: name, type, flags
     147,  135, 0x0b195103,
     165,  157, 0x0a095103,
     180,  157, 0x0a095103,
     195,  190, 0x01095103,
     212,  190, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_pqFileChooserWidget[] = {
    "pqFileChooserWidget\0\0filenamesChanged(QStringList)\0"
    "filenameChanged(QString)\0chooseFile()\0"
    "fileString\0handleFileLineEditChanged(QString)\0"
    "QStringList\0filenames\0QString\0"
    "singleFilename\0extension\0bool\0"
    "useDirectoryMode\0forceSingleFile\0"
};

void pqFileChooserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqFileChooserWidget *_t = static_cast<pqFileChooserWidget *>(_o);
        switch (_id) {
        case 0: _t->filenamesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->filenameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->chooseFile(); break;
        case 3: _t->handleFileLineEditChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqFileChooserWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqFileChooserWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqFileChooserWidget,
      qt_meta_data_pqFileChooserWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqFileChooserWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqFileChooserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqFileChooserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqFileChooserWidget))
        return static_cast<void*>(const_cast< pqFileChooserWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqFileChooserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = filenames(); break;
        case 1: *reinterpret_cast< QString*>(_v) = singleFilename(); break;
        case 2: *reinterpret_cast< QString*>(_v) = extension(); break;
        case 3: *reinterpret_cast< bool*>(_v) = useDirectoryMode(); break;
        case 4: *reinterpret_cast< bool*>(_v) = forceSingleFile(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFilenames(*reinterpret_cast< QStringList*>(_v)); break;
        case 1: setSingleFilename(*reinterpret_cast< QString*>(_v)); break;
        case 2: setExtension(*reinterpret_cast< QString*>(_v)); break;
        case 3: setUseDirectoryMode(*reinterpret_cast< bool*>(_v)); break;
        case 4: setForceSingleFile(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqFileChooserWidget::filenamesChanged(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqFileChooserWidget::filenameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
