/****************************************************************************
** Meta object code from reading C++ file 'pqPythonScriptEditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Python/pqPythonScriptEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPythonScriptEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPythonScriptEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   34,   21,   21, 0x0a,
      62,   57,   21,   21, 0x0a,
      84,   21,   79,   21, 0x0a,
      94,   21,   21,   21, 0x08,
     101,   21,   79,   21, 0x08,
     108,   21,   79,   21, 0x08,
     117,   21,   79,   21, 0x08,
     131,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqPythonScriptEditor[] = {
    "pqPythonScriptEditor\0\0fileSaved()\0"
    "filename\0open(QString)\0text\0"
    "setText(QString)\0bool\0newFile()\0open()\0"
    "save()\0saveAs()\0saveAsMacro()\0"
    "documentWasModified()\0"
};

void pqPythonScriptEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPythonScriptEditor *_t = static_cast<pqPythonScriptEditor *>(_o);
        switch (_id) {
        case 0: _t->fileSaved(); break;
        case 1: _t->open((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { bool _r = _t->newFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->open(); break;
        case 5: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->saveAsMacro();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->documentWasModified(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqPythonScriptEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPythonScriptEditor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_pqPythonScriptEditor,
      qt_meta_data_pqPythonScriptEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPythonScriptEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPythonScriptEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPythonScriptEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPythonScriptEditor))
        return static_cast<void*>(const_cast< pqPythonScriptEditor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int pqPythonScriptEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void pqPythonScriptEditor::fileSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
