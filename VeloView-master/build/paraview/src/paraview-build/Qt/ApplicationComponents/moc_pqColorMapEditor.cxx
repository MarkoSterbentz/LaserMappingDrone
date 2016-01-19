/****************************************************************************
** Meta object code from reading C++ file 'pqColorMapEditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/ApplicationComponents/pqColorMapEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqColorMapEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqColorMapEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x09,
      33,   17,   17,   17, 0x09,
      47,   17,   17,   17, 0x09,
      61,   17,   17,   17, 0x09,
      77,   17,   17,   17, 0x09,
      93,   17,   17,   17, 0x09,
     114,   17,   17,   17, 0x09,
     132,   17,   17,   17, 0x09,
     152,   17,   17,   17, 0x09,
     169,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqColorMapEditor[] = {
    "pqColorMapEditor\0\0updateActive()\0"
    "updatePanel()\0renderViews()\0editScalarBar()\0"
    "saveAsDefault()\0saveAsArrayDefault()\0"
    "restoreDefaults()\0setAutoUpdate(bool)\0"
    "updateIfNeeded()\0updateScalarBarButtons()\0"
};

void pqColorMapEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqColorMapEditor *_t = static_cast<pqColorMapEditor *>(_o);
        switch (_id) {
        case 0: _t->updateActive(); break;
        case 1: _t->updatePanel(); break;
        case 2: _t->renderViews(); break;
        case 3: _t->editScalarBar(); break;
        case 4: _t->saveAsDefault(); break;
        case 5: _t->saveAsArrayDefault(); break;
        case 6: _t->restoreDefaults(); break;
        case 7: _t->setAutoUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->updateIfNeeded(); break;
        case 9: _t->updateScalarBarButtons(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqColorMapEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqColorMapEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqColorMapEditor,
      qt_meta_data_pqColorMapEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqColorMapEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqColorMapEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqColorMapEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqColorMapEditor))
        return static_cast<void*>(const_cast< pqColorMapEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqColorMapEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
