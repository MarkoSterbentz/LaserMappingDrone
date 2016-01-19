/****************************************************************************
** Meta object code from reading C++ file 'pqKeyFrameEditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqKeyFrameEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqKeyFrameEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqKeyFrameEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      37,   17,   17,   17, 0x0a,
      57,   17,   17,   17, 0x08,
      71,   17,   17,   17, 0x08,
      88,   17,   17,   17, 0x08,
     109,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqKeyFrameEditor[] = {
    "pqKeyFrameEditor\0\0readKeyFrameData()\0"
    "writeKeyFrameData()\0newKeyFrame()\0"
    "deleteKeyFrame()\0deleteAllKeyFrames()\0"
    "useCurrentCamera(QObject*)\0"
};

void pqKeyFrameEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqKeyFrameEditor *_t = static_cast<pqKeyFrameEditor *>(_o);
        switch (_id) {
        case 0: _t->readKeyFrameData(); break;
        case 1: _t->writeKeyFrameData(); break;
        case 2: _t->newKeyFrame(); break;
        case 3: _t->deleteKeyFrame(); break;
        case 4: _t->deleteAllKeyFrames(); break;
        case 5: _t->useCurrentCamera((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqKeyFrameEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqKeyFrameEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqKeyFrameEditor,
      qt_meta_data_pqKeyFrameEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqKeyFrameEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqKeyFrameEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqKeyFrameEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqKeyFrameEditor))
        return static_cast<void*>(const_cast< pqKeyFrameEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqKeyFrameEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_pqKeyFrameEditorDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_pqKeyFrameEditorDialog[] = {
    "pqKeyFrameEditorDialog\0"
};

void pqKeyFrameEditorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqKeyFrameEditorDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqKeyFrameEditorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqKeyFrameEditorDialog,
      qt_meta_data_pqKeyFrameEditorDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqKeyFrameEditorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqKeyFrameEditorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqKeyFrameEditorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqKeyFrameEditorDialog))
        return static_cast<void*>(const_cast< pqKeyFrameEditorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int pqKeyFrameEditorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
