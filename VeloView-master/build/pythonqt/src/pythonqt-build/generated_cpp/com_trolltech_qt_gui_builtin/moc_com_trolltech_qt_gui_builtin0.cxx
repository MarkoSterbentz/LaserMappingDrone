/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_gui_builtin0.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../pythonqt/generated_cpp/com_trolltech_qt_gui_builtin/com_trolltech_qt_gui_builtin0.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_gui_builtin0.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QBitmap[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   24,   25,   24, 0x0a,
      55,   48,   25,   24, 0x0a,
      76,   48,   25,   24, 0x0a,
     111,   95,   25,   24, 0x0a,
     153,  144,   25,   24, 0x2a,
     178,  174,   25,   24, 0x0a,
     205,  199,   25,   24, 0x0a,
     230,  226,   24,   24, 0x0a,
     272,  255,   24,   24, 0x0a,
     308,  296,  288,   24, 0x0a,
     372,  366,  288,   24, 0x2a,
     428,  405,   24,   24, 0x0a,
     476,  452,  288,   24, 0x0a,
     530,  506,  288,   24, 0x0a,
     568,  226,  563,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QBitmap[] = {
    "PythonQtWrapper_QBitmap\0\0QBitmap*\0"
    "new_QBitmap()\0arg__1\0new_QBitmap(QPixmap)\0"
    "new_QBitmap(QSize)\0fileName,format\0"
    "new_QBitmap(QString,const char*)\0"
    "fileName\0new_QBitmap(QString)\0w,h\0"
    "new_QBitmap(int,int)\0other\0"
    "new_QBitmap(QBitmap)\0obj\0"
    "delete_QBitmap(QBitmap*)\0theWrappedObject\0"
    "clear(QBitmap*)\0QBitmap\0image,flags\0"
    "static_QBitmap_fromImage(QImage,Qt::ImageConversionFlags)\0"
    "image\0static_QBitmap_fromImage(QImage)\0"
    "theWrappedObject,other\0swap(QBitmap*,QBitmap&)\0"
    "theWrappedObject,arg__1\0"
    "transformed(QBitmap*,QMatrix)\0"
    "theWrappedObject,matrix\0"
    "transformed(QBitmap*,QTransform)\0bool\0"
    "__nonzero__(QBitmap*)\0"
};

void PythonQtWrapper_QBitmap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QBitmap *_t = static_cast<PythonQtWrapper_QBitmap *>(_o);
        switch (_id) {
        case 0: { QBitmap* _r = _t->new_QBitmap();
            if (_a[0]) *reinterpret_cast< QBitmap**>(_a[0]) = _r; }  break;
        case 1: { QBitmap* _r = _t->new_QBitmap((*reinterpret_cast< const QPixmap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBitmap**>(_a[0]) = _r; }  break;
        case 2: { QBitmap* _r = _t->new_QBitmap((*reinterpret_cast< const QSize(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBitmap**>(_a[0]) = _r; }  break;
        case 3: { QBitmap* _r = _t->new_QBitmap((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QBitmap**>(_a[0]) = _r; }  break;
        case 4: { QBitmap* _r = _t->new_QBitmap((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBitmap**>(_a[0]) = _r; }  break;
        case 5: { QBitmap* _r = _t->new_QBitmap((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QBitmap**>(_a[0]) = _r; }  break;
        case 6: { QBitmap* _r = _t->new_QBitmap((*reinterpret_cast< const QBitmap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBitmap**>(_a[0]) = _r; }  break;
        case 7: _t->delete_QBitmap((*reinterpret_cast< QBitmap*(*)>(_a[1]))); break;
        case 8: _t->clear((*reinterpret_cast< QBitmap*(*)>(_a[1]))); break;
        case 9: { QBitmap _r = _t->static_QBitmap_fromImage((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< Qt::ImageConversionFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QBitmap*>(_a[0]) = _r; }  break;
        case 10: { QBitmap _r = _t->static_QBitmap_fromImage((*reinterpret_cast< const QImage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBitmap*>(_a[0]) = _r; }  break;
        case 11: _t->swap((*reinterpret_cast< QBitmap*(*)>(_a[1])),(*reinterpret_cast< QBitmap(*)>(_a[2]))); break;
        case 12: { QBitmap _r = _t->transformed((*reinterpret_cast< QBitmap*(*)>(_a[1])),(*reinterpret_cast< const QMatrix(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QBitmap*>(_a[0]) = _r; }  break;
        case 13: { QBitmap _r = _t->transformed((*reinterpret_cast< QBitmap*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QBitmap*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->__nonzero__((*reinterpret_cast< QBitmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QBitmap::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QBitmap::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QBitmap,
      qt_meta_data_PythonQtWrapper_QBitmap, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QBitmap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QBitmap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QBitmap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QBitmap))
        return static_cast<void*>(const_cast< PythonQtWrapper_QBitmap*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QBitmap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QBrush[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   23,   24,   23, 0x0a,
      48,   45,   24,   23, 0x0a,
      88,   75,   24,   23, 0x0a,
     130,  124,   24,   23, 0x0a,
     158,  149,   24,   23, 0x0a,
     198,  192,   24,   23, 0x2a,
     217,   75,   24,   23, 0x0a,
     253,  244,   24,   23, 0x0a,
     281,  275,   24,   23, 0x0a,
     307,  300,   24,   23, 0x0a,
     331,  327,   23,   23, 0x0a,
     385,  368,  354,   23, 0x0a,
     417,  368,  400,   23, 0x0a,
     440,  368,  435,   23, 0x0a,
     473,  368,  458,   23, 0x0a,
     508,  489,  435,   23, 0x0a,
     555,  531,   23,   23, 0x0a,
     585,  489,  435,   23, 0x0a,
     608,  531,   23,   23, 0x0a,
     662,  639,   23,   23, 0x0a,
     696,  639,   23,   23, 0x0a,
     742,  721,   23,   23, 0x0a,
     769,  531,   23,   23, 0x0a,
     826,  802,   23,   23, 0x0a,
     877,  854,   23,   23, 0x0a,
     909,  531,   23,   23, 0x0a,
     957,  368,  942,   23, 0x0a,
     995,  972,   23,   23, 0x0a,
    1025,  368, 1017,   23, 0x0a,
    1049,  368, 1042,   23, 0x0a,
    1082,  368, 1071,   23, 0x0a,
    1109,   23, 1101,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QBrush[] = {
    "PythonQtWrapper_QBrush\0\0QBrush*\0"
    "new_QBrush()\0bs\0new_QBrush(Qt::BrushStyle)\0"
    "color,pixmap\0new_QBrush(Qt::GlobalColor,QPixmap)\0"
    "brush\0new_QBrush(QBrush)\0color,bs\0"
    "new_QBrush(QColor,Qt::BrushStyle)\0"
    "color\0new_QBrush(QColor)\0"
    "new_QBrush(QColor,QPixmap)\0gradient\0"
    "new_QBrush(QGradient)\0image\0"
    "new_QBrush(QImage)\0pixmap\0new_QBrush(QPixmap)\0"
    "obj\0delete_QBrush(QBrush*)\0const QColor*\0"
    "theWrappedObject\0color(QBrush*)\0"
    "const QGradient*\0gradient(QBrush*)\0"
    "bool\0isOpaque(QBrush*)\0const QMatrix*\0"
    "matrix(QBrush*)\0theWrappedObject,b\0"
    "__ne__(QBrush*,QBrush)\0theWrappedObject,arg__1\0"
    "writeTo(QBrush*,QDataStream&)\0"
    "__eq__(QBrush*,QBrush)\0"
    "readFrom(QBrush*,QDataStream&)\0"
    "theWrappedObject,color\0"
    "setColor(QBrush*,Qt::GlobalColor)\0"
    "setColor(QBrush*,QColor)\0theWrappedObject,mat\0"
    "setMatrix(QBrush*,QMatrix)\0"
    "setStyle(QBrush*,Qt::BrushStyle)\0"
    "theWrappedObject,pixmap\0"
    "setTexture(QBrush*,QPixmap)\0"
    "theWrappedObject,image\0"
    "setTextureImage(QBrush*,QImage)\0"
    "setTransform(QBrush*,QTransform)\0"
    "Qt::BrushStyle\0style(QBrush*)\0"
    "theWrappedObject,other\0swap(QBrush*,QBrush&)\0"
    "QPixmap\0texture(QBrush*)\0QImage\0"
    "textureImage(QBrush*)\0QTransform\0"
    "transform(QBrush*)\0QString\0"
    "py_toString(QBrush*)\0"
};

void PythonQtWrapper_QBrush::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QBrush *_t = static_cast<PythonQtWrapper_QBrush *>(_o);
        switch (_id) {
        case 0: { QBrush* _r = _t->new_QBrush();
            if (_a[0]) *reinterpret_cast< QBrush**>(_a[0]) = _r; }  break;
        case 1: { QBrush* _r = _t->new_QBrush((*reinterpret_cast< Qt::BrushStyle(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush**>(_a[0]) = _r; }  break;
        case 2: { QBrush* _r = _t->new_QBrush((*reinterpret_cast< Qt::GlobalColor(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QBrush**>(_a[0]) = _r; }  break;
        case 3: { QBrush* _r = _t->new_QBrush((*reinterpret_cast< const QBrush(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush**>(_a[0]) = _r; }  break;
        case 4: { QBrush* _r = _t->new_QBrush((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< Qt::BrushStyle(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QBrush**>(_a[0]) = _r; }  break;
        case 5: { QBrush* _r = _t->new_QBrush((*reinterpret_cast< const QColor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush**>(_a[0]) = _r; }  break;
        case 6: { QBrush* _r = _t->new_QBrush((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QBrush**>(_a[0]) = _r; }  break;
        case 7: { QBrush* _r = _t->new_QBrush((*reinterpret_cast< const QGradient(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush**>(_a[0]) = _r; }  break;
        case 8: { QBrush* _r = _t->new_QBrush((*reinterpret_cast< const QImage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush**>(_a[0]) = _r; }  break;
        case 9: { QBrush* _r = _t->new_QBrush((*reinterpret_cast< const QPixmap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush**>(_a[0]) = _r; }  break;
        case 10: _t->delete_QBrush((*reinterpret_cast< QBrush*(*)>(_a[1]))); break;
        case 11: { const QColor* _r = _t->color((*reinterpret_cast< QBrush*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QColor**>(_a[0]) = _r; }  break;
        case 12: { const QGradient* _r = _t->gradient((*reinterpret_cast< QBrush*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QGradient**>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isOpaque((*reinterpret_cast< QBrush*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { const QMatrix* _r = _t->matrix((*reinterpret_cast< QBrush*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QMatrix**>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->__ne__((*reinterpret_cast< QBrush*(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->writeTo((*reinterpret_cast< QBrush*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 17: { bool _r = _t->__eq__((*reinterpret_cast< QBrush*(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->readFrom((*reinterpret_cast< QBrush*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 19: _t->setColor((*reinterpret_cast< QBrush*(*)>(_a[1])),(*reinterpret_cast< Qt::GlobalColor(*)>(_a[2]))); break;
        case 20: _t->setColor((*reinterpret_cast< QBrush*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 21: _t->setMatrix((*reinterpret_cast< QBrush*(*)>(_a[1])),(*reinterpret_cast< const QMatrix(*)>(_a[2]))); break;
        case 22: _t->setStyle((*reinterpret_cast< QBrush*(*)>(_a[1])),(*reinterpret_cast< Qt::BrushStyle(*)>(_a[2]))); break;
        case 23: _t->setTexture((*reinterpret_cast< QBrush*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 24: _t->setTextureImage((*reinterpret_cast< QBrush*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 25: _t->setTransform((*reinterpret_cast< QBrush*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2]))); break;
        case 26: { Qt::BrushStyle _r = _t->style((*reinterpret_cast< QBrush*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::BrushStyle*>(_a[0]) = _r; }  break;
        case 27: _t->swap((*reinterpret_cast< QBrush*(*)>(_a[1])),(*reinterpret_cast< QBrush(*)>(_a[2]))); break;
        case 28: { QPixmap _r = _t->texture((*reinterpret_cast< QBrush*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 29: { QImage _r = _t->textureImage((*reinterpret_cast< QBrush*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 30: { QTransform _r = _t->transform((*reinterpret_cast< QBrush*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 31: { QString _r = _t->py_toString((*reinterpret_cast< QBrush*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QBrush::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QBrush::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QBrush,
      qt_meta_data_PythonQtWrapper_QBrush, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QBrush::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QBrush::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QBrush::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QBrush))
        return static_cast<void*>(const_cast< PythonQtWrapper_QBrush*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QBrush::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QColor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
     116,   14, // methods
       0,    0, // properties
       1,  594, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   23,   24,   23, 0x0a,
      51,   45,   24,   23, 0x0a,
      79,   45,   24,   23, 0x0a,
     103,   98,   24,   23, 0x0a,
     131,  123,   24,   23, 0x0a,
     165,  159,   24,   23, 0x2a,
     193,  189,   24,   23, 0x0a,
     214,  210,   23,   23, 0x0a,
     258,  241,  237,   23, 0x0a,
     279,  241,  273,   23, 0x0a,
     295,  241,  237,   23, 0x0a,
     310,  241,  273,   23, 0x0a,
     326,  241,  237,   23, 0x0a,
     340,  241,  273,   23, 0x0a,
     367,   23,  355,   23, 0x0a,
     428,  401,  394,   23, 0x0a,
     460,  241,  237,   23, 0x0a,
     474,  241,  273,   23, 0x0a,
     508,  489,  394,   23, 0x0a,
     528,  241,  394,   23, 0x2a,
     554,  544,  394,   23, 0x0a,
     606,  598,  394,   23, 0x2a,
     646,  544,  394,   23, 0x0a,
     701,  598,  394,   23, 0x2a,
     758,  750,  394,   23, 0x0a,
     803,  797,  394,   23, 0x2a,
     838,  750,  394,   23, 0x0a,
     886,  797,  394,   23, 0x2a,
     936,  928,  394,   23, 0x0a,
     981,  975,  394,   23, 0x2a,
    1016,  928,  394,   23, 0x0a,
    1064,  975,  394,   23, 0x2a,
    1106,  123,  394,   23, 0x0a,
    1145,  159,  394,   23, 0x2a,
    1180,  189,  394,   23, 0x0a,
    1208,  123,  394,   23, 0x0a,
    1256,  159,  394,   23, 0x2a,
    1303, 1298,  394,   23, 0x0a,
    1359, 1332,   23,   23, 0x0a,
    1437, 1412,   23,   23, 0x2a,
    1508, 1483,   23,   23, 0x0a,
    1567, 1544,   23,   23, 0x2a,
    1598, 1483,   23,   23, 0x0a,
    1643, 1544,   23,   23, 0x2a,
    1706, 1681,   23,   23, 0x0a,
    1774, 1751,   23,   23, 0x2a,
    1837, 1812,   23,   23, 0x0a,
    1905, 1882,   23,   23, 0x2a,
    1943,  241,  237,   23, 0x0a,
    1958,  241,  273,   23, 0x0a,
    1974,  241,  237,   23, 0x0a,
    1990,  241,  273,   23, 0x0a,
    2007,  241,  237,   23, 0x0a,
    2030,  241,  273,   23, 0x0a,
    2054,  241,  237,   23, 0x0a,
    2070,  241,  273,   23, 0x0a,
    2087,  241,  237,   23, 0x0a,
    2110,  241,  273,   23, 0x0a,
    2134,  241,  237,   23, 0x0a,
    2147,  241,  273,   23, 0x0a,
    2166,  241, 2161,   23, 0x0a,
    2183,   98, 2161,   23, 0x0a,
    2219,  489,  394,   23, 0x0a,
    2240,  241,  394,   23, 0x2a,
    2257,  241,  237,   23, 0x0a,
    2276,  241,  273,   23, 0x0a,
    2296,  241,  237,   23, 0x0a,
    2313,  241,  273,   23, 0x0a,
    2339,  241, 2331,   23, 0x0a,
    2372, 2353, 2161,   23, 0x0a,
    2419, 2395,   23,   23, 0x0a,
    2449, 2353, 2161,   23, 0x0a,
    2472, 2395,   23,   23, 0x0a,
    2503,  241,  237,   23, 0x0a,
    2516,  241,  273,   23, 0x0a,
    2535,  241, 2530,   23, 0x0a,
    2548,  241, 2530,   23, 0x0a,
    2562,  241,  237,   23, 0x0a,
    2582,  241,  273,   23, 0x0a,
    2626, 2603,   23,   23, 0x0a,
    2648, 2603,   23,   23, 0x0a,
    2695, 2673,   23,   23, 0x0a,
    2716, 2673,   23,   23, 0x0a,
    2740, 1332,   23,   23, 0x0a,
    2777, 1412,   23,   23, 0x2a,
    2810, 1332,   23,   23, 0x0a,
    2858, 1412,   23,   23, 0x2a,
    2923, 2900,   23,   23, 0x0a,
    2945, 2900,   23,   23, 0x0a,
    2970, 1483,   23,   23, 0x0a,
    3002, 1544,   23,   23, 0x2a,
    3030, 1483,   23,   23, 0x0a,
    3071, 1544,   23,   23, 0x2a,
    3106, 1681,   23,   23, 0x0a,
    3138, 1751,   23,   23, 0x2a,
    3166, 1681,   23,   23, 0x0a,
    3207, 1751,   23,   23, 0x2a,
    3264, 3242,   23,   23, 0x0a,
    3316, 3295,   23,   23, 0x0a,
    3336, 3295,   23,   23, 0x0a,
    3359, 1812,   23,   23, 0x0a,
    3391, 1882,   23,   23, 0x2a,
    3440, 3419,   23,   23, 0x0a,
    3461, 1812,   23,   23, 0x0a,
    3502, 1882,   23,   23, 0x2a,
    3559, 3537,   23,   23, 0x0a,
    3594,  241, 3581,   23, 0x0a,
    3608,  241,  394,   23, 0x0a,
    3624,  241,  394,   23, 0x0a,
    3639,  241,  394,   23, 0x0a,
    3654,  241,  394,   23, 0x0a,
    3669,  241,  237,   23, 0x0a,
    3684,  241,  273,   23, 0x0a,
    3700,  241,  237,   23, 0x0a,
    3716,  241,  273,   23, 0x0a,
    3733,   23, 2331,   23, 0x0a,

 // enums: name, flags, count, data
    3754, 0x0,    5,  598,

 // enum data: key, value
    3759, uint(PythonQtWrapper_QColor::Invalid),
    3767, uint(PythonQtWrapper_QColor::Rgb),
    3771, uint(PythonQtWrapper_QColor::Hsv),
    3775, uint(PythonQtWrapper_QColor::Cmyk),
    3780, uint(PythonQtWrapper_QColor::Hsl),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QColor[] = {
    "PythonQtWrapper_QColor\0\0QColor*\0"
    "new_QColor()\0color\0new_QColor(Qt::GlobalColor)\0"
    "new_QColor(QColor)\0name\0new_QColor(QString)\0"
    "r,g,b,a\0new_QColor(int,int,int,int)\0"
    "r,g,b\0new_QColor(int,int,int)\0rgb\0"
    "new_QColor(uint)\0obj\0delete_QColor(QColor*)\0"
    "int\0theWrappedObject\0alpha(QColor*)\0"
    "qreal\0alphaF(QColor*)\0black(QColor*)\0"
    "blackF(QColor*)\0blue(QColor*)\0"
    "blueF(QColor*)\0QStringList\0"
    "static_QColor_colorNames()\0QColor\0"
    "theWrappedObject,colorSpec\0"
    "convertTo(QColor*,QColor::Spec)\0"
    "cyan(QColor*)\0cyanF(QColor*)\0"
    "theWrappedObject,f\0darker(QColor*,int)\0"
    "darker(QColor*)\0c,m,y,k,a\0"
    "static_QColor_fromCmyk(int,int,int,int,int)\0"
    "c,m,y,k\0static_QColor_fromCmyk(int,int,int,int)\0"
    "static_QColor_fromCmykF(qreal,qreal,qreal,qreal,qreal)\0"
    "static_QColor_fromCmykF(qreal,qreal,qreal,qreal)\0"
    "h,s,l,a\0static_QColor_fromHsl(int,int,int,int)\0"
    "h,s,l\0static_QColor_fromHsl(int,int,int)\0"
    "static_QColor_fromHslF(qreal,qreal,qreal,qreal)\0"
    "static_QColor_fromHslF(qreal,qreal,qreal)\0"
    "h,s,v,a\0static_QColor_fromHsv(int,int,int,int)\0"
    "h,s,v\0static_QColor_fromHsv(int,int,int)\0"
    "static_QColor_fromHsvF(qreal,qreal,qreal,qreal)\0"
    "static_QColor_fromHsvF(qreal,qreal,qreal)\0"
    "static_QColor_fromRgb(int,int,int,int)\0"
    "static_QColor_fromRgb(int,int,int)\0"
    "static_QColor_fromRgb(uint)\0"
    "static_QColor_fromRgbF(qreal,qreal,qreal,qreal)\0"
    "static_QColor_fromRgbF(qreal,qreal,qreal)\0"
    "rgba\0static_QColor_fromRgba(uint)\0"
    "theWrappedObject,c,m,y,k,a\0"
    "getCmykF(QColor*,qreal*,qreal*,qreal*,qreal*,qreal*)\0"
    "theWrappedObject,c,m,y,k\0"
    "getCmykF(QColor*,qreal*,qreal*,qreal*,qreal*)\0"
    "theWrappedObject,h,s,l,a\0"
    "getHsl(QColor*,int*,int*,int*,int*)\0"
    "theWrappedObject,h,s,l\0"
    "getHsl(QColor*,int*,int*,int*)\0"
    "getHslF(QColor*,qreal*,qreal*,qreal*,qreal*)\0"
    "getHslF(QColor*,qreal*,qreal*,qreal*)\0"
    "theWrappedObject,h,s,v,a\0"
    "getHsvF(QColor*,qreal*,qreal*,qreal*,qreal*)\0"
    "theWrappedObject,h,s,v\0"
    "getHsvF(QColor*,qreal*,qreal*,qreal*)\0"
    "theWrappedObject,r,g,b,a\0"
    "getRgbF(QColor*,qreal*,qreal*,qreal*,qreal*)\0"
    "theWrappedObject,r,g,b\0"
    "getRgbF(QColor*,qreal*,qreal*,qreal*)\0"
    "green(QColor*)\0greenF(QColor*)\0"
    "hslHue(QColor*)\0hslHueF(QColor*)\0"
    "hslSaturation(QColor*)\0hslSaturationF(QColor*)\0"
    "hsvHue(QColor*)\0hsvHueF(QColor*)\0"
    "hsvSaturation(QColor*)\0hsvSaturationF(QColor*)\0"
    "hue(QColor*)\0hueF(QColor*)\0bool\0"
    "isValid(QColor*)\0static_QColor_isValidColor(QString)\0"
    "lighter(QColor*,int)\0lighter(QColor*)\0"
    "lightness(QColor*)\0lightnessF(QColor*)\0"
    "magenta(QColor*)\0magentaF(QColor*)\0"
    "QString\0name(QColor*)\0theWrappedObject,c\0"
    "__ne__(QColor*,QColor)\0theWrappedObject,arg__1\0"
    "writeTo(QColor*,QDataStream&)\0"
    "__eq__(QColor*,QColor)\0"
    "readFrom(QColor*,QDataStream&)\0"
    "red(QColor*)\0redF(QColor*)\0uint\0"
    "rgb(QColor*)\0rgba(QColor*)\0"
    "saturation(QColor*)\0saturationF(QColor*)\0"
    "theWrappedObject,alpha\0setAlpha(QColor*,int)\0"
    "setAlphaF(QColor*,qreal)\0theWrappedObject,blue\0"
    "setBlue(QColor*,int)\0setBlueF(QColor*,qreal)\0"
    "setCmyk(QColor*,int,int,int,int,int)\0"
    "setCmyk(QColor*,int,int,int,int)\0"
    "setCmykF(QColor*,qreal,qreal,qreal,qreal,qreal)\0"
    "setCmykF(QColor*,qreal,qreal,qreal,qreal)\0"
    "theWrappedObject,green\0setGreen(QColor*,int)\0"
    "setGreenF(QColor*,qreal)\0"
    "setHsl(QColor*,int,int,int,int)\0"
    "setHsl(QColor*,int,int,int)\0"
    "setHslF(QColor*,qreal,qreal,qreal,qreal)\0"
    "setHslF(QColor*,qreal,qreal,qreal)\0"
    "setHsv(QColor*,int,int,int,int)\0"
    "setHsv(QColor*,int,int,int)\0"
    "setHsvF(QColor*,qreal,qreal,qreal,qreal)\0"
    "setHsvF(QColor*,qreal,qreal,qreal)\0"
    "theWrappedObject,name\0"
    "setNamedColor(QColor*,QString)\0"
    "theWrappedObject,red\0setRed(QColor*,int)\0"
    "setRedF(QColor*,qreal)\0"
    "setRgb(QColor*,int,int,int,int)\0"
    "setRgb(QColor*,int,int,int)\0"
    "theWrappedObject,rgb\0setRgb(QColor*,uint)\0"
    "setRgbF(QColor*,qreal,qreal,qreal,qreal)\0"
    "setRgbF(QColor*,qreal,qreal,qreal)\0"
    "theWrappedObject,rgba\0setRgba(QColor*,uint)\0"
    "QColor::Spec\0spec(QColor*)\0toCmyk(QColor*)\0"
    "toHsl(QColor*)\0toHsv(QColor*)\0"
    "toRgb(QColor*)\0value(QColor*)\0"
    "valueF(QColor*)\0yellow(QColor*)\0"
    "yellowF(QColor*)\0py_toString(QColor*)\0"
    "Spec\0Invalid\0Rgb\0Hsv\0Cmyk\0Hsl\0"
};

void PythonQtWrapper_QColor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QColor *_t = static_cast<PythonQtWrapper_QColor *>(_o);
        switch (_id) {
        case 0: { QColor* _r = _t->new_QColor();
            if (_a[0]) *reinterpret_cast< QColor**>(_a[0]) = _r; }  break;
        case 1: { QColor* _r = _t->new_QColor((*reinterpret_cast< Qt::GlobalColor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor**>(_a[0]) = _r; }  break;
        case 2: { QColor* _r = _t->new_QColor((*reinterpret_cast< const QColor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor**>(_a[0]) = _r; }  break;
        case 3: { QColor* _r = _t->new_QColor((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor**>(_a[0]) = _r; }  break;
        case 4: { QColor* _r = _t->new_QColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QColor**>(_a[0]) = _r; }  break;
        case 5: { QColor* _r = _t->new_QColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QColor**>(_a[0]) = _r; }  break;
        case 6: { QColor* _r = _t->new_QColor((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor**>(_a[0]) = _r; }  break;
        case 7: _t->delete_QColor((*reinterpret_cast< QColor*(*)>(_a[1]))); break;
        case 8: { int _r = _t->alpha((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { qreal _r = _t->alphaF((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->black((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { qreal _r = _t->blackF((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->blue((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->blueF((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: { QStringList _r = _t->static_QColor_colorNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 15: { QColor _r = _t->convertTo((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< QColor::Spec(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->cyan((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { qreal _r = _t->cyanF((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 18: { QColor _r = _t->darker((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 19: { QColor _r = _t->darker((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 20: { QColor _r = _t->static_QColor_fromCmyk((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 21: { QColor _r = _t->static_QColor_fromCmyk((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 22: { QColor _r = _t->static_QColor_fromCmykF((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 23: { QColor _r = _t->static_QColor_fromCmykF((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 24: { QColor _r = _t->static_QColor_fromHsl((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 25: { QColor _r = _t->static_QColor_fromHsl((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 26: { QColor _r = _t->static_QColor_fromHslF((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 27: { QColor _r = _t->static_QColor_fromHslF((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 28: { QColor _r = _t->static_QColor_fromHsv((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 29: { QColor _r = _t->static_QColor_fromHsv((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 30: { QColor _r = _t->static_QColor_fromHsvF((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 31: { QColor _r = _t->static_QColor_fromHsvF((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 32: { QColor _r = _t->static_QColor_fromRgb((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 33: { QColor _r = _t->static_QColor_fromRgb((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 34: { QColor _r = _t->static_QColor_fromRgb((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 35: { QColor _r = _t->static_QColor_fromRgbF((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 36: { QColor _r = _t->static_QColor_fromRgbF((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 37: { QColor _r = _t->static_QColor_fromRgba((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 38: _t->getCmykF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal*(*)>(_a[2])),(*reinterpret_cast< qreal*(*)>(_a[3])),(*reinterpret_cast< qreal*(*)>(_a[4])),(*reinterpret_cast< qreal*(*)>(_a[5])),(*reinterpret_cast< qreal*(*)>(_a[6]))); break;
        case 39: _t->getCmykF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal*(*)>(_a[2])),(*reinterpret_cast< qreal*(*)>(_a[3])),(*reinterpret_cast< qreal*(*)>(_a[4])),(*reinterpret_cast< qreal*(*)>(_a[5]))); break;
        case 40: _t->getHsl((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5]))); break;
        case 41: _t->getHsl((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4]))); break;
        case 42: _t->getHslF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal*(*)>(_a[2])),(*reinterpret_cast< qreal*(*)>(_a[3])),(*reinterpret_cast< qreal*(*)>(_a[4])),(*reinterpret_cast< qreal*(*)>(_a[5]))); break;
        case 43: _t->getHslF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal*(*)>(_a[2])),(*reinterpret_cast< qreal*(*)>(_a[3])),(*reinterpret_cast< qreal*(*)>(_a[4]))); break;
        case 44: _t->getHsvF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal*(*)>(_a[2])),(*reinterpret_cast< qreal*(*)>(_a[3])),(*reinterpret_cast< qreal*(*)>(_a[4])),(*reinterpret_cast< qreal*(*)>(_a[5]))); break;
        case 45: _t->getHsvF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal*(*)>(_a[2])),(*reinterpret_cast< qreal*(*)>(_a[3])),(*reinterpret_cast< qreal*(*)>(_a[4]))); break;
        case 46: _t->getRgbF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal*(*)>(_a[2])),(*reinterpret_cast< qreal*(*)>(_a[3])),(*reinterpret_cast< qreal*(*)>(_a[4])),(*reinterpret_cast< qreal*(*)>(_a[5]))); break;
        case 47: _t->getRgbF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal*(*)>(_a[2])),(*reinterpret_cast< qreal*(*)>(_a[3])),(*reinterpret_cast< qreal*(*)>(_a[4]))); break;
        case 48: { int _r = _t->green((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 49: { qreal _r = _t->greenF((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 50: { int _r = _t->hslHue((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 51: { qreal _r = _t->hslHueF((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 52: { int _r = _t->hslSaturation((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 53: { qreal _r = _t->hslSaturationF((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 54: { int _r = _t->hsvHue((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 55: { qreal _r = _t->hsvHueF((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 56: { int _r = _t->hsvSaturation((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 57: { qreal _r = _t->hsvSaturationF((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 58: { int _r = _t->hue((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 59: { qreal _r = _t->hueF((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 60: { bool _r = _t->isValid((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 61: { bool _r = _t->static_QColor_isValidColor((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 62: { QColor _r = _t->lighter((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 63: { QColor _r = _t->lighter((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 64: { int _r = _t->lightness((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 65: { qreal _r = _t->lightnessF((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 66: { int _r = _t->magenta((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 67: { qreal _r = _t->magentaF((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 68: { QString _r = _t->name((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 69: { bool _r = _t->__ne__((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 70: _t->writeTo((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 71: { bool _r = _t->__eq__((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 72: _t->readFrom((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 73: { int _r = _t->red((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 74: { qreal _r = _t->redF((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 75: { uint _r = _t->rgb((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 76: { uint _r = _t->rgba((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 77: { int _r = _t->saturation((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 78: { qreal _r = _t->saturationF((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 79: _t->setAlpha((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 80: _t->setAlphaF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 81: _t->setBlue((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 82: _t->setBlueF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 83: _t->setCmyk((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 84: _t->setCmyk((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 85: _t->setCmykF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6]))); break;
        case 86: _t->setCmykF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 87: _t->setGreen((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 88: _t->setGreenF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 89: _t->setHsl((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 90: _t->setHsl((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 91: _t->setHslF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 92: _t->setHslF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 93: _t->setHsv((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 94: _t->setHsv((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 95: _t->setHsvF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 96: _t->setHsvF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 97: _t->setNamedColor((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 98: _t->setRed((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 99: _t->setRedF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 100: _t->setRgb((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 101: _t->setRgb((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 102: _t->setRgb((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 103: _t->setRgbF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 104: _t->setRgbF((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 105: _t->setRgba((*reinterpret_cast< QColor*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 106: { QColor::Spec _r = _t->spec((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor::Spec*>(_a[0]) = _r; }  break;
        case 107: { QColor _r = _t->toCmyk((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 108: { QColor _r = _t->toHsl((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 109: { QColor _r = _t->toHsv((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 110: { QColor _r = _t->toRgb((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 111: { int _r = _t->value((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 112: { qreal _r = _t->valueF((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 113: { int _r = _t->yellow((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 114: { qreal _r = _t->yellowF((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 115: { QString _r = _t->py_toString((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QColor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QColor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QColor,
      qt_meta_data_PythonQtWrapper_QColor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QColor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QColor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QColor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QColor))
        return static_cast<void*>(const_cast< PythonQtWrapper_QColor*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QColor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 116)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 116;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QCursor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   24,   25,   24, 0x0a,
      54,   48,   25,   24, 0x0a,
     105,   83,   25,   24, 0x0a,
     159,  142,   25,   24, 0x2a,
     204,  192,   25,   24, 0x2a,
     240,  233,   25,   24, 0x0a,
     278,  261,   25,   24, 0x0a,
     319,  307,   25,   24, 0x2a,
     351,  344,   25,   24, 0x2a,
     376,  372,   24,   24, 0x0a,
     433,  416,  401,   24, 0x0a,
     457,  416,  450,   24, 0x0a,
     475,  416,  401,   24, 0x0a,
     512,  490,   24,   24, 0x0a,
     564,  543,   24,   24, 0x0a,
     604,  416,  596,   24, 0x0a,
     621,   24,  450,   24, 0x0a,
     644,  642,   24,   24, 0x0a,
     678,  674,   24,   24, 0x0a,
     735,  709,   24,   24, 0x0a,
     786,  416,  770,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QCursor[] = {
    "PythonQtWrapper_QCursor\0\0QCursor*\0"
    "new_QCursor()\0shape\0new_QCursor(Qt::CursorShape)\0"
    "bitmap,mask,hotX,hotY\0"
    "new_QCursor(QBitmap,QBitmap,int,int)\0"
    "bitmap,mask,hotX\0new_QCursor(QBitmap,QBitmap,int)\0"
    "bitmap,mask\0new_QCursor(QBitmap,QBitmap)\0"
    "cursor\0new_QCursor(QCursor)\0"
    "pixmap,hotX,hotY\0new_QCursor(QPixmap,int,int)\0"
    "pixmap,hotX\0new_QCursor(QPixmap,int)\0"
    "pixmap\0new_QCursor(QPixmap)\0obj\0"
    "delete_QCursor(QCursor*)\0const QBitmap*\0"
    "theWrappedObject\0bitmap(QCursor*)\0"
    "QPoint\0hotSpot(QCursor*)\0mask(QCursor*)\0"
    "theWrappedObject,outS\0"
    "writeTo(QCursor*,QDataStream&)\0"
    "theWrappedObject,inS\0"
    "readFrom(QCursor*,QDataStream&)\0QPixmap\0"
    "pixmap(QCursor*)\0static_QCursor_pos()\0"
    "p\0static_QCursor_setPos(QPoint)\0x,y\0"
    "static_QCursor_setPos(int,int)\0"
    "theWrappedObject,newShape\0"
    "setShape(QCursor*,Qt::CursorShape)\0"
    "Qt::CursorShape\0shape(QCursor*)\0"
};

void PythonQtWrapper_QCursor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QCursor *_t = static_cast<PythonQtWrapper_QCursor *>(_o);
        switch (_id) {
        case 0: { QCursor* _r = _t->new_QCursor();
            if (_a[0]) *reinterpret_cast< QCursor**>(_a[0]) = _r; }  break;
        case 1: { QCursor* _r = _t->new_QCursor((*reinterpret_cast< Qt::CursorShape(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QCursor**>(_a[0]) = _r; }  break;
        case 2: { QCursor* _r = _t->new_QCursor((*reinterpret_cast< const QBitmap(*)>(_a[1])),(*reinterpret_cast< const QBitmap(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QCursor**>(_a[0]) = _r; }  break;
        case 3: { QCursor* _r = _t->new_QCursor((*reinterpret_cast< const QBitmap(*)>(_a[1])),(*reinterpret_cast< const QBitmap(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QCursor**>(_a[0]) = _r; }  break;
        case 4: { QCursor* _r = _t->new_QCursor((*reinterpret_cast< const QBitmap(*)>(_a[1])),(*reinterpret_cast< const QBitmap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QCursor**>(_a[0]) = _r; }  break;
        case 5: { QCursor* _r = _t->new_QCursor((*reinterpret_cast< const QCursor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QCursor**>(_a[0]) = _r; }  break;
        case 6: { QCursor* _r = _t->new_QCursor((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QCursor**>(_a[0]) = _r; }  break;
        case 7: { QCursor* _r = _t->new_QCursor((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QCursor**>(_a[0]) = _r; }  break;
        case 8: { QCursor* _r = _t->new_QCursor((*reinterpret_cast< const QPixmap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QCursor**>(_a[0]) = _r; }  break;
        case 9: _t->delete_QCursor((*reinterpret_cast< QCursor*(*)>(_a[1]))); break;
        case 10: { const QBitmap* _r = _t->bitmap((*reinterpret_cast< QCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBitmap**>(_a[0]) = _r; }  break;
        case 11: { QPoint _r = _t->hotSpot((*reinterpret_cast< QCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 12: { const QBitmap* _r = _t->mask((*reinterpret_cast< QCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBitmap**>(_a[0]) = _r; }  break;
        case 13: _t->writeTo((*reinterpret_cast< QCursor*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 14: _t->readFrom((*reinterpret_cast< QCursor*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 15: { QPixmap _r = _t->pixmap((*reinterpret_cast< QCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 16: { QPoint _r = _t->static_QCursor_pos();
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 17: _t->static_QCursor_setPos((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 18: _t->static_QCursor_setPos((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->setShape((*reinterpret_cast< QCursor*(*)>(_a[1])),(*reinterpret_cast< Qt::CursorShape(*)>(_a[2]))); break;
        case 20: { Qt::CursorShape _r = _t->shape((*reinterpret_cast< QCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::CursorShape*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QCursor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QCursor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QCursor,
      qt_meta_data_PythonQtWrapper_QCursor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QCursor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QCursor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QCursor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QCursor))
        return static_cast<void*>(const_cast< PythonQtWrapper_QCursor*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QCursor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFont[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      83,   14, // methods
       0,    0, // properties
       8,  429, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   22,   23,   22, 0x0a,
      49,   42,   23,   22, 0x0a,
      76,   66,   23,   22, 0x0a,
     138,  107,   23,   22, 0x0a,
     194,  170,   23,   22, 0x2a,
     238,  221,   23,   22, 0x2a,
     268,  261,   23,   22, 0x2a,
     291,  287,   22,   22, 0x0a,
     334,  317,  312,   22, 0x0a,
     347,   22,   22,   22, 0x0a,
     400,  317,  378,   22, 0x0a,
     423,   22,   22,   22, 0x0a,
     454,  317,  446,   22, 0x0a,
     476,  317,  312,   22, 0x0a,
     495,  317,  446,   22, 0x0a,
     510,  317,  312,   22, 0x0a,
     553,  529,  312,   22, 0x0a,
     591,  317,  580,   22, 0x0a,
     631,  317,  606,   22, 0x0a,
     657,   22,   22,   22, 0x0a,
     697,  683,   22,   22, 0x0a,
     746,  683,   22,   22, 0x0a,
     800,  529,  312,   22, 0x0a,
     823,  317,  312,   22, 0x0a,
     838,  317,  312,   22, 0x0a,
     854,  317,  446,   22, 0x0a,
     866,  317,  446,   22, 0x0a,
     891,  317,  446,   22, 0x0a,
     920,  317,  914,   22, 0x0a,
     961,  317,  942,   22, 0x0a,
     987,  529,  312,   22, 0x0a,
    1008,  529,  312,   22, 0x0a,
    1029,  529,   22,   22, 0x0a,
    1058,  529,  312,   22, 0x0a,
    1079,  529,   22,   22, 0x0a,
    1109,  317,  312,   22, 0x0a,
    1130,  317, 1126,   22, 0x0a,
    1148,  317, 1126,   22, 0x0a,
    1166,  317,  914,   22, 0x0a,
    1185,  317,  312,   22, 0x0a,
    1201,  317,  446,   22, 0x0a,
    1217,   42,   22,   22, 0x0a,
    1263,  317, 1258,   22, 0x0a,
    1285,  529, 1279,   22, 0x0a,
    1329, 1307,   22,   22, 0x0a,
    1350,  529,   22,   22, 0x0a,
    1371,  529,   22,   22, 0x0a,
    1419,  529,   22,   22, 0x0a,
    1445,  529,   22,   22, 0x0a,
    1507, 1472,   22,   22, 0x0a,
    1580, 1561,   22,   22, 0x0a,
    1603,  529,   22,   22, 0x0a,
    1657, 1627,   22,   22, 0x0a,
    1707,  529,   22,   22, 0x0a,
    1732,  529,   22,   22, 0x0a,
    1757,  529,   22,   22, 0x0a,
    1782,  529,   22,   22, 0x0a,
    1810,  529,   22,   22, 0x0a,
    1834,  529,   22,   22, 0x0a,
    1861,  529,   22,   22, 0x0a,
    1884,  529,   22,   22, 0x0a,
    1933, 1910,   22,   22, 0x0a,
    1994, 1963,   22,   22, 0x0a,
    2053,  529,   22,   22, 0x2a,
    2091,  529,   22,   22, 0x0a,
    2139, 2120,   22,   22, 0x0a,
    2185,  529,   22,   22, 0x0a,
    2211,  529,   22,   22, 0x0a,
    2258, 2233,   22,   22, 0x0a,
    2287,  317, 1126,   22, 0x0a,
    2303,  317,  312,   22, 0x0a,
    2334,  317, 2321,   22, 0x0a,
    2365,  317, 2348,   22, 0x0a,
    2383,  317,  446,   22, 0x0a,
    2422,  317, 2401,   22, 0x0a,
    2444,   42,  446,   22, 0x0a,
    2489,   42, 2477,   22, 0x0a,
    2523,   22, 2477,   22, 0x0a,
    2552,  317,  446,   22, 0x0a,
    2569,  317,  312,   22, 0x0a,
    2587,  317, 1126,   22, 0x0a,
    2602,  317,  914,   22, 0x0a,
    2622,   22,  446,   22, 0x0a,

 // enums: name, flags, count, data
    2642, 0x0,    4,  461,
    2660, 0x0,   12,  469,
    2674, 0x0,    2,  493,
    2686, 0x0,   13,  497,
    2696, 0x0,    5,  523,
    2703, 0x0,    5,  533,
    2718, 0x0,    9,  543,
    2726, 0x0,    3,  561,

 // enum data: key, value
    2732, uint(PythonQtWrapper_QFont::PreferDefaultHinting),
    2753, uint(PythonQtWrapper_QFont::PreferNoHinting),
    2769, uint(PythonQtWrapper_QFont::PreferVerticalHinting),
    2791, uint(PythonQtWrapper_QFont::PreferFullHinting),
    2809, uint(PythonQtWrapper_QFont::PreferDefault),
    2823, uint(PythonQtWrapper_QFont::PreferBitmap),
    2836, uint(PythonQtWrapper_QFont::PreferDevice),
    2849, uint(PythonQtWrapper_QFont::PreferOutline),
    2863, uint(PythonQtWrapper_QFont::ForceOutline),
    2876, uint(PythonQtWrapper_QFont::PreferMatch),
    2888, uint(PythonQtWrapper_QFont::PreferQuality),
    2902, uint(PythonQtWrapper_QFont::PreferAntialias),
    2918, uint(PythonQtWrapper_QFont::NoAntialias),
    2930, uint(PythonQtWrapper_QFont::OpenGLCompatible),
    2947, uint(PythonQtWrapper_QFont::ForceIntegerMetrics),
    2967, uint(PythonQtWrapper_QFont::NoFontMerging),
    2981, uint(PythonQtWrapper_QFont::PercentageSpacing),
    2999, uint(PythonQtWrapper_QFont::AbsoluteSpacing),
    3015, uint(PythonQtWrapper_QFont::Helvetica),
    3025, uint(PythonQtWrapper_QFont::SansSerif),
    3035, uint(PythonQtWrapper_QFont::Times),
    3041, uint(PythonQtWrapper_QFont::Serif),
    3047, uint(PythonQtWrapper_QFont::Courier),
    3055, uint(PythonQtWrapper_QFont::TypeWriter),
    3066, uint(PythonQtWrapper_QFont::OldEnglish),
    3077, uint(PythonQtWrapper_QFont::Decorative),
    3088, uint(PythonQtWrapper_QFont::System),
    3095, uint(PythonQtWrapper_QFont::AnyStyle),
    3104, uint(PythonQtWrapper_QFont::Cursive),
    3112, uint(PythonQtWrapper_QFont::Monospace),
    3122, uint(PythonQtWrapper_QFont::Fantasy),
    3130, uint(PythonQtWrapper_QFont::Light),
    3136, uint(PythonQtWrapper_QFont::Normal),
    3143, uint(PythonQtWrapper_QFont::DemiBold),
    3152, uint(PythonQtWrapper_QFont::Bold),
    3157, uint(PythonQtWrapper_QFont::Black),
    3163, uint(PythonQtWrapper_QFont::MixedCase),
    3173, uint(PythonQtWrapper_QFont::AllUppercase),
    3186, uint(PythonQtWrapper_QFont::AllLowercase),
    3199, uint(PythonQtWrapper_QFont::SmallCaps),
    3209, uint(PythonQtWrapper_QFont::Capitalize),
    3220, uint(PythonQtWrapper_QFont::UltraCondensed),
    3235, uint(PythonQtWrapper_QFont::ExtraCondensed),
    3250, uint(PythonQtWrapper_QFont::Condensed),
    3260, uint(PythonQtWrapper_QFont::SemiCondensed),
    3274, uint(PythonQtWrapper_QFont::Unstretched),
    3286, uint(PythonQtWrapper_QFont::SemiExpanded),
    3299, uint(PythonQtWrapper_QFont::Expanded),
    3308, uint(PythonQtWrapper_QFont::ExtraExpanded),
    3322, uint(PythonQtWrapper_QFont::UltraExpanded),
    3336, uint(PythonQtWrapper_QFont::StyleNormal),
    3348, uint(PythonQtWrapper_QFont::StyleItalic),
    3360, uint(PythonQtWrapper_QFont::StyleOblique),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFont[] = {
    "PythonQtWrapper_QFont\0\0QFont*\0new_QFont()\0"
    "arg__1\0new_QFont(QFont)\0arg__1,pd\0"
    "new_QFont(QFont,QPaintDevice*)\0"
    "family,pointSize,weight,italic\0"
    "new_QFont(QString,int,int,bool)\0"
    "family,pointSize,weight\0"
    "new_QFont(QString,int,int)\0family,pointSize\0"
    "new_QFont(QString,int)\0family\0"
    "new_QFont(QString)\0obj\0delete_QFont(QFont*)\0"
    "bool\0theWrappedObject\0bold(QFont*)\0"
    "static_QFont_cacheStatistics()\0"
    "QFont::Capitalization\0capitalization(QFont*)\0"
    "static_QFont_cleanup()\0QString\0"
    "defaultFamily(QFont*)\0exactMatch(QFont*)\0"
    "family(QFont*)\0fixedPitch(QFont*)\0"
    "theWrappedObject,arg__1\0"
    "fromString(QFont*,QString)\0Qt::HANDLE\0"
    "handle(QFont*)\0QFont::HintingPreference\0"
    "hintingPreference(QFont*)\0"
    "static_QFont_initialize()\0arg__1,arg__2\0"
    "static_QFont_insertSubstitution(QString,QString)\0"
    "static_QFont_insertSubstitutions(QString,QStringList)\0"
    "isCopyOf(QFont*,QFont)\0italic(QFont*)\0"
    "kerning(QFont*)\0key(QFont*)\0"
    "lastResortFamily(QFont*)\0"
    "lastResortFont(QFont*)\0qreal\0"
    "letterSpacing(QFont*)\0QFont::SpacingType\0"
    "letterSpacingType(QFont*)\0"
    "__ne__(QFont*,QFont)\0__lt__(QFont*,QFont)\0"
    "writeTo(QFont*,QDataStream&)\0"
    "__eq__(QFont*,QFont)\0readFrom(QFont*,QDataStream&)\0"
    "overline(QFont*)\0int\0pixelSize(QFont*)\0"
    "pointSize(QFont*)\0pointSizeF(QFont*)\0"
    "rawMode(QFont*)\0rawName(QFont*)\0"
    "static_QFont_removeSubstitution(QString)\0"
    "uint\0resolve(QFont*)\0QFont\0"
    "resolve(QFont*,QFont)\0theWrappedObject,mask\0"
    "resolve(QFont*,uint)\0setBold(QFont*,bool)\0"
    "setCapitalization(QFont*,QFont::Capitalization)\0"
    "setFamily(QFont*,QString)\0"
    "setFixedPitch(QFont*,bool)\0"
    "theWrappedObject,hintingPreference\0"
    "setHintingPreference(QFont*,QFont::HintingPreference)\0"
    "theWrappedObject,b\0setItalic(QFont*,bool)\0"
    "setKerning(QFont*,bool)\0"
    "theWrappedObject,type,spacing\0"
    "setLetterSpacing(QFont*,QFont::SpacingType,qreal)\0"
    "setOverline(QFont*,bool)\0"
    "setPixelSize(QFont*,int)\0"
    "setPointSize(QFont*,int)\0"
    "setPointSizeF(QFont*,qreal)\0"
    "setRawMode(QFont*,bool)\0"
    "setRawName(QFont*,QString)\0"
    "setStretch(QFont*,int)\0setStrikeOut(QFont*,bool)\0"
    "theWrappedObject,style\0"
    "setStyle(QFont*,QFont::Style)\0"
    "theWrappedObject,arg__1,arg__2\0"
    "setStyleHint(QFont*,QFont::StyleHint,QFont::StyleStrategy)\0"
    "setStyleHint(QFont*,QFont::StyleHint)\0"
    "setStyleName(QFont*,QString)\0"
    "theWrappedObject,s\0"
    "setStyleStrategy(QFont*,QFont::StyleStrategy)\0"
    "setUnderline(QFont*,bool)\0"
    "setWeight(QFont*,int)\0theWrappedObject,spacing\0"
    "setWordSpacing(QFont*,qreal)\0"
    "stretch(QFont*)\0strikeOut(QFont*)\0"
    "QFont::Style\0style(QFont*)\0QFont::StyleHint\0"
    "styleHint(QFont*)\0styleName(QFont*)\0"
    "QFont::StyleStrategy\0styleStrategy(QFont*)\0"
    "static_QFont_substitute(QString)\0"
    "QStringList\0static_QFont_substitutes(QString)\0"
    "static_QFont_substitutions()\0"
    "toString(QFont*)\0underline(QFont*)\0"
    "weight(QFont*)\0wordSpacing(QFont*)\0"
    "py_toString(QFont*)\0HintingPreference\0"
    "StyleStrategy\0SpacingType\0StyleHint\0"
    "Weight\0Capitalization\0Stretch\0Style\0"
    "PreferDefaultHinting\0PreferNoHinting\0"
    "PreferVerticalHinting\0PreferFullHinting\0"
    "PreferDefault\0PreferBitmap\0PreferDevice\0"
    "PreferOutline\0ForceOutline\0PreferMatch\0"
    "PreferQuality\0PreferAntialias\0NoAntialias\0"
    "OpenGLCompatible\0ForceIntegerMetrics\0"
    "NoFontMerging\0PercentageSpacing\0"
    "AbsoluteSpacing\0Helvetica\0SansSerif\0"
    "Times\0Serif\0Courier\0TypeWriter\0"
    "OldEnglish\0Decorative\0System\0AnyStyle\0"
    "Cursive\0Monospace\0Fantasy\0Light\0Normal\0"
    "DemiBold\0Bold\0Black\0MixedCase\0"
    "AllUppercase\0AllLowercase\0SmallCaps\0"
    "Capitalize\0UltraCondensed\0ExtraCondensed\0"
    "Condensed\0SemiCondensed\0Unstretched\0"
    "SemiExpanded\0Expanded\0ExtraExpanded\0"
    "UltraExpanded\0StyleNormal\0StyleItalic\0"
    "StyleOblique\0"
};

void PythonQtWrapper_QFont::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFont *_t = static_cast<PythonQtWrapper_QFont *>(_o);
        switch (_id) {
        case 0: { QFont* _r = _t->new_QFont();
            if (_a[0]) *reinterpret_cast< QFont**>(_a[0]) = _r; }  break;
        case 1: { QFont* _r = _t->new_QFont((*reinterpret_cast< const QFont(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont**>(_a[0]) = _r; }  break;
        case 2: { QFont* _r = _t->new_QFont((*reinterpret_cast< const QFont(*)>(_a[1])),(*reinterpret_cast< QPaintDevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFont**>(_a[0]) = _r; }  break;
        case 3: { QFont* _r = _t->new_QFont((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QFont**>(_a[0]) = _r; }  break;
        case 4: { QFont* _r = _t->new_QFont((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QFont**>(_a[0]) = _r; }  break;
        case 5: { QFont* _r = _t->new_QFont((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFont**>(_a[0]) = _r; }  break;
        case 6: { QFont* _r = _t->new_QFont((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont**>(_a[0]) = _r; }  break;
        case 7: _t->delete_QFont((*reinterpret_cast< QFont*(*)>(_a[1]))); break;
        case 8: { bool _r = _t->bold((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->static_QFont_cacheStatistics(); break;
        case 10: { QFont::Capitalization _r = _t->capitalization((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::Capitalization*>(_a[0]) = _r; }  break;
        case 11: _t->static_QFont_cleanup(); break;
        case 12: { QString _r = _t->defaultFamily((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->exactMatch((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->family((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->fixedPitch((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->fromString((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { Qt::HANDLE _r = _t->handle((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::HANDLE*>(_a[0]) = _r; }  break;
        case 18: { QFont::HintingPreference _r = _t->hintingPreference((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::HintingPreference*>(_a[0]) = _r; }  break;
        case 19: _t->static_QFont_initialize(); break;
        case 20: _t->static_QFont_insertSubstitution((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 21: _t->static_QFont_insertSubstitutions((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 22: { bool _r = _t->isCopyOf((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->italic((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->kerning((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { QString _r = _t->key((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 26: { QString _r = _t->lastResortFamily((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 27: { QString _r = _t->lastResortFont((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 28: { qreal _r = _t->letterSpacing((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 29: { QFont::SpacingType _r = _t->letterSpacingType((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::SpacingType*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->__ne__((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->__lt__((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: _t->writeTo((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 33: { bool _r = _t->__eq__((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: _t->readFrom((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 35: { bool _r = _t->overline((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: { int _r = _t->pixelSize((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 37: { int _r = _t->pointSize((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 38: { qreal _r = _t->pointSizeF((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->rawMode((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { QString _r = _t->rawName((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 41: _t->static_QFont_removeSubstitution((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 42: { uint _r = _t->resolve((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 43: { QFont _r = _t->resolve((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 44: _t->resolve((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 45: _t->setBold((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 46: _t->setCapitalization((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< QFont::Capitalization(*)>(_a[2]))); break;
        case 47: _t->setFamily((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 48: _t->setFixedPitch((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 49: _t->setHintingPreference((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< QFont::HintingPreference(*)>(_a[2]))); break;
        case 50: _t->setItalic((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 51: _t->setKerning((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 52: _t->setLetterSpacing((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< QFont::SpacingType(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 53: _t->setOverline((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 54: _t->setPixelSize((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 55: _t->setPointSize((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 56: _t->setPointSizeF((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 57: _t->setRawMode((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 58: _t->setRawName((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 59: _t->setStretch((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 60: _t->setStrikeOut((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 61: _t->setStyle((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< QFont::Style(*)>(_a[2]))); break;
        case 62: _t->setStyleHint((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< QFont::StyleHint(*)>(_a[2])),(*reinterpret_cast< QFont::StyleStrategy(*)>(_a[3]))); break;
        case 63: _t->setStyleHint((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< QFont::StyleHint(*)>(_a[2]))); break;
        case 64: _t->setStyleName((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 65: _t->setStyleStrategy((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< QFont::StyleStrategy(*)>(_a[2]))); break;
        case 66: _t->setUnderline((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 67: _t->setWeight((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 68: _t->setWordSpacing((*reinterpret_cast< QFont*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 69: { int _r = _t->stretch((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 70: { bool _r = _t->strikeOut((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 71: { QFont::Style _r = _t->style((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::Style*>(_a[0]) = _r; }  break;
        case 72: { QFont::StyleHint _r = _t->styleHint((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::StyleHint*>(_a[0]) = _r; }  break;
        case 73: { QString _r = _t->styleName((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 74: { QFont::StyleStrategy _r = _t->styleStrategy((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::StyleStrategy*>(_a[0]) = _r; }  break;
        case 75: { QString _r = _t->static_QFont_substitute((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 76: { QStringList _r = _t->static_QFont_substitutes((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 77: { QStringList _r = _t->static_QFont_substitutions();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 78: { QString _r = _t->toString((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 79: { bool _r = _t->underline((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 80: { int _r = _t->weight((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 81: { qreal _r = _t->wordSpacing((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 82: { QString _r = _t->py_toString((*reinterpret_cast< QFont*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFont::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFont::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFont,
      qt_meta_data_PythonQtWrapper_QFont, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFont::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFont::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFont::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFont))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFont*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFont::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 83)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 83;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QIcon[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       2,  269, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   22,   23,   22, 0x0a,
      49,   42,   23,   22, 0x0a,
      73,   42,   23,   22, 0x0a,
     105,   99,   23,   22, 0x0a,
     129,  122,   23,   22, 0x0a,
     157,  148,   23,   22, 0x0a,
     180,  176,   22,   22, 0x0a,
     240,  207,  201,   22, 0x0a,
     317,  290,  201,   22, 0x2a,
     376,  354,  201,   22, 0x2a,
     443,  401,   22,   22, 0x0a,
     534,  498,   22,   22, 0x2a,
     607,  576,   22,   22, 0x2a,
     663,  637,   22,   22, 0x2a,
     722,  687,   22,   22, 0x0a,
     802,  773,   22,   22, 0x2a,
     864,  840,   22,   22, 0x2a,
     931,  903,  890,   22, 0x0a,
    1001,  979,  890,   22, 0x2a,
    1053, 1036,  890,   22, 0x2a,
    1083, 1036, 1076,   22, 0x0a,
    1120, 1106, 1100,   22, 0x0a,
    1163, 1158, 1100,   22, 0x2a,
    1200, 1158, 1195,   22, 0x0a,
    1235, 1036, 1195,   22, 0x0a,
    1258, 1036, 1250,   22, 0x0a,
    1295, 1271,   22,   22, 0x0a,
    1324, 1271,   22,   22, 0x0a,
    1405, 1354,   22,   22, 0x0a,
    1519, 1474,   22,   22, 0x2a,
    1615, 1575,   22,   22, 0x2a,
    1689, 1659,   22,   22, 0x2a,
    1773, 1719,   22,   22, 0x0a,
    1900, 1852,   22,   22, 0x2a,
    2009, 1966,   22,   22, 0x2a,
    2096, 2063,   22,   22, 0x2a,
    2144,  207, 2136,   22, 0x0a,
    2190,  290, 2136,   22, 0x2a,
    2223,  354, 2136,   22, 0x2a,
    2279, 2244, 2136,   22, 0x0a,
    2352, 2323, 2136,   22, 0x2a,
    2407, 2383, 2136,   22, 0x2a,
    2458, 2426, 2136,   22, 0x0a,
    2532, 2506, 2136,   22, 0x2a,
    2588, 2567, 2136,   22, 0x2a,
    2616, 2611,   22,   22, 0x0a,
    2662, 2651,   22,   22, 0x0a,
    2731, 2708,   22,   22, 0x0a,
    2751,   22, 1250,   22, 0x0a,
    2788,   22, 2776,   22, 0x0a,
    2820,  176, 1195,   22, 0x0a,

 // enums: name, flags, count, data
    2840, 0x0,    4,  277,
    2845, 0x0,    2,  285,

 // enum data: key, value
    2851, uint(PythonQtWrapper_QIcon::Normal),
    2858, uint(PythonQtWrapper_QIcon::Disabled),
    2867, uint(PythonQtWrapper_QIcon::Active),
    2874, uint(PythonQtWrapper_QIcon::Selected),
    2883, uint(PythonQtWrapper_QIcon::On),
    2886, uint(PythonQtWrapper_QIcon::Off),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QIcon[] = {
    "PythonQtWrapper_QIcon\0\0QIcon*\0new_QIcon()\0"
    "engine\0new_QIcon(QIconEngine*)\0"
    "new_QIcon(QIconEngineV2*)\0other\0"
    "new_QIcon(QIcon)\0pixmap\0new_QIcon(QPixmap)\0"
    "fileName\0new_QIcon(QString)\0obj\0"
    "delete_QIcon(QIcon*)\0QSize\0"
    "theWrappedObject,size,mode,state\0"
    "actualSize(QIcon*,QSize,QIcon::Mode,QIcon::State)\0"
    "theWrappedObject,size,mode\0"
    "actualSize(QIcon*,QSize,QIcon::Mode)\0"
    "theWrappedObject,size\0actualSize(QIcon*,QSize)\0"
    "theWrappedObject,fileName,size,mode,state\0"
    "addFile(QIcon*,QString,QSize,QIcon::Mode,QIcon::State)\0"
    "theWrappedObject,fileName,size,mode\0"
    "addFile(QIcon*,QString,QSize,QIcon::Mode)\0"
    "theWrappedObject,fileName,size\0"
    "addFile(QIcon*,QString,QSize)\0"
    "theWrappedObject,fileName\0"
    "addFile(QIcon*,QString)\0"
    "theWrappedObject,pixmap,mode,state\0"
    "addPixmap(QIcon*,QPixmap,QIcon::Mode,QIcon::State)\0"
    "theWrappedObject,pixmap,mode\0"
    "addPixmap(QIcon*,QPixmap,QIcon::Mode)\0"
    "theWrappedObject,pixmap\0"
    "addPixmap(QIcon*,QPixmap)\0QList<QSize>\0"
    "theWrappedObject,mode,state\0"
    "availableSizes(QIcon*,QIcon::Mode,QIcon::State)\0"
    "theWrappedObject,mode\0"
    "availableSizes(QIcon*,QIcon::Mode)\0"
    "theWrappedObject\0availableSizes(QIcon*)\0"
    "qint64\0cacheKey(QIcon*)\0QIcon\0"
    "name,fallback\0static_QIcon_fromTheme(QString,QIcon)\0"
    "name\0static_QIcon_fromTheme(QString)\0"
    "bool\0static_QIcon_hasThemeIcon(QString)\0"
    "isNull(QIcon*)\0QString\0name(QIcon*)\0"
    "theWrappedObject,arg__1\0"
    "writeTo(QIcon*,QDataStream&)\0"
    "readFrom(QIcon*,QDataStream&)\0"
    "theWrappedObject,painter,rect,alignment,mode,state\0"
    "paint(QIcon*,QPainter*,QRect,Qt::Alignment,QIcon::Mode,QIcon::State)\0"
    "theWrappedObject,painter,rect,alignment,mode\0"
    "paint(QIcon*,QPainter*,QRect,Qt::Alignment,QIcon::Mode)\0"
    "theWrappedObject,painter,rect,alignment\0"
    "paint(QIcon*,QPainter*,QRect,Qt::Alignment)\0"
    "theWrappedObject,painter,rect\0"
    "paint(QIcon*,QPainter*,QRect)\0"
    "theWrappedObject,painter,x,y,w,h,alignment,mode,state\0"
    "paint(QIcon*,QPainter*,int,int,int,int,Qt::Alignment,QIcon::Mode,QIcon"
    "::State)\0"
    "theWrappedObject,painter,x,y,w,h,alignment,mode\0"
    "paint(QIcon*,QPainter*,int,int,int,int,Qt::Alignment,QIcon::Mode)\0"
    "theWrappedObject,painter,x,y,w,h,alignment\0"
    "paint(QIcon*,QPainter*,int,int,int,int,Qt::Alignment)\0"
    "theWrappedObject,painter,x,y,w,h\0"
    "paint(QIcon*,QPainter*,int,int,int,int)\0"
    "QPixmap\0pixmap(QIcon*,QSize,QIcon::Mode,QIcon::State)\0"
    "pixmap(QIcon*,QSize,QIcon::Mode)\0"
    "pixmap(QIcon*,QSize)\0"
    "theWrappedObject,extent,mode,state\0"
    "pixmap(QIcon*,int,QIcon::Mode,QIcon::State)\0"
    "theWrappedObject,extent,mode\0"
    "pixmap(QIcon*,int,QIcon::Mode)\0"
    "theWrappedObject,extent\0pixmap(QIcon*,int)\0"
    "theWrappedObject,w,h,mode,state\0"
    "pixmap(QIcon*,int,int,QIcon::Mode,QIcon::State)\0"
    "theWrappedObject,w,h,mode\0"
    "pixmap(QIcon*,int,int,QIcon::Mode)\0"
    "theWrappedObject,w,h\0pixmap(QIcon*,int,int)\0"
    "path\0static_QIcon_setThemeName(QString)\0"
    "searchpath\0static_QIcon_setThemeSearchPaths(QStringList)\0"
    "theWrappedObject,other\0swap(QIcon*,QIcon&)\0"
    "static_QIcon_themeName()\0QStringList\0"
    "static_QIcon_themeSearchPaths()\0"
    "__nonzero__(QIcon*)\0Mode\0State\0Normal\0"
    "Disabled\0Active\0Selected\0On\0Off\0"
};

void PythonQtWrapper_QIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QIcon *_t = static_cast<PythonQtWrapper_QIcon *>(_o);
        switch (_id) {
        case 0: { QIcon* _r = _t->new_QIcon();
            if (_a[0]) *reinterpret_cast< QIcon**>(_a[0]) = _r; }  break;
        case 1: { QIcon* _r = _t->new_QIcon((*reinterpret_cast< QIconEngine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon**>(_a[0]) = _r; }  break;
        case 2: { QIcon* _r = _t->new_QIcon((*reinterpret_cast< QIconEngineV2*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon**>(_a[0]) = _r; }  break;
        case 3: { QIcon* _r = _t->new_QIcon((*reinterpret_cast< const QIcon(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon**>(_a[0]) = _r; }  break;
        case 4: { QIcon* _r = _t->new_QIcon((*reinterpret_cast< const QPixmap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon**>(_a[0]) = _r; }  break;
        case 5: { QIcon* _r = _t->new_QIcon((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QIcon((*reinterpret_cast< QIcon*(*)>(_a[1]))); break;
        case 7: { QSize _r = _t->actualSize((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< QIcon::Mode(*)>(_a[3])),(*reinterpret_cast< QIcon::State(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 8: { QSize _r = _t->actualSize((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< QIcon::Mode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 9: { QSize _r = _t->actualSize((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 10: _t->addFile((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QSize(*)>(_a[3])),(*reinterpret_cast< QIcon::Mode(*)>(_a[4])),(*reinterpret_cast< QIcon::State(*)>(_a[5]))); break;
        case 11: _t->addFile((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QSize(*)>(_a[3])),(*reinterpret_cast< QIcon::Mode(*)>(_a[4]))); break;
        case 12: _t->addFile((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QSize(*)>(_a[3]))); break;
        case 13: _t->addFile((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->addPixmap((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])),(*reinterpret_cast< QIcon::Mode(*)>(_a[3])),(*reinterpret_cast< QIcon::State(*)>(_a[4]))); break;
        case 15: _t->addPixmap((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])),(*reinterpret_cast< QIcon::Mode(*)>(_a[3]))); break;
        case 16: _t->addPixmap((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 17: { QList<QSize> _r = _t->availableSizes((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< QIcon::Mode(*)>(_a[2])),(*reinterpret_cast< QIcon::State(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QSize>*>(_a[0]) = _r; }  break;
        case 18: { QList<QSize> _r = _t->availableSizes((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< QIcon::Mode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QSize>*>(_a[0]) = _r; }  break;
        case 19: { QList<QSize> _r = _t->availableSizes((*reinterpret_cast< QIcon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSize>*>(_a[0]) = _r; }  break;
        case 20: { qint64 _r = _t->cacheKey((*reinterpret_cast< QIcon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 21: { QIcon _r = _t->static_QIcon_fromTheme((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 22: { QIcon _r = _t->static_QIcon_fromTheme((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->static_QIcon_hasThemeIcon((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->isNull((*reinterpret_cast< QIcon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { QString _r = _t->name((*reinterpret_cast< QIcon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 26: _t->writeTo((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 27: _t->readFrom((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 28: _t->paint((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3])),(*reinterpret_cast< Qt::Alignment(*)>(_a[4])),(*reinterpret_cast< QIcon::Mode(*)>(_a[5])),(*reinterpret_cast< QIcon::State(*)>(_a[6]))); break;
        case 29: _t->paint((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3])),(*reinterpret_cast< Qt::Alignment(*)>(_a[4])),(*reinterpret_cast< QIcon::Mode(*)>(_a[5]))); break;
        case 30: _t->paint((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3])),(*reinterpret_cast< Qt::Alignment(*)>(_a[4]))); break;
        case 31: _t->paint((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3]))); break;
        case 32: _t->paint((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< Qt::Alignment(*)>(_a[7])),(*reinterpret_cast< QIcon::Mode(*)>(_a[8])),(*reinterpret_cast< QIcon::State(*)>(_a[9]))); break;
        case 33: _t->paint((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< Qt::Alignment(*)>(_a[7])),(*reinterpret_cast< QIcon::Mode(*)>(_a[8]))); break;
        case 34: _t->paint((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< Qt::Alignment(*)>(_a[7]))); break;
        case 35: _t->paint((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 36: { QPixmap _r = _t->pixmap((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< QIcon::Mode(*)>(_a[3])),(*reinterpret_cast< QIcon::State(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 37: { QPixmap _r = _t->pixmap((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< QIcon::Mode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 38: { QPixmap _r = _t->pixmap((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 39: { QPixmap _r = _t->pixmap((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QIcon::Mode(*)>(_a[3])),(*reinterpret_cast< QIcon::State(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 40: { QPixmap _r = _t->pixmap((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QIcon::Mode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 41: { QPixmap _r = _t->pixmap((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 42: { QPixmap _r = _t->pixmap((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QIcon::Mode(*)>(_a[4])),(*reinterpret_cast< QIcon::State(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 43: { QPixmap _r = _t->pixmap((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QIcon::Mode(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 44: { QPixmap _r = _t->pixmap((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 45: _t->static_QIcon_setThemeName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 46: _t->static_QIcon_setThemeSearchPaths((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 47: _t->swap((*reinterpret_cast< QIcon*(*)>(_a[1])),(*reinterpret_cast< QIcon(*)>(_a[2]))); break;
        case 48: { QString _r = _t->static_QIcon_themeName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 49: { QStringList _r = _t->static_QIcon_themeSearchPaths();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 50: { bool _r = _t->__nonzero__((*reinterpret_cast< QIcon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QIcon::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QIcon::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QIcon,
      qt_meta_data_PythonQtWrapper_QIcon, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QIcon::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QIcon))
        return static_cast<void*>(const_cast< PythonQtWrapper_QIcon*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QImage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
     112,   14, // methods
       0,    0, // properties
       2,  574, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   23,   24,   23, 0x0a,
      52,   45,   24,   23, 0x0a,
      83,   71,   24,   23, 0x0a,
     132,  116,   24,   23, 0x0a,
     173,  164,   24,   23, 0x2a,
     213,  193,   24,   23, 0x0a,
     252,  248,   23,   23, 0x0a,
     297,  280,  275,   23, 0x0a,
     321,  280,  314,   23, 0x0a,
     347,  280,  343,   23, 0x0a,
     370,  280,  343,   23, 0x0a,
     389,  280,  343,   23, 0x0a,
     418,  280,  411,   23, 0x0a,
     460,  441,  436,   23, 0x0a,
     479,  280,  343,   23, 0x0a,
     513,  280,  499,   23, 0x0a,
     546,  280,  533,   23, 0x0a,
     589,  565,  533,   23, 0x0a,
     641,  616,  314,   23, 0x0a,
     725,  706,  314,   23, 0x2a,
     801,  765,  314,   23, 0x0a,
     910,  880,  314,   23, 0x2a,
     986,  964,  314,   23, 0x0a,
    1006,  280,  314,   23, 0x2a,
    1045, 1020,  314,   23, 0x0a,
    1098, 1075,  314,   23, 0x0a,
    1148,  280,  314,   23, 0x2a,
    1200, 1173,  314,   23, 0x0a,
    1234,  280,  314,   23, 0x2a,
    1291, 1263,  314,   23, 0x0a,
    1361, 1338,  314,   23, 0x2a,
    1395,  280,  343,   23, 0x0a,
    1410,  280,  343,   23, 0x0a,
    1427,  280,  343,   23, 0x0a,
    1450,  280,  343,   23, 0x0a,
    1473, 1338,   23,   23, 0x0a,
    1503, 1338,   23,   23, 0x0a,
    1547, 1524,   23,   23, 0x0a,
    1581,  280, 1566,   23, 0x0a,
    1609, 1597,  314,   23, 0x0a,
    1661, 1656,  314,   23, 0x2a,
    1696,  280,  275,   23, 0x0a,
    1721,  280,  343,   23, 0x0a,
    1737,  565,   23,   23, 0x0a,
    1778,  280,   23,   23, 0x2a,
    1800,  280,  275,   23, 0x0a,
    1821,  280,  275,   23, 0x0a,
    1868, 1837,  275,   23, 0x0a,
    1938, 1905,  275,   23, 0x0a,
    1998, 1972,  275,   23, 0x2a,
    2050, 2020,  275,   23, 0x0a,
    2117, 2095,  275,   23, 0x2a,
    2174, 2150,  343,   23, 0x0a,
    2263, 2222,  314,   23, 0x0a,
    2321, 2291,  314,   23, 0x2a,
    2344,  280,  314,   23, 0x2a,
    2362,  280,  343,   23, 0x0a,
    2380,  280,  343,   23, 0x0a,
    2406,  280, 2399,   23, 0x0a,
    2422,  565,  275,   23, 0x0a,
    2445,  565,   23,   23, 0x0a,
    2475,  565,  275,   23, 0x0a,
    2498,  565,   23,   23, 0x0a,
    2543,  280, 2529,   23, 0x0a,
    2584, 2564,  436,   23, 0x0a,
    2627, 2606,  436,   23, 0x0a,
    2650, 2564,  343,   23, 0x0a,
    2677, 2606,  343,   23, 0x0a,
    2711,  280, 2705,   23, 0x0a,
    2725,  280,  314,   23, 0x0a,
    2784, 2745,  275,   23, 0x0a,
    2825, 1837,  275,   23, 0x2a,
    2886, 2862,  275,   23, 0x2a,
    2952, 2911,  275,   23, 0x0a,
    2990, 1905,  275,   23, 0x2a,
    3024, 1972,  275,   23, 0x2a,
    3081, 3046,  314,   23, 0x0a,
    3176, 3146,  314,   23, 0x2a,
    3237, 3218,  314,   23, 0x2a,
    3296, 3259,  314,   23, 0x0a,
    3395, 3363,  314,   23, 0x2a,
    3460, 3439,  314,   23, 0x2a,
    3508, 3484,  314,   23, 0x0a,
    3578, 3559,  314,   23, 0x2a,
    3630, 3606,  314,   23, 0x0a,
    3699, 3680,  314,   23, 0x2a,
    3756, 3726,   23,   23, 0x0a,
    3809, 3788,   23,   23, 0x0a,
    3836,  565,   23,   23, 0x0a,
    3863,  565,   23,   23, 0x0a,
    3893,  565,   23,   23, 0x0a,
    3923,  565,   23,   23, 0x0a,
    3949,  565,   23,   23, 0x0a,
    4008, 3975,   23,   23, 0x0a,
    4072, 4038,   23,   23, 0x0a,
    4130, 4103,   23,   23, 0x0a,
    4169,  280, 4163,   23, 0x0a,
    4206, 4183,   23,   23, 0x0a,
    4257, 4236, 4228,   23, 0x0a,
    4279,  280, 4228,   23, 0x2a,
    4305,  280, 4293,   23, 0x0a,
    4352, 4323,  314,   23, 0x0a,
    4428, 4404,  314,   23, 0x2a,
    4457, 4323,  314,   23, 0x0a,
    4512, 4404,  314,   23, 0x2a,
    4563, 4552, 4544,   23, 0x0a,
    4616, 4552, 4605,   23, 0x0a,
    4661, 2564,  275,   23, 0x0a,
    4683, 2606,  275,   23, 0x0a,
    4706,  280,  343,   23, 0x0a,
    4721,  248,  275,   23, 0x0a,
    4767, 4742,   24,   23, 0x0a,

 // enums: name, flags, count, data
    4815, 0x0,    2,  582,
    4826, 0x0,   17,  586,

 // enum data: key, value
    4833, uint(PythonQtWrapper_QImage::InvertRgb),
    4843, uint(PythonQtWrapper_QImage::InvertRgba),
    4854, uint(PythonQtWrapper_QImage::Format_Invalid),
    4869, uint(PythonQtWrapper_QImage::Format_Mono),
    4881, uint(PythonQtWrapper_QImage::Format_MonoLSB),
    4896, uint(PythonQtWrapper_QImage::Format_Indexed8),
    4912, uint(PythonQtWrapper_QImage::Format_RGB32),
    4925, uint(PythonQtWrapper_QImage::Format_ARGB32),
    4939, uint(PythonQtWrapper_QImage::Format_ARGB32_Premultiplied),
    4967, uint(PythonQtWrapper_QImage::Format_RGB16),
    4980, uint(PythonQtWrapper_QImage::Format_ARGB8565_Premultiplied),
    5010, uint(PythonQtWrapper_QImage::Format_RGB666),
    5024, uint(PythonQtWrapper_QImage::Format_ARGB6666_Premultiplied),
    5054, uint(PythonQtWrapper_QImage::Format_RGB555),
    5068, uint(PythonQtWrapper_QImage::Format_ARGB8555_Premultiplied),
    5098, uint(PythonQtWrapper_QImage::Format_RGB888),
    5112, uint(PythonQtWrapper_QImage::Format_RGB444),
    5126, uint(PythonQtWrapper_QImage::Format_ARGB4444_Premultiplied),
    5156, uint(PythonQtWrapper_QImage::NImageFormats),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QImage[] = {
    "PythonQtWrapper_QImage\0\0QImage*\0"
    "new_QImage()\0arg__1\0new_QImage(QImage)\0"
    "size,format\0new_QImage(QSize,QImage::Format)\0"
    "fileName,format\0new_QImage(QString,const char*)\0"
    "fileName\0new_QImage(QString)\0"
    "width,height,format\0"
    "new_QImage(int,int,QImage::Format)\0"
    "obj\0delete_QImage(QImage*)\0bool\0"
    "theWrappedObject\0allGray(QImage*)\0"
    "QImage\0alphaChannel(QImage*)\0int\0"
    "bitPlaneCount(QImage*)\0byteCount(QImage*)\0"
    "bytesPerLine(QImage*)\0qint64\0"
    "cacheKey(QImage*)\0uint\0theWrappedObject,i\0"
    "color(QImage*,int)\0colorCount(QImage*)\0"
    "QVector<uint>\0colorTable(QImage*)\0"
    "const uchar*\0constBits(QImage*)\0"
    "theWrappedObject,arg__1\0"
    "constScanLine(QImage*,int)\0"
    "theWrappedObject,f,flags\0"
    "convertToFormat(QImage*,QImage::Format,Qt::ImageConversionFlags)\0"
    "theWrappedObject,f\0"
    "convertToFormat(QImage*,QImage::Format)\0"
    "theWrappedObject,f,colorTable,flags\0"
    "convertToFormat(QImage*,QImage::Format,QVector<uint>,Qt::ImageConversi"
    "onFlags)\0"
    "theWrappedObject,f,colorTable\0"
    "convertToFormat(QImage*,QImage::Format,QVector<uint>)\0"
    "theWrappedObject,rect\0copy(QImage*,QRect)\0"
    "copy(QImage*)\0theWrappedObject,x,y,w,h\0"
    "copy(QImage*,int,int,int,int)\0"
    "theWrappedObject,flags\0"
    "createAlphaMask(QImage*,Qt::ImageConversionFlags)\0"
    "createAlphaMask(QImage*)\0"
    "theWrappedObject,clipTight\0"
    "createHeuristicMask(QImage*,bool)\0"
    "createHeuristicMask(QImage*)\0"
    "theWrappedObject,color,mode\0"
    "createMaskFromColor(QImage*,uint,Qt::MaskMode)\0"
    "theWrappedObject,color\0"
    "createMaskFromColor(QImage*,uint)\0"
    "depth(QImage*)\0devType(QImage*)\0"
    "dotsPerMeterX(QImage*)\0dotsPerMeterY(QImage*)\0"
    "fill(QImage*,Qt::GlobalColor)\0"
    "fill(QImage*,QColor)\0theWrappedObject,pixel\0"
    "fill(QImage*,uint)\0QImage::Format\0"
    "format(QImage*)\0data,format\0"
    "static_QImage_fromData(QByteArray,const char*)\0"
    "data\0static_QImage_fromData(QByteArray)\0"
    "hasAlphaChannel(QImage*)\0height(QImage*)\0"
    "invertPixels(QImage*,QImage::InvertMode)\0"
    "invertPixels(QImage*)\0isGrayscale(QImage*)\0"
    "isNull(QImage*)\0theWrappedObject,device,format\0"
    "load(QImage*,QIODevice*,const char*)\0"
    "theWrappedObject,fileName,format\0"
    "load(QImage*,QString,const char*)\0"
    "theWrappedObject,fileName\0"
    "load(QImage*,QString)\0"
    "theWrappedObject,data,aformat\0"
    "loadFromData(QImage*,QByteArray,const char*)\0"
    "theWrappedObject,data\0"
    "loadFromData(QImage*,QByteArray)\0"
    "theWrappedObject,metric\0"
    "metric(QImage*,QPaintDevice::PaintDeviceMetric)\0"
    "theWrappedObject,horizontally,vertically\0"
    "mirrored(QImage*,bool,bool)\0"
    "theWrappedObject,horizontally\0"
    "mirrored(QImage*,bool)\0mirrored(QImage*)\0"
    "numBytes(QImage*)\0numColors(QImage*)\0"
    "QPoint\0offset(QImage*)\0__ne__(QImage*,QImage)\0"
    "writeTo(QImage*,QDataStream&)\0"
    "__eq__(QImage*,QImage)\0"
    "readFrom(QImage*,QDataStream&)\0"
    "QPaintEngine*\0paintEngine(QImage*)\0"
    "theWrappedObject,pt\0pixel(QImage*,QPoint)\0"
    "theWrappedObject,x,y\0pixel(QImage*,int,int)\0"
    "pixelIndex(QImage*,QPoint)\0"
    "pixelIndex(QImage*,int,int)\0QRect\0"
    "rect(QImage*)\0rgbSwapped(QImage*)\0"
    "theWrappedObject,device,format,quality\0"
    "save(QImage*,QIODevice*,const char*,int)\0"
    "save(QImage*,QIODevice*,const char*)\0"
    "theWrappedObject,device\0"
    "save(QImage*,QIODevice*)\0"
    "theWrappedObject,fileName,format,quality\0"
    "save(QImage*,QString,const char*,int)\0"
    "save(QImage*,QString,const char*)\0"
    "save(QImage*,QString)\0"
    "theWrappedObject,s,aspectMode,mode\0"
    "scaled(QImage*,QSize,Qt::AspectRatioMode,Qt::TransformationMode)\0"
    "theWrappedObject,s,aspectMode\0"
    "scaled(QImage*,QSize,Qt::AspectRatioMode)\0"
    "theWrappedObject,s\0scaled(QImage*,QSize)\0"
    "theWrappedObject,w,h,aspectMode,mode\0"
    "scaled(QImage*,int,int,Qt::AspectRatioMode,Qt::TransformationMode)\0"
    "theWrappedObject,w,h,aspectMode\0"
    "scaled(QImage*,int,int,Qt::AspectRatioMode)\0"
    "theWrappedObject,w,h\0scaled(QImage*,int,int)\0"
    "theWrappedObject,h,mode\0"
    "scaledToHeight(QImage*,int,Qt::TransformationMode)\0"
    "theWrappedObject,h\0scaledToHeight(QImage*,int)\0"
    "theWrappedObject,w,mode\0"
    "scaledToWidth(QImage*,int,Qt::TransformationMode)\0"
    "theWrappedObject,w\0scaledToWidth(QImage*,int)\0"
    "theWrappedObject,alphaChannel\0"
    "setAlphaChannel(QImage*,QImage)\0"
    "theWrappedObject,i,c\0setColor(QImage*,int,uint)\0"
    "setColorCount(QImage*,int)\0"
    "setDotsPerMeterX(QImage*,int)\0"
    "setDotsPerMeterY(QImage*,int)\0"
    "setNumColors(QImage*,int)\0"
    "setOffset(QImage*,QPoint)\0"
    "theWrappedObject,pt,index_or_rgb\0"
    "setPixel(QImage*,QPoint,uint)\0"
    "theWrappedObject,x,y,index_or_rgb\0"
    "setPixel(QImage*,int,int,uint)\0"
    "theWrappedObject,key,value\0"
    "setText(QImage*,QString,QString)\0QSize\0"
    "size(QImage*)\0theWrappedObject,other\0"
    "swap(QImage*,QImage&)\0QString\0"
    "theWrappedObject,key\0text(QImage*,QString)\0"
    "text(QImage*)\0QStringList\0textKeys(QImage*)\0"
    "theWrappedObject,matrix,mode\0"
    "transformed(QImage*,QMatrix,Qt::TransformationMode)\0"
    "theWrappedObject,matrix\0"
    "transformed(QImage*,QMatrix)\0"
    "transformed(QImage*,QTransform,Qt::TransformationMode)\0"
    "transformed(QImage*,QTransform)\0QMatrix\0"
    "arg__1,w,h\0static_QImage_trueMatrix(QMatrix,int,int)\0"
    "QTransform\0static_QImage_trueMatrix(QTransform,int,int)\0"
    "valid(QImage*,QPoint)\0valid(QImage*,int,int)\0"
    "width(QImage*)\0__nonzero__(QImage*)\0"
    "data,width,height,format\0"
    "new_QImage(const uchar*,int,int,QImage::Format)\0"
    "InvertMode\0Format\0InvertRgb\0InvertRgba\0"
    "Format_Invalid\0Format_Mono\0Format_MonoLSB\0"
    "Format_Indexed8\0Format_RGB32\0Format_ARGB32\0"
    "Format_ARGB32_Premultiplied\0Format_RGB16\0"
    "Format_ARGB8565_Premultiplied\0"
    "Format_RGB666\0Format_ARGB6666_Premultiplied\0"
    "Format_RGB555\0Format_ARGB8555_Premultiplied\0"
    "Format_RGB888\0Format_RGB444\0"
    "Format_ARGB4444_Premultiplied\0"
    "NImageFormats\0"
};

void PythonQtWrapper_QImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QImage *_t = static_cast<PythonQtWrapper_QImage *>(_o);
        switch (_id) {
        case 0: { QImage* _r = _t->new_QImage();
            if (_a[0]) *reinterpret_cast< QImage**>(_a[0]) = _r; }  break;
        case 1: { QImage* _r = _t->new_QImage((*reinterpret_cast< const QImage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage**>(_a[0]) = _r; }  break;
        case 2: { QImage* _r = _t->new_QImage((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< QImage::Format(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage**>(_a[0]) = _r; }  break;
        case 3: { QImage* _r = _t->new_QImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage**>(_a[0]) = _r; }  break;
        case 4: { QImage* _r = _t->new_QImage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage**>(_a[0]) = _r; }  break;
        case 5: { QImage* _r = _t->new_QImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QImage::Format(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QImage**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QImage((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 7: { bool _r = _t->allGray((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QImage _r = _t->alphaChannel((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->bitPlaneCount((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->byteCount((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->bytesPerLine((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { qint64 _r = _t->cacheKey((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 13: { uint _r = _t->color((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->colorCount((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { QVector<uint> _r = _t->colorTable((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<uint>*>(_a[0]) = _r; }  break;
        case 16: { const uchar* _r = _t->constBits((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const uchar**>(_a[0]) = _r; }  break;
        case 17: { const uchar* _r = _t->constScanLine((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< const uchar**>(_a[0]) = _r; }  break;
        case 18: { QImage _r = _t->convertToFormat((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< QImage::Format(*)>(_a[2])),(*reinterpret_cast< Qt::ImageConversionFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 19: { QImage _r = _t->convertToFormat((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< QImage::Format(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 20: { QImage _r = _t->convertToFormat((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< QImage::Format(*)>(_a[2])),(*reinterpret_cast< const QVector<uint>(*)>(_a[3])),(*reinterpret_cast< Qt::ImageConversionFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 21: { QImage _r = _t->convertToFormat((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< QImage::Format(*)>(_a[2])),(*reinterpret_cast< const QVector<uint>(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 22: { QImage _r = _t->copy((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 23: { QImage _r = _t->copy((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 24: { QImage _r = _t->copy((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 25: { QImage _r = _t->createAlphaMask((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< Qt::ImageConversionFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 26: { QImage _r = _t->createAlphaMask((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 27: { QImage _r = _t->createHeuristicMask((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 28: { QImage _r = _t->createHeuristicMask((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 29: { QImage _r = _t->createMaskFromColor((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< Qt::MaskMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 30: { QImage _r = _t->createMaskFromColor((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 31: { int _r = _t->depth((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 32: { int _r = _t->devType((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 33: { int _r = _t->dotsPerMeterX((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 34: { int _r = _t->dotsPerMeterY((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 35: _t->fill((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< Qt::GlobalColor(*)>(_a[2]))); break;
        case 36: _t->fill((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 37: _t->fill((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 38: { QImage::Format _r = _t->format((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage::Format*>(_a[0]) = _r; }  break;
        case 39: { QImage _r = _t->static_QImage_fromData((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 40: { QImage _r = _t->static_QImage_fromData((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 41: { bool _r = _t->hasAlphaChannel((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: { int _r = _t->height((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 43: _t->invertPixels((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< QImage::InvertMode(*)>(_a[2]))); break;
        case 44: _t->invertPixels((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 45: { bool _r = _t->isGrayscale((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->isNull((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: { bool _r = _t->load((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { bool _r = _t->load((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->load((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: { bool _r = _t->loadFromData((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 51: { bool _r = _t->loadFromData((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 52: { int _r = _t->metric((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< QPaintDevice::PaintDeviceMetric(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 53: { QImage _r = _t->mirrored((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 54: { QImage _r = _t->mirrored((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 55: { QImage _r = _t->mirrored((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 56: { int _r = _t->numBytes((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 57: { int _r = _t->numColors((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 58: { QPoint _r = _t->offset((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 59: { bool _r = _t->__ne__((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 60: _t->writeTo((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 61: { bool _r = _t->__eq__((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 62: _t->readFrom((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 63: { QPaintEngine* _r = _t->paintEngine((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPaintEngine**>(_a[0]) = _r; }  break;
        case 64: { uint _r = _t->pixel((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 65: { uint _r = _t->pixel((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 66: { int _r = _t->pixelIndex((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 67: { int _r = _t->pixelIndex((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 68: { QRect _r = _t->rect((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 69: { QImage _r = _t->rgbSwapped((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 70: { bool _r = _t->save((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 71: { bool _r = _t->save((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 72: { bool _r = _t->save((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 73: { bool _r = _t->save((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 74: { bool _r = _t->save((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 75: { bool _r = _t->save((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 76: { QImage _r = _t->scaled((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< Qt::AspectRatioMode(*)>(_a[3])),(*reinterpret_cast< Qt::TransformationMode(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 77: { QImage _r = _t->scaled((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< Qt::AspectRatioMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 78: { QImage _r = _t->scaled((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 79: { QImage _r = _t->scaled((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< Qt::AspectRatioMode(*)>(_a[4])),(*reinterpret_cast< Qt::TransformationMode(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 80: { QImage _r = _t->scaled((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< Qt::AspectRatioMode(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 81: { QImage _r = _t->scaled((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 82: { QImage _r = _t->scaledToHeight((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::TransformationMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 83: { QImage _r = _t->scaledToHeight((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 84: { QImage _r = _t->scaledToWidth((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::TransformationMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 85: { QImage _r = _t->scaledToWidth((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 86: _t->setAlphaChannel((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 87: _t->setColor((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 88: _t->setColorCount((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 89: _t->setDotsPerMeterX((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 90: _t->setDotsPerMeterY((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 91: _t->setNumColors((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 92: _t->setOffset((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 93: _t->setPixel((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 94: _t->setPixel((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 95: _t->setText((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 96: { QSize _r = _t->size((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 97: _t->swap((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 98: { QString _r = _t->text((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 99: { QString _r = _t->text((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 100: { QStringList _r = _t->textKeys((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 101: { QImage _r = _t->transformed((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QMatrix(*)>(_a[2])),(*reinterpret_cast< Qt::TransformationMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 102: { QImage _r = _t->transformed((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QMatrix(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 103: { QImage _r = _t->transformed((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])),(*reinterpret_cast< Qt::TransformationMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 104: { QImage _r = _t->transformed((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 105: { QMatrix _r = _t->static_QImage_trueMatrix((*reinterpret_cast< const QMatrix(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QMatrix*>(_a[0]) = _r; }  break;
        case 106: { QTransform _r = _t->static_QImage_trueMatrix((*reinterpret_cast< const QTransform(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 107: { bool _r = _t->valid((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 108: { bool _r = _t->valid((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 109: { int _r = _t->width((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 110: { bool _r = _t->__nonzero__((*reinterpret_cast< QImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 111: { QImage* _r = _t->new_QImage((*reinterpret_cast< const uchar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QImage::Format(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QImage**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QImage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QImage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QImage,
      qt_meta_data_PythonQtWrapper_QImage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QImage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QImage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QImage))
        return static_cast<void*>(const_cast< PythonQtWrapper_QImage*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 112)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 112;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QKeySequence[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       3,  169, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   29,   30,   29, 0x0a,
      67,   63,   30,   29, 0x0a,
     114,  111,   30,   29, 0x0a,
     145,   63,   30,   29, 0x0a,
     182,  171,   30,   29, 0x0a,
     249,  237,   30,   29, 0x0a,
     292,  283,   30,   29, 0x2a,
     328,  322,   30,   29, 0x2a,
     357,  354,   30,   29, 0x2a,
     383,  379,   29,   29, 0x0a,
     440,  423,  418,   29, 0x0a,
     485,  474,  461,   29, 0x0a,
     558,  554,  461,   29, 0x2a,
     603,  423,  598,   29, 0x0a,
     646,   63,  626,   29, 0x0a,
     754,  733,  705,   29, 0x0a,
     795,  790,  461,   29, 0x0a,
     837,  423,  833,   29, 0x0a,
     893,  870,  598,   29, 0x0a,
     948,  928,  598,   29, 0x0a,
    1003,  983,   29,   29, 0x0a,
    1039,  870,  598,   29, 0x0a,
    1074,  870,  598,   29, 0x0a,
    1109,  870,  598,   29, 0x0a,
    1144,  870,  598,   29, 0x0a,
    1200, 1179,   29,   29, 0x0a,
    1256, 1237,  833,   29, 0x0a,
    1295,  870,   29,   29, 0x0a,
    1361, 1337, 1329,   29, 0x0a,
    1414,  423, 1329,   29, 0x2a,
    1438,   29, 1329,   29, 0x0a,

 // enums: name, flags, count, data
    1465, 0x0,    2,  181,
    1480, 0x0,   66,  185,
    1492, 0x0,    3,  317,

 // enum data: key, value
    1506, uint(PythonQtWrapper_QKeySequence::NativeText),
    1517, uint(PythonQtWrapper_QKeySequence::PortableText),
    1530, uint(PythonQtWrapper_QKeySequence::UnknownKey),
    1541, uint(PythonQtWrapper_QKeySequence::HelpContents),
    1554, uint(PythonQtWrapper_QKeySequence::WhatsThis),
    1564, uint(PythonQtWrapper_QKeySequence::Open),
    1569, uint(PythonQtWrapper_QKeySequence::Close),
    1575, uint(PythonQtWrapper_QKeySequence::Save),
    1580, uint(PythonQtWrapper_QKeySequence::New),
    1584, uint(PythonQtWrapper_QKeySequence::Delete),
    1591, uint(PythonQtWrapper_QKeySequence::Cut),
    1595, uint(PythonQtWrapper_QKeySequence::Copy),
    1600, uint(PythonQtWrapper_QKeySequence::Paste),
    1606, uint(PythonQtWrapper_QKeySequence::Undo),
    1611, uint(PythonQtWrapper_QKeySequence::Redo),
    1616, uint(PythonQtWrapper_QKeySequence::Back),
    1621, uint(PythonQtWrapper_QKeySequence::Forward),
    1629, uint(PythonQtWrapper_QKeySequence::Refresh),
    1637, uint(PythonQtWrapper_QKeySequence::ZoomIn),
    1644, uint(PythonQtWrapper_QKeySequence::ZoomOut),
    1652, uint(PythonQtWrapper_QKeySequence::Print),
    1658, uint(PythonQtWrapper_QKeySequence::AddTab),
    1665, uint(PythonQtWrapper_QKeySequence::NextChild),
    1675, uint(PythonQtWrapper_QKeySequence::PreviousChild),
    1689, uint(PythonQtWrapper_QKeySequence::Find),
    1694, uint(PythonQtWrapper_QKeySequence::FindNext),
    1703, uint(PythonQtWrapper_QKeySequence::FindPrevious),
    1716, uint(PythonQtWrapper_QKeySequence::Replace),
    1724, uint(PythonQtWrapper_QKeySequence::SelectAll),
    1734, uint(PythonQtWrapper_QKeySequence::Bold),
    1739, uint(PythonQtWrapper_QKeySequence::Italic),
    1746, uint(PythonQtWrapper_QKeySequence::Underline),
    1756, uint(PythonQtWrapper_QKeySequence::MoveToNextChar),
    1771, uint(PythonQtWrapper_QKeySequence::MoveToPreviousChar),
    1790, uint(PythonQtWrapper_QKeySequence::MoveToNextWord),
    1805, uint(PythonQtWrapper_QKeySequence::MoveToPreviousWord),
    1824, uint(PythonQtWrapper_QKeySequence::MoveToNextLine),
    1839, uint(PythonQtWrapper_QKeySequence::MoveToPreviousLine),
    1858, uint(PythonQtWrapper_QKeySequence::MoveToNextPage),
    1873, uint(PythonQtWrapper_QKeySequence::MoveToPreviousPage),
    1892, uint(PythonQtWrapper_QKeySequence::MoveToStartOfLine),
    1910, uint(PythonQtWrapper_QKeySequence::MoveToEndOfLine),
    1926, uint(PythonQtWrapper_QKeySequence::MoveToStartOfBlock),
    1945, uint(PythonQtWrapper_QKeySequence::MoveToEndOfBlock),
    1962, uint(PythonQtWrapper_QKeySequence::MoveToStartOfDocument),
    1984, uint(PythonQtWrapper_QKeySequence::MoveToEndOfDocument),
    2004, uint(PythonQtWrapper_QKeySequence::SelectNextChar),
    2019, uint(PythonQtWrapper_QKeySequence::SelectPreviousChar),
    2038, uint(PythonQtWrapper_QKeySequence::SelectNextWord),
    2053, uint(PythonQtWrapper_QKeySequence::SelectPreviousWord),
    2072, uint(PythonQtWrapper_QKeySequence::SelectNextLine),
    2087, uint(PythonQtWrapper_QKeySequence::SelectPreviousLine),
    2106, uint(PythonQtWrapper_QKeySequence::SelectNextPage),
    2121, uint(PythonQtWrapper_QKeySequence::SelectPreviousPage),
    2140, uint(PythonQtWrapper_QKeySequence::SelectStartOfLine),
    2158, uint(PythonQtWrapper_QKeySequence::SelectEndOfLine),
    2174, uint(PythonQtWrapper_QKeySequence::SelectStartOfBlock),
    2193, uint(PythonQtWrapper_QKeySequence::SelectEndOfBlock),
    2210, uint(PythonQtWrapper_QKeySequence::SelectStartOfDocument),
    2232, uint(PythonQtWrapper_QKeySequence::SelectEndOfDocument),
    2252, uint(PythonQtWrapper_QKeySequence::DeleteStartOfWord),
    2270, uint(PythonQtWrapper_QKeySequence::DeleteEndOfWord),
    2286, uint(PythonQtWrapper_QKeySequence::DeleteEndOfLine),
    2302, uint(PythonQtWrapper_QKeySequence::InsertParagraphSeparator),
    2327, uint(PythonQtWrapper_QKeySequence::InsertLineSeparator),
    2347, uint(PythonQtWrapper_QKeySequence::SaveAs),
    2354, uint(PythonQtWrapper_QKeySequence::Preferences),
    2366, uint(PythonQtWrapper_QKeySequence::Quit),
    2371, uint(PythonQtWrapper_QKeySequence::NoMatch),
    2379, uint(PythonQtWrapper_QKeySequence::PartialMatch),
    2392, uint(PythonQtWrapper_QKeySequence::ExactMatch),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QKeySequence[] = {
    "PythonQtWrapper_QKeySequence\0\0"
    "QKeySequence*\0new_QKeySequence()\0key\0"
    "new_QKeySequence(QKeySequence::StandardKey)\0"
    "ks\0new_QKeySequence(QKeySequence)\0"
    "new_QKeySequence(QString)\0key,format\0"
    "new_QKeySequence(QString,QKeySequence::SequenceFormat)\0"
    "k1,k2,k3,k4\0new_QKeySequence(int,int,int,int)\0"
    "k1,k2,k3\0new_QKeySequence(int,int,int)\0"
    "k1,k2\0new_QKeySequence(int,int)\0k1\0"
    "new_QKeySequence(int)\0obj\0"
    "delete_QKeySequence(QKeySequence*)\0"
    "uint\0theWrappedObject\0count(QKeySequence*)\0"
    "QKeySequence\0str,format\0"
    "static_QKeySequence_fromString(QString,QKeySequence::SequenceFormat)\0"
    "str\0static_QKeySequence_fromString(QString)\0"
    "bool\0isEmpty(QKeySequence*)\0"
    "QList<QKeySequence>\0"
    "static_QKeySequence_keyBindings(QKeySequence::StandardKey)\0"
    "QKeySequence::SequenceMatch\0"
    "theWrappedObject,seq\0"
    "matches(QKeySequence*,QKeySequence)\0"
    "text\0static_QKeySequence_mnemonic(QString)\0"
    "int\0operator_cast_int(QKeySequence*)\0"
    "theWrappedObject,other\0"
    "__ne__(QKeySequence*,QKeySequence)\0"
    "theWrappedObject,ks\0"
    "__lt__(QKeySequence*,QKeySequence)\0"
    "theWrappedObject,in\0"
    "writeTo(QKeySequence*,QDataStream&)\0"
    "__le__(QKeySequence*,QKeySequence)\0"
    "__eq__(QKeySequence*,QKeySequence)\0"
    "__gt__(QKeySequence*,QKeySequence)\0"
    "__ge__(QKeySequence*,QKeySequence)\0"
    "theWrappedObject,out\0"
    "readFrom(QKeySequence*,QDataStream&)\0"
    "theWrappedObject,i\0"
    "operator_subscript(QKeySequence*,uint)\0"
    "swap(QKeySequence*,QKeySequence&)\0"
    "QString\0theWrappedObject,format\0"
    "toString(QKeySequence*,QKeySequence::SequenceFormat)\0"
    "toString(QKeySequence*)\0"
    "py_toString(QKeySequence*)\0SequenceFormat\0"
    "StandardKey\0SequenceMatch\0NativeText\0"
    "PortableText\0UnknownKey\0HelpContents\0"
    "WhatsThis\0Open\0Close\0Save\0New\0Delete\0"
    "Cut\0Copy\0Paste\0Undo\0Redo\0Back\0Forward\0"
    "Refresh\0ZoomIn\0ZoomOut\0Print\0AddTab\0"
    "NextChild\0PreviousChild\0Find\0FindNext\0"
    "FindPrevious\0Replace\0SelectAll\0Bold\0"
    "Italic\0Underline\0MoveToNextChar\0"
    "MoveToPreviousChar\0MoveToNextWord\0"
    "MoveToPreviousWord\0MoveToNextLine\0"
    "MoveToPreviousLine\0MoveToNextPage\0"
    "MoveToPreviousPage\0MoveToStartOfLine\0"
    "MoveToEndOfLine\0MoveToStartOfBlock\0"
    "MoveToEndOfBlock\0MoveToStartOfDocument\0"
    "MoveToEndOfDocument\0SelectNextChar\0"
    "SelectPreviousChar\0SelectNextWord\0"
    "SelectPreviousWord\0SelectNextLine\0"
    "SelectPreviousLine\0SelectNextPage\0"
    "SelectPreviousPage\0SelectStartOfLine\0"
    "SelectEndOfLine\0SelectStartOfBlock\0"
    "SelectEndOfBlock\0SelectStartOfDocument\0"
    "SelectEndOfDocument\0DeleteStartOfWord\0"
    "DeleteEndOfWord\0DeleteEndOfLine\0"
    "InsertParagraphSeparator\0InsertLineSeparator\0"
    "SaveAs\0Preferences\0Quit\0NoMatch\0"
    "PartialMatch\0ExactMatch\0"
};

void PythonQtWrapper_QKeySequence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QKeySequence *_t = static_cast<PythonQtWrapper_QKeySequence *>(_o);
        switch (_id) {
        case 0: { QKeySequence* _r = _t->new_QKeySequence();
            if (_a[0]) *reinterpret_cast< QKeySequence**>(_a[0]) = _r; }  break;
        case 1: { QKeySequence* _r = _t->new_QKeySequence((*reinterpret_cast< QKeySequence::StandardKey(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QKeySequence**>(_a[0]) = _r; }  break;
        case 2: { QKeySequence* _r = _t->new_QKeySequence((*reinterpret_cast< const QKeySequence(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QKeySequence**>(_a[0]) = _r; }  break;
        case 3: { QKeySequence* _r = _t->new_QKeySequence((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QKeySequence**>(_a[0]) = _r; }  break;
        case 4: { QKeySequence* _r = _t->new_QKeySequence((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QKeySequence::SequenceFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QKeySequence**>(_a[0]) = _r; }  break;
        case 5: { QKeySequence* _r = _t->new_QKeySequence((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QKeySequence**>(_a[0]) = _r; }  break;
        case 6: { QKeySequence* _r = _t->new_QKeySequence((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QKeySequence**>(_a[0]) = _r; }  break;
        case 7: { QKeySequence* _r = _t->new_QKeySequence((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QKeySequence**>(_a[0]) = _r; }  break;
        case 8: { QKeySequence* _r = _t->new_QKeySequence((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QKeySequence**>(_a[0]) = _r; }  break;
        case 9: _t->delete_QKeySequence((*reinterpret_cast< QKeySequence*(*)>(_a[1]))); break;
        case 10: { uint _r = _t->count((*reinterpret_cast< QKeySequence*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 11: { QKeySequence _r = _t->static_QKeySequence_fromString((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QKeySequence::SequenceFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QKeySequence*>(_a[0]) = _r; }  break;
        case 12: { QKeySequence _r = _t->static_QKeySequence_fromString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QKeySequence*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isEmpty((*reinterpret_cast< QKeySequence*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QList<QKeySequence> _r = _t->static_QKeySequence_keyBindings((*reinterpret_cast< QKeySequence::StandardKey(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QKeySequence>*>(_a[0]) = _r; }  break;
        case 15: { QKeySequence::SequenceMatch _r = _t->matches((*reinterpret_cast< QKeySequence*(*)>(_a[1])),(*reinterpret_cast< const QKeySequence(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QKeySequence::SequenceMatch*>(_a[0]) = _r; }  break;
        case 16: { QKeySequence _r = _t->static_QKeySequence_mnemonic((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QKeySequence*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->operator_cast_int((*reinterpret_cast< QKeySequence*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->__ne__((*reinterpret_cast< QKeySequence*(*)>(_a[1])),(*reinterpret_cast< const QKeySequence(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->__lt__((*reinterpret_cast< QKeySequence*(*)>(_a[1])),(*reinterpret_cast< const QKeySequence(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: _t->writeTo((*reinterpret_cast< QKeySequence*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 21: { bool _r = _t->__le__((*reinterpret_cast< QKeySequence*(*)>(_a[1])),(*reinterpret_cast< const QKeySequence(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->__eq__((*reinterpret_cast< QKeySequence*(*)>(_a[1])),(*reinterpret_cast< const QKeySequence(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->__gt__((*reinterpret_cast< QKeySequence*(*)>(_a[1])),(*reinterpret_cast< const QKeySequence(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->__ge__((*reinterpret_cast< QKeySequence*(*)>(_a[1])),(*reinterpret_cast< const QKeySequence(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: _t->readFrom((*reinterpret_cast< QKeySequence*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 26: { int _r = _t->operator_subscript((*reinterpret_cast< QKeySequence*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: _t->swap((*reinterpret_cast< QKeySequence*(*)>(_a[1])),(*reinterpret_cast< QKeySequence(*)>(_a[2]))); break;
        case 28: { QString _r = _t->toString((*reinterpret_cast< QKeySequence*(*)>(_a[1])),(*reinterpret_cast< QKeySequence::SequenceFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 29: { QString _r = _t->toString((*reinterpret_cast< QKeySequence*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 30: { QString _r = _t->py_toString((*reinterpret_cast< QKeySequence*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QKeySequence::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QKeySequence::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QKeySequence,
      qt_meta_data_PythonQtWrapper_QKeySequence, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QKeySequence::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QKeySequence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QKeySequence::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QKeySequence))
        return static_cast<void*>(const_cast< PythonQtWrapper_QKeySequence*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QKeySequence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QMatrix[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   24,   25,   24, 0x0a,
      55,   48,   25,   24, 0x0a,
      98,   76,   25,   24, 0x0a,
     151,  147,   24,   24, 0x0a,
     199,  182,  176,   24, 0x0a,
     213,  182,  176,   24, 0x0a,
     235,  182,  176,   24, 0x0a,
     248,  182,  176,   24, 0x0a,
     297,  269,  261,   24, 0x0a,
     322,  182,  261,   24, 0x2a,
     346,  182,  341,   24, 0x0a,
     367,  182,  341,   24, 0x0a,
     390,  182,  176,   24, 0x0a,
     404,  182,  176,   24, 0x0a,
     418,  182,  176,   24, 0x0a,
     432,  182,  176,   24, 0x0a,
     471,  452,  446,   24, 0x0a,
     498,  452,  491,   24, 0x0a,
     551,  532,  519,   24, 0x0a,
     585,  532,  578,   24, 0x0a,
     614,  532,  606,   24, 0x0a,
     664,  645,  636,   24, 0x0a,
     697,  645,  687,   24, 0x0a,
     748,  729,  721,   24, 0x0a,
     797,  770,   24,   24, 0x0a,
     867,  843,  837,   24, 0x0a,
     898,  843,  891,   24, 0x0a,
     923,  729,  636,   24, 0x0a,
     952,  843,  341,   24, 0x0a,
     996,  977,  261,   24, 0x0a,
    1022,  843,   25,   24, 0x0a,
    1049,  843,   24,   24, 0x0a,
    1080,  843,  341,   24, 0x0a,
    1105,  843,   24,   24, 0x0a,
    1137,  182,   24,   24, 0x0a,
    1153,  645,   25,   24, 0x0a,
    1199, 1176,   25,   24, 0x0a,
    1266, 1227,   24,   24, 0x0a,
    1345, 1322,   25,   24, 0x0a,
    1396, 1373,   25,   24, 0x0a,
    1436,   24, 1428,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QMatrix[] = {
    "PythonQtWrapper_QMatrix\0\0QMatrix*\0"
    "new_QMatrix()\0matrix\0new_QMatrix(QMatrix)\0"
    "m11,m12,m21,m22,dx,dy\0"
    "new_QMatrix(qreal,qreal,qreal,qreal,qreal,qreal)\0"
    "obj\0delete_QMatrix(QMatrix*)\0qreal\0"
    "theWrappedObject\0det(QMatrix*)\0"
    "determinant(QMatrix*)\0dx(QMatrix*)\0"
    "dy(QMatrix*)\0QMatrix\0theWrappedObject,invertible\0"
    "inverted(QMatrix*,bool*)\0inverted(QMatrix*)\0"
    "bool\0isIdentity(QMatrix*)\0"
    "isInvertible(QMatrix*)\0m11(QMatrix*)\0"
    "m12(QMatrix*)\0m21(QMatrix*)\0m22(QMatrix*)\0"
    "QLine\0theWrappedObject,l\0map(QMatrix*,QLine)\0"
    "QLineF\0map(QMatrix*,QLineF)\0QPainterPath\0"
    "theWrappedObject,p\0map(QMatrix*,QPainterPath)\0"
    "QPoint\0map(QMatrix*,QPoint)\0QPointF\0"
    "map(QMatrix*,QPointF)\0QPolygon\0"
    "theWrappedObject,a\0map(QMatrix*,QPolygon)\0"
    "QPolygonF\0map(QMatrix*,QPolygonF)\0"
    "QRegion\0theWrappedObject,r\0"
    "map(QMatrix*,QRegion)\0theWrappedObject,x,y,tx,ty\0"
    "map(QMatrix*,qreal,qreal,qreal*,qreal*)\0"
    "QRect\0theWrappedObject,arg__1\0"
    "mapRect(QMatrix*,QRect)\0QRectF\0"
    "mapRect(QMatrix*,QRectF)\0"
    "mapToPolygon(QMatrix*,QRect)\0"
    "__ne__(QMatrix*,QMatrix)\0theWrappedObject,o\0"
    "__mul__(QMatrix*,QMatrix)\0"
    "__imul__(QMatrix*,QMatrix)\0"
    "writeTo(QMatrix*,QDataStream&)\0"
    "__eq__(QMatrix*,QMatrix)\0"
    "readFrom(QMatrix*,QDataStream&)\0"
    "reset(QMatrix*)\0rotate(QMatrix*,qreal)\0"
    "theWrappedObject,sx,sy\0"
    "scale(QMatrix*,qreal,qreal)\0"
    "theWrappedObject,m11,m12,m21,m22,dx,dy\0"
    "setMatrix(QMatrix*,qreal,qreal,qreal,qreal,qreal,qreal)\0"
    "theWrappedObject,sh,sv\0"
    "shear(QMatrix*,qreal,qreal)\0"
    "theWrappedObject,dx,dy\0"
    "translate(QMatrix*,qreal,qreal)\0QString\0"
    "py_toString(QMatrix*)\0"
};

void PythonQtWrapper_QMatrix::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QMatrix *_t = static_cast<PythonQtWrapper_QMatrix *>(_o);
        switch (_id) {
        case 0: { QMatrix* _r = _t->new_QMatrix();
            if (_a[0]) *reinterpret_cast< QMatrix**>(_a[0]) = _r; }  break;
        case 1: { QMatrix* _r = _t->new_QMatrix((*reinterpret_cast< const QMatrix(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMatrix**>(_a[0]) = _r; }  break;
        case 2: { QMatrix* _r = _t->new_QMatrix((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QMatrix**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QMatrix((*reinterpret_cast< QMatrix*(*)>(_a[1]))); break;
        case 4: { qreal _r = _t->det((*reinterpret_cast< QMatrix*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: { qreal _r = _t->determinant((*reinterpret_cast< QMatrix*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 6: { qreal _r = _t->dx((*reinterpret_cast< QMatrix*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 7: { qreal _r = _t->dy((*reinterpret_cast< QMatrix*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 8: { QMatrix _r = _t->inverted((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMatrix*>(_a[0]) = _r; }  break;
        case 9: { QMatrix _r = _t->inverted((*reinterpret_cast< QMatrix*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMatrix*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isIdentity((*reinterpret_cast< QMatrix*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isInvertible((*reinterpret_cast< QMatrix*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { qreal _r = _t->m11((*reinterpret_cast< QMatrix*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->m12((*reinterpret_cast< QMatrix*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: { qreal _r = _t->m21((*reinterpret_cast< QMatrix*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 15: { qreal _r = _t->m22((*reinterpret_cast< QMatrix*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 16: { QLine _r = _t->map((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< const QLine(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLine*>(_a[0]) = _r; }  break;
        case 17: { QLineF _r = _t->map((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< const QLineF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLineF*>(_a[0]) = _r; }  break;
        case 18: { QPainterPath _r = _t->map((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< const QPainterPath(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 19: { QPoint _r = _t->map((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 20: { QPointF _r = _t->map((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 21: { QPolygon _r = _t->map((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< const QPolygon(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygon*>(_a[0]) = _r; }  break;
        case 22: { QPolygonF _r = _t->map((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< const QPolygonF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 23: { QRegion _r = _t->map((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< const QRegion(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 24: _t->map((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal*(*)>(_a[4])),(*reinterpret_cast< qreal*(*)>(_a[5]))); break;
        case 25: { QRect _r = _t->mapRect((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 26: { QRectF _r = _t->mapRect((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 27: { QPolygon _r = _t->mapToPolygon((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygon*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->__ne__((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< const QMatrix(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { QMatrix _r = _t->__mul__((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< const QMatrix(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMatrix*>(_a[0]) = _r; }  break;
        case 30: { QMatrix* _r = _t->__imul__((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< const QMatrix(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMatrix**>(_a[0]) = _r; }  break;
        case 31: _t->writeTo((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 32: { bool _r = _t->__eq__((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< const QMatrix(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: _t->readFrom((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 34: _t->reset((*reinterpret_cast< QMatrix*(*)>(_a[1]))); break;
        case 35: { QMatrix* _r = _t->rotate((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMatrix**>(_a[0]) = _r; }  break;
        case 36: { QMatrix* _r = _t->scale((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QMatrix**>(_a[0]) = _r; }  break;
        case 37: _t->setMatrix((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])),(*reinterpret_cast< qreal(*)>(_a[7]))); break;
        case 38: { QMatrix* _r = _t->shear((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QMatrix**>(_a[0]) = _r; }  break;
        case 39: { QMatrix* _r = _t->translate((*reinterpret_cast< QMatrix*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QMatrix**>(_a[0]) = _r; }  break;
        case 40: { QString _r = _t->py_toString((*reinterpret_cast< QMatrix*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QMatrix::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QMatrix::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMatrix,
      qt_meta_data_PythonQtWrapper_QMatrix, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QMatrix::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QMatrix::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QMatrix::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMatrix))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMatrix*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMatrix::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       2,  254, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   25,   26,   25, 0x0a,
      58,   51,   26,   25, 0x0a,
     150,   88,   26,   25, 0x0a,
     227,   51,   26,   25, 0x0a,
     262,  248,   26,   25, 0x0a,
     298,  290,   26,   25, 0x0a,
     325,  321,   25,   25, 0x0a,
     383,  366,  352,   25, 0x0a,
     408,  366,  352,   25, 0x0a,
     424,  366,  352,   25, 0x0a,
     469,  446,  352,   25, 0x0a,
     547,  527,  352,   25, 0x0a,
     584,  366,  352,   25, 0x0a,
     602,  366,  352,   25, 0x0a,
     631,  366,  624,   25, 0x0a,
     665,  446,  651,   25, 0x0a,
     723,  527,  651,   25, 0x0a,
     781,  366,  760,   25, 0x0a,
     810,  366,  352,   25, 0x0a,
     826,  366,  352,   25, 0x0a,
     847,  366,  352,   25, 0x0a,
     879,  446,  874,   25, 0x0a,
     961,  942,  874,   25, 0x0a,
    1015,  990,  874,   25, 0x0a,
    1076,  366,  352,   25, 0x0a,
    1093,  366,  352,   25, 0x0a,
    1109,  366,  352,   25, 0x0a,
    1132,  366,  352,   25, 0x0a,
    1147,  366,  352,   25, 0x0a,
    1167,  942,  874,   25, 0x0a,
    1214, 1194,   25,   25, 0x0a,
    1246,  942,  874,   25, 0x0a,
    1273, 1194,   25,   25, 0x0a,
    1311,  366, 1306,   25, 0x0a,
    1363, 1339, 1330,   25, 0x0a,
    1413, 1391,   25,   25, 0x0a,
    1466, 1437,   25,   25, 0x0a,
    1560, 1534,   25,   25, 0x0a,
    1636, 1607,   25,   25, 0x0a,
    1730, 1704,   25,   25, 0x0a,
    1859, 1777,   25,   25, 0x0a,
    1988, 1968,   25,   25, 0x0a,
    2041,  366,  352,   25, 0x0a,
    2059,  366,  352,   25, 0x0a,
    2075,  366,  352,   25, 0x0a,
    2098,  366,  352,   25, 0x0a,
    2121,  366,  352,   25, 0x0a,
    2139,  366,  352,   25, 0x0a,

 // enums: name, flags, count, data
    2161, 0x0,    7,  262,
    2172, 0x0,   23,  276,

 // enum data: key, value
    2182, uint(PythonQtWrapper_QPalette::Active),
    2189, uint(PythonQtWrapper_QPalette::Disabled),
    2198, uint(PythonQtWrapper_QPalette::Inactive),
    2207, uint(PythonQtWrapper_QPalette::NColorGroups),
    2220, uint(PythonQtWrapper_QPalette::Current),
    2228, uint(PythonQtWrapper_QPalette::All),
    2232, uint(PythonQtWrapper_QPalette::Normal),
    2239, uint(PythonQtWrapper_QPalette::WindowText),
    2250, uint(PythonQtWrapper_QPalette::Button),
    2257, uint(PythonQtWrapper_QPalette::Light),
    2263, uint(PythonQtWrapper_QPalette::Midlight),
    2272, uint(PythonQtWrapper_QPalette::Dark),
    2277, uint(PythonQtWrapper_QPalette::Mid),
    2281, uint(PythonQtWrapper_QPalette::Text),
    2286, uint(PythonQtWrapper_QPalette::BrightText),
    2297, uint(PythonQtWrapper_QPalette::ButtonText),
    2308, uint(PythonQtWrapper_QPalette::Base),
    2313, uint(PythonQtWrapper_QPalette::Window),
    2320, uint(PythonQtWrapper_QPalette::Shadow),
    2327, uint(PythonQtWrapper_QPalette::Highlight),
    2337, uint(PythonQtWrapper_QPalette::HighlightedText),
    2353, uint(PythonQtWrapper_QPalette::Link),
    2358, uint(PythonQtWrapper_QPalette::LinkVisited),
    2370, uint(PythonQtWrapper_QPalette::AlternateBase),
    2384, uint(PythonQtWrapper_QPalette::NoRole),
    2391, uint(PythonQtWrapper_QPalette::ToolTipBase),
    2403, uint(PythonQtWrapper_QPalette::ToolTipText),
    2415, uint(PythonQtWrapper_QPalette::NColorRoles),
    2427, uint(PythonQtWrapper_QPalette::Foreground),
    2438, uint(PythonQtWrapper_QPalette::Background),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPalette[] = {
    "PythonQtWrapper_QPalette\0\0QPalette*\0"
    "new_QPalette()\0button\0"
    "new_QPalette(Qt::GlobalColor)\0"
    "windowText,button,light,dark,mid,text,bright_text,base,window\0"
    "new_QPalette(QBrush,QBrush,QBrush,QBrush,QBrush,QBrush,QBrush,QBrush,Q"
    "Brush)\0"
    "new_QPalette(QColor)\0button,window\0"
    "new_QPalette(QColor,QColor)\0palette\0"
    "new_QPalette(QPalette)\0obj\0"
    "delete_QPalette(QPalette*)\0const QBrush*\0"
    "theWrappedObject\0alternateBase(QPalette*)\0"
    "base(QPalette*)\0brightText(QPalette*)\0"
    "theWrappedObject,cg,cr\0"
    "brush(QPalette*,QPalette::ColorGroup,QPalette::ColorRole)\0"
    "theWrappedObject,cr\0"
    "brush(QPalette*,QPalette::ColorRole)\0"
    "button(QPalette*)\0buttonText(QPalette*)\0"
    "qint64\0cacheKey(QPalette*)\0const QColor*\0"
    "color(QPalette*,QPalette::ColorGroup,QPalette::ColorRole)\0"
    "color(QPalette*,QPalette::ColorRole)\0"
    "QPalette::ColorGroup\0currentColorGroup(QPalette*)\0"
    "dark(QPalette*)\0highlight(QPalette*)\0"
    "highlightedText(QPalette*)\0bool\0"
    "isBrushSet(QPalette*,QPalette::ColorGroup,QPalette::ColorRole)\0"
    "theWrappedObject,p\0isCopyOf(QPalette*,QPalette)\0"
    "theWrappedObject,cr1,cr2\0"
    "isEqual(QPalette*,QPalette::ColorGroup,QPalette::ColorGroup)\0"
    "light(QPalette*)\0link(QPalette*)\0"
    "linkVisited(QPalette*)\0mid(QPalette*)\0"
    "midlight(QPalette*)\0__ne__(QPalette*,QPalette)\0"
    "theWrappedObject,ds\0writeTo(QPalette*,QDataStream&)\0"
    "__eq__(QPalette*,QPalette)\0"
    "readFrom(QPalette*,QDataStream&)\0uint\0"
    "resolve(QPalette*)\0QPalette\0"
    "theWrappedObject,arg__1\0"
    "resolve(QPalette*,QPalette)\0"
    "theWrappedObject,mask\0resolve(QPalette*,uint)\0"
    "theWrappedObject,cg,cr,brush\0"
    "setBrush(QPalette*,QPalette::ColorGroup,QPalette::ColorRole,QBrush)\0"
    "theWrappedObject,cr,brush\0"
    "setBrush(QPalette*,QPalette::ColorRole,QBrush)\0"
    "theWrappedObject,cg,cr,color\0"
    "setColor(QPalette*,QPalette::ColorGroup,QPalette::ColorRole,QColor)\0"
    "theWrappedObject,cr,color\0"
    "setColor(QPalette*,QPalette::ColorRole,QColor)\0"
    "theWrappedObject,cr,windowText,button,light,dark,mid,text,bright_text,"
    "base,window\0"
    "setColorGroup(QPalette*,QPalette::ColorGroup,QBrush,QBrush,QBrush,QBru"
    "sh,QBrush,QBrush,QBrush,QBrush,QBrush)\0"
    "theWrappedObject,cg\0"
    "setCurrentColorGroup(QPalette*,QPalette::ColorGroup)\0"
    "shadow(QPalette*)\0text(QPalette*)\0"
    "toolTipBase(QPalette*)\0toolTipText(QPalette*)\0"
    "window(QPalette*)\0windowText(QPalette*)\0"
    "ColorGroup\0ColorRole\0Active\0Disabled\0"
    "Inactive\0NColorGroups\0Current\0All\0"
    "Normal\0WindowText\0Button\0Light\0Midlight\0"
    "Dark\0Mid\0Text\0BrightText\0ButtonText\0"
    "Base\0Window\0Shadow\0Highlight\0"
    "HighlightedText\0Link\0LinkVisited\0"
    "AlternateBase\0NoRole\0ToolTipBase\0"
    "ToolTipText\0NColorRoles\0Foreground\0"
    "Background\0"
};

void PythonQtWrapper_QPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPalette *_t = static_cast<PythonQtWrapper_QPalette *>(_o);
        switch (_id) {
        case 0: { QPalette* _r = _t->new_QPalette();
            if (_a[0]) *reinterpret_cast< QPalette**>(_a[0]) = _r; }  break;
        case 1: { QPalette* _r = _t->new_QPalette((*reinterpret_cast< Qt::GlobalColor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPalette**>(_a[0]) = _r; }  break;
        case 2: { QPalette* _r = _t->new_QPalette((*reinterpret_cast< const QBrush(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2])),(*reinterpret_cast< const QBrush(*)>(_a[3])),(*reinterpret_cast< const QBrush(*)>(_a[4])),(*reinterpret_cast< const QBrush(*)>(_a[5])),(*reinterpret_cast< const QBrush(*)>(_a[6])),(*reinterpret_cast< const QBrush(*)>(_a[7])),(*reinterpret_cast< const QBrush(*)>(_a[8])),(*reinterpret_cast< const QBrush(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< QPalette**>(_a[0]) = _r; }  break;
        case 3: { QPalette* _r = _t->new_QPalette((*reinterpret_cast< const QColor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPalette**>(_a[0]) = _r; }  break;
        case 4: { QPalette* _r = _t->new_QPalette((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPalette**>(_a[0]) = _r; }  break;
        case 5: { QPalette* _r = _t->new_QPalette((*reinterpret_cast< const QPalette(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPalette**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QPalette((*reinterpret_cast< QPalette*(*)>(_a[1]))); break;
        case 7: { const QBrush* _r = _t->alternateBase((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 8: { const QBrush* _r = _t->base((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 9: { const QBrush* _r = _t->brightText((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 10: { const QBrush* _r = _t->brush((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< QPalette::ColorGroup(*)>(_a[2])),(*reinterpret_cast< QPalette::ColorRole(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 11: { const QBrush* _r = _t->brush((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< QPalette::ColorRole(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 12: { const QBrush* _r = _t->button((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 13: { const QBrush* _r = _t->buttonText((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 14: { qint64 _r = _t->cacheKey((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 15: { const QColor* _r = _t->color((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< QPalette::ColorGroup(*)>(_a[2])),(*reinterpret_cast< QPalette::ColorRole(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< const QColor**>(_a[0]) = _r; }  break;
        case 16: { const QColor* _r = _t->color((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< QPalette::ColorRole(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< const QColor**>(_a[0]) = _r; }  break;
        case 17: { QPalette::ColorGroup _r = _t->currentColorGroup((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPalette::ColorGroup*>(_a[0]) = _r; }  break;
        case 18: { const QBrush* _r = _t->dark((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 19: { const QBrush* _r = _t->highlight((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 20: { const QBrush* _r = _t->highlightedText((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isBrushSet((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< QPalette::ColorGroup(*)>(_a[2])),(*reinterpret_cast< QPalette::ColorRole(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->isCopyOf((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< const QPalette(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->isEqual((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< QPalette::ColorGroup(*)>(_a[2])),(*reinterpret_cast< QPalette::ColorGroup(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { const QBrush* _r = _t->light((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 25: { const QBrush* _r = _t->link((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 26: { const QBrush* _r = _t->linkVisited((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 27: { const QBrush* _r = _t->mid((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 28: { const QBrush* _r = _t->midlight((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->__ne__((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< const QPalette(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: _t->writeTo((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 31: { bool _r = _t->__eq__((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< const QPalette(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: _t->readFrom((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 33: { uint _r = _t->resolve((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 34: { QPalette _r = _t->resolve((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< const QPalette(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPalette*>(_a[0]) = _r; }  break;
        case 35: _t->resolve((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 36: _t->setBrush((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< QPalette::ColorGroup(*)>(_a[2])),(*reinterpret_cast< QPalette::ColorRole(*)>(_a[3])),(*reinterpret_cast< const QBrush(*)>(_a[4]))); break;
        case 37: _t->setBrush((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< QPalette::ColorRole(*)>(_a[2])),(*reinterpret_cast< const QBrush(*)>(_a[3]))); break;
        case 38: _t->setColor((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< QPalette::ColorGroup(*)>(_a[2])),(*reinterpret_cast< QPalette::ColorRole(*)>(_a[3])),(*reinterpret_cast< const QColor(*)>(_a[4]))); break;
        case 39: _t->setColor((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< QPalette::ColorRole(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 40: _t->setColorGroup((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< QPalette::ColorGroup(*)>(_a[2])),(*reinterpret_cast< const QBrush(*)>(_a[3])),(*reinterpret_cast< const QBrush(*)>(_a[4])),(*reinterpret_cast< const QBrush(*)>(_a[5])),(*reinterpret_cast< const QBrush(*)>(_a[6])),(*reinterpret_cast< const QBrush(*)>(_a[7])),(*reinterpret_cast< const QBrush(*)>(_a[8])),(*reinterpret_cast< const QBrush(*)>(_a[9])),(*reinterpret_cast< const QBrush(*)>(_a[10])),(*reinterpret_cast< const QBrush(*)>(_a[11]))); break;
        case 41: _t->setCurrentColorGroup((*reinterpret_cast< QPalette*(*)>(_a[1])),(*reinterpret_cast< QPalette::ColorGroup(*)>(_a[2]))); break;
        case 42: { const QBrush* _r = _t->shadow((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 43: { const QBrush* _r = _t->text((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 44: { const QBrush* _r = _t->toolTipBase((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 45: { const QBrush* _r = _t->toolTipText((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 46: { const QBrush* _r = _t->window((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        case 47: { const QBrush* _r = _t->windowText((*reinterpret_cast< QPalette*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QBrush**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPalette::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPalette,
      qt_meta_data_PythonQtWrapper_QPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPalette))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPalette*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QPen[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   21,   22,   21, 0x0a,
      46,   39,   22,   21, 0x0a,
      87,   69,   22,   21, 0x0a,
     172,  156,   22,   21, 0x2a,
     238,  224,   22,   21, 0x2a,
     286,  274,   22,   21, 0x2a,
     315,  309,   22,   21, 0x0a,
     336,  332,   22,   21, 0x0a,
     355,  351,   21,   21, 0x0a,
     398,  381,  374,   21, 0x0a,
     427,  381,  411,   21, 0x0a,
     450,  381,  443,   21, 0x0a,
     469,  381,  463,   21, 0x0a,
     502,  381,  487,   21, 0x0a,
     526,  381,  521,   21, 0x0a,
     544,  381,  521,   21, 0x0a,
     576,  381,  559,   21, 0x0a,
     593,  381,  463,   21, 0x0a,
     630,  611,  521,   21, 0x0a,
     673,  649,   21,   21, 0x0a,
     701,  611,  521,   21, 0x0a,
     720,  649,   21,   21, 0x0a,
     772,  749,   21,   21, 0x0a,
     816,  795,   21,   21, 0x0a,
     874,  851,   21,   21, 0x0a,
     923,  897,   21,   21, 0x0a,
     972,  947,   21,   21, 0x0a,
    1024,  999,   21,   21, 0x0a,
    1061,  795,   21,   21, 0x0a,
    1121, 1098,   21,   21, 0x0a,
    1148,  649,   21,   21, 0x0a,
    1200, 1177,   21,   21, 0x0a,
    1220, 1177,   21,   21, 0x0a,
    1256,  381, 1243,   21, 0x0a,
    1292, 1269,   21,   21, 0x0a,
    1314,  381, 1310,   21, 0x0a,
    1327,  381,  463,   21, 0x0a,
    1349,   21, 1341,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPen[] = {
    "PythonQtWrapper_QPen\0\0QPen*\0new_QPen()\0"
    "arg__1\0new_QPen(Qt::PenStyle)\0"
    "brush,width,s,c,j\0"
    "new_QPen(QBrush,qreal,Qt::PenStyle,Qt::PenCapStyle,Qt::PenJoinStyle)\0"
    "brush,width,s,c\0"
    "new_QPen(QBrush,qreal,Qt::PenStyle,Qt::PenCapStyle)\0"
    "brush,width,s\0new_QPen(QBrush,qreal,Qt::PenStyle)\0"
    "brush,width\0new_QPen(QBrush,qreal)\0"
    "color\0new_QPen(QColor)\0pen\0new_QPen(QPen)\0"
    "obj\0delete_QPen(QPen*)\0QBrush\0"
    "theWrappedObject\0brush(QPen*)\0"
    "Qt::PenCapStyle\0capStyle(QPen*)\0QColor\0"
    "color(QPen*)\0qreal\0dashOffset(QPen*)\0"
    "QVector<qreal>\0dashPattern(QPen*)\0"
    "bool\0isCosmetic(QPen*)\0isSolid(QPen*)\0"
    "Qt::PenJoinStyle\0joinStyle(QPen*)\0"
    "miterLimit(QPen*)\0theWrappedObject,p\0"
    "__ne__(QPen*,QPen)\0theWrappedObject,arg__1\0"
    "writeTo(QPen*,QDataStream&)\0"
    "__eq__(QPen*,QPen)\0readFrom(QPen*,QDataStream&)\0"
    "theWrappedObject,brush\0setBrush(QPen*,QBrush)\0"
    "theWrappedObject,pcs\0"
    "setCapStyle(QPen*,Qt::PenCapStyle)\0"
    "theWrappedObject,color\0setColor(QPen*,QColor)\0"
    "theWrappedObject,cosmetic\0"
    "setCosmetic(QPen*,bool)\0"
    "theWrappedObject,doffset\0"
    "setDashOffset(QPen*,qreal)\0"
    "theWrappedObject,pattern\0"
    "setDashPattern(QPen*,QVector<qreal>)\0"
    "setJoinStyle(QPen*,Qt::PenJoinStyle)\0"
    "theWrappedObject,limit\0"
    "setMiterLimit(QPen*,qreal)\0"
    "setStyle(QPen*,Qt::PenStyle)\0"
    "theWrappedObject,width\0setWidth(QPen*,int)\0"
    "setWidthF(QPen*,qreal)\0Qt::PenStyle\0"
    "style(QPen*)\0theWrappedObject,other\0"
    "swap(QPen*,QPen&)\0int\0width(QPen*)\0"
    "widthF(QPen*)\0QString\0py_toString(QPen*)\0"
};

void PythonQtWrapper_QPen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPen *_t = static_cast<PythonQtWrapper_QPen *>(_o);
        switch (_id) {
        case 0: { QPen* _r = _t->new_QPen();
            if (_a[0]) *reinterpret_cast< QPen**>(_a[0]) = _r; }  break;
        case 1: { QPen* _r = _t->new_QPen((*reinterpret_cast< Qt::PenStyle(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPen**>(_a[0]) = _r; }  break;
        case 2: { QPen* _r = _t->new_QPen((*reinterpret_cast< const QBrush(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< Qt::PenStyle(*)>(_a[3])),(*reinterpret_cast< Qt::PenCapStyle(*)>(_a[4])),(*reinterpret_cast< Qt::PenJoinStyle(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QPen**>(_a[0]) = _r; }  break;
        case 3: { QPen* _r = _t->new_QPen((*reinterpret_cast< const QBrush(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< Qt::PenStyle(*)>(_a[3])),(*reinterpret_cast< Qt::PenCapStyle(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPen**>(_a[0]) = _r; }  break;
        case 4: { QPen* _r = _t->new_QPen((*reinterpret_cast< const QBrush(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< Qt::PenStyle(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPen**>(_a[0]) = _r; }  break;
        case 5: { QPen* _r = _t->new_QPen((*reinterpret_cast< const QBrush(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPen**>(_a[0]) = _r; }  break;
        case 6: { QPen* _r = _t->new_QPen((*reinterpret_cast< const QColor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPen**>(_a[0]) = _r; }  break;
        case 7: { QPen* _r = _t->new_QPen((*reinterpret_cast< const QPen(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPen**>(_a[0]) = _r; }  break;
        case 8: _t->delete_QPen((*reinterpret_cast< QPen*(*)>(_a[1]))); break;
        case 9: { QBrush _r = _t->brush((*reinterpret_cast< QPen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 10: { Qt::PenCapStyle _r = _t->capStyle((*reinterpret_cast< QPen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::PenCapStyle*>(_a[0]) = _r; }  break;
        case 11: { QColor _r = _t->color((*reinterpret_cast< QPen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 12: { qreal _r = _t->dashOffset((*reinterpret_cast< QPen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 13: { QVector<qreal> _r = _t->dashPattern((*reinterpret_cast< QPen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<qreal>*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isCosmetic((*reinterpret_cast< QPen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isSolid((*reinterpret_cast< QPen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { Qt::PenJoinStyle _r = _t->joinStyle((*reinterpret_cast< QPen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::PenJoinStyle*>(_a[0]) = _r; }  break;
        case 17: { qreal _r = _t->miterLimit((*reinterpret_cast< QPen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->__ne__((*reinterpret_cast< QPen*(*)>(_a[1])),(*reinterpret_cast< const QPen(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: _t->writeTo((*reinterpret_cast< QPen*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 20: { bool _r = _t->__eq__((*reinterpret_cast< QPen*(*)>(_a[1])),(*reinterpret_cast< const QPen(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: _t->readFrom((*reinterpret_cast< QPen*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 22: _t->setBrush((*reinterpret_cast< QPen*(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2]))); break;
        case 23: _t->setCapStyle((*reinterpret_cast< QPen*(*)>(_a[1])),(*reinterpret_cast< Qt::PenCapStyle(*)>(_a[2]))); break;
        case 24: _t->setColor((*reinterpret_cast< QPen*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 25: _t->setCosmetic((*reinterpret_cast< QPen*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 26: _t->setDashOffset((*reinterpret_cast< QPen*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 27: _t->setDashPattern((*reinterpret_cast< QPen*(*)>(_a[1])),(*reinterpret_cast< const QVector<qreal>(*)>(_a[2]))); break;
        case 28: _t->setJoinStyle((*reinterpret_cast< QPen*(*)>(_a[1])),(*reinterpret_cast< Qt::PenJoinStyle(*)>(_a[2]))); break;
        case 29: _t->setMiterLimit((*reinterpret_cast< QPen*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 30: _t->setStyle((*reinterpret_cast< QPen*(*)>(_a[1])),(*reinterpret_cast< Qt::PenStyle(*)>(_a[2]))); break;
        case 31: _t->setWidth((*reinterpret_cast< QPen*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->setWidthF((*reinterpret_cast< QPen*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 33: { Qt::PenStyle _r = _t->style((*reinterpret_cast< QPen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::PenStyle*>(_a[0]) = _r; }  break;
        case 34: _t->swap((*reinterpret_cast< QPen*(*)>(_a[1])),(*reinterpret_cast< QPen(*)>(_a[2]))); break;
        case 35: { int _r = _t->width((*reinterpret_cast< QPen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 36: { qreal _r = _t->widthF((*reinterpret_cast< QPen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 37: { QString _r = _t->py_toString((*reinterpret_cast< QPen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPen::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPen::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPen,
      qt_meta_data_PythonQtWrapper_QPen, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPen::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPen))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPen*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QPixmap[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      91,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   24,   25,   24, 0x0a,
      55,   48,   25,   24, 0x0a,
      76,   48,   25,   24, 0x0a,
     117,   95,   25,   24, 0x0a,
     191,  175,   25,   24, 0x2a,
     233,  224,   25,   24, 0x2a,
     258,  254,   25,   24, 0x0a,
     283,  279,   24,   24, 0x0a,
     333,  316,  308,   24, 0x0a,
     363,  316,  356,   24, 0x0a,
     414,  387,  382,   24, 0x0a,
     494,  473,  382,   24, 0x2a,
     550,  528,  308,   24, 0x0a,
     571,  316,  308,   24, 0x2a,
     620,  586,  308,   24, 0x0a,
     686,  659,  651,   24, 0x0a,
     721,  316,  651,   24, 0x2a,
     778,  751,  651,   24, 0x0a,
     847,  815,  651,   24, 0x0a,
     901,   24,  897,   24, 0x0a,
     931,  316,  897,   24, 0x0a,
     947,  316,  897,   24, 0x0a,
     992,  965,   24,   24, 0x0a,
    1014,  316,   24,   24, 0x2a,
    1057, 1029,   24,   24, 0x0a,
    1128, 1094,   24,   24, 0x0a,
    1178, 1166,  308,   24, 0x0a,
    1242, 1236,  308,   24, 0x2a,
    1293, 1275,  308,   24, 0x0a,
    1376, 1364,  308,   24, 0x2a,
    1434, 1422,  308,   24, 0x0a,
    1491, 1476,  308,   24, 0x0a,
    1556, 1543,  308,   24, 0x2a,
    1615, 1604,  308,   24, 0x2a,
    1668, 1659,  308,   24, 0x2a,
    1715, 1708,  308,   24, 0x2a,
    1766, 1751,  308,   24, 0x0a,
    1826, 1813,  308,   24, 0x2a,
    1880, 1869,  308,   24, 0x2a,
    1928, 1919,  308,   24, 0x2a,
    1963,   48,  308,   24, 0x2a,
    1994,  316,  382,   24, 0x0a,
    2013,  316,  382,   24, 0x0a,
    2039,  316,  897,   24, 0x0a,
    2056,  316,  382,   24, 0x0a,
    2073,  316,  382,   24, 0x0a,
    2132, 2093,  382,   24, 0x0a,
    2225, 2192,  382,   24, 0x2a,
    2286, 2260,  382,   24, 0x2a,
    2344, 2309,  382,   24, 0x0a,
    2444, 2415,  382,   24, 0x2a,
    2512, 2490,  382,   24, 0x2a,
    2546,  316,  651,   24, 0x0a,
    2585, 2561,  897,   24, 0x0a,
    2634, 2561,   24,   24, 0x0a,
    2665, 2561,   24,   24, 0x0a,
    2711,  316, 2697,   24, 0x0a,
    2739,  316, 2733,   24, 0x0a,
    2793, 2754,  382,   24, 0x0a,
    2866, 2835,  382,   24, 0x2a,
    2928, 2904,  382,   24, 0x2a,
    2995, 2954,  382,   24, 0x0a,
    3034, 2192,  382,   24, 0x2a,
    3069, 2260,  382,   24, 0x2a,
    3127, 3092,  308,   24, 0x0a,
    3223, 3193,  308,   24, 0x2a,
    3285, 3266,  308,   24, 0x2a,
    3345, 3308,  308,   24, 0x0a,
    3445, 3413,  308,   24, 0x2a,
    3511, 3490,  308,   24, 0x2a,
    3560, 3536,  308,   24, 0x0a,
    3631, 3612,  308,   24, 0x2a,
    3684, 3660,  308,   24, 0x0a,
    3754, 3735,  308,   24, 0x2a,
    3818, 3782,   24,   24, 0x0a,
    3886, 3858,   24,   24, 0x2a,
    3965, 3917,   24,   24, 0x0a,
    4055, 4015,   24,   24, 0x2a,
    4096, 2561,   24,   24, 0x0a,
    4130, 2561,   24,   24, 0x0a,
    4162,  316, 4156,   24, 0x0a,
    4200, 4177,   24,   24, 0x0a,
    4231,  316, 4224,   24, 0x0a,
    4278, 4249,  308,   24, 0x0a,
    4331, 2561,  308,   24, 0x2a,
    4361, 4249,  308,   24, 0x0a,
    4417, 2561,  308,   24, 0x2a,
    4464, 4458, 4450,   24, 0x0a,
    4518, 4458, 4507,   24, 0x0a,
    4564,  316,  897,   24, 0x0a,
    4580,  279,  382,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPixmap[] = {
    "PythonQtWrapper_QPixmap\0\0QPixmap*\0"
    "new_QPixmap()\0arg__1\0new_QPixmap(QPixmap)\0"
    "new_QPixmap(QSize)\0fileName,format,flags\0"
    "new_QPixmap(QString,const char*,Qt::ImageConversionFlags)\0"
    "fileName,format\0new_QPixmap(QString,const char*)\0"
    "fileName\0new_QPixmap(QString)\0w,h\0"
    "new_QPixmap(int,int)\0obj\0"
    "delete_QPixmap(QPixmap*)\0QPixmap\0"
    "theWrappedObject\0alphaChannel(QPixmap*)\0"
    "qint64\0cacheKey(QPixmap*)\0bool\0"
    "theWrappedObject,img,flags\0"
    "convertFromImage(QPixmap*,QImage,Qt::ImageConversionFlags)\0"
    "theWrappedObject,img\0"
    "convertFromImage(QPixmap*,QImage)\0"
    "theWrappedObject,rect\0copy(QPixmap*,QRect)\0"
    "copy(QPixmap*)\0theWrappedObject,x,y,width,height\0"
    "copy(QPixmap*,int,int,int,int)\0QBitmap\0"
    "theWrappedObject,clipTight\0"
    "createHeuristicMask(QPixmap*,bool)\0"
    "createHeuristicMask(QPixmap*)\0"
    "theWrappedObject,maskColor\0"
    "createMaskFromColor(QPixmap*,QColor)\0"
    "theWrappedObject,maskColor,mode\0"
    "createMaskFromColor(QPixmap*,QColor,Qt::MaskMode)\0"
    "int\0static_QPixmap_defaultDepth()\0"
    "depth(QPixmap*)\0devType(QPixmap*)\0"
    "theWrappedObject,fillColor\0"
    "fill(QPixmap*,QColor)\0fill(QPixmap*)\0"
    "theWrappedObject,widget,ofs\0"
    "fill(QPixmap*,const QWidget*,QPoint)\0"
    "theWrappedObject,widget,xofs,yofs\0"
    "fill(QPixmap*,const QWidget*,int,int)\0"
    "image,flags\0"
    "static_QPixmap_fromImage(QImage,Qt::ImageConversionFlags)\0"
    "image\0static_QPixmap_fromImage(QImage)\0"
    "imageReader,flags\0"
    "static_QPixmap_fromImageReader(QImageReader*,Qt::ImageConversionFlags)\0"
    "imageReader\0static_QPixmap_fromImageReader(QImageReader*)\0"
    "widget,rect\0static_QPixmap_grabWidget(QWidget*,QRect)\0"
    "widget,x,y,w,h\0"
    "static_QPixmap_grabWidget(QWidget*,int,int,int,int)\0"
    "widget,x,y,w\0"
    "static_QPixmap_grabWidget(QWidget*,int,int,int)\0"
    "widget,x,y\0static_QPixmap_grabWidget(QWidget*,int,int)\0"
    "widget,x\0static_QPixmap_grabWidget(QWidget*,int)\0"
    "widget\0static_QPixmap_grabWidget(QWidget*)\0"
    "arg__1,x,y,w,h\0"
    "static_QPixmap_grabWindow(WId,int,int,int,int)\0"
    "arg__1,x,y,w\0static_QPixmap_grabWindow(WId,int,int,int)\0"
    "arg__1,x,y\0static_QPixmap_grabWindow(WId,int,int)\0"
    "arg__1,x\0static_QPixmap_grabWindow(WId,int)\0"
    "static_QPixmap_grabWindow(WId)\0"
    "hasAlpha(QPixmap*)\0hasAlphaChannel(QPixmap*)\0"
    "height(QPixmap*)\0isNull(QPixmap*)\0"
    "isQBitmap(QPixmap*)\0"
    "theWrappedObject,fileName,format,flags\0"
    "load(QPixmap*,QString,const char*,Qt::ImageConversionFlags)\0"
    "theWrappedObject,fileName,format\0"
    "load(QPixmap*,QString,const char*)\0"
    "theWrappedObject,fileName\0"
    "load(QPixmap*,QString)\0"
    "theWrappedObject,data,format,flags\0"
    "loadFromData(QPixmap*,QByteArray,const char*,Qt::ImageConversionFlags)\0"
    "theWrappedObject,data,format\0"
    "loadFromData(QPixmap*,QByteArray,const char*)\0"
    "theWrappedObject,data\0"
    "loadFromData(QPixmap*,QByteArray)\0"
    "mask(QPixmap*)\0theWrappedObject,arg__1\0"
    "metric(QPixmap*,QPaintDevice::PaintDeviceMetric)\0"
    "writeTo(QPixmap*,QDataStream&)\0"
    "readFrom(QPixmap*,QDataStream&)\0"
    "QPaintEngine*\0paintEngine(QPixmap*)\0"
    "QRect\0rect(QPixmap*)\0"
    "theWrappedObject,device,format,quality\0"
    "save(QPixmap*,QIODevice*,const char*,int)\0"
    "theWrappedObject,device,format\0"
    "save(QPixmap*,QIODevice*,const char*)\0"
    "theWrappedObject,device\0"
    "save(QPixmap*,QIODevice*)\0"
    "theWrappedObject,fileName,format,quality\0"
    "save(QPixmap*,QString,const char*,int)\0"
    "save(QPixmap*,QString,const char*)\0"
    "save(QPixmap*,QString)\0"
    "theWrappedObject,s,aspectMode,mode\0"
    "scaled(QPixmap*,QSize,Qt::AspectRatioMode,Qt::TransformationMode)\0"
    "theWrappedObject,s,aspectMode\0"
    "scaled(QPixmap*,QSize,Qt::AspectRatioMode)\0"
    "theWrappedObject,s\0scaled(QPixmap*,QSize)\0"
    "theWrappedObject,w,h,aspectMode,mode\0"
    "scaled(QPixmap*,int,int,Qt::AspectRatioMode,Qt::TransformationMode)\0"
    "theWrappedObject,w,h,aspectMode\0"
    "scaled(QPixmap*,int,int,Qt::AspectRatioMode)\0"
    "theWrappedObject,w,h\0scaled(QPixmap*,int,int)\0"
    "theWrappedObject,h,mode\0"
    "scaledToHeight(QPixmap*,int,Qt::TransformationMode)\0"
    "theWrappedObject,h\0scaledToHeight(QPixmap*,int)\0"
    "theWrappedObject,w,mode\0"
    "scaledToWidth(QPixmap*,int,Qt::TransformationMode)\0"
    "theWrappedObject,w\0scaledToWidth(QPixmap*,int)\0"
    "theWrappedObject,dx,dy,rect,exposed\0"
    "scroll(QPixmap*,int,int,QRect,QRegion*)\0"
    "theWrappedObject,dx,dy,rect\0"
    "scroll(QPixmap*,int,int,QRect)\0"
    "theWrappedObject,dx,dy,x,y,width,height,exposed\0"
    "scroll(QPixmap*,int,int,int,int,int,int,QRegion*)\0"
    "theWrappedObject,dx,dy,x,y,width,height\0"
    "scroll(QPixmap*,int,int,int,int,int,int)\0"
    "setAlphaChannel(QPixmap*,QPixmap)\0"
    "setMask(QPixmap*,QBitmap)\0QSize\0"
    "size(QPixmap*)\0theWrappedObject,other\0"
    "swap(QPixmap*,QPixmap&)\0QImage\0"
    "toImage(QPixmap*)\0theWrappedObject,arg__1,mode\0"
    "transformed(QPixmap*,QMatrix,Qt::TransformationMode)\0"
    "transformed(QPixmap*,QMatrix)\0"
    "transformed(QPixmap*,QTransform,Qt::TransformationMode)\0"
    "transformed(QPixmap*,QTransform)\0"
    "QMatrix\0m,w,h\0static_QPixmap_trueMatrix(QMatrix,int,int)\0"
    "QTransform\0static_QPixmap_trueMatrix(QTransform,int,int)\0"
    "width(QPixmap*)\0__nonzero__(QPixmap*)\0"
};

void PythonQtWrapper_QPixmap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPixmap *_t = static_cast<PythonQtWrapper_QPixmap *>(_o);
        switch (_id) {
        case 0: { QPixmap* _r = _t->new_QPixmap();
            if (_a[0]) *reinterpret_cast< QPixmap**>(_a[0]) = _r; }  break;
        case 1: { QPixmap* _r = _t->new_QPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap**>(_a[0]) = _r; }  break;
        case 2: { QPixmap* _r = _t->new_QPixmap((*reinterpret_cast< const QSize(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap**>(_a[0]) = _r; }  break;
        case 3: { QPixmap* _r = _t->new_QPixmap((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< Qt::ImageConversionFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap**>(_a[0]) = _r; }  break;
        case 4: { QPixmap* _r = _t->new_QPixmap((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap**>(_a[0]) = _r; }  break;
        case 5: { QPixmap* _r = _t->new_QPixmap((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap**>(_a[0]) = _r; }  break;
        case 6: { QPixmap* _r = _t->new_QPixmap((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap**>(_a[0]) = _r; }  break;
        case 7: _t->delete_QPixmap((*reinterpret_cast< QPixmap*(*)>(_a[1]))); break;
        case 8: { QPixmap _r = _t->alphaChannel((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 9: { qint64 _r = _t->cacheKey((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->convertFromImage((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< Qt::ImageConversionFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->convertFromImage((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QPixmap _r = _t->copy((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 13: { QPixmap _r = _t->copy((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 14: { QPixmap _r = _t->copy((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 15: { QBitmap _r = _t->createHeuristicMask((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QBitmap*>(_a[0]) = _r; }  break;
        case 16: { QBitmap _r = _t->createHeuristicMask((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBitmap*>(_a[0]) = _r; }  break;
        case 17: { QBitmap _r = _t->createMaskFromColor((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QBitmap*>(_a[0]) = _r; }  break;
        case 18: { QBitmap _r = _t->createMaskFromColor((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])),(*reinterpret_cast< Qt::MaskMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QBitmap*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->static_QPixmap_defaultDepth();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->depth((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->devType((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: _t->fill((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 23: _t->fill((*reinterpret_cast< QPixmap*(*)>(_a[1]))); break;
        case 24: _t->fill((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QWidget*(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3]))); break;
        case 25: _t->fill((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QWidget*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 26: { QPixmap _r = _t->static_QPixmap_fromImage((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< Qt::ImageConversionFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 27: { QPixmap _r = _t->static_QPixmap_fromImage((*reinterpret_cast< const QImage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 28: { QPixmap _r = _t->static_QPixmap_fromImageReader((*reinterpret_cast< QImageReader*(*)>(_a[1])),(*reinterpret_cast< Qt::ImageConversionFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 29: { QPixmap _r = _t->static_QPixmap_fromImageReader((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 30: { QPixmap _r = _t->static_QPixmap_grabWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 31: { QPixmap _r = _t->static_QPixmap_grabWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 32: { QPixmap _r = _t->static_QPixmap_grabWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 33: { QPixmap _r = _t->static_QPixmap_grabWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 34: { QPixmap _r = _t->static_QPixmap_grabWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 35: { QPixmap _r = _t->static_QPixmap_grabWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 36: { QPixmap _r = _t->static_QPixmap_grabWindow((*reinterpret_cast< WId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 37: { QPixmap _r = _t->static_QPixmap_grabWindow((*reinterpret_cast< WId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 38: { QPixmap _r = _t->static_QPixmap_grabWindow((*reinterpret_cast< WId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 39: { QPixmap _r = _t->static_QPixmap_grabWindow((*reinterpret_cast< WId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 40: { QPixmap _r = _t->static_QPixmap_grabWindow((*reinterpret_cast< WId(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 41: { bool _r = _t->hasAlpha((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->hasAlphaChannel((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { int _r = _t->height((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->isNull((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->isQBitmap((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->load((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< Qt::ImageConversionFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: { bool _r = _t->load((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { bool _r = _t->load((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->loadFromData((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< Qt::ImageConversionFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: { bool _r = _t->loadFromData((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 51: { bool _r = _t->loadFromData((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 52: { QBitmap _r = _t->mask((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBitmap*>(_a[0]) = _r; }  break;
        case 53: { int _r = _t->metric((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< QPaintDevice::PaintDeviceMetric(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 54: _t->writeTo((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 55: _t->readFrom((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 56: { QPaintEngine* _r = _t->paintEngine((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPaintEngine**>(_a[0]) = _r; }  break;
        case 57: { QRect _r = _t->rect((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 58: { bool _r = _t->save((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 59: { bool _r = _t->save((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 60: { bool _r = _t->save((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 61: { bool _r = _t->save((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 62: { bool _r = _t->save((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 63: { bool _r = _t->save((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 64: { QPixmap _r = _t->scaled((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< Qt::AspectRatioMode(*)>(_a[3])),(*reinterpret_cast< Qt::TransformationMode(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 65: { QPixmap _r = _t->scaled((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< Qt::AspectRatioMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 66: { QPixmap _r = _t->scaled((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 67: { QPixmap _r = _t->scaled((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< Qt::AspectRatioMode(*)>(_a[4])),(*reinterpret_cast< Qt::TransformationMode(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 68: { QPixmap _r = _t->scaled((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< Qt::AspectRatioMode(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 69: { QPixmap _r = _t->scaled((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 70: { QPixmap _r = _t->scaledToHeight((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::TransformationMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 71: { QPixmap _r = _t->scaledToHeight((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 72: { QPixmap _r = _t->scaledToWidth((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::TransformationMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 73: { QPixmap _r = _t->scaledToWidth((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 74: _t->scroll((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QRect(*)>(_a[4])),(*reinterpret_cast< QRegion*(*)>(_a[5]))); break;
        case 75: _t->scroll((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QRect(*)>(_a[4]))); break;
        case 76: _t->scroll((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< QRegion*(*)>(_a[8]))); break;
        case 77: _t->scroll((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 78: _t->setAlphaChannel((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 79: _t->setMask((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QBitmap(*)>(_a[2]))); break;
        case 80: { QSize _r = _t->size((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 81: _t->swap((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< QPixmap(*)>(_a[2]))); break;
        case 82: { QImage _r = _t->toImage((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 83: { QPixmap _r = _t->transformed((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QMatrix(*)>(_a[2])),(*reinterpret_cast< Qt::TransformationMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 84: { QPixmap _r = _t->transformed((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QMatrix(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 85: { QPixmap _r = _t->transformed((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])),(*reinterpret_cast< Qt::TransformationMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 86: { QPixmap _r = _t->transformed((*reinterpret_cast< QPixmap*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 87: { QMatrix _r = _t->static_QPixmap_trueMatrix((*reinterpret_cast< const QMatrix(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QMatrix*>(_a[0]) = _r; }  break;
        case 88: { QTransform _r = _t->static_QPixmap_trueMatrix((*reinterpret_cast< const QTransform(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 89: { int _r = _t->width((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 90: { bool _r = _t->__nonzero__((*reinterpret_cast< QPixmap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPixmap::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPixmap::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPixmap,
      qt_meta_data_PythonQtWrapper_QPixmap, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPixmap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPixmap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPixmap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPixmap))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPixmap*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPixmap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 91)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 91;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QPolygon[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      59,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   25,   26,   25, 0x0a,
      53,   51,   26,   25, 0x0a,
      85,   76,   26,   25, 0x0a,
     112,  110,   26,   25, 0x2a,
     134,  132,   26,   25, 0x0a,
     169,  164,   26,   25, 0x0a,
     191,  187,   25,   25, 0x0a,
     237,  218,   25,   25, 0x0a,
     295,  276,  262,   25, 0x0a,
     336,  319,  313,   25, 0x0a,
     364,  319,  360,   25, 0x0a,
     384,  319,   25,   25, 0x0a,
     406,  218,  401,   25, 0x0a,
     462,  433,  401,   25, 0x0a,
     507,  319,  360,   25, 0x0a,
     524,  218,  360,   25, 0x0a,
     548,  319,  401,   25, 0x0a,
     565,  218,  401,   25, 0x0a,
     633,  609,  592,   25, 0x0a,
     660,  319,  262,   25, 0x0a,
     698,  693,  677,   25, 0x0a,
     762,  738,  360,   25, 0x0a,
     820,  801,  792,   25, 0x0a,
     852,  319,  401,   25, 0x0a,
     894,  871,  401,   25, 0x0a,
     934,  319,  262,   25, 0x0a,
     950,  738,  360,   25, 0x0a,
    1012,  984,  677,   25, 0x0a,
    1054, 1035,  401,   25, 0x0a,
    1107, 1088,  792,   25, 0x0a,
    1134, 1088,  792,   25, 0x0a,
    1188, 1164,   25,   25, 0x0a,
    1220, 1035,  401,   25, 0x0a,
    1254, 1164,   25,   25, 0x0a,
    1287,  319,   25,   25, 0x0a,
    1307,  319,   25,   25, 0x0a,
    1328,  218,   25,   25, 0x0a,
    1354,  218,   25,   25, 0x0a,
    1382,  218,   25,   25, 0x0a,
    1411,  276,   25,   25, 0x0a,
    1454, 1433,   25,   25, 0x0a,
    1501, 1480,   25,   25, 0x0a,
    1553, 1531,   25,   25, 0x0a,
    1576, 1531,   25,   25, 0x0a,
    1624, 1598,   25,   25, 0x0a,
    1652,  319,  360,   25, 0x0a,
    1668,  319,   25,   25, 0x0a,
    1687,  218,  401,   25, 0x0a,
    1716,  801,  792,   25, 0x0a,
    1747,  871,   25,   25, 0x0a,
    1787,  319, 1773,   25, 0x0a,
    1829, 1805,   25,   25, 0x0a,
    1880, 1857,   25,   25, 0x0a,
    1909, 1805,  792,   25, 0x0a,
    1938, 1857,  792,   25, 0x0a,
    1968,  801,  792,   25, 0x0a,
    2002,  276, 1995,   25, 0x0a,
    2055, 2023, 1995,   25, 0x0a,
    2091,   25, 2083,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPolygon[] = {
    "PythonQtWrapper_QPolygon\0\0QPolygon*\0"
    "new_QPolygon()\0a\0new_QPolygon(QPolygon)\0"
    "r,closed\0new_QPolygon(QRect,bool)\0r\0"
    "new_QPolygon(QRect)\0v\0"
    "new_QPolygon(QVector<QPoint>)\0size\0"
    "new_QPolygon(int)\0obj\0delete_QPolygon(QPolygon*)\0"
    "theWrappedObject,t\0append(QPolygon*,QPoint)\0"
    "const QPoint*\0theWrappedObject,i\0"
    "at(QPolygon*,int)\0QRect\0theWrappedObject\0"
    "boundingRect(QPolygon*)\0int\0"
    "capacity(QPolygon*)\0clear(QPolygon*)\0"
    "bool\0contains(QPolygon*,QPoint)\0"
    "theWrappedObject,pt,fillRule\0"
    "containsPoint(QPolygon*,QPoint,Qt::FillRule)\0"
    "count(QPolygon*)\0count(QPolygon*,QPoint)\0"
    "empty(QPolygon*)\0endsWith(QPolygon*,QPoint)\0"
    "QVector<QPoint>*\0theWrappedObject,t,size\0"
    "fill(QPolygon*,QPoint,int)\0first(QPolygon*)\0"
    "QVector<QPoint>\0list\0"
    "static_QPolygon_fromList(QList<QPoint>)\0"
    "theWrappedObject,t,from\0"
    "indexOf(QPolygon*,QPoint,int)\0QPolygon\0"
    "theWrappedObject,r\0intersected(QPolygon*,QPolygon)\0"
    "isEmpty(QPolygon*)\0theWrappedObject,other\0"
    "isSharedWith(QPolygon*,QVector<QPoint>)\0"
    "last(QPolygon*)\0lastIndexOf(QPolygon*,QPoint,int)\0"
    "theWrappedObject,pos,length\0"
    "mid(QPolygon*,int,int)\0theWrappedObject,v\0"
    "__ne__(QPolygon*,QVector<QPoint>)\0"
    "theWrappedObject,m\0__mul__(QPolygon*,QMatrix)\0"
    "__mul__(QPolygon*,QTransform)\0"
    "theWrappedObject,stream\0"
    "writeTo(QPolygon*,QDataStream&)\0"
    "__eq__(QPolygon*,QVector<QPoint>)\0"
    "readFrom(QPolygon*,QDataStream&)\0"
    "pop_back(QPolygon*)\0pop_front(QPolygon*)\0"
    "prepend(QPolygon*,QPoint)\0"
    "push_back(QPolygon*,QPoint)\0"
    "push_front(QPolygon*,QPoint)\0"
    "remove(QPolygon*,int)\0theWrappedObject,i,n\0"
    "remove(QPolygon*,int,int)\0"
    "theWrappedObject,i,t\0replace(QPolygon*,int,QPoint)\0"
    "theWrappedObject,size\0reserve(QPolygon*,int)\0"
    "resize(QPolygon*,int)\0theWrappedObject,sharable\0"
    "setSharable(QPolygon*,bool)\0size(QPolygon*)\0"
    "squeeze(QPolygon*)\0startsWith(QPolygon*,QPoint)\0"
    "subtracted(QPolygon*,QPolygon)\0"
    "swap(QPolygon*,QPolygon&)\0QList<QPoint>\0"
    "toList(QPolygon*)\0theWrappedObject,offset\0"
    "translate(QPolygon*,QPoint)\0"
    "theWrappedObject,dx,dy\0"
    "translate(QPolygon*,int,int)\0"
    "translated(QPolygon*,QPoint)\0"
    "translated(QPolygon*,int,int)\0"
    "united(QPolygon*,QPolygon)\0QPoint\0"
    "value(QPolygon*,int)\0"
    "theWrappedObject,i,defaultValue\0"
    "value(QPolygon*,int,QPoint)\0QString\0"
    "py_toString(QPolygon*)\0"
};

void PythonQtWrapper_QPolygon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPolygon *_t = static_cast<PythonQtWrapper_QPolygon *>(_o);
        switch (_id) {
        case 0: { QPolygon* _r = _t->new_QPolygon();
            if (_a[0]) *reinterpret_cast< QPolygon**>(_a[0]) = _r; }  break;
        case 1: { QPolygon* _r = _t->new_QPolygon((*reinterpret_cast< const QPolygon(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPolygon**>(_a[0]) = _r; }  break;
        case 2: { QPolygon* _r = _t->new_QPolygon((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygon**>(_a[0]) = _r; }  break;
        case 3: { QPolygon* _r = _t->new_QPolygon((*reinterpret_cast< const QRect(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPolygon**>(_a[0]) = _r; }  break;
        case 4: { QPolygon* _r = _t->new_QPolygon((*reinterpret_cast< const QVector<QPoint>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPolygon**>(_a[0]) = _r; }  break;
        case 5: { QPolygon* _r = _t->new_QPolygon((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPolygon**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QPolygon((*reinterpret_cast< QPolygon*(*)>(_a[1]))); break;
        case 7: _t->append((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 8: { const QPoint* _r = _t->at((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< const QPoint**>(_a[0]) = _r; }  break;
        case 9: { QRect _r = _t->boundingRect((*reinterpret_cast< QPolygon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->capacity((*reinterpret_cast< QPolygon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: _t->clear((*reinterpret_cast< QPolygon*(*)>(_a[1]))); break;
        case 12: { bool _r = _t->contains((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->containsPoint((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< Qt::FillRule(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->count((*reinterpret_cast< QPolygon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->count((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->empty((*reinterpret_cast< QPolygon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->endsWith((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { QVector<QPoint>* _r = _t->fill((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVector<QPoint>**>(_a[0]) = _r; }  break;
        case 19: { const QPoint* _r = _t->first((*reinterpret_cast< QPolygon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QPoint**>(_a[0]) = _r; }  break;
        case 20: { QVector<QPoint> _r = _t->static_QPolygon_fromList((*reinterpret_cast< const QList<QPoint>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QPoint>*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->indexOf((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { QPolygon _r = _t->intersected((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPolygon(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygon*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->isEmpty((*reinterpret_cast< QPolygon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->isSharedWith((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QVector<QPoint>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { const QPoint* _r = _t->last((*reinterpret_cast< QPolygon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QPoint**>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->lastIndexOf((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { QVector<QPoint> _r = _t->mid((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVector<QPoint>*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->__ne__((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QVector<QPoint>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { QPolygon _r = _t->__mul__((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QMatrix(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygon*>(_a[0]) = _r; }  break;
        case 30: { QPolygon _r = _t->__mul__((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygon*>(_a[0]) = _r; }  break;
        case 31: _t->writeTo((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 32: { bool _r = _t->__eq__((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QVector<QPoint>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: _t->readFrom((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 34: _t->pop_back((*reinterpret_cast< QPolygon*(*)>(_a[1]))); break;
        case 35: _t->pop_front((*reinterpret_cast< QPolygon*(*)>(_a[1]))); break;
        case 36: _t->prepend((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 37: _t->push_back((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 38: _t->push_front((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 39: _t->remove((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 40: _t->remove((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 41: _t->replace((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3]))); break;
        case 42: _t->reserve((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 43: _t->resize((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 44: _t->setSharable((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 45: { int _r = _t->size((*reinterpret_cast< QPolygon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 46: _t->squeeze((*reinterpret_cast< QPolygon*(*)>(_a[1]))); break;
        case 47: { bool _r = _t->startsWith((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { QPolygon _r = _t->subtracted((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPolygon(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygon*>(_a[0]) = _r; }  break;
        case 49: _t->swap((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< QPolygon(*)>(_a[2]))); break;
        case 50: { QList<QPoint> _r = _t->toList((*reinterpret_cast< QPolygon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QPoint>*>(_a[0]) = _r; }  break;
        case 51: _t->translate((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 52: _t->translate((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 53: { QPolygon _r = _t->translated((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygon*>(_a[0]) = _r; }  break;
        case 54: { QPolygon _r = _t->translated((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPolygon*>(_a[0]) = _r; }  break;
        case 55: { QPolygon _r = _t->united((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< const QPolygon(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygon*>(_a[0]) = _r; }  break;
        case 56: { QPoint _r = _t->value((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 57: { QPoint _r = _t->value((*reinterpret_cast< QPolygon*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 58: { QString _r = _t->py_toString((*reinterpret_cast< QPolygon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPolygon::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPolygon::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPolygon,
      qt_meta_data_PythonQtWrapper_QPolygon, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPolygon::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPolygon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPolygon::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPolygon))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPolygon*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPolygon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QRegion[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       1,  224, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   24,   25,   24, 0x0a,
      55,   48,   25,   24, 0x0a,
      88,   76,   25,   24, 0x0a,
     126,  123,   25,   24, 0x2a,
     152,  148,   25,   24, 0x0a,
     193,  191,   25,   24, 0x2a,
     219,  212,   25,   24, 0x0a,
     250,  240,   25,   24, 0x0a,
     307,  299,   25,   24, 0x2a,
     340,  336,   24,   24, 0x0a,
     388,  371,  365,   24, 0x0a,
     435,  416,  411,   24, 0x0a,
     480,  461,  411,   24, 0x0a,
     513,  461,  505,   24, 0x0a,
     539,  461,  505,   24, 0x0a,
     567,  461,  505,   24, 0x0a,
     597,  461,  411,   24, 0x0a,
     624,  461,  411,   24, 0x0a,
     653,  371,  411,   24, 0x0a,
     675,  371,  671,   24, 0x0a,
     694,  461,  411,   24, 0x0a,
     719,  461,  505,   24, 0x0a,
     762,  743,  505,   24, 0x0a,
     788,  743,  505,   24, 0x0a,
     817,  461,  505,   24, 0x0a,
     865,  841,   24,   24, 0x0a,
     896,  461,  411,   24, 0x0a,
     921,  841,   24,   24, 0x0a,
     953,  371,  671,   24, 0x0a,
     988,  371,  973,   24, 0x0a,
    1030, 1004,   24,   24, 0x0a,
    1066,  461,  505,   24, 0x0a,
    1118, 1095,   24,   24, 0x0a,
    1142,  416,   24,   24, 0x0a,
    1192, 1169,   24,   24, 0x0a,
    1220,  416,  505,   24, 0x0a,
    1248, 1169,  505,   24, 0x0a,
    1277,  461,  505,   24, 0x0a,
    1299,  461,  505,   24, 0x0a,
    1322,  461,  505,   24, 0x0a,
    1347,  461,  505,   24, 0x0a,
    1379,   24, 1371,   24, 0x0a,

 // enums: name, flags, count, data
    1401, 0x0,    2,  228,

 // enum data: key, value
    1412, uint(PythonQtWrapper_QRegion::Rectangle),
    1422, uint(PythonQtWrapper_QRegion::Ellipse),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QRegion[] = {
    "PythonQtWrapper_QRegion\0\0QRegion*\0"
    "new_QRegion()\0bitmap\0new_QRegion(QBitmap)\0"
    "pa,fillRule\0new_QRegion(QPolygon,Qt::FillRule)\0"
    "pa\0new_QRegion(QPolygon)\0r,t\0"
    "new_QRegion(QRect,QRegion::RegionType)\0"
    "r\0new_QRegion(QRect)\0region\0"
    "new_QRegion(QRegion)\0x,y,w,h,t\0"
    "new_QRegion(int,int,int,int,QRegion::RegionType)\0"
    "x,y,w,h\0new_QRegion(int,int,int,int)\0"
    "obj\0delete_QRegion(QRegion*)\0QRect\0"
    "theWrappedObject\0boundingRect(QRegion*)\0"
    "bool\0theWrappedObject,p\0"
    "contains(QRegion*,QPoint)\0theWrappedObject,r\0"
    "contains(QRegion*,QRect)\0QRegion\0"
    "intersect(QRegion*,QRect)\0"
    "intersected(QRegion*,QRect)\0"
    "intersected(QRegion*,QRegion)\0"
    "intersects(QRegion*,QRect)\0"
    "intersects(QRegion*,QRegion)\0"
    "isEmpty(QRegion*)\0int\0numRects(QRegion*)\0"
    "__ne__(QRegion*,QRegion)\0"
    "__and__(QRegion*,QRect)\0theWrappedObject,m\0"
    "__mul__(QRegion*,QMatrix)\0"
    "__mul__(QRegion*,QTransform)\0"
    "__add__(QRegion*,QRect)\0theWrappedObject,arg__1\0"
    "writeTo(QRegion*,QDataStream&)\0"
    "__eq__(QRegion*,QRegion)\0"
    "readFrom(QRegion*,QDataStream&)\0"
    "rectCount(QRegion*)\0QVector<QRect>\0"
    "rects(QRegion*)\0theWrappedObject,rect,num\0"
    "setRects(QRegion*,const QRect*,int)\0"
    "subtracted(QRegion*,QRegion)\0"
    "theWrappedObject,other\0swap(QRegion*,QRegion&)\0"
    "translate(QRegion*,QPoint)\0"
    "theWrappedObject,dx,dy\0"
    "translate(QRegion*,int,int)\0"
    "translated(QRegion*,QPoint)\0"
    "translated(QRegion*,int,int)\0"
    "unite(QRegion*,QRect)\0united(QRegion*,QRect)\0"
    "united(QRegion*,QRegion)\0"
    "xored(QRegion*,QRegion)\0QString\0"
    "py_toString(QRegion*)\0RegionType\0"
    "Rectangle\0Ellipse\0"
};

void PythonQtWrapper_QRegion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QRegion *_t = static_cast<PythonQtWrapper_QRegion *>(_o);
        switch (_id) {
        case 0: { QRegion* _r = _t->new_QRegion();
            if (_a[0]) *reinterpret_cast< QRegion**>(_a[0]) = _r; }  break;
        case 1: { QRegion* _r = _t->new_QRegion((*reinterpret_cast< const QBitmap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRegion**>(_a[0]) = _r; }  break;
        case 2: { QRegion* _r = _t->new_QRegion((*reinterpret_cast< const QPolygon(*)>(_a[1])),(*reinterpret_cast< Qt::FillRule(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion**>(_a[0]) = _r; }  break;
        case 3: { QRegion* _r = _t->new_QRegion((*reinterpret_cast< const QPolygon(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRegion**>(_a[0]) = _r; }  break;
        case 4: { QRegion* _r = _t->new_QRegion((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< QRegion::RegionType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion**>(_a[0]) = _r; }  break;
        case 5: { QRegion* _r = _t->new_QRegion((*reinterpret_cast< const QRect(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRegion**>(_a[0]) = _r; }  break;
        case 6: { QRegion* _r = _t->new_QRegion((*reinterpret_cast< const QRegion(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRegion**>(_a[0]) = _r; }  break;
        case 7: { QRegion* _r = _t->new_QRegion((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QRegion::RegionType(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRegion**>(_a[0]) = _r; }  break;
        case 8: { QRegion* _r = _t->new_QRegion((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QRegion**>(_a[0]) = _r; }  break;
        case 9: _t->delete_QRegion((*reinterpret_cast< QRegion*(*)>(_a[1]))); break;
        case 10: { QRect _r = _t->boundingRect((*reinterpret_cast< QRegion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->contains((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->contains((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QRegion _r = _t->intersect((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 14: { QRegion _r = _t->intersected((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 15: { QRegion _r = _t->intersected((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QRegion(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->intersects((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->intersects((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QRegion(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->isEmpty((*reinterpret_cast< QRegion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->numRects((*reinterpret_cast< QRegion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->__ne__((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QRegion(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { QRegion _r = _t->__and__((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 22: { QRegion _r = _t->__mul__((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QMatrix(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 23: { QRegion _r = _t->__mul__((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 24: { QRegion _r = _t->__add__((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 25: _t->writeTo((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 26: { bool _r = _t->__eq__((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QRegion(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->readFrom((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 28: { int _r = _t->rectCount((*reinterpret_cast< QRegion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 29: { QVector<QRect> _r = _t->rects((*reinterpret_cast< QRegion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QRect>*>(_a[0]) = _r; }  break;
        case 30: _t->setRects((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QRect*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 31: { QRegion _r = _t->subtracted((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QRegion(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 32: _t->swap((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< QRegion(*)>(_a[2]))); break;
        case 33: _t->translate((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 34: _t->translate((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 35: { QRegion _r = _t->translated((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 36: { QRegion _r = _t->translated((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 37: { QRegion _r = _t->unite((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 38: { QRegion _r = _t->united((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 39: { QRegion _r = _t->united((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QRegion(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 40: { QRegion _r = _t->xored((*reinterpret_cast< QRegion*(*)>(_a[1])),(*reinterpret_cast< const QRegion(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 41: { QString _r = _t->py_toString((*reinterpret_cast< QRegion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QRegion::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QRegion::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QRegion,
      qt_meta_data_PythonQtWrapper_QRegion, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QRegion::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QRegion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QRegion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QRegion))
        return static_cast<void*>(const_cast< PythonQtWrapper_QRegion*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QRegion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSizePolicy[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       4,  139, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   28,   29,   28, 0x0a,
      80,   60,   29,   28, 0x0a,
     162,  137,   29,   28, 0x0a,
     250,  244,   29,   28, 0x0a,
     283,  279,   28,   28, 0x0a,
     358,  341,  316,   28, 0x0a,
     401,  341,  384,   28, 0x0a,
     440,  341,  435,   28, 0x0a,
     472,  341,  435,   28, 0x0a,
     524,  341,  504,   28, 0x0a,
     559,  341,  555,   28, 0x0a,
     610,  591,  435,   28, 0x0a,
     667,  643,   28,   28, 0x0a,
     702,  591,  435,   28, 0x0a,
     735,  643,   28,   28, 0x0a,
     793,  771,   28,   28, 0x0a,
     866,  847,   28,   28, 0x0a,
     922,  903,   28,   28, 0x0a,
    1007,  976,   28,   28, 0x0a,
    1048,  903,   28,   28, 0x0a,
    1100,  976,   28,   28, 0x0a,
    1139,  847,   28,   28, 0x0a,
    1176,  341,   28,   28, 0x0a,
    1200,  341,  504,   28, 0x0a,
    1229,  341,  555,   28, 0x0a,

 // enums: name, flags, count, data
    1259, 0x0,   15,  155,
    1271, 0x1,   15,  185,
    1284, 0x0,    4,  215,
    1295, 0x0,    7,  223,

 // enum data: key, value
    1302, uint(PythonQtWrapper_QSizePolicy::DefaultType),
    1314, uint(PythonQtWrapper_QSizePolicy::ButtonBox),
    1324, uint(PythonQtWrapper_QSizePolicy::CheckBox),
    1333, uint(PythonQtWrapper_QSizePolicy::ComboBox),
    1342, uint(PythonQtWrapper_QSizePolicy::Frame),
    1348, uint(PythonQtWrapper_QSizePolicy::GroupBox),
    1357, uint(PythonQtWrapper_QSizePolicy::Label),
    1363, uint(PythonQtWrapper_QSizePolicy::Line),
    1368, uint(PythonQtWrapper_QSizePolicy::LineEdit),
    1377, uint(PythonQtWrapper_QSizePolicy::PushButton),
    1388, uint(PythonQtWrapper_QSizePolicy::RadioButton),
    1400, uint(PythonQtWrapper_QSizePolicy::Slider),
    1407, uint(PythonQtWrapper_QSizePolicy::SpinBox),
    1415, uint(PythonQtWrapper_QSizePolicy::TabWidget),
    1425, uint(PythonQtWrapper_QSizePolicy::ToolButton),
    1302, uint(PythonQtWrapper_QSizePolicy::DefaultType),
    1314, uint(PythonQtWrapper_QSizePolicy::ButtonBox),
    1324, uint(PythonQtWrapper_QSizePolicy::CheckBox),
    1333, uint(PythonQtWrapper_QSizePolicy::ComboBox),
    1342, uint(PythonQtWrapper_QSizePolicy::Frame),
    1348, uint(PythonQtWrapper_QSizePolicy::GroupBox),
    1357, uint(PythonQtWrapper_QSizePolicy::Label),
    1363, uint(PythonQtWrapper_QSizePolicy::Line),
    1368, uint(PythonQtWrapper_QSizePolicy::LineEdit),
    1377, uint(PythonQtWrapper_QSizePolicy::PushButton),
    1388, uint(PythonQtWrapper_QSizePolicy::RadioButton),
    1400, uint(PythonQtWrapper_QSizePolicy::Slider),
    1407, uint(PythonQtWrapper_QSizePolicy::SpinBox),
    1415, uint(PythonQtWrapper_QSizePolicy::TabWidget),
    1425, uint(PythonQtWrapper_QSizePolicy::ToolButton),
    1436, uint(PythonQtWrapper_QSizePolicy::GrowFlag),
    1445, uint(PythonQtWrapper_QSizePolicy::ExpandFlag),
    1456, uint(PythonQtWrapper_QSizePolicy::ShrinkFlag),
    1467, uint(PythonQtWrapper_QSizePolicy::IgnoreFlag),
    1478, uint(PythonQtWrapper_QSizePolicy::Fixed),
    1484, uint(PythonQtWrapper_QSizePolicy::Minimum),
    1492, uint(PythonQtWrapper_QSizePolicy::Maximum),
    1500, uint(PythonQtWrapper_QSizePolicy::Preferred),
    1510, uint(PythonQtWrapper_QSizePolicy::MinimumExpanding),
    1527, uint(PythonQtWrapper_QSizePolicy::Expanding),
    1537, uint(PythonQtWrapper_QSizePolicy::Ignored),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSizePolicy[] = {
    "PythonQtWrapper_QSizePolicy\0\0QSizePolicy*\0"
    "new_QSizePolicy()\0horizontal,vertical\0"
    "new_QSizePolicy(QSizePolicy::Policy,QSizePolicy::Policy)\0"
    "horizontal,vertical,type\0"
    "new_QSizePolicy(QSizePolicy::Policy,QSizePolicy::Policy,QSizePolicy::C"
    "ontrolType)\0"
    "other\0new_QSizePolicy(QSizePolicy)\0"
    "obj\0delete_QSizePolicy(QSizePolicy*)\0"
    "QSizePolicy::ControlType\0theWrappedObject\0"
    "controlType(QSizePolicy*)\0Qt::Orientations\0"
    "expandingDirections(QSizePolicy*)\0"
    "bool\0hasHeightForWidth(QSizePolicy*)\0"
    "hasWidthForHeight(QSizePolicy*)\0"
    "QSizePolicy::Policy\0horizontalPolicy(QSizePolicy*)\0"
    "int\0horizontalStretch(QSizePolicy*)\0"
    "theWrappedObject,s\0__ne__(QSizePolicy*,QSizePolicy)\0"
    "theWrappedObject,arg__1\0"
    "writeTo(QSizePolicy*,QDataStream&)\0"
    "__eq__(QSizePolicy*,QSizePolicy)\0"
    "readFrom(QSizePolicy*,QDataStream&)\0"
    "theWrappedObject,type\0"
    "setControlType(QSizePolicy*,QSizePolicy::ControlType)\0"
    "theWrappedObject,b\0"
    "setHeightForWidth(QSizePolicy*,bool)\0"
    "theWrappedObject,d\0"
    "setHorizontalPolicy(QSizePolicy*,QSizePolicy::Policy)\0"
    "theWrappedObject,stretchFactor\0"
    "setHorizontalStretch(QSizePolicy*,uchar)\0"
    "setVerticalPolicy(QSizePolicy*,QSizePolicy::Policy)\0"
    "setVerticalStretch(QSizePolicy*,uchar)\0"
    "setWidthForHeight(QSizePolicy*,bool)\0"
    "transpose(QSizePolicy*)\0"
    "verticalPolicy(QSizePolicy*)\0"
    "verticalStretch(QSizePolicy*)\0ControlType\0"
    "ControlTypes\0PolicyFlag\0Policy\0"
    "DefaultType\0ButtonBox\0CheckBox\0ComboBox\0"
    "Frame\0GroupBox\0Label\0Line\0LineEdit\0"
    "PushButton\0RadioButton\0Slider\0SpinBox\0"
    "TabWidget\0ToolButton\0GrowFlag\0ExpandFlag\0"
    "ShrinkFlag\0IgnoreFlag\0Fixed\0Minimum\0"
    "Maximum\0Preferred\0MinimumExpanding\0"
    "Expanding\0Ignored\0"
};

void PythonQtWrapper_QSizePolicy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSizePolicy *_t = static_cast<PythonQtWrapper_QSizePolicy *>(_o);
        switch (_id) {
        case 0: { QSizePolicy* _r = _t->new_QSizePolicy();
            if (_a[0]) *reinterpret_cast< QSizePolicy**>(_a[0]) = _r; }  break;
        case 1: { QSizePolicy* _r = _t->new_QSizePolicy((*reinterpret_cast< QSizePolicy::Policy(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSizePolicy**>(_a[0]) = _r; }  break;
        case 2: { QSizePolicy* _r = _t->new_QSizePolicy((*reinterpret_cast< QSizePolicy::Policy(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[2])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSizePolicy**>(_a[0]) = _r; }  break;
        case 3: { QSizePolicy* _r = _t->new_QSizePolicy((*reinterpret_cast< const QSizePolicy(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizePolicy**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSizePolicy((*reinterpret_cast< QSizePolicy*(*)>(_a[1]))); break;
        case 5: { QSizePolicy::ControlType _r = _t->controlType((*reinterpret_cast< QSizePolicy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizePolicy::ControlType*>(_a[0]) = _r; }  break;
        case 6: { Qt::Orientations _r = _t->expandingDirections((*reinterpret_cast< QSizePolicy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientations*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->hasHeightForWidth((*reinterpret_cast< QSizePolicy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->hasWidthForHeight((*reinterpret_cast< QSizePolicy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QSizePolicy::Policy _r = _t->horizontalPolicy((*reinterpret_cast< QSizePolicy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizePolicy::Policy*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->horizontalStretch((*reinterpret_cast< QSizePolicy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__ne__((*reinterpret_cast< QSizePolicy*(*)>(_a[1])),(*reinterpret_cast< const QSizePolicy(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->writeTo((*reinterpret_cast< QSizePolicy*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 13: { bool _r = _t->__eq__((*reinterpret_cast< QSizePolicy*(*)>(_a[1])),(*reinterpret_cast< const QSizePolicy(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->readFrom((*reinterpret_cast< QSizePolicy*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 15: _t->setControlType((*reinterpret_cast< QSizePolicy*(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[2]))); break;
        case 16: _t->setHeightForWidth((*reinterpret_cast< QSizePolicy*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 17: _t->setHorizontalPolicy((*reinterpret_cast< QSizePolicy*(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[2]))); break;
        case 18: _t->setHorizontalStretch((*reinterpret_cast< QSizePolicy*(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2]))); break;
        case 19: _t->setVerticalPolicy((*reinterpret_cast< QSizePolicy*(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[2]))); break;
        case 20: _t->setVerticalStretch((*reinterpret_cast< QSizePolicy*(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2]))); break;
        case 21: _t->setWidthForHeight((*reinterpret_cast< QSizePolicy*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 22: _t->transpose((*reinterpret_cast< QSizePolicy*(*)>(_a[1]))); break;
        case 23: { QSizePolicy::Policy _r = _t->verticalPolicy((*reinterpret_cast< QSizePolicy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizePolicy::Policy*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->verticalStretch((*reinterpret_cast< QSizePolicy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSizePolicy::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSizePolicy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSizePolicy,
      qt_meta_data_PythonQtWrapper_QSizePolicy, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSizePolicy::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSizePolicy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSizePolicy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSizePolicy))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSizePolicy*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSizePolicy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTextFormat[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      53,   14, // methods
       0,    0, // properties
       5,  279, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   28,   29,   28, 0x0a,
      64,   60,   29,   28, 0x0a,
      98,   93,   29,   28, 0x0a,
     123,  119,   28,   28, 0x0a,
     180,  163,  156,   28, 0x0a,
     238,  210,  205,   28, 0x0a,
     269,  210,  156,   28, 0x0a,
     301,  163,   28,   28, 0x0a,
     331,  163,   28,   28, 0x0a,
     361,  210,   28,   28, 0x0a,
     400,  210,  393,   28, 0x0a,
     438,  210,  432,   28, 0x0a,
     471,  163,  156,   28, 0x0a,
     496,  210,  205,   28, 0x0a,
     530,  210,  526,   28, 0x0a,
     560,  163,  205,   28, 0x0a,
     588,  163,  205,   28, 0x0a,
     615,  163,  205,   28, 0x0a,
     643,  163,  205,   28, 0x0a,
     671,  163,  205,   28, 0x0a,
     698,  163,  205,   28, 0x0a,
     730,  163,  205,   28, 0x0a,
     758,  163,  205,   28, 0x0a,
     800,  163,  780,   28, 0x0a,
     842,  210,  830,   28, 0x0a,
     896,  210,  875,   28, 0x0a,
     958,  935,   28,   28, 0x0a,
     990,  163,  526,   28, 0x0a,
    1016,  163,  526,   28, 0x0a,
    1062, 1041,  205,   28, 0x0a,
    1119, 1095,   28,   28, 0x0a,
    1154, 1041,  205,   28, 0x0a,
    1187, 1095,   28,   28, 0x0a,
    1228,  210, 1223,   28, 0x0a,
    1277,  163, 1258,   28, 0x0a,
    1311,  210, 1302,   28, 0x0a,
    1338,  163,  526,   28, 0x0a,
    1389, 1366,   28,   28, 0x0a,
    1424, 1366,   28,   28, 0x0a,
    1486, 1459,   28,   28, 0x0a,
    1563, 1539,   28,   28, 0x0a,
    1618, 1596,   28,   28, 0x0a,
    1684, 1650,   28,   28, 0x0a,
    1759, 1723,   28,   28, 0x0a,
    1818,  210, 1810,   28, 0x0a,
    1868,  163, 1851,   28, 0x0a,
    1912,  163, 1896,   28, 0x0a,
    1956,  163, 1939,   28, 0x0a,
    2001,  163, 1984,   28, 0x0a,
    2045,  163, 2029,   28, 0x0a,
    2093,  163, 2072,   28, 0x0a,
    2142,  163, 2125,   28, 0x0a,
    2170,  163,  526,   28, 0x0a,

 // enums: name, flags, count, data
    2189, 0x0,   80,  299,
    2198, 0x0,    7,  459,
    2209, 0x0,    5,  473,
    2221, 0x0,    3,  483,
    2235, 0x1,    3,  489,

 // enum data: key, value
    2250, uint(PythonQtWrapper_QTextFormat::ObjectIndex),
    2262, uint(PythonQtWrapper_QTextFormat::CssFloat),
    2271, uint(PythonQtWrapper_QTextFormat::LayoutDirection),
    2287, uint(PythonQtWrapper_QTextFormat::OutlinePen),
    2298, uint(PythonQtWrapper_QTextFormat::BackgroundBrush),
    2314, uint(PythonQtWrapper_QTextFormat::ForegroundBrush),
    2330, uint(PythonQtWrapper_QTextFormat::BackgroundImageUrl),
    2349, uint(PythonQtWrapper_QTextFormat::BlockAlignment),
    2364, uint(PythonQtWrapper_QTextFormat::BlockTopMargin),
    2379, uint(PythonQtWrapper_QTextFormat::BlockBottomMargin),
    2397, uint(PythonQtWrapper_QTextFormat::BlockLeftMargin),
    2413, uint(PythonQtWrapper_QTextFormat::BlockRightMargin),
    2430, uint(PythonQtWrapper_QTextFormat::TextIndent),
    2441, uint(PythonQtWrapper_QTextFormat::TabPositions),
    2454, uint(PythonQtWrapper_QTextFormat::BlockIndent),
    2466, uint(PythonQtWrapper_QTextFormat::LineHeight),
    2477, uint(PythonQtWrapper_QTextFormat::LineHeightType),
    2492, uint(PythonQtWrapper_QTextFormat::BlockNonBreakableLines),
    2515, uint(PythonQtWrapper_QTextFormat::BlockTrailingHorizontalRulerWidth),
    2549, uint(PythonQtWrapper_QTextFormat::FirstFontProperty),
    2567, uint(PythonQtWrapper_QTextFormat::FontCapitalization),
    2586, uint(PythonQtWrapper_QTextFormat::FontLetterSpacing),
    2604, uint(PythonQtWrapper_QTextFormat::FontWordSpacing),
    2620, uint(PythonQtWrapper_QTextFormat::FontStyleHint),
    2634, uint(PythonQtWrapper_QTextFormat::FontStyleStrategy),
    2652, uint(PythonQtWrapper_QTextFormat::FontKerning),
    2664, uint(PythonQtWrapper_QTextFormat::FontHintingPreference),
    2686, uint(PythonQtWrapper_QTextFormat::FontFamily),
    2697, uint(PythonQtWrapper_QTextFormat::FontPointSize),
    2711, uint(PythonQtWrapper_QTextFormat::FontSizeAdjustment),
    2730, uint(PythonQtWrapper_QTextFormat::FontSizeIncrement),
    2748, uint(PythonQtWrapper_QTextFormat::FontWeight),
    2759, uint(PythonQtWrapper_QTextFormat::FontItalic),
    2770, uint(PythonQtWrapper_QTextFormat::FontUnderline),
    2784, uint(PythonQtWrapper_QTextFormat::FontOverline),
    2797, uint(PythonQtWrapper_QTextFormat::FontStrikeOut),
    2811, uint(PythonQtWrapper_QTextFormat::FontFixedPitch),
    2826, uint(PythonQtWrapper_QTextFormat::FontPixelSize),
    2840, uint(PythonQtWrapper_QTextFormat::LastFontProperty),
    2857, uint(PythonQtWrapper_QTextFormat::TextUnderlineColor),
    2876, uint(PythonQtWrapper_QTextFormat::TextVerticalAlignment),
    2898, uint(PythonQtWrapper_QTextFormat::TextOutline),
    2910, uint(PythonQtWrapper_QTextFormat::TextUnderlineStyle),
    2929, uint(PythonQtWrapper_QTextFormat::TextToolTip),
    2941, uint(PythonQtWrapper_QTextFormat::IsAnchor),
    2950, uint(PythonQtWrapper_QTextFormat::AnchorHref),
    2961, uint(PythonQtWrapper_QTextFormat::AnchorName),
    2972, uint(PythonQtWrapper_QTextFormat::ObjectType),
    2983, uint(PythonQtWrapper_QTextFormat::ListStyle),
    2993, uint(PythonQtWrapper_QTextFormat::ListIndent),
    3004, uint(PythonQtWrapper_QTextFormat::ListNumberPrefix),
    3021, uint(PythonQtWrapper_QTextFormat::ListNumberSuffix),
    3038, uint(PythonQtWrapper_QTextFormat::FrameBorder),
    3050, uint(PythonQtWrapper_QTextFormat::FrameMargin),
    3062, uint(PythonQtWrapper_QTextFormat::FramePadding),
    3075, uint(PythonQtWrapper_QTextFormat::FrameWidth),
    3086, uint(PythonQtWrapper_QTextFormat::FrameHeight),
    3098, uint(PythonQtWrapper_QTextFormat::FrameTopMargin),
    3113, uint(PythonQtWrapper_QTextFormat::FrameBottomMargin),
    3131, uint(PythonQtWrapper_QTextFormat::FrameLeftMargin),
    3147, uint(PythonQtWrapper_QTextFormat::FrameRightMargin),
    3164, uint(PythonQtWrapper_QTextFormat::FrameBorderBrush),
    3181, uint(PythonQtWrapper_QTextFormat::FrameBorderStyle),
    3198, uint(PythonQtWrapper_QTextFormat::TableColumns),
    3211, uint(PythonQtWrapper_QTextFormat::TableColumnWidthConstraints),
    3239, uint(PythonQtWrapper_QTextFormat::TableCellSpacing),
    3256, uint(PythonQtWrapper_QTextFormat::TableCellPadding),
    3273, uint(PythonQtWrapper_QTextFormat::TableHeaderRowCount),
    3293, uint(PythonQtWrapper_QTextFormat::TableCellRowSpan),
    3310, uint(PythonQtWrapper_QTextFormat::TableCellColumnSpan),
    3330, uint(PythonQtWrapper_QTextFormat::TableCellTopPadding),
    3350, uint(PythonQtWrapper_QTextFormat::TableCellBottomPadding),
    3373, uint(PythonQtWrapper_QTextFormat::TableCellLeftPadding),
    3394, uint(PythonQtWrapper_QTextFormat::TableCellRightPadding),
    3416, uint(PythonQtWrapper_QTextFormat::ImageName),
    3426, uint(PythonQtWrapper_QTextFormat::ImageWidth),
    3437, uint(PythonQtWrapper_QTextFormat::ImageHeight),
    3449, uint(PythonQtWrapper_QTextFormat::FullWidthSelection),
    3468, uint(PythonQtWrapper_QTextFormat::PageBreakPolicy),
    3484, uint(PythonQtWrapper_QTextFormat::UserProperty),
    3497, uint(PythonQtWrapper_QTextFormat::InvalidFormat),
    3511, uint(PythonQtWrapper_QTextFormat::BlockFormat),
    3523, uint(PythonQtWrapper_QTextFormat::CharFormat),
    3534, uint(PythonQtWrapper_QTextFormat::ListFormat),
    3545, uint(PythonQtWrapper_QTextFormat::TableFormat),
    3557, uint(PythonQtWrapper_QTextFormat::FrameFormat),
    3569, uint(PythonQtWrapper_QTextFormat::UserFormat),
    3580, uint(PythonQtWrapper_QTextFormat::NoObject),
    3589, uint(PythonQtWrapper_QTextFormat::ImageObject),
    3601, uint(PythonQtWrapper_QTextFormat::TableObject),
    3613, uint(PythonQtWrapper_QTextFormat::TableCellObject),
    3629, uint(PythonQtWrapper_QTextFormat::UserObject),
    3640, uint(PythonQtWrapper_QTextFormat::PageBreak_Auto),
    3655, uint(PythonQtWrapper_QTextFormat::PageBreak_AlwaysBefore),
    3678, uint(PythonQtWrapper_QTextFormat::PageBreak_AlwaysAfter),
    3640, uint(PythonQtWrapper_QTextFormat::PageBreak_Auto),
    3655, uint(PythonQtWrapper_QTextFormat::PageBreak_AlwaysBefore),
    3678, uint(PythonQtWrapper_QTextFormat::PageBreak_AlwaysAfter),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextFormat[] = {
    "PythonQtWrapper_QTextFormat\0\0QTextFormat*\0"
    "new_QTextFormat()\0rhs\0"
    "new_QTextFormat(QTextFormat)\0type\0"
    "new_QTextFormat(int)\0obj\0"
    "delete_QTextFormat(QTextFormat*)\0"
    "QBrush\0theWrappedObject\0"
    "background(QTextFormat*)\0bool\0"
    "theWrappedObject,propertyId\0"
    "boolProperty(QTextFormat*,int)\0"
    "brushProperty(QTextFormat*,int)\0"
    "clearBackground(QTextFormat*)\0"
    "clearForeground(QTextFormat*)\0"
    "clearProperty(QTextFormat*,int)\0QColor\0"
    "colorProperty(QTextFormat*,int)\0qreal\0"
    "doubleProperty(QTextFormat*,int)\0"
    "foreground(QTextFormat*)\0"
    "hasProperty(QTextFormat*,int)\0int\0"
    "intProperty(QTextFormat*,int)\0"
    "isBlockFormat(QTextFormat*)\0"
    "isCharFormat(QTextFormat*)\0"
    "isFrameFormat(QTextFormat*)\0"
    "isImageFormat(QTextFormat*)\0"
    "isListFormat(QTextFormat*)\0"
    "isTableCellFormat(QTextFormat*)\0"
    "isTableFormat(QTextFormat*)\0"
    "isValid(QTextFormat*)\0Qt::LayoutDirection\0"
    "layoutDirection(QTextFormat*)\0QTextLength\0"
    "lengthProperty(QTextFormat*,int)\0"
    "QVector<QTextLength>\0"
    "lengthVectorProperty(QTextFormat*,int)\0"
    "theWrappedObject,other\0"
    "merge(QTextFormat*,QTextFormat)\0"
    "objectIndex(QTextFormat*)\0"
    "objectType(QTextFormat*)\0theWrappedObject,rhs\0"
    "__ne__(QTextFormat*,QTextFormat)\0"
    "theWrappedObject,arg__1\0"
    "writeTo(QTextFormat*,QDataStream&)\0"
    "__eq__(QTextFormat*,QTextFormat)\0"
    "readFrom(QTextFormat*,QDataStream&)\0"
    "QPen\0penProperty(QTextFormat*,int)\0"
    "QMap<int,QVariant>\0properties(QTextFormat*)\0"
    "QVariant\0property(QTextFormat*,int)\0"
    "propertyCount(QTextFormat*)\0"
    "theWrappedObject,brush\0"
    "setBackground(QTextFormat*,QBrush)\0"
    "setForeground(QTextFormat*,QBrush)\0"
    "theWrappedObject,direction\0"
    "setLayoutDirection(QTextFormat*,Qt::LayoutDirection)\0"
    "theWrappedObject,object\0"
    "setObjectIndex(QTextFormat*,int)\0"
    "theWrappedObject,type\0"
    "setObjectType(QTextFormat*,int)\0"
    "theWrappedObject,propertyId,value\0"
    "setProperty(QTextFormat*,int,QVariant)\0"
    "theWrappedObject,propertyId,lengths\0"
    "setProperty(QTextFormat*,int,QVector<QTextLength>)\0"
    "QString\0stringProperty(QTextFormat*,int)\0"
    "QTextBlockFormat\0toBlockFormat(QTextFormat*)\0"
    "QTextCharFormat\0toCharFormat(QTextFormat*)\0"
    "QTextFrameFormat\0toFrameFormat(QTextFormat*)\0"
    "QTextImageFormat\0toImageFormat(QTextFormat*)\0"
    "QTextListFormat\0toListFormat(QTextFormat*)\0"
    "QTextTableCellFormat\0"
    "toTableCellFormat(QTextFormat*)\0"
    "QTextTableFormat\0toTableFormat(QTextFormat*)\0"
    "type(QTextFormat*)\0Property\0FormatType\0"
    "ObjectTypes\0PageBreakFlag\0PageBreakFlags\0"
    "ObjectIndex\0CssFloat\0LayoutDirection\0"
    "OutlinePen\0BackgroundBrush\0ForegroundBrush\0"
    "BackgroundImageUrl\0BlockAlignment\0"
    "BlockTopMargin\0BlockBottomMargin\0"
    "BlockLeftMargin\0BlockRightMargin\0"
    "TextIndent\0TabPositions\0BlockIndent\0"
    "LineHeight\0LineHeightType\0"
    "BlockNonBreakableLines\0"
    "BlockTrailingHorizontalRulerWidth\0"
    "FirstFontProperty\0FontCapitalization\0"
    "FontLetterSpacing\0FontWordSpacing\0"
    "FontStyleHint\0FontStyleStrategy\0"
    "FontKerning\0FontHintingPreference\0"
    "FontFamily\0FontPointSize\0FontSizeAdjustment\0"
    "FontSizeIncrement\0FontWeight\0FontItalic\0"
    "FontUnderline\0FontOverline\0FontStrikeOut\0"
    "FontFixedPitch\0FontPixelSize\0"
    "LastFontProperty\0TextUnderlineColor\0"
    "TextVerticalAlignment\0TextOutline\0"
    "TextUnderlineStyle\0TextToolTip\0IsAnchor\0"
    "AnchorHref\0AnchorName\0ObjectType\0"
    "ListStyle\0ListIndent\0ListNumberPrefix\0"
    "ListNumberSuffix\0FrameBorder\0FrameMargin\0"
    "FramePadding\0FrameWidth\0FrameHeight\0"
    "FrameTopMargin\0FrameBottomMargin\0"
    "FrameLeftMargin\0FrameRightMargin\0"
    "FrameBorderBrush\0FrameBorderStyle\0"
    "TableColumns\0TableColumnWidthConstraints\0"
    "TableCellSpacing\0TableCellPadding\0"
    "TableHeaderRowCount\0TableCellRowSpan\0"
    "TableCellColumnSpan\0TableCellTopPadding\0"
    "TableCellBottomPadding\0TableCellLeftPadding\0"
    "TableCellRightPadding\0ImageName\0"
    "ImageWidth\0ImageHeight\0FullWidthSelection\0"
    "PageBreakPolicy\0UserProperty\0InvalidFormat\0"
    "BlockFormat\0CharFormat\0ListFormat\0"
    "TableFormat\0FrameFormat\0UserFormat\0"
    "NoObject\0ImageObject\0TableObject\0"
    "TableCellObject\0UserObject\0PageBreak_Auto\0"
    "PageBreak_AlwaysBefore\0PageBreak_AlwaysAfter\0"
};

void PythonQtWrapper_QTextFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextFormat *_t = static_cast<PythonQtWrapper_QTextFormat *>(_o);
        switch (_id) {
        case 0: { QTextFormat* _r = _t->new_QTextFormat();
            if (_a[0]) *reinterpret_cast< QTextFormat**>(_a[0]) = _r; }  break;
        case 1: { QTextFormat* _r = _t->new_QTextFormat((*reinterpret_cast< const QTextFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFormat**>(_a[0]) = _r; }  break;
        case 2: { QTextFormat* _r = _t->new_QTextFormat((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFormat**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTextFormat((*reinterpret_cast< QTextFormat*(*)>(_a[1]))); break;
        case 4: { QBrush _r = _t->background((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->boolProperty((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QBrush _r = _t->brushProperty((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 7: _t->clearBackground((*reinterpret_cast< QTextFormat*(*)>(_a[1]))); break;
        case 8: _t->clearForeground((*reinterpret_cast< QTextFormat*(*)>(_a[1]))); break;
        case 9: _t->clearProperty((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: { QColor _r = _t->colorProperty((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 11: { qreal _r = _t->doubleProperty((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 12: { QBrush _r = _t->foreground((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->hasProperty((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->intProperty((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isBlockFormat((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isCharFormat((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isFrameFormat((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->isImageFormat((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->isListFormat((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->isTableCellFormat((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isTableFormat((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->isValid((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { Qt::LayoutDirection _r = _t->layoutDirection((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::LayoutDirection*>(_a[0]) = _r; }  break;
        case 24: { QTextLength _r = _t->lengthProperty((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextLength*>(_a[0]) = _r; }  break;
        case 25: { QVector<QTextLength> _r = _t->lengthVectorProperty((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QTextLength>*>(_a[0]) = _r; }  break;
        case 26: _t->merge((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< const QTextFormat(*)>(_a[2]))); break;
        case 27: { int _r = _t->objectIndex((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 28: { int _r = _t->objectType((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->__ne__((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< const QTextFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: _t->writeTo((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 31: { bool _r = _t->__eq__((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< const QTextFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: _t->readFrom((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 33: { QPen _r = _t->penProperty((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPen*>(_a[0]) = _r; }  break;
        case 34: { QMap<int,QVariant> _r = _t->properties((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMap<int,QVariant>*>(_a[0]) = _r; }  break;
        case 35: { QVariant _r = _t->property((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 36: { int _r = _t->propertyCount((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 37: _t->setBackground((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2]))); break;
        case 38: _t->setForeground((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2]))); break;
        case 39: _t->setLayoutDirection((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< Qt::LayoutDirection(*)>(_a[2]))); break;
        case 40: _t->setObjectIndex((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 41: _t->setObjectType((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 42: _t->setProperty((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 43: _t->setProperty((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector<QTextLength>(*)>(_a[3]))); break;
        case 44: { QString _r = _t->stringProperty((*reinterpret_cast< QTextFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 45: { QTextBlockFormat _r = _t->toBlockFormat((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlockFormat*>(_a[0]) = _r; }  break;
        case 46: { QTextCharFormat _r = _t->toCharFormat((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = _r; }  break;
        case 47: { QTextFrameFormat _r = _t->toFrameFormat((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrameFormat*>(_a[0]) = _r; }  break;
        case 48: { QTextImageFormat _r = _t->toImageFormat((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextImageFormat*>(_a[0]) = _r; }  break;
        case 49: { QTextListFormat _r = _t->toListFormat((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextListFormat*>(_a[0]) = _r; }  break;
        case 50: { QTextTableCellFormat _r = _t->toTableCellFormat((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTableCellFormat*>(_a[0]) = _r; }  break;
        case 51: { QTextTableFormat _r = _t->toTableFormat((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTableFormat*>(_a[0]) = _r; }  break;
        case 52: { int _r = _t->type((*reinterpret_cast< QTextFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextFormat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextFormat,
      qt_meta_data_PythonQtWrapper_QTextFormat, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextFormat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextFormat))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 53)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 53;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTextLength[] = {

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
      42,   28,   29,   28, 0x0a,
      71,   60,   29,   28, 0x0a,
     118,  112,   29,   28, 0x0a,
     151,  147,   28,   28, 0x0a,
     212,  189,  184,   28, 0x0a,
     269,  245,   28,   28, 0x0a,
     304,  189,  184,   28, 0x0a,
     337,  245,   28,   28, 0x0a,
     396,  379,  373,   28, 0x0a,
     437,  379,  419,   28, 0x0a,
     487,  456,  373,   28, 0x0a,

 // enums: name, flags, count, data
     513, 0x0,    3,   73,

 // enum data: key, value
     518, uint(PythonQtWrapper_QTextLength::VariableLength),
     533, uint(PythonQtWrapper_QTextLength::FixedLength),
     545, uint(PythonQtWrapper_QTextLength::PercentageLength),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextLength[] = {
    "PythonQtWrapper_QTextLength\0\0QTextLength*\0"
    "new_QTextLength()\0type,value\0"
    "new_QTextLength(QTextLength::Type,qreal)\0"
    "other\0new_QTextLength(QTextLength)\0"
    "obj\0delete_QTextLength(QTextLength*)\0"
    "bool\0theWrappedObject,other\0"
    "__ne__(QTextLength*,QTextLength)\0"
    "theWrappedObject,arg__1\0"
    "writeTo(QTextLength*,QDataStream&)\0"
    "__eq__(QTextLength*,QTextLength)\0"
    "readFrom(QTextLength*,QDataStream&)\0"
    "qreal\0theWrappedObject\0rawValue(QTextLength*)\0"
    "QTextLength::Type\0type(QTextLength*)\0"
    "theWrappedObject,maximumLength\0"
    "value(QTextLength*,qreal)\0Type\0"
    "VariableLength\0FixedLength\0PercentageLength\0"
};

void PythonQtWrapper_QTextLength::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextLength *_t = static_cast<PythonQtWrapper_QTextLength *>(_o);
        switch (_id) {
        case 0: { QTextLength* _r = _t->new_QTextLength();
            if (_a[0]) *reinterpret_cast< QTextLength**>(_a[0]) = _r; }  break;
        case 1: { QTextLength* _r = _t->new_QTextLength((*reinterpret_cast< QTextLength::Type(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextLength**>(_a[0]) = _r; }  break;
        case 2: { QTextLength* _r = _t->new_QTextLength((*reinterpret_cast< const QTextLength(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextLength**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTextLength((*reinterpret_cast< QTextLength*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->__ne__((*reinterpret_cast< QTextLength*(*)>(_a[1])),(*reinterpret_cast< const QTextLength(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->writeTo((*reinterpret_cast< QTextLength*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 6: { bool _r = _t->__eq__((*reinterpret_cast< QTextLength*(*)>(_a[1])),(*reinterpret_cast< const QTextLength(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->readFrom((*reinterpret_cast< QTextLength*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 8: { qreal _r = _t->rawValue((*reinterpret_cast< QTextLength*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 9: { QTextLength::Type _r = _t->type((*reinterpret_cast< QTextLength*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextLength::Type*>(_a[0]) = _r; }  break;
        case 10: { qreal _r = _t->value((*reinterpret_cast< QTextLength*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextLength::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextLength::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextLength,
      qt_meta_data_PythonQtWrapper_QTextLength, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextLength::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextLength::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextLength::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextLength))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextLength*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextLength::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
