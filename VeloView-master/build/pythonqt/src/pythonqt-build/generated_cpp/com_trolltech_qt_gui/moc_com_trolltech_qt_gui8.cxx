/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_gui8.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../pythonqt/generated_cpp/com_trolltech_qt_gui/com_trolltech_qt_gui8.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_gui8.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       2,   49, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      54,   34,   35,   34, 0x0a,
      84,   78,   35,   34, 0x0a,
     129,  125,   34,   34, 0x0a,
     201,  174,   34,   34, 0x0a,
     263,  246,  242,   34, 0x0a,
     330,  300,   34,   34, 0x0a,
     374,  246,  242,   34, 0x0a,

 // enums: name, flags, count, data
     414, 0x0,    1,   57,
     433, 0x0,    1,   59,

 // enum data: key, value
     449, uint(PythonQtWrapper_QStyleOptionFrame::Version),
     457, uint(PythonQtWrapper_QStyleOptionFrame::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionFrame[] = {
    "PythonQtWrapper_QStyleOptionFrame\0\0"
    "QStyleOptionFrame*\0new_QStyleOptionFrame()\0"
    "other\0new_QStyleOptionFrame(QStyleOptionFrame)\0"
    "obj\0delete_QStyleOptionFrame(QStyleOptionFrame*)\0"
    "theWrappedObject,lineWidth\0"
    "py_set_lineWidth(QStyleOptionFrame*,int)\0"
    "int\0theWrappedObject\0"
    "py_get_lineWidth(QStyleOptionFrame*)\0"
    "theWrappedObject,midLineWidth\0"
    "py_set_midLineWidth(QStyleOptionFrame*,int)\0"
    "py_get_midLineWidth(QStyleOptionFrame*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleOptionFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionFrame *_t = static_cast<PythonQtWrapper_QStyleOptionFrame *>(_o);
        switch (_id) {
        case 0: { QStyleOptionFrame* _r = _t->new_QStyleOptionFrame();
            if (_a[0]) *reinterpret_cast< QStyleOptionFrame**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionFrame* _r = _t->new_QStyleOptionFrame((*reinterpret_cast< const QStyleOptionFrame(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionFrame**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionFrame((*reinterpret_cast< QStyleOptionFrame*(*)>(_a[1]))); break;
        case 3: _t->py_set_lineWidth((*reinterpret_cast< QStyleOptionFrame*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: { int _r = _t->py_get_lineWidth((*reinterpret_cast< QStyleOptionFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_midLineWidth((*reinterpret_cast< QStyleOptionFrame*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: { int _r = _t->py_get_midLineWidth((*reinterpret_cast< QStyleOptionFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionFrame::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionFrame,
      qt_meta_data_PythonQtWrapper_QStyleOptionFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionFrame))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionFrame*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionFrameV2[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       3,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      58,   36,   37,   36, 0x0a,
      90,   84,   37,   36, 0x0a,
     133,   84,   37,   36, 0x0a,
     182,  178,   36,   36, 0x0a,
     257,  231,   36,   36, 0x0a,
     382,  365,  330,   36, 0x0a,

 // enums: name, flags, count, data
     420, 0x0,    1,   56,
     439, 0x0,    2,   58,
     452, 0x1,    2,   62,

 // enum data: key, value
     466, uint(PythonQtWrapper_QStyleOptionFrameV2::Version),
     474, uint(PythonQtWrapper_QStyleOptionFrameV2::None),
     479, uint(PythonQtWrapper_QStyleOptionFrameV2::Flat),
     474, uint(PythonQtWrapper_QStyleOptionFrameV2::None),
     479, uint(PythonQtWrapper_QStyleOptionFrameV2::Flat),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionFrameV2[] = {
    "PythonQtWrapper_QStyleOptionFrameV2\0"
    "\0QStyleOptionFrameV2*\0new_QStyleOptionFrameV2()\0"
    "other\0new_QStyleOptionFrameV2(QStyleOptionFrame)\0"
    "new_QStyleOptionFrameV2(QStyleOptionFrameV2)\0"
    "obj\0delete_QStyleOptionFrameV2(QStyleOptionFrameV2*)\0"
    "theWrappedObject,features\0"
    "py_set_features(QStyleOptionFrameV2*,QStyleOptionFrameV2::FrameFeature"
    "s)\0"
    "QStyleOptionFrameV2::FrameFeatures\0"
    "theWrappedObject\0py_get_features(QStyleOptionFrameV2*)\0"
    "StyleOptionVersion\0FrameFeature\0"
    "FrameFeatures\0Version\0None\0Flat\0"
};

void PythonQtWrapper_QStyleOptionFrameV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionFrameV2 *_t = static_cast<PythonQtWrapper_QStyleOptionFrameV2 *>(_o);
        switch (_id) {
        case 0: { QStyleOptionFrameV2* _r = _t->new_QStyleOptionFrameV2();
            if (_a[0]) *reinterpret_cast< QStyleOptionFrameV2**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionFrameV2* _r = _t->new_QStyleOptionFrameV2((*reinterpret_cast< const QStyleOptionFrame(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionFrameV2**>(_a[0]) = _r; }  break;
        case 2: { QStyleOptionFrameV2* _r = _t->new_QStyleOptionFrameV2((*reinterpret_cast< const QStyleOptionFrameV2(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionFrameV2**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStyleOptionFrameV2((*reinterpret_cast< QStyleOptionFrameV2*(*)>(_a[1]))); break;
        case 4: _t->py_set_features((*reinterpret_cast< QStyleOptionFrameV2*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionFrameV2::FrameFeatures(*)>(_a[2]))); break;
        case 5: { QStyleOptionFrameV2::FrameFeatures _r = _t->py_get_features((*reinterpret_cast< QStyleOptionFrameV2*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionFrameV2::FrameFeatures*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionFrameV2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionFrameV2::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionFrameV2,
      qt_meta_data_PythonQtWrapper_QStyleOptionFrameV2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionFrameV2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionFrameV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionFrameV2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionFrameV2))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionFrameV2*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionFrameV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionFrameV3[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       1,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      58,   36,   37,   36, 0x0a,
      90,   84,   37,   36, 0x0a,
     133,   84,   37,   36, 0x0a,
     182,  178,   36,   36, 0x0a,
     259,  231,   36,   36, 0x0a,
     344,  327,  313,   36, 0x0a,
     408,  384,   36,   36, 0x0a,
     454,  327,  449,   36, 0x0a,

 // enums: name, flags, count, data
     490, 0x0,    1,   58,

 // enum data: key, value
     509, uint(PythonQtWrapper_QStyleOptionFrameV3::Version),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionFrameV3[] = {
    "PythonQtWrapper_QStyleOptionFrameV3\0"
    "\0QStyleOptionFrameV3*\0new_QStyleOptionFrameV3()\0"
    "other\0new_QStyleOptionFrameV3(QStyleOptionFrame)\0"
    "new_QStyleOptionFrameV3(QStyleOptionFrameV3)\0"
    "obj\0delete_QStyleOptionFrameV3(QStyleOptionFrameV3*)\0"
    "theWrappedObject,frameShape\0"
    "py_set_frameShape(QStyleOptionFrameV3*,QFrame::Shape)\0"
    "QFrame::Shape\0theWrappedObject\0"
    "py_get_frameShape(QStyleOptionFrameV3*)\0"
    "theWrappedObject,unused\0"
    "py_set_unused(QStyleOptionFrameV3*,uint)\0"
    "uint\0py_get_unused(QStyleOptionFrameV3*)\0"
    "StyleOptionVersion\0Version\0"
};

void PythonQtWrapper_QStyleOptionFrameV3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionFrameV3 *_t = static_cast<PythonQtWrapper_QStyleOptionFrameV3 *>(_o);
        switch (_id) {
        case 0: { QStyleOptionFrameV3* _r = _t->new_QStyleOptionFrameV3();
            if (_a[0]) *reinterpret_cast< QStyleOptionFrameV3**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionFrameV3* _r = _t->new_QStyleOptionFrameV3((*reinterpret_cast< const QStyleOptionFrame(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionFrameV3**>(_a[0]) = _r; }  break;
        case 2: { QStyleOptionFrameV3* _r = _t->new_QStyleOptionFrameV3((*reinterpret_cast< const QStyleOptionFrameV3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionFrameV3**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStyleOptionFrameV3((*reinterpret_cast< QStyleOptionFrameV3*(*)>(_a[1]))); break;
        case 4: _t->py_set_frameShape((*reinterpret_cast< QStyleOptionFrameV3*(*)>(_a[1])),(*reinterpret_cast< QFrame::Shape(*)>(_a[2]))); break;
        case 5: { QFrame::Shape _r = _t->py_get_frameShape((*reinterpret_cast< QStyleOptionFrameV3*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFrame::Shape*>(_a[0]) = _r; }  break;
        case 6: _t->py_set_unused((*reinterpret_cast< QStyleOptionFrameV3*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 7: { uint _r = _t->py_get_unused((*reinterpret_cast< QStyleOptionFrameV3*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionFrameV3::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionFrameV3::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionFrameV3,
      qt_meta_data_PythonQtWrapper_QStyleOptionFrameV3, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionFrameV3::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionFrameV3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionFrameV3::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionFrameV3))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionFrameV3*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionFrameV3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionGraphicsItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       2,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      68,   41,   42,   41, 0x0a,
     105,   99,   42,   41, 0x0a,
     164,  160,   41,   41, 0x0a,
     244,  229,  223,   41, 0x0a,
     344,  315,   41,   41, 0x0a,
     421,  404,  397,   41, 0x0a,
     491,  467,   41,   41, 0x0a,
     548,  404,  540,   41, 0x0a,
     620,  589,   41,   41, 0x0a,
     674,  404,  223,   41, 0x0a,

 // enums: name, flags, count, data
     722, 0x0,    1,   72,
     741, 0x0,    1,   74,

 // enum data: key, value
     757, uint(PythonQtWrapper_QStyleOptionGraphicsItem::Version),
     765, uint(PythonQtWrapper_QStyleOptionGraphicsItem::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionGraphicsItem[] = {
    "PythonQtWrapper_QStyleOptionGraphicsItem\0"
    "\0QStyleOptionGraphicsItem*\0"
    "new_QStyleOptionGraphicsItem()\0other\0"
    "new_QStyleOptionGraphicsItem(QStyleOptionGraphicsItem)\0"
    "obj\0delete_QStyleOptionGraphicsItem(QStyleOptionGraphicsItem*)\0"
    "qreal\0worldTransform\0"
    "static_QStyleOptionGraphicsItem_levelOfDetailFromTransform(QTransform)\0"
    "theWrappedObject,exposedRect\0"
    "py_set_exposedRect(QStyleOptionGraphicsItem*,QRectF)\0"
    "QRectF\0theWrappedObject\0"
    "py_get_exposedRect(QStyleOptionGraphicsItem*)\0"
    "theWrappedObject,matrix\0"
    "py_set_matrix(QStyleOptionGraphicsItem*,QMatrix)\0"
    "QMatrix\0py_get_matrix(QStyleOptionGraphicsItem*)\0"
    "theWrappedObject,levelOfDetail\0"
    "py_set_levelOfDetail(QStyleOptionGraphicsItem*,qreal)\0"
    "py_get_levelOfDetail(QStyleOptionGraphicsItem*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleOptionGraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionGraphicsItem *_t = static_cast<PythonQtWrapper_QStyleOptionGraphicsItem *>(_o);
        switch (_id) {
        case 0: { QStyleOptionGraphicsItem* _r = _t->new_QStyleOptionGraphicsItem();
            if (_a[0]) *reinterpret_cast< QStyleOptionGraphicsItem**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionGraphicsItem* _r = _t->new_QStyleOptionGraphicsItem((*reinterpret_cast< const QStyleOptionGraphicsItem(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionGraphicsItem**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionGraphicsItem((*reinterpret_cast< QStyleOptionGraphicsItem*(*)>(_a[1]))); break;
        case 3: { qreal _r = _t->static_QStyleOptionGraphicsItem_levelOfDetailFromTransform((*reinterpret_cast< const QTransform(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 4: _t->py_set_exposedRect((*reinterpret_cast< QStyleOptionGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QRectF(*)>(_a[2]))); break;
        case 5: { QRectF _r = _t->py_get_exposedRect((*reinterpret_cast< QStyleOptionGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 6: _t->py_set_matrix((*reinterpret_cast< QStyleOptionGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QMatrix(*)>(_a[2]))); break;
        case 7: { QMatrix _r = _t->py_get_matrix((*reinterpret_cast< QStyleOptionGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMatrix*>(_a[0]) = _r; }  break;
        case 8: _t->py_set_levelOfDetail((*reinterpret_cast< QStyleOptionGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 9: { qreal _r = _t->py_get_levelOfDetail((*reinterpret_cast< QStyleOptionGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionGraphicsItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionGraphicsItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionGraphicsItem,
      qt_meta_data_PythonQtWrapper_QStyleOptionGraphicsItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionGraphicsItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionGraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionGraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionGraphicsItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionGraphicsItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionGraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionGroupBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       2,   89, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      60,   37,   38,   37, 0x0a,
      93,   87,   38,   37, 0x0a,
     144,  140,   37,   37, 0x0a,
     222,  195,   37,   37, 0x0a,
     287,  270,  266,   37, 0x0a,
     353,  327,   37,   37, 0x0a,
     462,  270,  427,   37, 0x0a,
     532,  501,   37,   37, 0x0a,
     604,  270,  590,   37, 0x0a,
     678,  648,   37,   37, 0x0a,
     725,  270,  266,   37, 0x0a,
     790,  768,   37,   37, 0x0a,
     841,  270,  833,   37, 0x0a,
     903,  876,   37,   37, 0x0a,
     957,  270,  950,   37, 0x0a,

 // enums: name, flags, count, data
     997, 0x0,    1,   97,
    1016, 0x0,    1,   99,

 // enum data: key, value
    1032, uint(PythonQtWrapper_QStyleOptionGroupBox::Version),
    1040, uint(PythonQtWrapper_QStyleOptionGroupBox::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionGroupBox[] = {
    "PythonQtWrapper_QStyleOptionGroupBox\0"
    "\0QStyleOptionGroupBox*\0"
    "new_QStyleOptionGroupBox()\0other\0"
    "new_QStyleOptionGroupBox(QStyleOptionGroupBox)\0"
    "obj\0delete_QStyleOptionGroupBox(QStyleOptionGroupBox*)\0"
    "theWrappedObject,lineWidth\0"
    "py_set_lineWidth(QStyleOptionGroupBox*,int)\0"
    "int\0theWrappedObject\0"
    "py_get_lineWidth(QStyleOptionGroupBox*)\0"
    "theWrappedObject,features\0"
    "py_set_features(QStyleOptionGroupBox*,QStyleOptionFrameV2::FrameFeatur"
    "es)\0"
    "QStyleOptionFrameV2::FrameFeatures\0"
    "py_get_features(QStyleOptionGroupBox*)\0"
    "theWrappedObject,textAlignment\0"
    "py_set_textAlignment(QStyleOptionGroupBox*,Qt::Alignment)\0"
    "Qt::Alignment\0py_get_textAlignment(QStyleOptionGroupBox*)\0"
    "theWrappedObject,midLineWidth\0"
    "py_set_midLineWidth(QStyleOptionGroupBox*,int)\0"
    "py_get_midLineWidth(QStyleOptionGroupBox*)\0"
    "theWrappedObject,text\0"
    "py_set_text(QStyleOptionGroupBox*,QString)\0"
    "QString\0py_get_text(QStyleOptionGroupBox*)\0"
    "theWrappedObject,textColor\0"
    "py_set_textColor(QStyleOptionGroupBox*,QColor)\0"
    "QColor\0py_get_textColor(QStyleOptionGroupBox*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleOptionGroupBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionGroupBox *_t = static_cast<PythonQtWrapper_QStyleOptionGroupBox *>(_o);
        switch (_id) {
        case 0: { QStyleOptionGroupBox* _r = _t->new_QStyleOptionGroupBox();
            if (_a[0]) *reinterpret_cast< QStyleOptionGroupBox**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionGroupBox* _r = _t->new_QStyleOptionGroupBox((*reinterpret_cast< const QStyleOptionGroupBox(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionGroupBox**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionGroupBox((*reinterpret_cast< QStyleOptionGroupBox*(*)>(_a[1]))); break;
        case 3: _t->py_set_lineWidth((*reinterpret_cast< QStyleOptionGroupBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: { int _r = _t->py_get_lineWidth((*reinterpret_cast< QStyleOptionGroupBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_features((*reinterpret_cast< QStyleOptionGroupBox*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionFrameV2::FrameFeatures(*)>(_a[2]))); break;
        case 6: { QStyleOptionFrameV2::FrameFeatures _r = _t->py_get_features((*reinterpret_cast< QStyleOptionGroupBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionFrameV2::FrameFeatures*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_textAlignment((*reinterpret_cast< QStyleOptionGroupBox*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 8: { Qt::Alignment _r = _t->py_get_textAlignment((*reinterpret_cast< QStyleOptionGroupBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_midLineWidth((*reinterpret_cast< QStyleOptionGroupBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: { int _r = _t->py_get_midLineWidth((*reinterpret_cast< QStyleOptionGroupBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: _t->py_set_text((*reinterpret_cast< QStyleOptionGroupBox*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: { QString _r = _t->py_get_text((*reinterpret_cast< QStyleOptionGroupBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: _t->py_set_textColor((*reinterpret_cast< QStyleOptionGroupBox*(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 14: { QColor _r = _t->py_get_textColor((*reinterpret_cast< QStyleOptionGroupBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionGroupBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionGroupBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionGroupBox,
      qt_meta_data_PythonQtWrapper_QStyleOptionGroupBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionGroupBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionGroupBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionGroupBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionGroupBox))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionGroupBox*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionGroupBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionHeader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       5,  119, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      56,   35,   36,   35, 0x0a,
      87,   81,   36,   35, 0x0a,
     134,  130,   35,   35, 0x0a,
     206,  181,   35,   35, 0x0a,
     267,  250,  246,   35, 0x0a,
     334,  303,   35,   35, 0x0a,
     444,  250,  410,   35, 0x0a,
     512,  486,   35,   35, 0x0a,
     621,  250,  585,   35, 0x0a,
     680,  658,   35,   35, 0x0a,
     725,  250,  719,   35, 0x0a,
     789,  758,   35,   35, 0x0a,
     859,  250,  845,   35, 0x0a,
     923,  901,   35,   35, 0x0a,
     972,  250,  964,   35, 0x0a,
    1039, 1005,   35,   35, 0x0a,
    1158,  250, 1121,   35, 0x0a,
    1234, 1203,   35,   35, 0x0a,
    1290,  250,  845,   35, 0x0a,
    1361, 1332,   35,   35, 0x0a,
    1433,  250, 1417,   35, 0x0a,

 // enums: name, flags, count, data
    1473, 0x0,    1,  139,
    1492, 0x0,    4,  141,
    1508, 0x0,    4,  149,
    1525, 0x0,    1,  157,
    1541, 0x0,    3,  159,

 // enum data: key, value
    1555, uint(PythonQtWrapper_QStyleOptionHeader::Version),
    1563, uint(PythonQtWrapper_QStyleOptionHeader::Beginning),
    1573, uint(PythonQtWrapper_QStyleOptionHeader::Middle),
    1580, uint(PythonQtWrapper_QStyleOptionHeader::End),
    1584, uint(PythonQtWrapper_QStyleOptionHeader::OnlyOneSection),
    1599, uint(PythonQtWrapper_QStyleOptionHeader::NotAdjacent),
    1611, uint(PythonQtWrapper_QStyleOptionHeader::NextIsSelected),
    1626, uint(PythonQtWrapper_QStyleOptionHeader::PreviousIsSelected),
    1645, uint(PythonQtWrapper_QStyleOptionHeader::NextAndPreviousAreSelected),
    1672, uint(PythonQtWrapper_QStyleOptionHeader::Type),
    1677, uint(PythonQtWrapper_QStyleOptionHeader::None),
    1682, uint(PythonQtWrapper_QStyleOptionHeader::SortUp),
    1689, uint(PythonQtWrapper_QStyleOptionHeader::SortDown),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionHeader[] = {
    "PythonQtWrapper_QStyleOptionHeader\0\0"
    "QStyleOptionHeader*\0new_QStyleOptionHeader()\0"
    "other\0new_QStyleOptionHeader(QStyleOptionHeader)\0"
    "obj\0delete_QStyleOptionHeader(QStyleOptionHeader*)\0"
    "theWrappedObject,section\0"
    "py_set_section(QStyleOptionHeader*,int)\0"
    "int\0theWrappedObject\0"
    "py_get_section(QStyleOptionHeader*)\0"
    "theWrappedObject,sortIndicator\0"
    "py_set_sortIndicator(QStyleOptionHeader*,QStyleOptionHeader::SortIndic"
    "ator)\0"
    "QStyleOptionHeader::SortIndicator\0"
    "py_get_sortIndicator(QStyleOptionHeader*)\0"
    "theWrappedObject,position\0"
    "py_set_position(QStyleOptionHeader*,QStyleOptionHeader::SectionPositio"
    "n)\0"
    "QStyleOptionHeader::SectionPosition\0"
    "py_get_position(QStyleOptionHeader*)\0"
    "theWrappedObject,icon\0"
    "py_set_icon(QStyleOptionHeader*,QIcon)\0"
    "QIcon\0py_get_icon(QStyleOptionHeader*)\0"
    "theWrappedObject,textAlignment\0"
    "py_set_textAlignment(QStyleOptionHeader*,Qt::Alignment)\0"
    "Qt::Alignment\0py_get_textAlignment(QStyleOptionHeader*)\0"
    "theWrappedObject,text\0"
    "py_set_text(QStyleOptionHeader*,QString)\0"
    "QString\0py_get_text(QStyleOptionHeader*)\0"
    "theWrappedObject,selectedPosition\0"
    "py_set_selectedPosition(QStyleOptionHeader*,QStyleOptionHeader::Select"
    "edPosition)\0"
    "QStyleOptionHeader::SelectedPosition\0"
    "py_get_selectedPosition(QStyleOptionHeader*)\0"
    "theWrappedObject,iconAlignment\0"
    "py_set_iconAlignment(QStyleOptionHeader*,Qt::Alignment)\0"
    "py_get_iconAlignment(QStyleOptionHeader*)\0"
    "theWrappedObject,orientation\0"
    "py_set_orientation(QStyleOptionHeader*,Qt::Orientation)\0"
    "Qt::Orientation\0py_get_orientation(QStyleOptionHeader*)\0"
    "StyleOptionVersion\0SectionPosition\0"
    "SelectedPosition\0StyleOptionType\0"
    "SortIndicator\0Version\0Beginning\0Middle\0"
    "End\0OnlyOneSection\0NotAdjacent\0"
    "NextIsSelected\0PreviousIsSelected\0"
    "NextAndPreviousAreSelected\0Type\0None\0"
    "SortUp\0SortDown\0"
};

void PythonQtWrapper_QStyleOptionHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionHeader *_t = static_cast<PythonQtWrapper_QStyleOptionHeader *>(_o);
        switch (_id) {
        case 0: { QStyleOptionHeader* _r = _t->new_QStyleOptionHeader();
            if (_a[0]) *reinterpret_cast< QStyleOptionHeader**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionHeader* _r = _t->new_QStyleOptionHeader((*reinterpret_cast< const QStyleOptionHeader(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionHeader**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionHeader((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1]))); break;
        case 3: _t->py_set_section((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: { int _r = _t->py_get_section((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_sortIndicator((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionHeader::SortIndicator(*)>(_a[2]))); break;
        case 6: { QStyleOptionHeader::SortIndicator _r = _t->py_get_sortIndicator((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionHeader::SortIndicator*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_position((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionHeader::SectionPosition(*)>(_a[2]))); break;
        case 8: { QStyleOptionHeader::SectionPosition _r = _t->py_get_position((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionHeader::SectionPosition*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_icon((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])),(*reinterpret_cast< QIcon(*)>(_a[2]))); break;
        case 10: { QIcon _r = _t->py_get_icon((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 11: _t->py_set_textAlignment((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 12: { Qt::Alignment _r = _t->py_get_textAlignment((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 13: _t->py_set_text((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: { QString _r = _t->py_get_text((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: _t->py_set_selectedPosition((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionHeader::SelectedPosition(*)>(_a[2]))); break;
        case 16: { QStyleOptionHeader::SelectedPosition _r = _t->py_get_selectedPosition((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionHeader::SelectedPosition*>(_a[0]) = _r; }  break;
        case 17: _t->py_set_iconAlignment((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 18: { Qt::Alignment _r = _t->py_get_iconAlignment((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 19: _t->py_set_orientation((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])),(*reinterpret_cast< Qt::Orientation(*)>(_a[2]))); break;
        case 20: { Qt::Orientation _r = _t->py_get_orientation((*reinterpret_cast< QStyleOptionHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientation*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionHeader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionHeader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionHeader,
      qt_meta_data_PythonQtWrapper_QStyleOptionHeader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionHeader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionHeader))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionHeader*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionMenuItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       4,  129, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      60,   37,   38,   37, 0x0a,
      93,   87,   38,   37, 0x0a,
     144,  140,   37,   37, 0x0a,
     234,  195,   37,   37, 0x0a,
     313,  296,  291,   37, 0x0a,
     391,  365,   37,   37, 0x0a,
     442,  296,  436,   37, 0x0a,
     508,  481,   37,   37, 0x0a,
     612,  296,  580,   37, 0x0a,
     674,  652,   37,   37, 0x0a,
     721,  296,  715,   37, 0x0a,
     781,  756,   37,   37, 0x0a,
     824,  296,  291,   37, 0x0a,
     892,  862,   37,   37, 0x0a,
     943,  296,  939,   37, 0x0a,
    1012,  986,   37,   37, 0x0a,
    1055,  296,  939,   37, 0x0a,
    1116, 1094,   37,   37, 0x0a,
    1167,  296, 1159,   37, 0x0a,
    1224, 1202,   37,   37, 0x0a,
    1271,  296, 1265,   37, 0x0a,
    1336, 1306,   37,   37, 0x0a,
    1449,  296, 1414,   37, 0x0a,

 // enums: name, flags, count, data
    1492, 0x0,    1,  145,
    1511, 0x0,    1,  147,
    1527, 0x0,    3,  149,
    1537, 0x0,    8,  155,

 // enum data: key, value
    1550, uint(PythonQtWrapper_QStyleOptionMenuItem::Version),
    1558, uint(PythonQtWrapper_QStyleOptionMenuItem::Type),
    1563, uint(PythonQtWrapper_QStyleOptionMenuItem::NotCheckable),
    1576, uint(PythonQtWrapper_QStyleOptionMenuItem::Exclusive),
    1586, uint(PythonQtWrapper_QStyleOptionMenuItem::NonExclusive),
    1599, uint(PythonQtWrapper_QStyleOptionMenuItem::Normal),
    1606, uint(PythonQtWrapper_QStyleOptionMenuItem::DefaultItem),
    1618, uint(PythonQtWrapper_QStyleOptionMenuItem::Separator),
    1628, uint(PythonQtWrapper_QStyleOptionMenuItem::SubMenu),
    1636, uint(PythonQtWrapper_QStyleOptionMenuItem::Scroller),
    1645, uint(PythonQtWrapper_QStyleOptionMenuItem::TearOff),
    1653, uint(PythonQtWrapper_QStyleOptionMenuItem::Margin),
    1660, uint(PythonQtWrapper_QStyleOptionMenuItem::EmptyArea),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionMenuItem[] = {
    "PythonQtWrapper_QStyleOptionMenuItem\0"
    "\0QStyleOptionMenuItem*\0"
    "new_QStyleOptionMenuItem()\0other\0"
    "new_QStyleOptionMenuItem(QStyleOptionMenuItem)\0"
    "obj\0delete_QStyleOptionMenuItem(QStyleOptionMenuItem*)\0"
    "theWrappedObject,menuHasCheckableItems\0"
    "py_set_menuHasCheckableItems(QStyleOptionMenuItem*,bool)\0"
    "bool\0theWrappedObject\0"
    "py_get_menuHasCheckableItems(QStyleOptionMenuItem*)\0"
    "theWrappedObject,menuRect\0"
    "py_set_menuRect(QStyleOptionMenuItem*,QRect)\0"
    "QRect\0py_get_menuRect(QStyleOptionMenuItem*)\0"
    "theWrappedObject,checkType\0"
    "py_set_checkType(QStyleOptionMenuItem*,QStyleOptionMenuItem::CheckType"
    ")\0"
    "QStyleOptionMenuItem::CheckType\0"
    "py_get_checkType(QStyleOptionMenuItem*)\0"
    "theWrappedObject,icon\0"
    "py_set_icon(QStyleOptionMenuItem*,QIcon)\0"
    "QIcon\0py_get_icon(QStyleOptionMenuItem*)\0"
    "theWrappedObject,checked\0"
    "py_set_checked(QStyleOptionMenuItem*,bool)\0"
    "py_get_checked(QStyleOptionMenuItem*)\0"
    "theWrappedObject,maxIconWidth\0"
    "py_set_maxIconWidth(QStyleOptionMenuItem*,int)\0"
    "int\0py_get_maxIconWidth(QStyleOptionMenuItem*)\0"
    "theWrappedObject,tabWidth\0"
    "py_set_tabWidth(QStyleOptionMenuItem*,int)\0"
    "py_get_tabWidth(QStyleOptionMenuItem*)\0"
    "theWrappedObject,text\0"
    "py_set_text(QStyleOptionMenuItem*,QString)\0"
    "QString\0py_get_text(QStyleOptionMenuItem*)\0"
    "theWrappedObject,font\0"
    "py_set_font(QStyleOptionMenuItem*,QFont)\0"
    "QFont\0py_get_font(QStyleOptionMenuItem*)\0"
    "theWrappedObject,menuItemType\0"
    "py_set_menuItemType(QStyleOptionMenuItem*,QStyleOptionMenuItem::MenuIt"
    "emType)\0"
    "QStyleOptionMenuItem::MenuItemType\0"
    "py_get_menuItemType(QStyleOptionMenuItem*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "CheckType\0MenuItemType\0Version\0Type\0"
    "NotCheckable\0Exclusive\0NonExclusive\0"
    "Normal\0DefaultItem\0Separator\0SubMenu\0"
    "Scroller\0TearOff\0Margin\0EmptyArea\0"
};

void PythonQtWrapper_QStyleOptionMenuItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionMenuItem *_t = static_cast<PythonQtWrapper_QStyleOptionMenuItem *>(_o);
        switch (_id) {
        case 0: { QStyleOptionMenuItem* _r = _t->new_QStyleOptionMenuItem();
            if (_a[0]) *reinterpret_cast< QStyleOptionMenuItem**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionMenuItem* _r = _t->new_QStyleOptionMenuItem((*reinterpret_cast< const QStyleOptionMenuItem(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionMenuItem**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionMenuItem((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1]))); break;
        case 3: _t->py_set_menuHasCheckableItems((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: { bool _r = _t->py_get_menuHasCheckableItems((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_menuRect((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])),(*reinterpret_cast< QRect(*)>(_a[2]))); break;
        case 6: { QRect _r = _t->py_get_menuRect((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_checkType((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionMenuItem::CheckType(*)>(_a[2]))); break;
        case 8: { QStyleOptionMenuItem::CheckType _r = _t->py_get_checkType((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionMenuItem::CheckType*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_icon((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])),(*reinterpret_cast< QIcon(*)>(_a[2]))); break;
        case 10: { QIcon _r = _t->py_get_icon((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 11: _t->py_set_checked((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: { bool _r = _t->py_get_checked((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->py_set_maxIconWidth((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: { int _r = _t->py_get_maxIconWidth((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: _t->py_set_tabWidth((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: { int _r = _t->py_get_tabWidth((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: _t->py_set_text((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: { QString _r = _t->py_get_text((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: _t->py_set_font((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])),(*reinterpret_cast< QFont(*)>(_a[2]))); break;
        case 20: { QFont _r = _t->py_get_font((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 21: _t->py_set_menuItemType((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionMenuItem::MenuItemType(*)>(_a[2]))); break;
        case 22: { QStyleOptionMenuItem::MenuItemType _r = _t->py_get_menuItemType((*reinterpret_cast< QStyleOptionMenuItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionMenuItem::MenuItemType*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionMenuItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionMenuItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionMenuItem,
      qt_meta_data_PythonQtWrapper_QStyleOptionMenuItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionMenuItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionMenuItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionMenuItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionMenuItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionMenuItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionMenuItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionProgressBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       2,   89, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      66,   40,   41,   40, 0x0a,
     102,   96,   41,   40, 0x0a,
     159,  155,   40,   40, 0x0a,
     241,  216,   40,   40, 0x0a,
     307,  290,  286,   40, 0x0a,
     373,  348,   40,   40, 0x0a,
     418,  290,  286,   40, 0x0a,
     485,  459,   40,   40, 0x0a,
     531,  290,  286,   40, 0x0a,
     604,  573,   40,   40, 0x0a,
     679,  290,  665,   40, 0x0a,
     748,  726,   40,   40, 0x0a,
     802,  290,  794,   40, 0x0a,
     869,  840,   40,   40, 0x0a,
     924,  290,  919,   40, 0x0a,

 // enums: name, flags, count, data
     969, 0x0,    1,   97,
     988, 0x0,    1,   99,

 // enum data: key, value
    1004, uint(PythonQtWrapper_QStyleOptionProgressBar::Version),
    1012, uint(PythonQtWrapper_QStyleOptionProgressBar::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionProgressBar[] = {
    "PythonQtWrapper_QStyleOptionProgressBar\0"
    "\0QStyleOptionProgressBar*\0"
    "new_QStyleOptionProgressBar()\0other\0"
    "new_QStyleOptionProgressBar(QStyleOptionProgressBar)\0"
    "obj\0delete_QStyleOptionProgressBar(QStyleOptionProgressBar*)\0"
    "theWrappedObject,minimum\0"
    "py_set_minimum(QStyleOptionProgressBar*,int)\0"
    "int\0theWrappedObject\0"
    "py_get_minimum(QStyleOptionProgressBar*)\0"
    "theWrappedObject,maximum\0"
    "py_set_maximum(QStyleOptionProgressBar*,int)\0"
    "py_get_maximum(QStyleOptionProgressBar*)\0"
    "theWrappedObject,progress\0"
    "py_set_progress(QStyleOptionProgressBar*,int)\0"
    "py_get_progress(QStyleOptionProgressBar*)\0"
    "theWrappedObject,textAlignment\0"
    "py_set_textAlignment(QStyleOptionProgressBar*,Qt::Alignment)\0"
    "Qt::Alignment\0"
    "py_get_textAlignment(QStyleOptionProgressBar*)\0"
    "theWrappedObject,text\0"
    "py_set_text(QStyleOptionProgressBar*,QString)\0"
    "QString\0py_get_text(QStyleOptionProgressBar*)\0"
    "theWrappedObject,textVisible\0"
    "py_set_textVisible(QStyleOptionProgressBar*,bool)\0"
    "bool\0py_get_textVisible(QStyleOptionProgressBar*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleOptionProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionProgressBar *_t = static_cast<PythonQtWrapper_QStyleOptionProgressBar *>(_o);
        switch (_id) {
        case 0: { QStyleOptionProgressBar* _r = _t->new_QStyleOptionProgressBar();
            if (_a[0]) *reinterpret_cast< QStyleOptionProgressBar**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionProgressBar* _r = _t->new_QStyleOptionProgressBar((*reinterpret_cast< const QStyleOptionProgressBar(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionProgressBar**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionProgressBar((*reinterpret_cast< QStyleOptionProgressBar*(*)>(_a[1]))); break;
        case 3: _t->py_set_minimum((*reinterpret_cast< QStyleOptionProgressBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: { int _r = _t->py_get_minimum((*reinterpret_cast< QStyleOptionProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_maximum((*reinterpret_cast< QStyleOptionProgressBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: { int _r = _t->py_get_maximum((*reinterpret_cast< QStyleOptionProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_progress((*reinterpret_cast< QStyleOptionProgressBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: { int _r = _t->py_get_progress((*reinterpret_cast< QStyleOptionProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_textAlignment((*reinterpret_cast< QStyleOptionProgressBar*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 10: { Qt::Alignment _r = _t->py_get_textAlignment((*reinterpret_cast< QStyleOptionProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 11: _t->py_set_text((*reinterpret_cast< QStyleOptionProgressBar*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: { QString _r = _t->py_get_text((*reinterpret_cast< QStyleOptionProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: _t->py_set_textVisible((*reinterpret_cast< QStyleOptionProgressBar*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: { bool _r = _t->py_get_textVisible((*reinterpret_cast< QStyleOptionProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionProgressBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionProgressBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionProgressBar,
      qt_meta_data_PythonQtWrapper_QStyleOptionProgressBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionProgressBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionProgressBar))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionProgressBar*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionProgressBarV2[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       2,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      70,   42,   43,   42, 0x0a,
     108,  102,   43,   42, 0x0a,
     163,  102,   43,   42, 0x0a,
     224,  220,   42,   42, 0x0a,
     314,  285,   42,   42, 0x0a,
     388,  371,  366,   42, 0x0a,
     471,  435,   42,   42, 0x0a,
     530,  371,  366,   42, 0x0a,
     613,  584,   42,   42, 0x0a,
     692,  371,  676,   42, 0x0a,

 // enums: name, flags, count, data
     739, 0x0,    1,   72,
     758, 0x0,    1,   74,

 // enum data: key, value
     774, uint(PythonQtWrapper_QStyleOptionProgressBarV2::Version),
     782, uint(PythonQtWrapper_QStyleOptionProgressBarV2::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionProgressBarV2[] = {
    "PythonQtWrapper_QStyleOptionProgressBarV2\0"
    "\0QStyleOptionProgressBarV2*\0"
    "new_QStyleOptionProgressBarV2()\0other\0"
    "new_QStyleOptionProgressBarV2(QStyleOptionProgressBar)\0"
    "new_QStyleOptionProgressBarV2(QStyleOptionProgressBarV2)\0"
    "obj\0delete_QStyleOptionProgressBarV2(QStyleOptionProgressBarV2*)\0"
    "theWrappedObject,bottomToTop\0"
    "py_set_bottomToTop(QStyleOptionProgressBarV2*,bool)\0"
    "bool\0theWrappedObject\0"
    "py_get_bottomToTop(QStyleOptionProgressBarV2*)\0"
    "theWrappedObject,invertedAppearance\0"
    "py_set_invertedAppearance(QStyleOptionProgressBarV2*,bool)\0"
    "py_get_invertedAppearance(QStyleOptionProgressBarV2*)\0"
    "theWrappedObject,orientation\0"
    "py_set_orientation(QStyleOptionProgressBarV2*,Qt::Orientation)\0"
    "Qt::Orientation\0"
    "py_get_orientation(QStyleOptionProgressBarV2*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleOptionProgressBarV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionProgressBarV2 *_t = static_cast<PythonQtWrapper_QStyleOptionProgressBarV2 *>(_o);
        switch (_id) {
        case 0: { QStyleOptionProgressBarV2* _r = _t->new_QStyleOptionProgressBarV2();
            if (_a[0]) *reinterpret_cast< QStyleOptionProgressBarV2**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionProgressBarV2* _r = _t->new_QStyleOptionProgressBarV2((*reinterpret_cast< const QStyleOptionProgressBar(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionProgressBarV2**>(_a[0]) = _r; }  break;
        case 2: { QStyleOptionProgressBarV2* _r = _t->new_QStyleOptionProgressBarV2((*reinterpret_cast< const QStyleOptionProgressBarV2(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionProgressBarV2**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStyleOptionProgressBarV2((*reinterpret_cast< QStyleOptionProgressBarV2*(*)>(_a[1]))); break;
        case 4: _t->py_set_bottomToTop((*reinterpret_cast< QStyleOptionProgressBarV2*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: { bool _r = _t->py_get_bottomToTop((*reinterpret_cast< QStyleOptionProgressBarV2*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->py_set_invertedAppearance((*reinterpret_cast< QStyleOptionProgressBarV2*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: { bool _r = _t->py_get_invertedAppearance((*reinterpret_cast< QStyleOptionProgressBarV2*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->py_set_orientation((*reinterpret_cast< QStyleOptionProgressBarV2*(*)>(_a[1])),(*reinterpret_cast< Qt::Orientation(*)>(_a[2]))); break;
        case 9: { Qt::Orientation _r = _t->py_get_orientation((*reinterpret_cast< QStyleOptionProgressBarV2*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientation*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionProgressBarV2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionProgressBarV2::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionProgressBarV2,
      qt_meta_data_PythonQtWrapper_QStyleOptionProgressBarV2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionProgressBarV2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionProgressBarV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionProgressBarV2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionProgressBarV2))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionProgressBarV2*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionProgressBarV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionRubberBand[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       2,   49, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      64,   39,   40,   39, 0x0a,
      99,   93,   40,   39, 0x0a,
     154,  150,   39,   39, 0x0a,
     233,  209,   39,   39, 0x0a,
     299,  282,  277,   39, 0x0a,
     361,  338,   39,   39, 0x0a,
     437,  282,  418,   39, 0x0a,

 // enums: name, flags, count, data
     475, 0x0,    1,   57,
     494, 0x0,    1,   59,

 // enum data: key, value
     510, uint(PythonQtWrapper_QStyleOptionRubberBand::Version),
     518, uint(PythonQtWrapper_QStyleOptionRubberBand::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionRubberBand[] = {
    "PythonQtWrapper_QStyleOptionRubberBand\0"
    "\0QStyleOptionRubberBand*\0"
    "new_QStyleOptionRubberBand()\0other\0"
    "new_QStyleOptionRubberBand(QStyleOptionRubberBand)\0"
    "obj\0delete_QStyleOptionRubberBand(QStyleOptionRubberBand*)\0"
    "theWrappedObject,opaque\0"
    "py_set_opaque(QStyleOptionRubberBand*,bool)\0"
    "bool\0theWrappedObject\0"
    "py_get_opaque(QStyleOptionRubberBand*)\0"
    "theWrappedObject,shape\0"
    "py_set_shape(QStyleOptionRubberBand*,QRubberBand::Shape)\0"
    "QRubberBand::Shape\0"
    "py_get_shape(QStyleOptionRubberBand*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleOptionRubberBand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionRubberBand *_t = static_cast<PythonQtWrapper_QStyleOptionRubberBand *>(_o);
        switch (_id) {
        case 0: { QStyleOptionRubberBand* _r = _t->new_QStyleOptionRubberBand();
            if (_a[0]) *reinterpret_cast< QStyleOptionRubberBand**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionRubberBand* _r = _t->new_QStyleOptionRubberBand((*reinterpret_cast< const QStyleOptionRubberBand(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionRubberBand**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionRubberBand((*reinterpret_cast< QStyleOptionRubberBand*(*)>(_a[1]))); break;
        case 3: _t->py_set_opaque((*reinterpret_cast< QStyleOptionRubberBand*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: { bool _r = _t->py_get_opaque((*reinterpret_cast< QStyleOptionRubberBand*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_shape((*reinterpret_cast< QStyleOptionRubberBand*(*)>(_a[1])),(*reinterpret_cast< QRubberBand::Shape(*)>(_a[2]))); break;
        case 6: { QRubberBand::Shape _r = _t->py_get_shape((*reinterpret_cast< QStyleOptionRubberBand*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRubberBand::Shape*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionRubberBand::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionRubberBand::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionRubberBand,
      qt_meta_data_PythonQtWrapper_QStyleOptionRubberBand, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionRubberBand::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionRubberBand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionRubberBand::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionRubberBand))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionRubberBand*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionRubberBand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionSizeGrip[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       2,   39, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      60,   37,   38,   37, 0x0a,
      93,   87,   38,   37, 0x0a,
     144,  140,   37,   37, 0x0a,
     219,  195,   37,   37, 0x0a,
     295,  278,  267,   37, 0x0a,

 // enums: name, flags, count, data
     332, 0x0,    1,   47,
     351, 0x0,    1,   49,

 // enum data: key, value
     367, uint(PythonQtWrapper_QStyleOptionSizeGrip::Version),
     375, uint(PythonQtWrapper_QStyleOptionSizeGrip::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionSizeGrip[] = {
    "PythonQtWrapper_QStyleOptionSizeGrip\0"
    "\0QStyleOptionSizeGrip*\0"
    "new_QStyleOptionSizeGrip()\0other\0"
    "new_QStyleOptionSizeGrip(QStyleOptionSizeGrip)\0"
    "obj\0delete_QStyleOptionSizeGrip(QStyleOptionSizeGrip*)\0"
    "theWrappedObject,corner\0"
    "py_set_corner(QStyleOptionSizeGrip*,Qt::Corner)\0"
    "Qt::Corner\0theWrappedObject\0"
    "py_get_corner(QStyleOptionSizeGrip*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleOptionSizeGrip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionSizeGrip *_t = static_cast<PythonQtWrapper_QStyleOptionSizeGrip *>(_o);
        switch (_id) {
        case 0: { QStyleOptionSizeGrip* _r = _t->new_QStyleOptionSizeGrip();
            if (_a[0]) *reinterpret_cast< QStyleOptionSizeGrip**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionSizeGrip* _r = _t->new_QStyleOptionSizeGrip((*reinterpret_cast< const QStyleOptionSizeGrip(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionSizeGrip**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionSizeGrip((*reinterpret_cast< QStyleOptionSizeGrip*(*)>(_a[1]))); break;
        case 3: _t->py_set_corner((*reinterpret_cast< QStyleOptionSizeGrip*(*)>(_a[1])),(*reinterpret_cast< Qt::Corner(*)>(_a[2]))); break;
        case 4: { Qt::Corner _r = _t->py_get_corner((*reinterpret_cast< QStyleOptionSizeGrip*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Corner*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionSizeGrip::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionSizeGrip::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionSizeGrip,
      qt_meta_data_PythonQtWrapper_QStyleOptionSizeGrip, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionSizeGrip::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionSizeGrip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionSizeGrip::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionSizeGrip))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionSizeGrip*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionSizeGrip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionSlider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       2,  149, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      56,   35,   36,   35, 0x0a,
      87,   81,   36,   35, 0x0a,
     134,  130,   35,   35, 0x0a,
     211,  181,   35,   35, 0x0a,
     277,  260,  256,   35, 0x0a,
     343,  318,   35,   35, 0x0a,
     383,  260,  256,   35, 0x0a,
     448,  419,   35,   35, 0x0a,
     500,  260,  494,   35, 0x0a,
     565,  540,   35,   35, 0x0a,
     605,  260,  256,   35, 0x0a,
     673,  641,   35,   35, 0x0a,
     720,  260,  256,   35, 0x0a,
     793,  763,   35,   35, 0x0a,
     844,  260,  839,   35, 0x0a,
     914,  885,   35,   35, 0x0a,
     958,  260,  256,   35, 0x0a,
    1026,  998,   35,   35, 0x0a,
    1069,  260,  256,   35, 0x0a,
    1138, 1108,   35,   35, 0x0a,
    1223,  260, 1201,   35, 0x0a,
    1290, 1264,   35,   35, 0x0a,
    1331,  260,  256,   35, 0x0a,
    1397, 1368,   35,   35, 0x0a,
    1469,  260, 1453,   35, 0x0a,
    1537, 1509,   35,   35, 0x0a,
    1581,  260,  839,   35, 0x0a,

 // enums: name, flags, count, data
    1620, 0x0,    1,  157,
    1639, 0x0,    1,  159,

 // enum data: key, value
    1655, uint(PythonQtWrapper_QStyleOptionSlider::Version),
    1663, uint(PythonQtWrapper_QStyleOptionSlider::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionSlider[] = {
    "PythonQtWrapper_QStyleOptionSlider\0\0"
    "QStyleOptionSlider*\0new_QStyleOptionSlider()\0"
    "other\0new_QStyleOptionSlider(QStyleOptionSlider)\0"
    "obj\0delete_QStyleOptionSlider(QStyleOptionSlider*)\0"
    "theWrappedObject,tickInterval\0"
    "py_set_tickInterval(QStyleOptionSlider*,int)\0"
    "int\0theWrappedObject\0"
    "py_get_tickInterval(QStyleOptionSlider*)\0"
    "theWrappedObject,minimum\0"
    "py_set_minimum(QStyleOptionSlider*,int)\0"
    "py_get_minimum(QStyleOptionSlider*)\0"
    "theWrappedObject,notchTarget\0"
    "py_set_notchTarget(QStyleOptionSlider*,qreal)\0"
    "qreal\0py_get_notchTarget(QStyleOptionSlider*)\0"
    "theWrappedObject,maximum\0"
    "py_set_maximum(QStyleOptionSlider*,int)\0"
    "py_get_maximum(QStyleOptionSlider*)\0"
    "theWrappedObject,sliderPosition\0"
    "py_set_sliderPosition(QStyleOptionSlider*,int)\0"
    "py_get_sliderPosition(QStyleOptionSlider*)\0"
    "theWrappedObject,dialWrapping\0"
    "py_set_dialWrapping(QStyleOptionSlider*,bool)\0"
    "bool\0py_get_dialWrapping(QStyleOptionSlider*)\0"
    "theWrappedObject,sliderValue\0"
    "py_set_sliderValue(QStyleOptionSlider*,int)\0"
    "py_get_sliderValue(QStyleOptionSlider*)\0"
    "theWrappedObject,singleStep\0"
    "py_set_singleStep(QStyleOptionSlider*,int)\0"
    "py_get_singleStep(QStyleOptionSlider*)\0"
    "theWrappedObject,tickPosition\0"
    "py_set_tickPosition(QStyleOptionSlider*,QSlider::TickPosition)\0"
    "QSlider::TickPosition\0"
    "py_get_tickPosition(QStyleOptionSlider*)\0"
    "theWrappedObject,pageStep\0"
    "py_set_pageStep(QStyleOptionSlider*,int)\0"
    "py_get_pageStep(QStyleOptionSlider*)\0"
    "theWrappedObject,orientation\0"
    "py_set_orientation(QStyleOptionSlider*,Qt::Orientation)\0"
    "Qt::Orientation\0py_get_orientation(QStyleOptionSlider*)\0"
    "theWrappedObject,upsideDown\0"
    "py_set_upsideDown(QStyleOptionSlider*,bool)\0"
    "py_get_upsideDown(QStyleOptionSlider*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleOptionSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionSlider *_t = static_cast<PythonQtWrapper_QStyleOptionSlider *>(_o);
        switch (_id) {
        case 0: { QStyleOptionSlider* _r = _t->new_QStyleOptionSlider();
            if (_a[0]) *reinterpret_cast< QStyleOptionSlider**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionSlider* _r = _t->new_QStyleOptionSlider((*reinterpret_cast< const QStyleOptionSlider(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionSlider**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionSlider((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1]))); break;
        case 3: _t->py_set_tickInterval((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: { int _r = _t->py_get_tickInterval((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_minimum((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: { int _r = _t->py_get_minimum((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_notchTarget((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 8: { qreal _r = _t->py_get_notchTarget((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_maximum((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: { int _r = _t->py_get_maximum((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: _t->py_set_sliderPosition((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: { int _r = _t->py_get_sliderPosition((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: _t->py_set_dialWrapping((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: { bool _r = _t->py_get_dialWrapping((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: _t->py_set_sliderValue((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: { int _r = _t->py_get_sliderValue((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: _t->py_set_singleStep((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: { int _r = _t->py_get_singleStep((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: _t->py_set_tickPosition((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])),(*reinterpret_cast< QSlider::TickPosition(*)>(_a[2]))); break;
        case 20: { QSlider::TickPosition _r = _t->py_get_tickPosition((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSlider::TickPosition*>(_a[0]) = _r; }  break;
        case 21: _t->py_set_pageStep((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: { int _r = _t->py_get_pageStep((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: _t->py_set_orientation((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])),(*reinterpret_cast< Qt::Orientation(*)>(_a[2]))); break;
        case 24: { Qt::Orientation _r = _t->py_get_orientation((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientation*>(_a[0]) = _r; }  break;
        case 25: _t->py_set_upsideDown((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 26: { bool _r = _t->py_get_upsideDown((*reinterpret_cast< QStyleOptionSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionSlider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionSlider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionSlider,
      qt_meta_data_PythonQtWrapper_QStyleOptionSlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionSlider))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionSlider*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionSpinBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       2,   59, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      58,   36,   37,   36, 0x0a,
      90,   84,   37,   36, 0x0a,
     139,  135,   36,   36, 0x0a,
     217,  188,   36,   36, 0x0a,
     335,  318,  288,   36, 0x0a,
     407,  376,   36,   36, 0x0a,
     514,  318,  482,   36, 0x0a,
     580,  557,   36,   36, 0x0a,
     625,  318,  620,   36, 0x0a,

 // enums: name, flags, count, data
     660, 0x0,    1,   67,
     679, 0x0,    1,   69,

 // enum data: key, value
     695, uint(PythonQtWrapper_QStyleOptionSpinBox::Version),
     703, uint(PythonQtWrapper_QStyleOptionSpinBox::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionSpinBox[] = {
    "PythonQtWrapper_QStyleOptionSpinBox\0"
    "\0QStyleOptionSpinBox*\0new_QStyleOptionSpinBox()\0"
    "other\0new_QStyleOptionSpinBox(QStyleOptionSpinBox)\0"
    "obj\0delete_QStyleOptionSpinBox(QStyleOptionSpinBox*)\0"
    "theWrappedObject,stepEnabled\0"
    "py_set_stepEnabled(QStyleOptionSpinBox*,QAbstractSpinBox::StepEnabled)\0"
    "QAbstractSpinBox::StepEnabled\0"
    "theWrappedObject\0"
    "py_get_stepEnabled(QStyleOptionSpinBox*)\0"
    "theWrappedObject,buttonSymbols\0"
    "py_set_buttonSymbols(QStyleOptionSpinBox*,QAbstractSpinBox::ButtonSymb"
    "ols)\0"
    "QAbstractSpinBox::ButtonSymbols\0"
    "py_get_buttonSymbols(QStyleOptionSpinBox*)\0"
    "theWrappedObject,frame\0"
    "py_set_frame(QStyleOptionSpinBox*,bool)\0"
    "bool\0py_get_frame(QStyleOptionSpinBox*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleOptionSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionSpinBox *_t = static_cast<PythonQtWrapper_QStyleOptionSpinBox *>(_o);
        switch (_id) {
        case 0: { QStyleOptionSpinBox* _r = _t->new_QStyleOptionSpinBox();
            if (_a[0]) *reinterpret_cast< QStyleOptionSpinBox**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionSpinBox* _r = _t->new_QStyleOptionSpinBox((*reinterpret_cast< const QStyleOptionSpinBox(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionSpinBox**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionSpinBox((*reinterpret_cast< QStyleOptionSpinBox*(*)>(_a[1]))); break;
        case 3: _t->py_set_stepEnabled((*reinterpret_cast< QStyleOptionSpinBox*(*)>(_a[1])),(*reinterpret_cast< QAbstractSpinBox::StepEnabled(*)>(_a[2]))); break;
        case 4: { QAbstractSpinBox::StepEnabled _r = _t->py_get_stepEnabled((*reinterpret_cast< QStyleOptionSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractSpinBox::StepEnabled*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_buttonSymbols((*reinterpret_cast< QStyleOptionSpinBox*(*)>(_a[1])),(*reinterpret_cast< QAbstractSpinBox::ButtonSymbols(*)>(_a[2]))); break;
        case 6: { QAbstractSpinBox::ButtonSymbols _r = _t->py_get_buttonSymbols((*reinterpret_cast< QStyleOptionSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractSpinBox::ButtonSymbols*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_frame((*reinterpret_cast< QStyleOptionSpinBox*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: { bool _r = _t->py_get_frame((*reinterpret_cast< QStyleOptionSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionSpinBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionSpinBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionSpinBox,
      qt_meta_data_PythonQtWrapper_QStyleOptionSpinBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionSpinBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionSpinBox))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionSpinBox*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       6,   99, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      50,   32,   33,   32, 0x0a,
      78,   72,   33,   32, 0x0a,
     119,  115,   32,   32, 0x0a,
     181,  160,   32,   32, 0x0a,
     235,  218,  214,   32, 0x0a,
     295,  264,   32,   32, 0x0a,
     396,  218,  365,   32, 0x0a,
     461,  435,   32,   32, 0x0a,
     553,  218,  524,   32, 0x0a,
     609,  587,   32,   32, 0x0a,
     651,  218,  645,   32, 0x0a,
     704,  681,   32,   32, 0x0a,
     765,  218,  750,   32, 0x0a,
     818,  796,   32,   32, 0x0a,
     864,  218,  856,   32, 0x0a,
     928,  894,   32,   32, 0x0a,
    1038,  218, 1004,   32, 0x0a,

 // enums: name, flags, count, data
    1080, 0x0,    1,  123,
    1099, 0x0,    3,  125,
    1112, 0x1,    3,  131,
    1126, 0x0,    4,  137,
    1138, 0x0,    3,  145,
    1155, 0x0,    1,  151,

 // enum data: key, value
    1171, uint(PythonQtWrapper_QStyleOptionTab::Version),
    1179, uint(PythonQtWrapper_QStyleOptionTab::NoCornerWidgets),
    1195, uint(PythonQtWrapper_QStyleOptionTab::LeftCornerWidget),
    1212, uint(PythonQtWrapper_QStyleOptionTab::RightCornerWidget),
    1179, uint(PythonQtWrapper_QStyleOptionTab::NoCornerWidgets),
    1195, uint(PythonQtWrapper_QStyleOptionTab::LeftCornerWidget),
    1212, uint(PythonQtWrapper_QStyleOptionTab::RightCornerWidget),
    1230, uint(PythonQtWrapper_QStyleOptionTab::Beginning),
    1240, uint(PythonQtWrapper_QStyleOptionTab::Middle),
    1247, uint(PythonQtWrapper_QStyleOptionTab::End),
    1251, uint(PythonQtWrapper_QStyleOptionTab::OnlyOneTab),
    1262, uint(PythonQtWrapper_QStyleOptionTab::NotAdjacent),
    1274, uint(PythonQtWrapper_QStyleOptionTab::NextIsSelected),
    1289, uint(PythonQtWrapper_QStyleOptionTab::PreviousIsSelected),
    1308, uint(PythonQtWrapper_QStyleOptionTab::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionTab[] = {
    "PythonQtWrapper_QStyleOptionTab\0\0"
    "QStyleOptionTab*\0new_QStyleOptionTab()\0"
    "other\0new_QStyleOptionTab(QStyleOptionTab)\0"
    "obj\0delete_QStyleOptionTab(QStyleOptionTab*)\0"
    "theWrappedObject,row\0"
    "py_set_row(QStyleOptionTab*,int)\0int\0"
    "theWrappedObject\0py_get_row(QStyleOptionTab*)\0"
    "theWrappedObject,cornerWidgets\0"
    "py_set_cornerWidgets(QStyleOptionTab*,QStyleOptionTab::CornerWidgets)\0"
    "QStyleOptionTab::CornerWidgets\0"
    "py_get_cornerWidgets(QStyleOptionTab*)\0"
    "theWrappedObject,position\0"
    "py_set_position(QStyleOptionTab*,QStyleOptionTab::TabPosition)\0"
    "QStyleOptionTab::TabPosition\0"
    "py_get_position(QStyleOptionTab*)\0"
    "theWrappedObject,icon\0"
    "py_set_icon(QStyleOptionTab*,QIcon)\0"
    "QIcon\0py_get_icon(QStyleOptionTab*)\0"
    "theWrappedObject,shape\0"
    "py_set_shape(QStyleOptionTab*,QTabBar::Shape)\0"
    "QTabBar::Shape\0py_get_shape(QStyleOptionTab*)\0"
    "theWrappedObject,text\0"
    "py_set_text(QStyleOptionTab*,QString)\0"
    "QString\0py_get_text(QStyleOptionTab*)\0"
    "theWrappedObject,selectedPosition\0"
    "py_set_selectedPosition(QStyleOptionTab*,QStyleOptionTab::SelectedPosi"
    "tion)\0"
    "QStyleOptionTab::SelectedPosition\0"
    "py_get_selectedPosition(QStyleOptionTab*)\0"
    "StyleOptionVersion\0CornerWidget\0"
    "CornerWidgets\0TabPosition\0SelectedPosition\0"
    "StyleOptionType\0Version\0NoCornerWidgets\0"
    "LeftCornerWidget\0RightCornerWidget\0"
    "Beginning\0Middle\0End\0OnlyOneTab\0"
    "NotAdjacent\0NextIsSelected\0"
    "PreviousIsSelected\0Type\0"
};

void PythonQtWrapper_QStyleOptionTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionTab *_t = static_cast<PythonQtWrapper_QStyleOptionTab *>(_o);
        switch (_id) {
        case 0: { QStyleOptionTab* _r = _t->new_QStyleOptionTab();
            if (_a[0]) *reinterpret_cast< QStyleOptionTab**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionTab* _r = _t->new_QStyleOptionTab((*reinterpret_cast< const QStyleOptionTab(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTab**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionTab((*reinterpret_cast< QStyleOptionTab*(*)>(_a[1]))); break;
        case 3: _t->py_set_row((*reinterpret_cast< QStyleOptionTab*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: { int _r = _t->py_get_row((*reinterpret_cast< QStyleOptionTab*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_cornerWidgets((*reinterpret_cast< QStyleOptionTab*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionTab::CornerWidgets(*)>(_a[2]))); break;
        case 6: { QStyleOptionTab::CornerWidgets _r = _t->py_get_cornerWidgets((*reinterpret_cast< QStyleOptionTab*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTab::CornerWidgets*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_position((*reinterpret_cast< QStyleOptionTab*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionTab::TabPosition(*)>(_a[2]))); break;
        case 8: { QStyleOptionTab::TabPosition _r = _t->py_get_position((*reinterpret_cast< QStyleOptionTab*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTab::TabPosition*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_icon((*reinterpret_cast< QStyleOptionTab*(*)>(_a[1])),(*reinterpret_cast< QIcon(*)>(_a[2]))); break;
        case 10: { QIcon _r = _t->py_get_icon((*reinterpret_cast< QStyleOptionTab*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 11: _t->py_set_shape((*reinterpret_cast< QStyleOptionTab*(*)>(_a[1])),(*reinterpret_cast< QTabBar::Shape(*)>(_a[2]))); break;
        case 12: { QTabBar::Shape _r = _t->py_get_shape((*reinterpret_cast< QStyleOptionTab*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTabBar::Shape*>(_a[0]) = _r; }  break;
        case 13: _t->py_set_text((*reinterpret_cast< QStyleOptionTab*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: { QString _r = _t->py_get_text((*reinterpret_cast< QStyleOptionTab*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: _t->py_set_selectedPosition((*reinterpret_cast< QStyleOptionTab*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionTab::SelectedPosition(*)>(_a[2]))); break;
        case 16: { QStyleOptionTab::SelectedPosition _r = _t->py_get_selectedPosition((*reinterpret_cast< QStyleOptionTab*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTab::SelectedPosition*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionTab::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionTab,
      qt_meta_data_PythonQtWrapper_QStyleOptionTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionTab))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionTab*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionTabBarBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       2,   59, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      64,   39,   40,   39, 0x0a,
      99,   93,   40,   39, 0x0a,
     154,  150,   39,   39, 0x0a,
     242,  209,   39,   39, 0x0a,
     319,  302,  296,   39, 0x0a,
     390,  367,   39,   39, 0x0a,
     458,  302,  443,   39, 0x0a,
     524,  496,   39,   39, 0x0a,
     573,  302,  296,   39, 0x0a,

 // enums: name, flags, count, data
     616, 0x0,    1,   67,
     635, 0x0,    1,   69,

 // enum data: key, value
     651, uint(PythonQtWrapper_QStyleOptionTabBarBase::Version),
     659, uint(PythonQtWrapper_QStyleOptionTabBarBase::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabBarBase[] = {
    "PythonQtWrapper_QStyleOptionTabBarBase\0"
    "\0QStyleOptionTabBarBase*\0"
    "new_QStyleOptionTabBarBase()\0other\0"
    "new_QStyleOptionTabBarBase(QStyleOptionTabBarBase)\0"
    "obj\0delete_QStyleOptionTabBarBase(QStyleOptionTabBarBase*)\0"
    "theWrappedObject,selectedTabRect\0"
    "py_set_selectedTabRect(QStyleOptionTabBarBase*,QRect)\0"
    "QRect\0theWrappedObject\0"
    "py_get_selectedTabRect(QStyleOptionTabBarBase*)\0"
    "theWrappedObject,shape\0"
    "py_set_shape(QStyleOptionTabBarBase*,QTabBar::Shape)\0"
    "QTabBar::Shape\0py_get_shape(QStyleOptionTabBarBase*)\0"
    "theWrappedObject,tabBarRect\0"
    "py_set_tabBarRect(QStyleOptionTabBarBase*,QRect)\0"
    "py_get_tabBarRect(QStyleOptionTabBarBase*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleOptionTabBarBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionTabBarBase *_t = static_cast<PythonQtWrapper_QStyleOptionTabBarBase *>(_o);
        switch (_id) {
        case 0: { QStyleOptionTabBarBase* _r = _t->new_QStyleOptionTabBarBase();
            if (_a[0]) *reinterpret_cast< QStyleOptionTabBarBase**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionTabBarBase* _r = _t->new_QStyleOptionTabBarBase((*reinterpret_cast< const QStyleOptionTabBarBase(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTabBarBase**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionTabBarBase((*reinterpret_cast< QStyleOptionTabBarBase*(*)>(_a[1]))); break;
        case 3: _t->py_set_selectedTabRect((*reinterpret_cast< QStyleOptionTabBarBase*(*)>(_a[1])),(*reinterpret_cast< QRect(*)>(_a[2]))); break;
        case 4: { QRect _r = _t->py_get_selectedTabRect((*reinterpret_cast< QStyleOptionTabBarBase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_shape((*reinterpret_cast< QStyleOptionTabBarBase*(*)>(_a[1])),(*reinterpret_cast< QTabBar::Shape(*)>(_a[2]))); break;
        case 6: { QTabBar::Shape _r = _t->py_get_shape((*reinterpret_cast< QStyleOptionTabBarBase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTabBar::Shape*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_tabBarRect((*reinterpret_cast< QStyleOptionTabBarBase*(*)>(_a[1])),(*reinterpret_cast< QRect(*)>(_a[2]))); break;
        case 8: { QRect _r = _t->py_get_tabBarRect((*reinterpret_cast< QStyleOptionTabBarBase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionTabBarBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionTabBarBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabBarBase,
      qt_meta_data_PythonQtWrapper_QStyleOptionTabBarBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionTabBarBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionTabBarBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionTabBarBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabBarBase))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionTabBarBase*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionTabBarBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionTabBarBaseV2[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       1,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      68,   41,   42,   41, 0x0a,
     105,   99,   42,   41, 0x0a,
     158,   99,   42,   41, 0x0a,
     217,  213,   41,   41, 0x0a,
     306,  276,   41,   41, 0x0a,
     380,  363,  358,   41, 0x0a,

 // enums: name, flags, count, data
     427, 0x0,    1,   48,

 // enum data: key, value
     446, uint(PythonQtWrapper_QStyleOptionTabBarBaseV2::Version),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabBarBaseV2[] = {
    "PythonQtWrapper_QStyleOptionTabBarBaseV2\0"
    "\0QStyleOptionTabBarBaseV2*\0"
    "new_QStyleOptionTabBarBaseV2()\0other\0"
    "new_QStyleOptionTabBarBaseV2(QStyleOptionTabBarBase)\0"
    "new_QStyleOptionTabBarBaseV2(QStyleOptionTabBarBaseV2)\0"
    "obj\0delete_QStyleOptionTabBarBaseV2(QStyleOptionTabBarBaseV2*)\0"
    "theWrappedObject,documentMode\0"
    "py_set_documentMode(QStyleOptionTabBarBaseV2*,bool)\0"
    "bool\0theWrappedObject\0"
    "py_get_documentMode(QStyleOptionTabBarBaseV2*)\0"
    "StyleOptionVersion\0Version\0"
};

void PythonQtWrapper_QStyleOptionTabBarBaseV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionTabBarBaseV2 *_t = static_cast<PythonQtWrapper_QStyleOptionTabBarBaseV2 *>(_o);
        switch (_id) {
        case 0: { QStyleOptionTabBarBaseV2* _r = _t->new_QStyleOptionTabBarBaseV2();
            if (_a[0]) *reinterpret_cast< QStyleOptionTabBarBaseV2**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionTabBarBaseV2* _r = _t->new_QStyleOptionTabBarBaseV2((*reinterpret_cast< const QStyleOptionTabBarBase(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTabBarBaseV2**>(_a[0]) = _r; }  break;
        case 2: { QStyleOptionTabBarBaseV2* _r = _t->new_QStyleOptionTabBarBaseV2((*reinterpret_cast< const QStyleOptionTabBarBaseV2(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTabBarBaseV2**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStyleOptionTabBarBaseV2((*reinterpret_cast< QStyleOptionTabBarBaseV2*(*)>(_a[1]))); break;
        case 4: _t->py_set_documentMode((*reinterpret_cast< QStyleOptionTabBarBaseV2*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: { bool _r = _t->py_get_documentMode((*reinterpret_cast< QStyleOptionTabBarBaseV2*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionTabBarBaseV2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionTabBarBaseV2::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabBarBaseV2,
      qt_meta_data_PythonQtWrapper_QStyleOptionTabBarBaseV2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionTabBarBaseV2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionTabBarBaseV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionTabBarBaseV2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabBarBaseV2))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionTabBarBaseV2*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionTabBarBaseV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionTabV2[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       1,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      54,   34,   35,   34, 0x0a,
      84,   78,   35,   34, 0x0a,
     123,   78,   35,   34, 0x0a,
     168,  164,   34,   34, 0x0a,
     239,  213,   34,   34, 0x0a,
     304,  287,  281,   34, 0x0a,

 // enums: name, flags, count, data
     340, 0x0,    1,   48,

 // enum data: key, value
     359, uint(PythonQtWrapper_QStyleOptionTabV2::Version),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabV2[] = {
    "PythonQtWrapper_QStyleOptionTabV2\0\0"
    "QStyleOptionTabV2*\0new_QStyleOptionTabV2()\0"
    "other\0new_QStyleOptionTabV2(QStyleOptionTab)\0"
    "new_QStyleOptionTabV2(QStyleOptionTabV2)\0"
    "obj\0delete_QStyleOptionTabV2(QStyleOptionTabV2*)\0"
    "theWrappedObject,iconSize\0"
    "py_set_iconSize(QStyleOptionTabV2*,QSize)\0"
    "QSize\0theWrappedObject\0"
    "py_get_iconSize(QStyleOptionTabV2*)\0"
    "StyleOptionVersion\0Version\0"
};

void PythonQtWrapper_QStyleOptionTabV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionTabV2 *_t = static_cast<PythonQtWrapper_QStyleOptionTabV2 *>(_o);
        switch (_id) {
        case 0: { QStyleOptionTabV2* _r = _t->new_QStyleOptionTabV2();
            if (_a[0]) *reinterpret_cast< QStyleOptionTabV2**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionTabV2* _r = _t->new_QStyleOptionTabV2((*reinterpret_cast< const QStyleOptionTab(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTabV2**>(_a[0]) = _r; }  break;
        case 2: { QStyleOptionTabV2* _r = _t->new_QStyleOptionTabV2((*reinterpret_cast< const QStyleOptionTabV2(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTabV2**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStyleOptionTabV2((*reinterpret_cast< QStyleOptionTabV2*(*)>(_a[1]))); break;
        case 4: _t->py_set_iconSize((*reinterpret_cast< QStyleOptionTabV2*(*)>(_a[1])),(*reinterpret_cast< QSize(*)>(_a[2]))); break;
        case 5: { QSize _r = _t->py_get_iconSize((*reinterpret_cast< QStyleOptionTabV2*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionTabV2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionTabV2::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabV2,
      qt_meta_data_PythonQtWrapper_QStyleOptionTabV2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionTabV2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionTabV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionTabV2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabV2))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionTabV2*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionTabV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionTabV3[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       1,   69, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      54,   34,   35,   34, 0x0a,
      84,   78,   35,   34, 0x0a,
     123,   78,   35,   34, 0x0a,
     164,   78,   35,   34, 0x0a,
     209,  205,   34,   34, 0x0a,
     284,  254,   34,   34, 0x0a,
     351,  334,  329,   34, 0x0a,
     424,  391,   34,   34, 0x0a,
     479,  334,  473,   34, 0x0a,
     554,  522,   34,   34, 0x0a,
     602,  334,  473,   34, 0x0a,

 // enums: name, flags, count, data
     644, 0x0,    1,   73,

 // enum data: key, value
     663, uint(PythonQtWrapper_QStyleOptionTabV3::Version),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabV3[] = {
    "PythonQtWrapper_QStyleOptionTabV3\0\0"
    "QStyleOptionTabV3*\0new_QStyleOptionTabV3()\0"
    "other\0new_QStyleOptionTabV3(QStyleOptionTab)\0"
    "new_QStyleOptionTabV3(QStyleOptionTabV2)\0"
    "new_QStyleOptionTabV3(QStyleOptionTabV3)\0"
    "obj\0delete_QStyleOptionTabV3(QStyleOptionTabV3*)\0"
    "theWrappedObject,documentMode\0"
    "py_set_documentMode(QStyleOptionTabV3*,bool)\0"
    "bool\0theWrappedObject\0"
    "py_get_documentMode(QStyleOptionTabV3*)\0"
    "theWrappedObject,rightButtonSize\0"
    "py_set_rightButtonSize(QStyleOptionTabV3*,QSize)\0"
    "QSize\0py_get_rightButtonSize(QStyleOptionTabV3*)\0"
    "theWrappedObject,leftButtonSize\0"
    "py_set_leftButtonSize(QStyleOptionTabV3*,QSize)\0"
    "py_get_leftButtonSize(QStyleOptionTabV3*)\0"
    "StyleOptionVersion\0Version\0"
};

void PythonQtWrapper_QStyleOptionTabV3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionTabV3 *_t = static_cast<PythonQtWrapper_QStyleOptionTabV3 *>(_o);
        switch (_id) {
        case 0: { QStyleOptionTabV3* _r = _t->new_QStyleOptionTabV3();
            if (_a[0]) *reinterpret_cast< QStyleOptionTabV3**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionTabV3* _r = _t->new_QStyleOptionTabV3((*reinterpret_cast< const QStyleOptionTab(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTabV3**>(_a[0]) = _r; }  break;
        case 2: { QStyleOptionTabV3* _r = _t->new_QStyleOptionTabV3((*reinterpret_cast< const QStyleOptionTabV2(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTabV3**>(_a[0]) = _r; }  break;
        case 3: { QStyleOptionTabV3* _r = _t->new_QStyleOptionTabV3((*reinterpret_cast< const QStyleOptionTabV3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTabV3**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QStyleOptionTabV3((*reinterpret_cast< QStyleOptionTabV3*(*)>(_a[1]))); break;
        case 5: _t->py_set_documentMode((*reinterpret_cast< QStyleOptionTabV3*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: { bool _r = _t->py_get_documentMode((*reinterpret_cast< QStyleOptionTabV3*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_rightButtonSize((*reinterpret_cast< QStyleOptionTabV3*(*)>(_a[1])),(*reinterpret_cast< QSize(*)>(_a[2]))); break;
        case 8: { QSize _r = _t->py_get_rightButtonSize((*reinterpret_cast< QStyleOptionTabV3*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_leftButtonSize((*reinterpret_cast< QStyleOptionTabV3*(*)>(_a[1])),(*reinterpret_cast< QSize(*)>(_a[2]))); break;
        case 10: { QSize _r = _t->py_get_leftButtonSize((*reinterpret_cast< QStyleOptionTabV3*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionTabV3::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionTabV3::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabV3,
      qt_meta_data_PythonQtWrapper_QStyleOptionTabV3, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionTabV3::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionTabV3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionTabV3::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabV3))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionTabV3*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionTabV3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionTabWidgetFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       2,   89, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      72,   43,   44,   43, 0x0a,
     111,  105,   44,   43, 0x0a,
     174,  170,   43,   43, 0x0a,
     264,  237,   43,   43, 0x0a,
     335,  318,  314,   43, 0x0a,
     420,  381,   43,   43, 0x0a,
     490,  318,  484,   43, 0x0a,
     576,  548,   43,   43, 0x0a,
     629,  318,  484,   43, 0x0a,
     699,  676,   43,   43, 0x0a,
     771,  318,  756,   43, 0x0a,
     843,  813,   43,   43, 0x0a,
     896,  318,  314,   43, 0x0a,
     983,  945,   43,   43, 0x0a,
    1046,  318,  484,   43, 0x0a,

 // enums: name, flags, count, data
    1103, 0x0,    1,   97,
    1122, 0x0,    1,   99,

 // enum data: key, value
    1138, uint(PythonQtWrapper_QStyleOptionTabWidgetFrame::Version),
    1146, uint(PythonQtWrapper_QStyleOptionTabWidgetFrame::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabWidgetFrame[] = {
    "PythonQtWrapper_QStyleOptionTabWidgetFrame\0"
    "\0QStyleOptionTabWidgetFrame*\0"
    "new_QStyleOptionTabWidgetFrame()\0other\0"
    "new_QStyleOptionTabWidgetFrame(QStyleOptionTabWidgetFrame)\0"
    "obj\0delete_QStyleOptionTabWidgetFrame(QStyleOptionTabWidgetFrame*)\0"
    "theWrappedObject,lineWidth\0"
    "py_set_lineWidth(QStyleOptionTabWidgetFrame*,int)\0"
    "int\0theWrappedObject\0"
    "py_get_lineWidth(QStyleOptionTabWidgetFrame*)\0"
    "theWrappedObject,rightCornerWidgetSize\0"
    "py_set_rightCornerWidgetSize(QStyleOptionTabWidgetFrame*,QSize)\0"
    "QSize\0py_get_rightCornerWidgetSize(QStyleOptionTabWidgetFrame*)\0"
    "theWrappedObject,tabBarSize\0"
    "py_set_tabBarSize(QStyleOptionTabWidgetFrame*,QSize)\0"
    "py_get_tabBarSize(QStyleOptionTabWidgetFrame*)\0"
    "theWrappedObject,shape\0"
    "py_set_shape(QStyleOptionTabWidgetFrame*,QTabBar::Shape)\0"
    "QTabBar::Shape\0py_get_shape(QStyleOptionTabWidgetFrame*)\0"
    "theWrappedObject,midLineWidth\0"
    "py_set_midLineWidth(QStyleOptionTabWidgetFrame*,int)\0"
    "py_get_midLineWidth(QStyleOptionTabWidgetFrame*)\0"
    "theWrappedObject,leftCornerWidgetSize\0"
    "py_set_leftCornerWidgetSize(QStyleOptionTabWidgetFrame*,QSize)\0"
    "py_get_leftCornerWidgetSize(QStyleOptionTabWidgetFrame*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleOptionTabWidgetFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionTabWidgetFrame *_t = static_cast<PythonQtWrapper_QStyleOptionTabWidgetFrame *>(_o);
        switch (_id) {
        case 0: { QStyleOptionTabWidgetFrame* _r = _t->new_QStyleOptionTabWidgetFrame();
            if (_a[0]) *reinterpret_cast< QStyleOptionTabWidgetFrame**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionTabWidgetFrame* _r = _t->new_QStyleOptionTabWidgetFrame((*reinterpret_cast< const QStyleOptionTabWidgetFrame(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTabWidgetFrame**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionTabWidgetFrame((*reinterpret_cast< QStyleOptionTabWidgetFrame*(*)>(_a[1]))); break;
        case 3: _t->py_set_lineWidth((*reinterpret_cast< QStyleOptionTabWidgetFrame*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: { int _r = _t->py_get_lineWidth((*reinterpret_cast< QStyleOptionTabWidgetFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_rightCornerWidgetSize((*reinterpret_cast< QStyleOptionTabWidgetFrame*(*)>(_a[1])),(*reinterpret_cast< QSize(*)>(_a[2]))); break;
        case 6: { QSize _r = _t->py_get_rightCornerWidgetSize((*reinterpret_cast< QStyleOptionTabWidgetFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_tabBarSize((*reinterpret_cast< QStyleOptionTabWidgetFrame*(*)>(_a[1])),(*reinterpret_cast< QSize(*)>(_a[2]))); break;
        case 8: { QSize _r = _t->py_get_tabBarSize((*reinterpret_cast< QStyleOptionTabWidgetFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_shape((*reinterpret_cast< QStyleOptionTabWidgetFrame*(*)>(_a[1])),(*reinterpret_cast< QTabBar::Shape(*)>(_a[2]))); break;
        case 10: { QTabBar::Shape _r = _t->py_get_shape((*reinterpret_cast< QStyleOptionTabWidgetFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTabBar::Shape*>(_a[0]) = _r; }  break;
        case 11: _t->py_set_midLineWidth((*reinterpret_cast< QStyleOptionTabWidgetFrame*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: { int _r = _t->py_get_midLineWidth((*reinterpret_cast< QStyleOptionTabWidgetFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: _t->py_set_leftCornerWidgetSize((*reinterpret_cast< QStyleOptionTabWidgetFrame*(*)>(_a[1])),(*reinterpret_cast< QSize(*)>(_a[2]))); break;
        case 14: { QSize _r = _t->py_get_leftCornerWidgetSize((*reinterpret_cast< QStyleOptionTabWidgetFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionTabWidgetFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionTabWidgetFrame::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabWidgetFrame,
      qt_meta_data_PythonQtWrapper_QStyleOptionTabWidgetFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionTabWidgetFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionTabWidgetFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionTabWidgetFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabWidgetFrame))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionTabWidgetFrame*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionTabWidgetFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionTabWidgetFrameV2[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       1,   59, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      76,   45,   46,   45, 0x0a,
     117,  111,   46,   45, 0x0a,
     178,  111,   46,   45, 0x0a,
     245,  241,   45,   45, 0x0a,
     335,  312,   46,   45, 0x0a,
     442,  409,   45,   45, 0x0a,
     525,  508,  502,   45, 0x0a,
     607,  579,   45,   45, 0x0a,
     662,  508,  502,   45, 0x0a,

 // enums: name, flags, count, data
     711, 0x0,    1,   63,

 // enum data: key, value
     730, uint(PythonQtWrapper_QStyleOptionTabWidgetFrameV2::Version),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabWidgetFrameV2[] = {
    "PythonQtWrapper_QStyleOptionTabWidgetFrameV2\0"
    "\0QStyleOptionTabWidgetFrameV2*\0"
    "new_QStyleOptionTabWidgetFrameV2()\0"
    "other\0"
    "new_QStyleOptionTabWidgetFrameV2(QStyleOptionTabWidgetFrame)\0"
    "new_QStyleOptionTabWidgetFrameV2(QStyleOptionTabWidgetFrameV2)\0"
    "obj\0"
    "delete_QStyleOptionTabWidgetFrameV2(QStyleOptionTabWidgetFrameV2*)\0"
    "theWrappedObject,other\0"
    "operator_assign(QStyleOptionTabWidgetFrameV2*,QStyleOptionTabWidgetFra"
    "me)\0"
    "theWrappedObject,selectedTabRect\0"
    "py_set_selectedTabRect(QStyleOptionTabWidgetFrameV2*,QRect)\0"
    "QRect\0theWrappedObject\0"
    "py_get_selectedTabRect(QStyleOptionTabWidgetFrameV2*)\0"
    "theWrappedObject,tabBarRect\0"
    "py_set_tabBarRect(QStyleOptionTabWidgetFrameV2*,QRect)\0"
    "py_get_tabBarRect(QStyleOptionTabWidgetFrameV2*)\0"
    "StyleOptionVersion\0Version\0"
};

void PythonQtWrapper_QStyleOptionTabWidgetFrameV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionTabWidgetFrameV2 *_t = static_cast<PythonQtWrapper_QStyleOptionTabWidgetFrameV2 *>(_o);
        switch (_id) {
        case 0: { QStyleOptionTabWidgetFrameV2* _r = _t->new_QStyleOptionTabWidgetFrameV2();
            if (_a[0]) *reinterpret_cast< QStyleOptionTabWidgetFrameV2**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionTabWidgetFrameV2* _r = _t->new_QStyleOptionTabWidgetFrameV2((*reinterpret_cast< const QStyleOptionTabWidgetFrame(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTabWidgetFrameV2**>(_a[0]) = _r; }  break;
        case 2: { QStyleOptionTabWidgetFrameV2* _r = _t->new_QStyleOptionTabWidgetFrameV2((*reinterpret_cast< const QStyleOptionTabWidgetFrameV2(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTabWidgetFrameV2**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStyleOptionTabWidgetFrameV2((*reinterpret_cast< QStyleOptionTabWidgetFrameV2*(*)>(_a[1]))); break;
        case 4: { QStyleOptionTabWidgetFrameV2* _r = _t->operator_assign((*reinterpret_cast< QStyleOptionTabWidgetFrameV2*(*)>(_a[1])),(*reinterpret_cast< const QStyleOptionTabWidgetFrame(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTabWidgetFrameV2**>(_a[0]) = _r; }  break;
        case 5: _t->py_set_selectedTabRect((*reinterpret_cast< QStyleOptionTabWidgetFrameV2*(*)>(_a[1])),(*reinterpret_cast< QRect(*)>(_a[2]))); break;
        case 6: { QRect _r = _t->py_get_selectedTabRect((*reinterpret_cast< QStyleOptionTabWidgetFrameV2*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_tabBarRect((*reinterpret_cast< QStyleOptionTabWidgetFrameV2*(*)>(_a[1])),(*reinterpret_cast< QRect(*)>(_a[2]))); break;
        case 8: { QRect _r = _t->py_get_tabBarRect((*reinterpret_cast< QStyleOptionTabWidgetFrameV2*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionTabWidgetFrameV2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionTabWidgetFrameV2::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabWidgetFrameV2,
      qt_meta_data_PythonQtWrapper_QStyleOptionTabWidgetFrameV2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionTabWidgetFrameV2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionTabWidgetFrameV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionTabWidgetFrameV2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionTabWidgetFrameV2))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionTabWidgetFrameV2*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionTabWidgetFrameV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionTitleBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       2,   69, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      60,   37,   38,   37, 0x0a,
      93,   87,   38,   37, 0x0a,
     144,  140,   37,   37, 0x0a,
     226,  195,   37,   37, 0x0a,
     319,  302,  286,   37, 0x0a,
     385,  363,   37,   37, 0x0a,
     432,  302,  426,   37, 0x0a,
     489,  467,   37,   37, 0x0a,
     540,  302,  532,   37, 0x0a,
     606,  575,   37,   37, 0x0a,
     658,  302,  654,   37, 0x0a,

 // enums: name, flags, count, data
     702, 0x0,    1,   77,
     721, 0x0,    1,   79,

 // enum data: key, value
     737, uint(PythonQtWrapper_QStyleOptionTitleBar::Version),
     745, uint(PythonQtWrapper_QStyleOptionTitleBar::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionTitleBar[] = {
    "PythonQtWrapper_QStyleOptionTitleBar\0"
    "\0QStyleOptionTitleBar*\0"
    "new_QStyleOptionTitleBar()\0other\0"
    "new_QStyleOptionTitleBar(QStyleOptionTitleBar)\0"
    "obj\0delete_QStyleOptionTitleBar(QStyleOptionTitleBar*)\0"
    "theWrappedObject,titleBarFlags\0"
    "py_set_titleBarFlags(QStyleOptionTitleBar*,Qt::WindowFlags)\0"
    "Qt::WindowFlags\0theWrappedObject\0"
    "py_get_titleBarFlags(QStyleOptionTitleBar*)\0"
    "theWrappedObject,icon\0"
    "py_set_icon(QStyleOptionTitleBar*,QIcon)\0"
    "QIcon\0py_get_icon(QStyleOptionTitleBar*)\0"
    "theWrappedObject,text\0"
    "py_set_text(QStyleOptionTitleBar*,QString)\0"
    "QString\0py_get_text(QStyleOptionTitleBar*)\0"
    "theWrappedObject,titleBarState\0"
    "py_set_titleBarState(QStyleOptionTitleBar*,int)\0"
    "int\0py_get_titleBarState(QStyleOptionTitleBar*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleOptionTitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionTitleBar *_t = static_cast<PythonQtWrapper_QStyleOptionTitleBar *>(_o);
        switch (_id) {
        case 0: { QStyleOptionTitleBar* _r = _t->new_QStyleOptionTitleBar();
            if (_a[0]) *reinterpret_cast< QStyleOptionTitleBar**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionTitleBar* _r = _t->new_QStyleOptionTitleBar((*reinterpret_cast< const QStyleOptionTitleBar(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionTitleBar**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionTitleBar((*reinterpret_cast< QStyleOptionTitleBar*(*)>(_a[1]))); break;
        case 3: _t->py_set_titleBarFlags((*reinterpret_cast< QStyleOptionTitleBar*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[2]))); break;
        case 4: { Qt::WindowFlags _r = _t->py_get_titleBarFlags((*reinterpret_cast< QStyleOptionTitleBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::WindowFlags*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_icon((*reinterpret_cast< QStyleOptionTitleBar*(*)>(_a[1])),(*reinterpret_cast< QIcon(*)>(_a[2]))); break;
        case 6: { QIcon _r = _t->py_get_icon((*reinterpret_cast< QStyleOptionTitleBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_text((*reinterpret_cast< QStyleOptionTitleBar*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: { QString _r = _t->py_get_text((*reinterpret_cast< QStyleOptionTitleBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_titleBarState((*reinterpret_cast< QStyleOptionTitleBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: { int _r = _t->py_get_titleBarState((*reinterpret_cast< QStyleOptionTitleBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionTitleBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionTitleBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionTitleBar,
      qt_meta_data_PythonQtWrapper_QStyleOptionTitleBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionTitleBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionTitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionTitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionTitleBar))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionTitleBar*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionTitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionToolBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       5,   89, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      58,   36,   37,   36, 0x0a,
      90,   84,   37,   36, 0x0a,
     139,  135,   36,   36, 0x0a,
     215,  188,   36,   36, 0x0a,
     279,  262,  258,   36, 0x0a,
     354,  318,   36,   36, 0x0a,
     476,  262,  439,   36, 0x0a,
     556,  524,   36,   36, 0x0a,
     637,  262,  439,   36, 0x0a,
     707,  681,   36,   36, 0x0a,
     819,  262,  782,   36, 0x0a,
     886,  857,   36,   36, 0x0a,
     959,  262,  943,   36, 0x0a,
    1030, 1000,   36,   36, 0x0a,
    1076,  262,  258,   36, 0x0a,

 // enums: name, flags, count, data
    1118, 0x0,    1,  109,
    1137, 0x0,    1,  111,
    1153, 0x0,    4,  113,
    1169, 0x0,    2,  121,
    1184, 0x1,    2,  125,

 // enum data: key, value
    1200, uint(PythonQtWrapper_QStyleOptionToolBar::Version),
    1208, uint(PythonQtWrapper_QStyleOptionToolBar::Type),
    1213, uint(PythonQtWrapper_QStyleOptionToolBar::Beginning),
    1223, uint(PythonQtWrapper_QStyleOptionToolBar::Middle),
    1230, uint(PythonQtWrapper_QStyleOptionToolBar::End),
    1234, uint(PythonQtWrapper_QStyleOptionToolBar::OnlyOne),
    1242, uint(PythonQtWrapper_QStyleOptionToolBar::None),
    1247, uint(PythonQtWrapper_QStyleOptionToolBar::Movable),
    1242, uint(PythonQtWrapper_QStyleOptionToolBar::None),
    1247, uint(PythonQtWrapper_QStyleOptionToolBar::Movable),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionToolBar[] = {
    "PythonQtWrapper_QStyleOptionToolBar\0"
    "\0QStyleOptionToolBar*\0new_QStyleOptionToolBar()\0"
    "other\0new_QStyleOptionToolBar(QStyleOptionToolBar)\0"
    "obj\0delete_QStyleOptionToolBar(QStyleOptionToolBar*)\0"
    "theWrappedObject,lineWidth\0"
    "py_set_lineWidth(QStyleOptionToolBar*,int)\0"
    "int\0theWrappedObject\0"
    "py_get_lineWidth(QStyleOptionToolBar*)\0"
    "theWrappedObject,positionWithinLine\0"
    "py_set_positionWithinLine(QStyleOptionToolBar*,QStyleOptionToolBar::To"
    "olBarPosition)\0"
    "QStyleOptionToolBar::ToolBarPosition\0"
    "py_get_positionWithinLine(QStyleOptionToolBar*)\0"
    "theWrappedObject,positionOfLine\0"
    "py_set_positionOfLine(QStyleOptionToolBar*,QStyleOptionToolBar::ToolBa"
    "rPosition)\0"
    "py_get_positionOfLine(QStyleOptionToolBar*)\0"
    "theWrappedObject,features\0"
    "py_set_features(QStyleOptionToolBar*,QStyleOptionToolBar::ToolBarFeatu"
    "res)\0"
    "QStyleOptionToolBar::ToolBarFeatures\0"
    "py_get_features(QStyleOptionToolBar*)\0"
    "theWrappedObject,toolBarArea\0"
    "py_set_toolBarArea(QStyleOptionToolBar*,Qt::ToolBarArea)\0"
    "Qt::ToolBarArea\0"
    "py_get_toolBarArea(QStyleOptionToolBar*)\0"
    "theWrappedObject,midLineWidth\0"
    "py_set_midLineWidth(QStyleOptionToolBar*,int)\0"
    "py_get_midLineWidth(QStyleOptionToolBar*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "ToolBarPosition\0ToolBarFeature\0"
    "ToolBarFeatures\0Version\0Type\0Beginning\0"
    "Middle\0End\0OnlyOne\0None\0Movable\0"
};

void PythonQtWrapper_QStyleOptionToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionToolBar *_t = static_cast<PythonQtWrapper_QStyleOptionToolBar *>(_o);
        switch (_id) {
        case 0: { QStyleOptionToolBar* _r = _t->new_QStyleOptionToolBar();
            if (_a[0]) *reinterpret_cast< QStyleOptionToolBar**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionToolBar* _r = _t->new_QStyleOptionToolBar((*reinterpret_cast< const QStyleOptionToolBar(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionToolBar**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionToolBar((*reinterpret_cast< QStyleOptionToolBar*(*)>(_a[1]))); break;
        case 3: _t->py_set_lineWidth((*reinterpret_cast< QStyleOptionToolBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: { int _r = _t->py_get_lineWidth((*reinterpret_cast< QStyleOptionToolBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_positionWithinLine((*reinterpret_cast< QStyleOptionToolBar*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionToolBar::ToolBarPosition(*)>(_a[2]))); break;
        case 6: { QStyleOptionToolBar::ToolBarPosition _r = _t->py_get_positionWithinLine((*reinterpret_cast< QStyleOptionToolBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionToolBar::ToolBarPosition*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_positionOfLine((*reinterpret_cast< QStyleOptionToolBar*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionToolBar::ToolBarPosition(*)>(_a[2]))); break;
        case 8: { QStyleOptionToolBar::ToolBarPosition _r = _t->py_get_positionOfLine((*reinterpret_cast< QStyleOptionToolBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionToolBar::ToolBarPosition*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_features((*reinterpret_cast< QStyleOptionToolBar*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionToolBar::ToolBarFeatures(*)>(_a[2]))); break;
        case 10: { QStyleOptionToolBar::ToolBarFeatures _r = _t->py_get_features((*reinterpret_cast< QStyleOptionToolBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionToolBar::ToolBarFeatures*>(_a[0]) = _r; }  break;
        case 11: _t->py_set_toolBarArea((*reinterpret_cast< QStyleOptionToolBar*(*)>(_a[1])),(*reinterpret_cast< Qt::ToolBarArea(*)>(_a[2]))); break;
        case 12: { Qt::ToolBarArea _r = _t->py_get_toolBarArea((*reinterpret_cast< QStyleOptionToolBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ToolBarArea*>(_a[0]) = _r; }  break;
        case 13: _t->py_set_midLineWidth((*reinterpret_cast< QStyleOptionToolBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: { int _r = _t->py_get_midLineWidth((*reinterpret_cast< QStyleOptionToolBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionToolBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionToolBar,
      qt_meta_data_PythonQtWrapper_QStyleOptionToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionToolBar))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionToolBar*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionToolBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       2,   49, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      58,   36,   37,   36, 0x0a,
      90,   84,   37,   36, 0x0a,
     139,  135,   36,   36, 0x0a,
     210,  188,   36,   36, 0x0a,
     273,  256,  250,   36, 0x0a,
     329,  307,   36,   36, 0x0a,
     379,  256,  371,   36, 0x0a,

 // enums: name, flags, count, data
     413, 0x0,    1,   57,
     432, 0x0,    1,   59,

 // enum data: key, value
     448, uint(PythonQtWrapper_QStyleOptionToolBox::Version),
     456, uint(PythonQtWrapper_QStyleOptionToolBox::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionToolBox[] = {
    "PythonQtWrapper_QStyleOptionToolBox\0"
    "\0QStyleOptionToolBox*\0new_QStyleOptionToolBox()\0"
    "other\0new_QStyleOptionToolBox(QStyleOptionToolBox)\0"
    "obj\0delete_QStyleOptionToolBox(QStyleOptionToolBox*)\0"
    "theWrappedObject,icon\0"
    "py_set_icon(QStyleOptionToolBox*,QIcon)\0"
    "QIcon\0theWrappedObject\0"
    "py_get_icon(QStyleOptionToolBox*)\0"
    "theWrappedObject,text\0"
    "py_set_text(QStyleOptionToolBox*,QString)\0"
    "QString\0py_get_text(QStyleOptionToolBox*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Version\0Type\0"
};

void PythonQtWrapper_QStyleOptionToolBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionToolBox *_t = static_cast<PythonQtWrapper_QStyleOptionToolBox *>(_o);
        switch (_id) {
        case 0: { QStyleOptionToolBox* _r = _t->new_QStyleOptionToolBox();
            if (_a[0]) *reinterpret_cast< QStyleOptionToolBox**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionToolBox* _r = _t->new_QStyleOptionToolBox((*reinterpret_cast< const QStyleOptionToolBox(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionToolBox**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionToolBox((*reinterpret_cast< QStyleOptionToolBox*(*)>(_a[1]))); break;
        case 3: _t->py_set_icon((*reinterpret_cast< QStyleOptionToolBox*(*)>(_a[1])),(*reinterpret_cast< QIcon(*)>(_a[2]))); break;
        case 4: { QIcon _r = _t->py_get_icon((*reinterpret_cast< QStyleOptionToolBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_text((*reinterpret_cast< QStyleOptionToolBox*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: { QString _r = _t->py_get_text((*reinterpret_cast< QStyleOptionToolBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionToolBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionToolBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionToolBox,
      qt_meta_data_PythonQtWrapper_QStyleOptionToolBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionToolBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionToolBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionToolBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionToolBox))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionToolBox*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionToolBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionToolBoxV2[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       3,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      62,   38,   39,   38, 0x0a,
      96,   90,   39,   38, 0x0a,
     143,   90,   39,   38, 0x0a,
     196,  192,   38,   38, 0x0a,
     275,  249,   38,   38, 0x0a,
     402,  385,  350,   38, 0x0a,
     476,  442,   38,   38, 0x0a,
     604,  385,  564,   38, 0x0a,

 // enums: name, flags, count, data
     652, 0x0,    1,   66,
     671, 0x0,    4,   68,
     683, 0x0,    3,   76,

 // enum data: key, value
     700, uint(PythonQtWrapper_QStyleOptionToolBoxV2::Version),
     708, uint(PythonQtWrapper_QStyleOptionToolBoxV2::Beginning),
     718, uint(PythonQtWrapper_QStyleOptionToolBoxV2::Middle),
     725, uint(PythonQtWrapper_QStyleOptionToolBoxV2::End),
     729, uint(PythonQtWrapper_QStyleOptionToolBoxV2::OnlyOneTab),
     740, uint(PythonQtWrapper_QStyleOptionToolBoxV2::NotAdjacent),
     752, uint(PythonQtWrapper_QStyleOptionToolBoxV2::NextIsSelected),
     767, uint(PythonQtWrapper_QStyleOptionToolBoxV2::PreviousIsSelected),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionToolBoxV2[] = {
    "PythonQtWrapper_QStyleOptionToolBoxV2\0"
    "\0QStyleOptionToolBoxV2*\0"
    "new_QStyleOptionToolBoxV2()\0other\0"
    "new_QStyleOptionToolBoxV2(QStyleOptionToolBox)\0"
    "new_QStyleOptionToolBoxV2(QStyleOptionToolBoxV2)\0"
    "obj\0delete_QStyleOptionToolBoxV2(QStyleOptionToolBoxV2*)\0"
    "theWrappedObject,position\0"
    "py_set_position(QStyleOptionToolBoxV2*,QStyleOptionToolBoxV2::TabPosit"
    "ion)\0"
    "QStyleOptionToolBoxV2::TabPosition\0"
    "theWrappedObject\0"
    "py_get_position(QStyleOptionToolBoxV2*)\0"
    "theWrappedObject,selectedPosition\0"
    "py_set_selectedPosition(QStyleOptionToolBoxV2*,QStyleOptionToolBoxV2::"
    "SelectedPosition)\0"
    "QStyleOptionToolBoxV2::SelectedPosition\0"
    "py_get_selectedPosition(QStyleOptionToolBoxV2*)\0"
    "StyleOptionVersion\0TabPosition\0"
    "SelectedPosition\0Version\0Beginning\0"
    "Middle\0End\0OnlyOneTab\0NotAdjacent\0"
    "NextIsSelected\0PreviousIsSelected\0"
};

void PythonQtWrapper_QStyleOptionToolBoxV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionToolBoxV2 *_t = static_cast<PythonQtWrapper_QStyleOptionToolBoxV2 *>(_o);
        switch (_id) {
        case 0: { QStyleOptionToolBoxV2* _r = _t->new_QStyleOptionToolBoxV2();
            if (_a[0]) *reinterpret_cast< QStyleOptionToolBoxV2**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionToolBoxV2* _r = _t->new_QStyleOptionToolBoxV2((*reinterpret_cast< const QStyleOptionToolBox(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionToolBoxV2**>(_a[0]) = _r; }  break;
        case 2: { QStyleOptionToolBoxV2* _r = _t->new_QStyleOptionToolBoxV2((*reinterpret_cast< const QStyleOptionToolBoxV2(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionToolBoxV2**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStyleOptionToolBoxV2((*reinterpret_cast< QStyleOptionToolBoxV2*(*)>(_a[1]))); break;
        case 4: _t->py_set_position((*reinterpret_cast< QStyleOptionToolBoxV2*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionToolBoxV2::TabPosition(*)>(_a[2]))); break;
        case 5: { QStyleOptionToolBoxV2::TabPosition _r = _t->py_get_position((*reinterpret_cast< QStyleOptionToolBoxV2*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionToolBoxV2::TabPosition*>(_a[0]) = _r; }  break;
        case 6: _t->py_set_selectedPosition((*reinterpret_cast< QStyleOptionToolBoxV2*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionToolBoxV2::SelectedPosition(*)>(_a[2]))); break;
        case 7: { QStyleOptionToolBoxV2::SelectedPosition _r = _t->py_get_selectedPosition((*reinterpret_cast< QStyleOptionToolBoxV2*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionToolBoxV2::SelectedPosition*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionToolBoxV2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionToolBoxV2::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionToolBoxV2,
      qt_meta_data_PythonQtWrapper_QStyleOptionToolBoxV2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionToolBoxV2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionToolBoxV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionToolBoxV2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionToolBoxV2))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionToolBoxV2*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionToolBoxV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionToolButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       4,  109, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      64,   39,   40,   39, 0x0a,
      99,   93,   40,   39, 0x0a,
     154,  150,   39,   39, 0x0a,
     235,  209,   39,   39, 0x0a,
     305,  288,  282,   39, 0x0a,
     379,  346,   39,   39, 0x0a,
     467,  288,  447,   39, 0x0a,
     541,  515,   39,   39, 0x0a,
     668,  288,  625,   39, 0x0a,
     736,  709,   39,   39, 0x0a,
     806,  288,  792,   39, 0x0a,
     870,  848,   39,   39, 0x0a,
     919,  288,  913,   39, 0x0a,
     977,  956,   39,   39, 0x0a,
    1027,  288, 1020,   39, 0x0a,
    1085, 1063,   39,   39, 0x0a,
    1138,  288, 1130,   39, 0x0a,
    1197, 1175,   39,   39, 0x0a,
    1246,  288, 1240,   39, 0x0a,

 // enums: name, flags, count, data
    1283, 0x0,    1,  125,
    1302, 0x0,    6,  127,
    1320, 0x1,    6,  139,
    1339, 0x0,    1,  151,

 // enum data: key, value
    1355, uint(PythonQtWrapper_QStyleOptionToolButton::Version),
    1363, uint(PythonQtWrapper_QStyleOptionToolButton::None),
    1368, uint(PythonQtWrapper_QStyleOptionToolButton::Arrow),
    1374, uint(PythonQtWrapper_QStyleOptionToolButton::Menu),
    1379, uint(PythonQtWrapper_QStyleOptionToolButton::MenuButtonPopup),
    1395, uint(PythonQtWrapper_QStyleOptionToolButton::PopupDelay),
    1406, uint(PythonQtWrapper_QStyleOptionToolButton::HasMenu),
    1363, uint(PythonQtWrapper_QStyleOptionToolButton::None),
    1368, uint(PythonQtWrapper_QStyleOptionToolButton::Arrow),
    1374, uint(PythonQtWrapper_QStyleOptionToolButton::Menu),
    1379, uint(PythonQtWrapper_QStyleOptionToolButton::MenuButtonPopup),
    1395, uint(PythonQtWrapper_QStyleOptionToolButton::PopupDelay),
    1406, uint(PythonQtWrapper_QStyleOptionToolButton::HasMenu),
    1414, uint(PythonQtWrapper_QStyleOptionToolButton::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionToolButton[] = {
    "PythonQtWrapper_QStyleOptionToolButton\0"
    "\0QStyleOptionToolButton*\0"
    "new_QStyleOptionToolButton()\0other\0"
    "new_QStyleOptionToolButton(QStyleOptionToolButton)\0"
    "obj\0delete_QStyleOptionToolButton(QStyleOptionToolButton*)\0"
    "theWrappedObject,iconSize\0"
    "py_set_iconSize(QStyleOptionToolButton*,QSize)\0"
    "QSize\0theWrappedObject\0"
    "py_get_iconSize(QStyleOptionToolButton*)\0"
    "theWrappedObject,toolButtonStyle\0"
    "py_set_toolButtonStyle(QStyleOptionToolButton*,Qt::ToolButtonStyle)\0"
    "Qt::ToolButtonStyle\0"
    "py_get_toolButtonStyle(QStyleOptionToolButton*)\0"
    "theWrappedObject,features\0"
    "py_set_features(QStyleOptionToolButton*,QStyleOptionToolButton::ToolBu"
    "ttonFeatures)\0"
    "QStyleOptionToolButton::ToolButtonFeatures\0"
    "py_get_features(QStyleOptionToolButton*)\0"
    "theWrappedObject,arrowType\0"
    "py_set_arrowType(QStyleOptionToolButton*,Qt::ArrowType)\0"
    "Qt::ArrowType\0py_get_arrowType(QStyleOptionToolButton*)\0"
    "theWrappedObject,icon\0"
    "py_set_icon(QStyleOptionToolButton*,QIcon)\0"
    "QIcon\0py_get_icon(QStyleOptionToolButton*)\0"
    "theWrappedObject,pos\0"
    "py_set_pos(QStyleOptionToolButton*,QPoint)\0"
    "QPoint\0py_get_pos(QStyleOptionToolButton*)\0"
    "theWrappedObject,text\0"
    "py_set_text(QStyleOptionToolButton*,QString)\0"
    "QString\0py_get_text(QStyleOptionToolButton*)\0"
    "theWrappedObject,font\0"
    "py_set_font(QStyleOptionToolButton*,QFont)\0"
    "QFont\0py_get_font(QStyleOptionToolButton*)\0"
    "StyleOptionVersion\0ToolButtonFeature\0"
    "ToolButtonFeatures\0StyleOptionType\0"
    "Version\0None\0Arrow\0Menu\0MenuButtonPopup\0"
    "PopupDelay\0HasMenu\0Type\0"
};

void PythonQtWrapper_QStyleOptionToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionToolButton *_t = static_cast<PythonQtWrapper_QStyleOptionToolButton *>(_o);
        switch (_id) {
        case 0: { QStyleOptionToolButton* _r = _t->new_QStyleOptionToolButton();
            if (_a[0]) *reinterpret_cast< QStyleOptionToolButton**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionToolButton* _r = _t->new_QStyleOptionToolButton((*reinterpret_cast< const QStyleOptionToolButton(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionToolButton**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionToolButton((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1]))); break;
        case 3: _t->py_set_iconSize((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1])),(*reinterpret_cast< QSize(*)>(_a[2]))); break;
        case 4: { QSize _r = _t->py_get_iconSize((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_toolButtonStyle((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1])),(*reinterpret_cast< Qt::ToolButtonStyle(*)>(_a[2]))); break;
        case 6: { Qt::ToolButtonStyle _r = _t->py_get_toolButtonStyle((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ToolButtonStyle*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_features((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionToolButton::ToolButtonFeatures(*)>(_a[2]))); break;
        case 8: { QStyleOptionToolButton::ToolButtonFeatures _r = _t->py_get_features((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionToolButton::ToolButtonFeatures*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_arrowType((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1])),(*reinterpret_cast< Qt::ArrowType(*)>(_a[2]))); break;
        case 10: { Qt::ArrowType _r = _t->py_get_arrowType((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ArrowType*>(_a[0]) = _r; }  break;
        case 11: _t->py_set_icon((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1])),(*reinterpret_cast< QIcon(*)>(_a[2]))); break;
        case 12: { QIcon _r = _t->py_get_icon((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 13: _t->py_set_pos((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 14: { QPoint _r = _t->py_get_pos((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 15: _t->py_set_text((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: { QString _r = _t->py_get_text((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: _t->py_set_font((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1])),(*reinterpret_cast< QFont(*)>(_a[2]))); break;
        case 18: { QFont _r = _t->py_get_font((*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionToolButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionToolButton::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionToolButton,
      qt_meta_data_PythonQtWrapper_QStyleOptionToolButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionToolButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionToolButton))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionToolButton*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionViewItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       3,   99, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      60,   37,   38,   37, 0x0a,
      93,   87,   38,   37, 0x0a,
     144,  140,   37,   37, 0x0a,
     235,  195,   37,   37, 0x0a,
     315,  298,  293,   37, 0x0a,
     404,  368,   37,   37, 0x0a,
     515,  298,  484,   37, 0x0a,
     601,  564,   37,   37, 0x0a,
     679,  298,  665,   37, 0x0a,
     763,  729,   37,   37, 0x0a,
     824,  298,  665,   37, 0x0a,
     902,  871,   37,   37, 0x0a,
     982,  298,  964,   37, 0x0a,
    1058, 1026,   37,   37, 0x0a,
    1115,  298, 1109,   37, 0x0a,
    1182, 1160,   37,   37, 0x0a,
    1229,  298, 1223,   37, 0x0a,

 // enums: name, flags, count, data
    1264, 0x0,    1,  111,
    1283, 0x0,    1,  113,
    1299, 0x0,    4,  115,

 // enum data: key, value
    1308, uint(PythonQtWrapper_QStyleOptionViewItem::Version),
    1316, uint(PythonQtWrapper_QStyleOptionViewItem::Type),
    1321, uint(PythonQtWrapper_QStyleOptionViewItem::Left),
    1326, uint(PythonQtWrapper_QStyleOptionViewItem::Right),
    1332, uint(PythonQtWrapper_QStyleOptionViewItem::Top),
    1336, uint(PythonQtWrapper_QStyleOptionViewItem::Bottom),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionViewItem[] = {
    "PythonQtWrapper_QStyleOptionViewItem\0"
    "\0QStyleOptionViewItem*\0"
    "new_QStyleOptionViewItem()\0other\0"
    "new_QStyleOptionViewItem(QStyleOptionViewItem)\0"
    "obj\0delete_QStyleOptionViewItem(QStyleOptionViewItem*)\0"
    "theWrappedObject,showDecorationSelected\0"
    "py_set_showDecorationSelected(QStyleOptionViewItem*,bool)\0"
    "bool\0theWrappedObject\0"
    "py_get_showDecorationSelected(QStyleOptionViewItem*)\0"
    "theWrappedObject,decorationPosition\0"
    "py_set_decorationPosition(QStyleOptionViewItem*,QStyleOptionViewItem::"
    "Position)\0"
    "QStyleOptionViewItem::Position\0"
    "py_get_decorationPosition(QStyleOptionViewItem*)\0"
    "theWrappedObject,decorationAlignment\0"
    "py_set_decorationAlignment(QStyleOptionViewItem*,Qt::Alignment)\0"
    "Qt::Alignment\0"
    "py_get_decorationAlignment(QStyleOptionViewItem*)\0"
    "theWrappedObject,displayAlignment\0"
    "py_set_displayAlignment(QStyleOptionViewItem*,Qt::Alignment)\0"
    "py_get_displayAlignment(QStyleOptionViewItem*)\0"
    "theWrappedObject,textElideMode\0"
    "py_set_textElideMode(QStyleOptionViewItem*,Qt::TextElideMode)\0"
    "Qt::TextElideMode\0"
    "py_get_textElideMode(QStyleOptionViewItem*)\0"
    "theWrappedObject,decorationSize\0"
    "py_set_decorationSize(QStyleOptionViewItem*,QSize)\0"
    "QSize\0py_get_decorationSize(QStyleOptionViewItem*)\0"
    "theWrappedObject,font\0"
    "py_set_font(QStyleOptionViewItem*,QFont)\0"
    "QFont\0py_get_font(QStyleOptionViewItem*)\0"
    "StyleOptionVersion\0StyleOptionType\0"
    "Position\0Version\0Type\0Left\0Right\0Top\0"
    "Bottom\0"
};

void PythonQtWrapper_QStyleOptionViewItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionViewItem *_t = static_cast<PythonQtWrapper_QStyleOptionViewItem *>(_o);
        switch (_id) {
        case 0: { QStyleOptionViewItem* _r = _t->new_QStyleOptionViewItem();
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItem**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionViewItem* _r = _t->new_QStyleOptionViewItem((*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItem**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyleOptionViewItem((*reinterpret_cast< QStyleOptionViewItem*(*)>(_a[1]))); break;
        case 3: _t->py_set_showDecorationSelected((*reinterpret_cast< QStyleOptionViewItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: { bool _r = _t->py_get_showDecorationSelected((*reinterpret_cast< QStyleOptionViewItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_decorationPosition((*reinterpret_cast< QStyleOptionViewItem*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionViewItem::Position(*)>(_a[2]))); break;
        case 6: { QStyleOptionViewItem::Position _r = _t->py_get_decorationPosition((*reinterpret_cast< QStyleOptionViewItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItem::Position*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_decorationAlignment((*reinterpret_cast< QStyleOptionViewItem*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 8: { Qt::Alignment _r = _t->py_get_decorationAlignment((*reinterpret_cast< QStyleOptionViewItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_displayAlignment((*reinterpret_cast< QStyleOptionViewItem*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 10: { Qt::Alignment _r = _t->py_get_displayAlignment((*reinterpret_cast< QStyleOptionViewItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 11: _t->py_set_textElideMode((*reinterpret_cast< QStyleOptionViewItem*(*)>(_a[1])),(*reinterpret_cast< Qt::TextElideMode(*)>(_a[2]))); break;
        case 12: { Qt::TextElideMode _r = _t->py_get_textElideMode((*reinterpret_cast< QStyleOptionViewItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TextElideMode*>(_a[0]) = _r; }  break;
        case 13: _t->py_set_decorationSize((*reinterpret_cast< QStyleOptionViewItem*(*)>(_a[1])),(*reinterpret_cast< QSize(*)>(_a[2]))); break;
        case 14: { QSize _r = _t->py_get_decorationSize((*reinterpret_cast< QStyleOptionViewItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 15: _t->py_set_font((*reinterpret_cast< QStyleOptionViewItem*(*)>(_a[1])),(*reinterpret_cast< QFont(*)>(_a[2]))); break;
        case 16: { QFont _r = _t->py_get_font((*reinterpret_cast< QStyleOptionViewItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionViewItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionViewItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionViewItem,
      qt_meta_data_PythonQtWrapper_QStyleOptionViewItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionViewItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionViewItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionViewItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionViewItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionViewItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionViewItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionViewItemV2[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       3,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      64,   39,   40,   39, 0x0a,
      99,   93,   40,   39, 0x0a,
     148,   93,   40,   39, 0x0a,
     203,  199,   39,   39, 0x0a,
     284,  258,   39,   39, 0x0a,
     424,  407,  366,   39, 0x0a,

 // enums: name, flags, count, data
     465, 0x0,    1,   56,
     484, 0x0,    6,   58,
     500, 0x1,    6,   70,

 // enum data: key, value
     517, uint(PythonQtWrapper_QStyleOptionViewItemV2::Version),
     525, uint(PythonQtWrapper_QStyleOptionViewItemV2::None),
     530, uint(PythonQtWrapper_QStyleOptionViewItemV2::WrapText),
     539, uint(PythonQtWrapper_QStyleOptionViewItemV2::Alternate),
     549, uint(PythonQtWrapper_QStyleOptionViewItemV2::HasCheckIndicator),
     567, uint(PythonQtWrapper_QStyleOptionViewItemV2::HasDisplay),
     578, uint(PythonQtWrapper_QStyleOptionViewItemV2::HasDecoration),
     525, uint(PythonQtWrapper_QStyleOptionViewItemV2::None),
     530, uint(PythonQtWrapper_QStyleOptionViewItemV2::WrapText),
     539, uint(PythonQtWrapper_QStyleOptionViewItemV2::Alternate),
     549, uint(PythonQtWrapper_QStyleOptionViewItemV2::HasCheckIndicator),
     567, uint(PythonQtWrapper_QStyleOptionViewItemV2::HasDisplay),
     578, uint(PythonQtWrapper_QStyleOptionViewItemV2::HasDecoration),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionViewItemV2[] = {
    "PythonQtWrapper_QStyleOptionViewItemV2\0"
    "\0QStyleOptionViewItemV2*\0"
    "new_QStyleOptionViewItemV2()\0other\0"
    "new_QStyleOptionViewItemV2(QStyleOptionViewItem)\0"
    "new_QStyleOptionViewItemV2(QStyleOptionViewItemV2)\0"
    "obj\0delete_QStyleOptionViewItemV2(QStyleOptionViewItemV2*)\0"
    "theWrappedObject,features\0"
    "py_set_features(QStyleOptionViewItemV2*,QStyleOptionViewItemV2::ViewIt"
    "emFeatures)\0"
    "QStyleOptionViewItemV2::ViewItemFeatures\0"
    "theWrappedObject\0"
    "py_get_features(QStyleOptionViewItemV2*)\0"
    "StyleOptionVersion\0ViewItemFeature\0"
    "ViewItemFeatures\0Version\0None\0WrapText\0"
    "Alternate\0HasCheckIndicator\0HasDisplay\0"
    "HasDecoration\0"
};

void PythonQtWrapper_QStyleOptionViewItemV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionViewItemV2 *_t = static_cast<PythonQtWrapper_QStyleOptionViewItemV2 *>(_o);
        switch (_id) {
        case 0: { QStyleOptionViewItemV2* _r = _t->new_QStyleOptionViewItemV2();
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItemV2**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionViewItemV2* _r = _t->new_QStyleOptionViewItemV2((*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItemV2**>(_a[0]) = _r; }  break;
        case 2: { QStyleOptionViewItemV2* _r = _t->new_QStyleOptionViewItemV2((*reinterpret_cast< const QStyleOptionViewItemV2(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItemV2**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStyleOptionViewItemV2((*reinterpret_cast< QStyleOptionViewItemV2*(*)>(_a[1]))); break;
        case 4: _t->py_set_features((*reinterpret_cast< QStyleOptionViewItemV2*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionViewItemV2::ViewItemFeatures(*)>(_a[2]))); break;
        case 5: { QStyleOptionViewItemV2::ViewItemFeatures _r = _t->py_get_features((*reinterpret_cast< QStyleOptionViewItemV2*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItemV2::ViewItemFeatures*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionViewItemV2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionViewItemV2::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionViewItemV2,
      qt_meta_data_PythonQtWrapper_QStyleOptionViewItemV2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionViewItemV2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionViewItemV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionViewItemV2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionViewItemV2))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionViewItemV2*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionViewItemV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionViewItemV3[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       1,   49, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      64,   39,   40,   39, 0x0a,
      99,   93,   40,   39, 0x0a,
     148,   93,   40,   39, 0x0a,
     203,  199,   39,   39, 0x0a,
     290,  273,  258,   39, 0x0a,
     353,  329,   39,   39, 0x0a,
     408,  273,  400,   39, 0x0a,

 // enums: name, flags, count, data
     447, 0x0,    1,   53,

 // enum data: key, value
     466, uint(PythonQtWrapper_QStyleOptionViewItemV3::Version),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionViewItemV3[] = {
    "PythonQtWrapper_QStyleOptionViewItemV3\0"
    "\0QStyleOptionViewItemV3*\0"
    "new_QStyleOptionViewItemV3()\0other\0"
    "new_QStyleOptionViewItemV3(QStyleOptionViewItem)\0"
    "new_QStyleOptionViewItemV3(QStyleOptionViewItemV3)\0"
    "obj\0delete_QStyleOptionViewItemV3(QStyleOptionViewItemV3*)\0"
    "const QWidget*\0theWrappedObject\0"
    "py_get_widget(QStyleOptionViewItemV3*)\0"
    "theWrappedObject,locale\0"
    "py_set_locale(QStyleOptionViewItemV3*,QLocale)\0"
    "QLocale\0py_get_locale(QStyleOptionViewItemV3*)\0"
    "StyleOptionVersion\0Version\0"
};

void PythonQtWrapper_QStyleOptionViewItemV3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionViewItemV3 *_t = static_cast<PythonQtWrapper_QStyleOptionViewItemV3 *>(_o);
        switch (_id) {
        case 0: { QStyleOptionViewItemV3* _r = _t->new_QStyleOptionViewItemV3();
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItemV3**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionViewItemV3* _r = _t->new_QStyleOptionViewItemV3((*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItemV3**>(_a[0]) = _r; }  break;
        case 2: { QStyleOptionViewItemV3* _r = _t->new_QStyleOptionViewItemV3((*reinterpret_cast< const QStyleOptionViewItemV3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItemV3**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStyleOptionViewItemV3((*reinterpret_cast< QStyleOptionViewItemV3*(*)>(_a[1]))); break;
        case 4: { const QWidget* _r = _t->py_get_widget((*reinterpret_cast< QStyleOptionViewItemV3*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QWidget**>(_a[0]) = _r; }  break;
        case 5: _t->py_set_locale((*reinterpret_cast< QStyleOptionViewItemV3*(*)>(_a[1])),(*reinterpret_cast< QLocale(*)>(_a[2]))); break;
        case 6: { QLocale _r = _t->py_get_locale((*reinterpret_cast< QStyleOptionViewItemV3*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocale*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionViewItemV3::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionViewItemV3::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionViewItemV3,
      qt_meta_data_PythonQtWrapper_QStyleOptionViewItemV3, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionViewItemV3::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionViewItemV3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionViewItemV3::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionViewItemV3))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionViewItemV3*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionViewItemV3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyleOptionViewItemV4[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       2,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      64,   39,   40,   39, 0x0a,
      99,   93,   40,   39, 0x0a,
     148,   93,   40,   39, 0x0a,
     203,  199,   39,   39, 0x0a,
     286,  258,   39,   39, 0x0a,
     376,  359,  344,   39, 0x0a,
     453,  419,   39,   39, 0x0a,
     584,  359,  543,   39, 0x0a,
     655,  633,   39,   39, 0x0a,
     704,  359,  698,   39, 0x0a,
     774,  741,   39,   39, 0x0a,
     836,  359,  829,   39, 0x0a,
     907,  884,   39,   39, 0x0a,
     969,  359,  957,   39, 0x0a,
    1029, 1007,   39,   39, 0x0a,
    1082,  359, 1074,   39, 0x0a,

 // enums: name, flags, count, data
    1119, 0x0,    5,  102,
    1136, 0x0,    1,  112,

 // enum data: key, value
    1155, uint(PythonQtWrapper_QStyleOptionViewItemV4::Invalid),
    1163, uint(PythonQtWrapper_QStyleOptionViewItemV4::Beginning),
    1173, uint(PythonQtWrapper_QStyleOptionViewItemV4::Middle),
    1180, uint(PythonQtWrapper_QStyleOptionViewItemV4::End),
    1184, uint(PythonQtWrapper_QStyleOptionViewItemV4::OnlyOne),
    1192, uint(PythonQtWrapper_QStyleOptionViewItemV4::Version),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyleOptionViewItemV4[] = {
    "PythonQtWrapper_QStyleOptionViewItemV4\0"
    "\0QStyleOptionViewItemV4*\0"
    "new_QStyleOptionViewItemV4()\0other\0"
    "new_QStyleOptionViewItemV4(QStyleOptionViewItem)\0"
    "new_QStyleOptionViewItemV4(QStyleOptionViewItemV4)\0"
    "obj\0delete_QStyleOptionViewItemV4(QStyleOptionViewItemV4*)\0"
    "theWrappedObject,checkState\0"
    "py_set_checkState(QStyleOptionViewItemV4*,Qt::CheckState)\0"
    "Qt::CheckState\0theWrappedObject\0"
    "py_get_checkState(QStyleOptionViewItemV4*)\0"
    "theWrappedObject,viewItemPosition\0"
    "py_set_viewItemPosition(QStyleOptionViewItemV4*,QStyleOptionViewItemV4"
    "::ViewItemPosition)\0"
    "QStyleOptionViewItemV4::ViewItemPosition\0"
    "py_get_viewItemPosition(QStyleOptionViewItemV4*)\0"
    "theWrappedObject,icon\0"
    "py_set_icon(QStyleOptionViewItemV4*,QIcon)\0"
    "QIcon\0py_get_icon(QStyleOptionViewItemV4*)\0"
    "theWrappedObject,backgroundBrush\0"
    "py_set_backgroundBrush(QStyleOptionViewItemV4*,QBrush)\0"
    "QBrush\0py_get_backgroundBrush(QStyleOptionViewItemV4*)\0"
    "theWrappedObject,index\0"
    "py_set_index(QStyleOptionViewItemV4*,QModelIndex)\0"
    "QModelIndex\0py_get_index(QStyleOptionViewItemV4*)\0"
    "theWrappedObject,text\0"
    "py_set_text(QStyleOptionViewItemV4*,QString)\0"
    "QString\0py_get_text(QStyleOptionViewItemV4*)\0"
    "ViewItemPosition\0StyleOptionVersion\0"
    "Invalid\0Beginning\0Middle\0End\0OnlyOne\0"
    "Version\0"
};

void PythonQtWrapper_QStyleOptionViewItemV4::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyleOptionViewItemV4 *_t = static_cast<PythonQtWrapper_QStyleOptionViewItemV4 *>(_o);
        switch (_id) {
        case 0: { QStyleOptionViewItemV4* _r = _t->new_QStyleOptionViewItemV4();
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItemV4**>(_a[0]) = _r; }  break;
        case 1: { QStyleOptionViewItemV4* _r = _t->new_QStyleOptionViewItemV4((*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItemV4**>(_a[0]) = _r; }  break;
        case 2: { QStyleOptionViewItemV4* _r = _t->new_QStyleOptionViewItemV4((*reinterpret_cast< const QStyleOptionViewItemV4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItemV4**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStyleOptionViewItemV4((*reinterpret_cast< QStyleOptionViewItemV4*(*)>(_a[1]))); break;
        case 4: _t->py_set_checkState((*reinterpret_cast< QStyleOptionViewItemV4*(*)>(_a[1])),(*reinterpret_cast< Qt::CheckState(*)>(_a[2]))); break;
        case 5: { Qt::CheckState _r = _t->py_get_checkState((*reinterpret_cast< QStyleOptionViewItemV4*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::CheckState*>(_a[0]) = _r; }  break;
        case 6: _t->py_set_viewItemPosition((*reinterpret_cast< QStyleOptionViewItemV4*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionViewItemV4::ViewItemPosition(*)>(_a[2]))); break;
        case 7: { QStyleOptionViewItemV4::ViewItemPosition _r = _t->py_get_viewItemPosition((*reinterpret_cast< QStyleOptionViewItemV4*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItemV4::ViewItemPosition*>(_a[0]) = _r; }  break;
        case 8: _t->py_set_icon((*reinterpret_cast< QStyleOptionViewItemV4*(*)>(_a[1])),(*reinterpret_cast< QIcon(*)>(_a[2]))); break;
        case 9: { QIcon _r = _t->py_get_icon((*reinterpret_cast< QStyleOptionViewItemV4*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 10: _t->py_set_backgroundBrush((*reinterpret_cast< QStyleOptionViewItemV4*(*)>(_a[1])),(*reinterpret_cast< QBrush(*)>(_a[2]))); break;
        case 11: { QBrush _r = _t->py_get_backgroundBrush((*reinterpret_cast< QStyleOptionViewItemV4*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 12: _t->py_set_index((*reinterpret_cast< QStyleOptionViewItemV4*(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 13: { QModelIndex _r = _t->py_get_index((*reinterpret_cast< QStyleOptionViewItemV4*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 14: _t->py_set_text((*reinterpret_cast< QStyleOptionViewItemV4*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 15: { QString _r = _t->py_get_text((*reinterpret_cast< QStyleOptionViewItemV4*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyleOptionViewItemV4::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyleOptionViewItemV4::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyleOptionViewItemV4,
      qt_meta_data_PythonQtWrapper_QStyleOptionViewItemV4, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyleOptionViewItemV4::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyleOptionViewItemV4::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyleOptionViewItemV4::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyleOptionViewItemV4))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyleOptionViewItemV4*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyleOptionViewItemV4::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStylePainter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      46,   30,   31,   30, 0x0a,
      71,   66,   31,   30, 0x0a,
     115,  113,   31,   30, 0x0a,
     147,  143,   30,   30, 0x0a,
     211,  189,  184,   30, 0x0a,
     275,  256,  184,   30, 0x0a,
     330,  306,   30,   30, 0x0a,
     432,  408,   30,   30, 0x0a,
     528,  496,   30,   30, 0x0a,
     628,  577,   30,   30, 0x0a,
     751,  709,   30,   30, 0x2a,
     836,  812,   30,   30, 0x0a,
     929,  912,  904,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStylePainter[] = {
    "PythonQtWrapper_QStylePainter\0\0"
    "QStylePainter*\0new_QStylePainter()\0"
    "pd,w\0new_QStylePainter(QPaintDevice*,QWidget*)\0"
    "w\0new_QStylePainter(QWidget*)\0obj\0"
    "delete_QStylePainter(QStylePainter*)\0"
    "bool\0theWrappedObject,pd,w\0"
    "begin(QStylePainter*,QPaintDevice*,QWidget*)\0"
    "theWrappedObject,w\0begin(QStylePainter*,QWidget*)\0"
    "theWrappedObject,cc,opt\0"
    "drawComplexControl(QStylePainter*,QStyle::ComplexControl,QStyleOptionC"
    "omplex)\0"
    "theWrappedObject,ce,opt\0"
    "drawControl(QStylePainter*,QStyle::ControlElement,QStyleOption)\0"
    "theWrappedObject,r,flags,pixmap\0"
    "drawItemPixmap(QStylePainter*,QRect,int,QPixmap)\0"
    "theWrappedObject,r,flags,pal,enabled,text,textRole\0"
    "drawItemText(QStylePainter*,QRect,int,QPalette,bool,QString,QPalette::"
    "ColorRole)\0"
    "theWrappedObject,r,flags,pal,enabled,text\0"
    "drawItemText(QStylePainter*,QRect,int,QPalette,bool,QString)\0"
    "theWrappedObject,pe,opt\0"
    "drawPrimitive(QStylePainter*,QStyle::PrimitiveElement,QStyleOption)\0"
    "QStyle*\0theWrappedObject\0style(QStylePainter*)\0"
};

void PythonQtWrapper_QStylePainter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStylePainter *_t = static_cast<PythonQtWrapper_QStylePainter *>(_o);
        switch (_id) {
        case 0: { QStylePainter* _r = _t->new_QStylePainter();
            if (_a[0]) *reinterpret_cast< QStylePainter**>(_a[0]) = _r; }  break;
        case 1: { QStylePainter* _r = _t->new_QStylePainter((*reinterpret_cast< QPaintDevice*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStylePainter**>(_a[0]) = _r; }  break;
        case 2: { QStylePainter* _r = _t->new_QStylePainter((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStylePainter**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStylePainter((*reinterpret_cast< QStylePainter*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->begin((*reinterpret_cast< QStylePainter*(*)>(_a[1])),(*reinterpret_cast< QPaintDevice*(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->begin((*reinterpret_cast< QStylePainter*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->drawComplexControl((*reinterpret_cast< QStylePainter*(*)>(_a[1])),(*reinterpret_cast< QStyle::ComplexControl(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionComplex(*)>(_a[3]))); break;
        case 7: _t->drawControl((*reinterpret_cast< QStylePainter*(*)>(_a[1])),(*reinterpret_cast< QStyle::ControlElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption(*)>(_a[3]))); break;
        case 8: _t->drawItemPixmap((*reinterpret_cast< QStylePainter*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QPixmap(*)>(_a[4]))); break;
        case 9: _t->drawItemText((*reinterpret_cast< QStylePainter*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QPalette(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< QPalette::ColorRole(*)>(_a[7]))); break;
        case 10: _t->drawItemText((*reinterpret_cast< QStylePainter*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QPalette(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 11: _t->drawPrimitive((*reinterpret_cast< QStylePainter*(*)>(_a[1])),(*reinterpret_cast< QStyle::PrimitiveElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption(*)>(_a[3]))); break;
        case 12: { QStyle* _r = _t->style((*reinterpret_cast< QStylePainter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyle**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStylePainter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStylePainter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStylePainter,
      qt_meta_data_PythonQtWrapper_QStylePainter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStylePainter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStylePainter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStylePainter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStylePainter))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStylePainter*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStylePainter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
