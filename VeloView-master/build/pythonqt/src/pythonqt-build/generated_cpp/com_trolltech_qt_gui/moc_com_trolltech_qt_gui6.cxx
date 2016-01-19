/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_gui6.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../pythonqt/generated_cpp/com_trolltech_qt_gui/com_trolltech_qt_gui6.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_gui6.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QPictureFormatPlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      67,   60,   38,   37, 0x0a,
     102,   37,   38,   37, 0x2a,
     133,  129,   37,   37, 0x0a,
     226,  189,  184,   37, 0x0a,
     287,  189,  184,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPictureFormatPlugin[] = {
    "PythonQtWrapper_QPictureFormatPlugin\0"
    "\0QPictureFormatPlugin*\0parent\0"
    "new_QPictureFormatPlugin(QObject*)\0"
    "new_QPictureFormatPlugin()\0obj\0"
    "delete_QPictureFormatPlugin(QPictureFormatPlugin*)\0"
    "bool\0theWrappedObject,format,filename,pic\0"
    "loadPicture(QPictureFormatPlugin*,QString,QString,QPicture*)\0"
    "savePicture(QPictureFormatPlugin*,QString,QString,QPicture)\0"
};

void PythonQtWrapper_QPictureFormatPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPictureFormatPlugin *_t = static_cast<PythonQtWrapper_QPictureFormatPlugin *>(_o);
        switch (_id) {
        case 0: { QPictureFormatPlugin* _r = _t->new_QPictureFormatPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPictureFormatPlugin**>(_a[0]) = _r; }  break;
        case 1: { QPictureFormatPlugin* _r = _t->new_QPictureFormatPlugin();
            if (_a[0]) *reinterpret_cast< QPictureFormatPlugin**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QPictureFormatPlugin((*reinterpret_cast< QPictureFormatPlugin*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->loadPicture((*reinterpret_cast< QPictureFormatPlugin*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QPicture*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->savePicture((*reinterpret_cast< QPictureFormatPlugin*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QPicture(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPictureFormatPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPictureFormatPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPictureFormatPlugin,
      qt_meta_data_PythonQtWrapper_QPictureFormatPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPictureFormatPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPictureFormatPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPictureFormatPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPictureFormatPlugin))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPictureFormatPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPictureFormatPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QPictureIO[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      40,   27,   28,   27, 0x0a,
      73,   57,   28,   27, 0x0a,
     128,  112,   28,   27, 0x0a,
     168,  164,   27,   27, 0x0a,
     224,  207,  199,   27, 0x0a,
     249,  207,  199,   27, 0x0a,
     283,  207,  271,   27, 0x0a,
     309,  207,  303,   27, 0x0a,
     346,   27,  328,   27, 0x0a,
     390,  207,  379,   27, 0x0a,
     412,   27,  328,   27, 0x0a,
     446,  207,  271,   27, 0x0a,
     486,  207,  470,   27, 0x0a,
     525,  518,  507,   27, 0x0a,
     578,  569,  507,   27, 0x0a,
     623,  207,  619,   27, 0x0a,
     649,  207,  644,   27, 0x0a,
     691,  667,   27,   27, 0x0a,
     727,  667,   27,   27, 0x0a,
     760,  667,   27,   27, 0x0a,
     795,  667,   27,   27, 0x0a,
     823,  667,   27,   27, 0x0a,
     859,  667,   27,   27, 0x0a,
     898,  667,   27,   27, 0x0a,
     931,  667,   27,   27, 0x0a,
     959,  667,   27,   27, 0x0a,
     986,  207,  619,   27, 0x0a,
    1006,  207,  644,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPictureIO[] = {
    "PythonQtWrapper_QPictureIO\0\0QPictureIO*\0"
    "new_QPictureIO()\0ioDevice,format\0"
    "new_QPictureIO(QIODevice*,const char*)\0"
    "fileName,format\0new_QPictureIO(QString,const char*)\0"
    "obj\0delete_QPictureIO(QPictureIO*)\0"
    "QString\0theWrappedObject\0"
    "description(QPictureIO*)\0fileName(QPictureIO*)\0"
    "const char*\0format(QPictureIO*)\0float\0"
    "gamma(QPictureIO*)\0QList<QByteArray>\0"
    "static_QPictureIO_inputFormats()\0"
    "QIODevice*\0ioDevice(QPictureIO*)\0"
    "static_QPictureIO_outputFormats()\0"
    "parameters(QPictureIO*)\0const QPicture*\0"
    "picture(QPictureIO*)\0QByteArray\0arg__1\0"
    "static_QPictureIO_pictureFormat(QIODevice*)\0"
    "fileName\0static_QPictureIO_pictureFormat(QString)\0"
    "int\0quality(QPictureIO*)\0bool\0"
    "read(QPictureIO*)\0theWrappedObject,arg__1\0"
    "setDescription(QPictureIO*,QString)\0"
    "setFileName(QPictureIO*,QString)\0"
    "setFormat(QPictureIO*,const char*)\0"
    "setGamma(QPictureIO*,float)\0"
    "setIODevice(QPictureIO*,QIODevice*)\0"
    "setParameters(QPictureIO*,const char*)\0"
    "setPicture(QPictureIO*,QPicture)\0"
    "setQuality(QPictureIO*,int)\0"
    "setStatus(QPictureIO*,int)\0"
    "status(QPictureIO*)\0write(QPictureIO*)\0"
};

void PythonQtWrapper_QPictureIO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPictureIO *_t = static_cast<PythonQtWrapper_QPictureIO *>(_o);
        switch (_id) {
        case 0: { QPictureIO* _r = _t->new_QPictureIO();
            if (_a[0]) *reinterpret_cast< QPictureIO**>(_a[0]) = _r; }  break;
        case 1: { QPictureIO* _r = _t->new_QPictureIO((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPictureIO**>(_a[0]) = _r; }  break;
        case 2: { QPictureIO* _r = _t->new_QPictureIO((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPictureIO**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QPictureIO((*reinterpret_cast< QPictureIO*(*)>(_a[1]))); break;
        case 4: { QString _r = _t->description((*reinterpret_cast< QPictureIO*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->fileName((*reinterpret_cast< QPictureIO*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { const char* _r = _t->format((*reinterpret_cast< QPictureIO*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 7: { float _r = _t->gamma((*reinterpret_cast< QPictureIO*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 8: { QList<QByteArray> _r = _t->static_QPictureIO_inputFormats();
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 9: { QIODevice* _r = _t->ioDevice((*reinterpret_cast< QPictureIO*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 10: { QList<QByteArray> _r = _t->static_QPictureIO_outputFormats();
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 11: { const char* _r = _t->parameters((*reinterpret_cast< QPictureIO*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 12: { const QPicture* _r = _t->picture((*reinterpret_cast< QPictureIO*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QPicture**>(_a[0]) = _r; }  break;
        case 13: { QByteArray _r = _t->static_QPictureIO_pictureFormat((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 14: { QByteArray _r = _t->static_QPictureIO_pictureFormat((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->quality((*reinterpret_cast< QPictureIO*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->read((*reinterpret_cast< QPictureIO*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: _t->setDescription((*reinterpret_cast< QPictureIO*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->setFileName((*reinterpret_cast< QPictureIO*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: _t->setFormat((*reinterpret_cast< QPictureIO*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 20: _t->setGamma((*reinterpret_cast< QPictureIO*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 21: _t->setIODevice((*reinterpret_cast< QPictureIO*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 22: _t->setParameters((*reinterpret_cast< QPictureIO*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 23: _t->setPicture((*reinterpret_cast< QPictureIO*(*)>(_a[1])),(*reinterpret_cast< const QPicture(*)>(_a[2]))); break;
        case 24: _t->setQuality((*reinterpret_cast< QPictureIO*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->setStatus((*reinterpret_cast< QPictureIO*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: { int _r = _t->status((*reinterpret_cast< QPictureIO*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->write((*reinterpret_cast< QPictureIO*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPictureIO::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPictureIO::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPictureIO,
      qt_meta_data_PythonQtWrapper_QPictureIO, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPictureIO::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPictureIO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPictureIO::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPictureIO))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPictureIO*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPictureIO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QPinchGesture[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       2,  139, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   46,   31,   30, 0x0a,
      81,   30,   31,   30, 0x2a,
     105,  101,   30,   30, 0x0a,
     167,  150,  142,   30, 0x0a,
     222,  150,  195,   30, 0x0a,
     250,  150,  142,   30, 0x0a,
     288,  150,  282,   30, 0x0a,
     322,  150,  282,   30, 0x0a,
     354,  150,  282,   30, 0x0a,
     384,  150,  282,   30, 0x0a,
     435,  412,   30,   30, 0x0a,
     474,  412,   30,   30, 0x0a,
     532,  412,   30,   30, 0x0a,
     575,  412,   30,   30, 0x0a,
     618,  412,   30,   30, 0x0a,
     659,  412,   30,   30, 0x0a,
     698,  412,   30,   30, 0x0a,
     735,  412,   30,   30, 0x0a,
     779,  412,   30,   30, 0x0a,
     842,  412,   30,   30, 0x0a,
     886,  412,   30,   30, 0x0a,
     928,  150,  142,   30, 0x0a,
     961,  150,  195,   30, 0x0a,
     994,  150,  282,   30, 0x0a,
    1029,  150,  282,   30, 0x0a,

 // enums: name, flags, count, data
    1062, 0x0,    3,  147,
    1073, 0x1,    3,  153,

 // enum data: key, value
    1085, uint(PythonQtWrapper_QPinchGesture::ScaleFactorChanged),
    1104, uint(PythonQtWrapper_QPinchGesture::RotationAngleChanged),
    1125, uint(PythonQtWrapper_QPinchGesture::CenterPointChanged),
    1085, uint(PythonQtWrapper_QPinchGesture::ScaleFactorChanged),
    1104, uint(PythonQtWrapper_QPinchGesture::RotationAngleChanged),
    1125, uint(PythonQtWrapper_QPinchGesture::CenterPointChanged),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPinchGesture[] = {
    "PythonQtWrapper_QPinchGesture\0\0"
    "QPinchGesture*\0parent\0new_QPinchGesture(QObject*)\0"
    "new_QPinchGesture()\0obj\0"
    "delete_QPinchGesture(QPinchGesture*)\0"
    "QPointF\0theWrappedObject\0"
    "centerPoint(QPinchGesture*)\0"
    "QPinchGesture::ChangeFlags\0"
    "changeFlags(QPinchGesture*)\0"
    "lastCenterPoint(QPinchGesture*)\0qreal\0"
    "lastRotationAngle(QPinchGesture*)\0"
    "lastScaleFactor(QPinchGesture*)\0"
    "rotationAngle(QPinchGesture*)\0"
    "scaleFactor(QPinchGesture*)\0"
    "theWrappedObject,value\0"
    "setCenterPoint(QPinchGesture*,QPointF)\0"
    "setChangeFlags(QPinchGesture*,QPinchGesture::ChangeFlags)\0"
    "setLastCenterPoint(QPinchGesture*,QPointF)\0"
    "setLastRotationAngle(QPinchGesture*,qreal)\0"
    "setLastScaleFactor(QPinchGesture*,qreal)\0"
    "setRotationAngle(QPinchGesture*,qreal)\0"
    "setScaleFactor(QPinchGesture*,qreal)\0"
    "setStartCenterPoint(QPinchGesture*,QPointF)\0"
    "setTotalChangeFlags(QPinchGesture*,QPinchGesture::ChangeFlags)\0"
    "setTotalRotationAngle(QPinchGesture*,qreal)\0"
    "setTotalScaleFactor(QPinchGesture*,qreal)\0"
    "startCenterPoint(QPinchGesture*)\0"
    "totalChangeFlags(QPinchGesture*)\0"
    "totalRotationAngle(QPinchGesture*)\0"
    "totalScaleFactor(QPinchGesture*)\0"
    "ChangeFlag\0ChangeFlags\0ScaleFactorChanged\0"
    "RotationAngleChanged\0CenterPointChanged\0"
};

void PythonQtWrapper_QPinchGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPinchGesture *_t = static_cast<PythonQtWrapper_QPinchGesture *>(_o);
        switch (_id) {
        case 0: { QPinchGesture* _r = _t->new_QPinchGesture((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPinchGesture**>(_a[0]) = _r; }  break;
        case 1: { QPinchGesture* _r = _t->new_QPinchGesture();
            if (_a[0]) *reinterpret_cast< QPinchGesture**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QPinchGesture((*reinterpret_cast< QPinchGesture*(*)>(_a[1]))); break;
        case 3: { QPointF _r = _t->centerPoint((*reinterpret_cast< QPinchGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 4: { QPinchGesture::ChangeFlags _r = _t->changeFlags((*reinterpret_cast< QPinchGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPinchGesture::ChangeFlags*>(_a[0]) = _r; }  break;
        case 5: { QPointF _r = _t->lastCenterPoint((*reinterpret_cast< QPinchGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 6: { qreal _r = _t->lastRotationAngle((*reinterpret_cast< QPinchGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 7: { qreal _r = _t->lastScaleFactor((*reinterpret_cast< QPinchGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 8: { qreal _r = _t->rotationAngle((*reinterpret_cast< QPinchGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 9: { qreal _r = _t->scaleFactor((*reinterpret_cast< QPinchGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 10: _t->setCenterPoint((*reinterpret_cast< QPinchGesture*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 11: _t->setChangeFlags((*reinterpret_cast< QPinchGesture*(*)>(_a[1])),(*reinterpret_cast< QPinchGesture::ChangeFlags(*)>(_a[2]))); break;
        case 12: _t->setLastCenterPoint((*reinterpret_cast< QPinchGesture*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 13: _t->setLastRotationAngle((*reinterpret_cast< QPinchGesture*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 14: _t->setLastScaleFactor((*reinterpret_cast< QPinchGesture*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 15: _t->setRotationAngle((*reinterpret_cast< QPinchGesture*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 16: _t->setScaleFactor((*reinterpret_cast< QPinchGesture*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 17: _t->setStartCenterPoint((*reinterpret_cast< QPinchGesture*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 18: _t->setTotalChangeFlags((*reinterpret_cast< QPinchGesture*(*)>(_a[1])),(*reinterpret_cast< QPinchGesture::ChangeFlags(*)>(_a[2]))); break;
        case 19: _t->setTotalRotationAngle((*reinterpret_cast< QPinchGesture*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 20: _t->setTotalScaleFactor((*reinterpret_cast< QPinchGesture*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 21: { QPointF _r = _t->startCenterPoint((*reinterpret_cast< QPinchGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 22: { QPinchGesture::ChangeFlags _r = _t->totalChangeFlags((*reinterpret_cast< QPinchGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPinchGesture::ChangeFlags*>(_a[0]) = _r; }  break;
        case 23: { qreal _r = _t->totalRotationAngle((*reinterpret_cast< QPinchGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 24: { qreal _r = _t->totalScaleFactor((*reinterpret_cast< QPinchGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPinchGesture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPinchGesture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPinchGesture,
      qt_meta_data_PythonQtWrapper_QPinchGesture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPinchGesture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPinchGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPinchGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPinchGesture))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPinchGesture*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPinchGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QPixmapCache[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   29,   30,   29, 0x0a,
      67,   63,   29,   29, 0x0a,
     106,   29,  102,   29, 0x0a,
     139,   29,   29,   29, 0x0a,
     183,  172,  167,   29, 0x0a,
     236,  172,  167,   29, 0x0a,
     304,  297,  279,   29, 0x0a,
     340,  172,  167,   29, 0x0a,
     388,  384,   29,   29, 0x0a,
     434,  384,   29,   29, 0x0a,
     470,  172,  167,   29, 0x0a,
     532,  525,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPixmapCache[] = {
    "PythonQtWrapper_QPixmapCache\0\0"
    "QPixmapCache*\0new_QPixmapCache()\0obj\0"
    "delete_QPixmapCache(QPixmapCache*)\0"
    "int\0static_QPixmapCache_cacheLimit()\0"
    "static_QPixmapCache_clear()\0bool\0"
    "key,pixmap\0"
    "static_QPixmapCache_find(QPixmapCache::Key,QPixmap*)\0"
    "static_QPixmapCache_find(QString,QPixmap&)\0"
    "QPixmapCache::Key\0pixmap\0"
    "static_QPixmapCache_insert(QPixmap)\0"
    "static_QPixmapCache_insert(QString,QPixmap)\0"
    "key\0static_QPixmapCache_remove(QPixmapCache::Key)\0"
    "static_QPixmapCache_remove(QString)\0"
    "static_QPixmapCache_replace(QPixmapCache::Key,QPixmap)\0"
    "arg__1\0static_QPixmapCache_setCacheLimit(int)\0"
};

void PythonQtWrapper_QPixmapCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPixmapCache *_t = static_cast<PythonQtWrapper_QPixmapCache *>(_o);
        switch (_id) {
        case 0: { QPixmapCache* _r = _t->new_QPixmapCache();
            if (_a[0]) *reinterpret_cast< QPixmapCache**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QPixmapCache((*reinterpret_cast< QPixmapCache*(*)>(_a[1]))); break;
        case 2: { int _r = _t->static_QPixmapCache_cacheLimit();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->static_QPixmapCache_clear(); break;
        case 4: { bool _r = _t->static_QPixmapCache_find((*reinterpret_cast< const QPixmapCache::Key(*)>(_a[1])),(*reinterpret_cast< QPixmap*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->static_QPixmapCache_find((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QPixmap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QPixmapCache::Key _r = _t->static_QPixmapCache_insert((*reinterpret_cast< const QPixmap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmapCache::Key*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->static_QPixmapCache_insert((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->static_QPixmapCache_remove((*reinterpret_cast< const QPixmapCache::Key(*)>(_a[1]))); break;
        case 9: _t->static_QPixmapCache_remove((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: { bool _r = _t->static_QPixmapCache_replace((*reinterpret_cast< const QPixmapCache::Key(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->static_QPixmapCache_setCacheLimit((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPixmapCache::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPixmapCache::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPixmapCache,
      qt_meta_data_PythonQtWrapper_QPixmapCache, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPixmapCache::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPixmapCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPixmapCache::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPixmapCache))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPixmapCache*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPixmapCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QPixmapCache_Key[] = {

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
      53,   33,   34,   33, 0x0a,
      82,   76,   34,   33, 0x0a,
     126,  122,   33,   33, 0x0a,
     196,  175,  170,   33, 0x0a,
     264,  241,   34,   33, 0x0a,
     318,  175,  170,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPixmapCache_Key[] = {
    "PythonQtWrapper_QPixmapCache_Key\0\0"
    "QPixmapCache::Key*\0new_QPixmapCache_Key()\0"
    "other\0new_QPixmapCache_Key(QPixmapCache::Key)\0"
    "obj\0delete_QPixmapCache_Key(QPixmapCache::Key*)\0"
    "bool\0theWrappedObject,key\0"
    "__ne__(QPixmapCache::Key*,QPixmapCache::Key)\0"
    "theWrappedObject,other\0"
    "operator_assign(QPixmapCache::Key*,QPixmapCache::Key)\0"
    "__eq__(QPixmapCache::Key*,QPixmapCache::Key)\0"
};

void PythonQtWrapper_QPixmapCache_Key::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPixmapCache_Key *_t = static_cast<PythonQtWrapper_QPixmapCache_Key *>(_o);
        switch (_id) {
        case 0: { QPixmapCache::Key* _r = _t->new_QPixmapCache_Key();
            if (_a[0]) *reinterpret_cast< QPixmapCache::Key**>(_a[0]) = _r; }  break;
        case 1: { QPixmapCache::Key* _r = _t->new_QPixmapCache_Key((*reinterpret_cast< const QPixmapCache::Key(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmapCache::Key**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QPixmapCache_Key((*reinterpret_cast< QPixmapCache::Key*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->__ne__((*reinterpret_cast< QPixmapCache::Key*(*)>(_a[1])),(*reinterpret_cast< const QPixmapCache::Key(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { QPixmapCache::Key* _r = _t->operator_assign((*reinterpret_cast< QPixmapCache::Key*(*)>(_a[1])),(*reinterpret_cast< const QPixmapCache::Key(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmapCache::Key**>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->__eq__((*reinterpret_cast< QPixmapCache::Key*(*)>(_a[1])),(*reinterpret_cast< const QPixmapCache::Key(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPixmapCache_Key::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPixmapCache_Key::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPixmapCache_Key,
      qt_meta_data_PythonQtWrapper_QPixmapCache_Key, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPixmapCache_Key::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPixmapCache_Key::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPixmapCache_Key::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPixmapCache_Key))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPixmapCache_Key*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPixmapCache_Key::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QPlainTextDocumentLayout[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      77,   68,   42,   41, 0x0a,
     126,  122,   41,   41, 0x0a,
     215,  192,  185,   41, 0x0a,
     292,  275,  271,   41, 0x0a,
     338,  275,  331,   41, 0x0a,
     409,  378,   41,   41, 0x0a,
     493,  192,   41,   41, 0x0a,
     573,  549,  185,   41, 0x0a,
     630,  378,  271,   41, 0x0a,
     693,  275,  271,   41, 0x0a,
     730,  275,   41,   41, 0x0a,
     794,  771,   41,   41, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPlainTextDocumentLayout[] = {
    "PythonQtWrapper_QPlainTextDocumentLayout\0"
    "\0QPlainTextDocumentLayout*\0document\0"
    "new_QPlainTextDocumentLayout(QTextDocument*)\0"
    "obj\0delete_QPlainTextDocumentLayout(QPlainTextDocumentLayout*)\0"
    "QRectF\0theWrappedObject,block\0"
    "blockBoundingRect(QPlainTextDocumentLayout*,QTextBlock)\0"
    "int\0theWrappedObject\0"
    "cursorWidth(QPlainTextDocumentLayout*)\0"
    "QSizeF\0documentSize(QPlainTextDocumentLayout*)\0"
    "theWrappedObject,arg__1,arg__2\0"
    "draw(QPlainTextDocumentLayout*,QPainter*,QAbstractTextDocumentLayout::"
    "PaintContext)\0"
    "ensureBlockLayout(QPlainTextDocumentLayout*,QTextBlock)\0"
    "theWrappedObject,arg__1\0"
    "frameBoundingRect(QPlainTextDocumentLayout*,QTextFrame*)\0"
    "hitTest(QPlainTextDocumentLayout*,QPointF,Qt::HitTestAccuracy)\0"
    "pageCount(QPlainTextDocumentLayout*)\0"
    "requestUpdate(QPlainTextDocumentLayout*)\0"
    "theWrappedObject,width\0"
    "setCursorWidth(QPlainTextDocumentLayout*,int)\0"
};

void PythonQtWrapper_QPlainTextDocumentLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPlainTextDocumentLayout *_t = static_cast<PythonQtWrapper_QPlainTextDocumentLayout *>(_o);
        switch (_id) {
        case 0: { QPlainTextDocumentLayout* _r = _t->new_QPlainTextDocumentLayout((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPlainTextDocumentLayout**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QPlainTextDocumentLayout((*reinterpret_cast< QPlainTextDocumentLayout*(*)>(_a[1]))); break;
        case 2: { QRectF _r = _t->blockBoundingRect((*reinterpret_cast< QPlainTextDocumentLayout*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->cursorWidth((*reinterpret_cast< QPlainTextDocumentLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { QSizeF _r = _t->documentSize((*reinterpret_cast< QPlainTextDocumentLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 5: _t->draw((*reinterpret_cast< QPlainTextDocumentLayout*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QAbstractTextDocumentLayout::PaintContext(*)>(_a[3]))); break;
        case 6: _t->ensureBlockLayout((*reinterpret_cast< QPlainTextDocumentLayout*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2]))); break;
        case 7: { QRectF _r = _t->frameBoundingRect((*reinterpret_cast< QPlainTextDocumentLayout*(*)>(_a[1])),(*reinterpret_cast< QTextFrame*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->hitTest((*reinterpret_cast< QPlainTextDocumentLayout*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< Qt::HitTestAccuracy(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->pageCount((*reinterpret_cast< QPlainTextDocumentLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->requestUpdate((*reinterpret_cast< QPlainTextDocumentLayout*(*)>(_a[1]))); break;
        case 11: _t->setCursorWidth((*reinterpret_cast< QPlainTextDocumentLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPlainTextDocumentLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPlainTextDocumentLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPlainTextDocumentLayout,
      qt_meta_data_PythonQtWrapper_QPlainTextDocumentLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPlainTextDocumentLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPlainTextDocumentLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPlainTextDocumentLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPlainTextDocumentLayout))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPlainTextDocumentLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPlainTextDocumentLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QPlainTextEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      82,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      55,   48,   32,   31, 0x0a,
      84,   31,   32,   31, 0x2a,
     117,  105,   32,   31, 0x0a,
     159,  154,   32,   31, 0x2a,
     191,  187,   31,   31, 0x0a,
     259,  238,  230,   31, 0x0a,
     314,  297,  292,   31, 0x0a,
     353,  297,  349,   31, 0x0a,
     405,  381,  292,   31, 0x0a,
     461,  297,  292,   31, 0x0a,
     487,  297,  292,   31, 0x0a,
     538,  519,   31,   31, 0x0a,
     575,  519,   31,   31, 0x0a,
     639,  297,  628,   31, 0x0a,
     691,  297,  684,   31, 0x0a,
     750,  297,  734,   31, 0x0a,
     797,  238,  785,   31, 0x0a,
     845,  297,  839,   31, 0x0a,
     897,  873,  839,   31, 0x0a,
     937,  297,  349,   31, 0x0a,
     981,  297,  966,   31, 0x0a,
    1007,  297,  230,   31, 0x0a,
    1038,  519,   31,   31, 0x0a,
    1087,  519,   31,   31, 0x0a,
    1136,  519,   31,   31, 0x0a,
    1183,  519,   31,   31, 0x0a,
    1222,  297,   31,   31, 0x0a,
    1259,  519,  292,   31, 0x0a,
    1323,  297, 1290,   31, 0x0a,
    1385, 1356,  292,   31, 0x0a,
    1461, 1440,  292,   31, 0x2a,
    1491,  519,   31,   31, 0x0a,
    1556, 1534,  292,   31, 0x0a,
    1597,  519,   31,   31, 0x0a,
    1665, 1641,   31,   31, 0x0a,
    1753, 1727, 1718,   31, 0x0a,
    1808,  381,   31,   31, 0x0a,
    1861,  297,  292,   31, 0x0a,
    1889,  297,  292,   31, 0x0a,
    1924,  519,   31,   31, 0x0a,
    1966,  519,   31,   31, 0x0a,
    2039,  297, 2010,   31, 0x0a,
    2096, 2069, 1718,   31, 0x0a,
    2135,  297,  349,   31, 0x0a,
    2196, 2170,   31,   31, 0x0a,
    2252,  519,   31,   31, 0x0a,
    2304,  519,   31,   31, 0x0a,
    2349,  519,   31,   31, 0x0a,
    2395,  519,   31,   31, 0x0a,
    2475, 2443,   31,   31, 0x0a,
    2579, 2552,   31,   31, 0x2a,
    2634,  297,  292,   31, 0x0a,
    2665,  519,   31,   31, 0x0a,
    2731, 2706,   31,   31, 0x0a,
    2764,  519,   31,   31, 0x0a,
    2830, 2807,   31,   31, 0x0a,
    2897, 2872,   31,   31, 0x0a,
    2965, 2940,   31,   31, 0x0a,
    3029, 3005,   31,   31, 0x0a,
    3106, 3083,   31,   31, 0x0a,
    3168, 3142,   31,   31, 0x0a,
    3235, 3212,   31,   31, 0x0a,
    3305, 3277,   31,   31, 0x0a,
    3396, 3374,   31,   31, 0x0a,
    3483, 3458,   31,   31, 0x0a,
    3552, 3525,   31,   31, 0x0a,
    3611, 3591,   31,   31, 0x0a,
    3664, 3645,   31,   31, 0x0a,
    3705, 3083,   31,   31, 0x0a,
    3742,  873,   31,   31, 0x0a,
    3808, 3785,   31,   31, 0x0a,
    3898, 3874,   31,   31, 0x0a,
    3963, 3939,   31,   31, 0x0a,
    4018, 1641,   31,   31, 0x0a,
    4057,  297,  292,   31, 0x0a,
    4090,  297,  349,   31, 0x0a,
    4120,  297,  785,   31, 0x0a,
    4173,  297, 4148,   31, 0x0a,
    4211,  519,   31,   31, 0x0a,
    4252,  297,  230,   31, 0x0a,
    4281,  519,   31,   31, 0x0a,
    4344,  297, 4322,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPlainTextEdit[] = {
    "PythonQtWrapper_QPlainTextEdit\0\0"
    "QPlainTextEdit*\0parent\0"
    "new_QPlainTextEdit(QWidget*)\0"
    "new_QPlainTextEdit()\0text,parent\0"
    "new_QPlainTextEdit(QString,QWidget*)\0"
    "text\0new_QPlainTextEdit(QString)\0obj\0"
    "delete_QPlainTextEdit(QPlainTextEdit*)\0"
    "QString\0theWrappedObject,pos\0"
    "anchorAt(QPlainTextEdit*,QPoint)\0bool\0"
    "theWrappedObject\0backgroundVisible(QPlainTextEdit*)\0"
    "int\0blockCount(QPlainTextEdit*)\0"
    "theWrappedObject,source\0"
    "canInsertFromMimeData(QPlainTextEdit*,const QMimeData*)\0"
    "canPaste(QPlainTextEdit*)\0"
    "centerOnScroll(QPlainTextEdit*)\0"
    "theWrappedObject,e\0"
    "changeEvent(QPlainTextEdit*,QEvent*)\0"
    "contextMenuEvent(QPlainTextEdit*,QContextMenuEvent*)\0"
    "QMimeData*\0createMimeDataFromSelection(QPlainTextEdit*)\0"
    "QMenu*\0createStandardContextMenu(QPlainTextEdit*)\0"
    "QTextCharFormat\0currentCharFormat(QPlainTextEdit*)\0"
    "QTextCursor\0cursorForPosition(QPlainTextEdit*,QPoint)\0"
    "QRect\0cursorRect(QPlainTextEdit*)\0"
    "theWrappedObject,cursor\0"
    "cursorRect(QPlainTextEdit*,QTextCursor)\0"
    "cursorWidth(QPlainTextEdit*)\0"
    "QTextDocument*\0document(QPlainTextEdit*)\0"
    "documentTitle(QPlainTextEdit*)\0"
    "dragEnterEvent(QPlainTextEdit*,QDragEnterEvent*)\0"
    "dragLeaveEvent(QPlainTextEdit*,QDragLeaveEvent*)\0"
    "dragMoveEvent(QPlainTextEdit*,QDragMoveEvent*)\0"
    "dropEvent(QPlainTextEdit*,QDropEvent*)\0"
    "ensureCursorVisible(QPlainTextEdit*)\0"
    "event(QPlainTextEdit*,QEvent*)\0"
    "QList<QTextEdit::ExtraSelection>\0"
    "extraSelections(QPlainTextEdit*)\0"
    "theWrappedObject,exp,options\0"
    "find(QPlainTextEdit*,QString,QTextDocument::FindFlags)\0"
    "theWrappedObject,exp\0find(QPlainTextEdit*,QString)\0"
    "focusInEvent(QPlainTextEdit*,QFocusEvent*)\0"
    "theWrappedObject,next\0"
    "focusNextPrevChild(QPlainTextEdit*,bool)\0"
    "focusOutEvent(QPlainTextEdit*,QFocusEvent*)\0"
    "theWrappedObject,arg__1\0"
    "inputMethodEvent(QPlainTextEdit*,QInputMethodEvent*)\0"
    "QVariant\0theWrappedObject,property\0"
    "inputMethodQuery(QPlainTextEdit*,Qt::InputMethodQuery)\0"
    "insertFromMimeData(QPlainTextEdit*,const QMimeData*)\0"
    "isReadOnly(QPlainTextEdit*)\0"
    "isUndoRedoEnabled(QPlainTextEdit*)\0"
    "keyPressEvent(QPlainTextEdit*,QKeyEvent*)\0"
    "keyReleaseEvent(QPlainTextEdit*,QKeyEvent*)\0"
    "QPlainTextEdit::LineWrapMode\0"
    "lineWrapMode(QPlainTextEdit*)\0"
    "theWrappedObject,type,name\0"
    "loadResource(QPlainTextEdit*,int,QUrl)\0"
    "maximumBlockCount(QPlainTextEdit*)\0"
    "theWrappedObject,modifier\0"
    "mergeCurrentCharFormat(QPlainTextEdit*,QTextCharFormat)\0"
    "mouseDoubleClickEvent(QPlainTextEdit*,QMouseEvent*)\0"
    "mouseMoveEvent(QPlainTextEdit*,QMouseEvent*)\0"
    "mousePressEvent(QPlainTextEdit*,QMouseEvent*)\0"
    "mouseReleaseEvent(QPlainTextEdit*,QMouseEvent*)\0"
    "theWrappedObject,operation,mode\0"
    "moveCursor(QPlainTextEdit*,QTextCursor::MoveOperation,QTextCursor::Mov"
    "eMode)\0"
    "theWrappedObject,operation\0"
    "moveCursor(QPlainTextEdit*,QTextCursor::MoveOperation)\0"
    "overwriteMode(QPlainTextEdit*)\0"
    "paintEvent(QPlainTextEdit*,QPaintEvent*)\0"
    "theWrappedObject,printer\0"
    "print(QPlainTextEdit*,QPrinter*)\0"
    "resizeEvent(QPlainTextEdit*,QResizeEvent*)\0"
    "theWrappedObject,dx,dy\0"
    "scrollContentsBy(QPlainTextEdit*,int,int)\0"
    "theWrappedObject,visible\0"
    "setBackgroundVisible(QPlainTextEdit*,bool)\0"
    "theWrappedObject,enabled\0"
    "setCenterOnScroll(QPlainTextEdit*,bool)\0"
    "theWrappedObject,format\0"
    "setCurrentCharFormat(QPlainTextEdit*,QTextCharFormat)\0"
    "theWrappedObject,width\0"
    "setCursorWidth(QPlainTextEdit*,int)\0"
    "theWrappedObject,document\0"
    "setDocument(QPlainTextEdit*,QTextDocument*)\0"
    "theWrappedObject,title\0"
    "setDocumentTitle(QPlainTextEdit*,QString)\0"
    "theWrappedObject,selections\0"
    "setExtraSelections(QPlainTextEdit*,QList<QTextEdit::ExtraSelection>)\0"
    "theWrappedObject,mode\0"
    "setLineWrapMode(QPlainTextEdit*,QPlainTextEdit::LineWrapMode)\0"
    "theWrappedObject,maximum\0"
    "setMaximumBlockCount(QPlainTextEdit*,int)\0"
    "theWrappedObject,overwrite\0"
    "setOverwriteMode(QPlainTextEdit*,bool)\0"
    "theWrappedObject,ro\0"
    "setReadOnly(QPlainTextEdit*,bool)\0"
    "theWrappedObject,b\0"
    "setTabChangesFocus(QPlainTextEdit*,bool)\0"
    "setTabStopWidth(QPlainTextEdit*,int)\0"
    "setTextCursor(QPlainTextEdit*,QTextCursor)\0"
    "theWrappedObject,flags\0"
    "setTextInteractionFlags(QPlainTextEdit*,Qt::TextInteractionFlags)\0"
    "theWrappedObject,enable\0"
    "setUndoRedoEnabled(QPlainTextEdit*,bool)\0"
    "theWrappedObject,policy\0"
    "setWordWrapMode(QPlainTextEdit*,QTextOption::WrapMode)\0"
    "showEvent(QPlainTextEdit*,QShowEvent*)\0"
    "tabChangesFocus(QPlainTextEdit*)\0"
    "tabStopWidth(QPlainTextEdit*)\0"
    "textCursor(QPlainTextEdit*)\0"
    "Qt::TextInteractionFlags\0"
    "textInteractionFlags(QPlainTextEdit*)\0"
    "timerEvent(QPlainTextEdit*,QTimerEvent*)\0"
    "toPlainText(QPlainTextEdit*)\0"
    "wheelEvent(QPlainTextEdit*,QWheelEvent*)\0"
    "QTextOption::WrapMode\0"
    "wordWrapMode(QPlainTextEdit*)\0"
};

void PythonQtWrapper_QPlainTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPlainTextEdit *_t = static_cast<PythonQtWrapper_QPlainTextEdit *>(_o);
        switch (_id) {
        case 0: { QPlainTextEdit* _r = _t->new_QPlainTextEdit((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPlainTextEdit**>(_a[0]) = _r; }  break;
        case 1: { QPlainTextEdit* _r = _t->new_QPlainTextEdit();
            if (_a[0]) *reinterpret_cast< QPlainTextEdit**>(_a[0]) = _r; }  break;
        case 2: { QPlainTextEdit* _r = _t->new_QPlainTextEdit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPlainTextEdit**>(_a[0]) = _r; }  break;
        case 3: { QPlainTextEdit* _r = _t->new_QPlainTextEdit((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPlainTextEdit**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QPlainTextEdit((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1]))); break;
        case 5: { QString _r = _t->anchorAt((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->backgroundVisible((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->blockCount((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->canInsertFromMimeData((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->canPaste((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->centerOnScroll((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->changeEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 12: _t->contextMenuEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QContextMenuEvent*(*)>(_a[2]))); break;
        case 13: { QMimeData* _r = _t->createMimeDataFromSelection((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMimeData**>(_a[0]) = _r; }  break;
        case 14: { QMenu* _r = _t->createStandardContextMenu((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = _r; }  break;
        case 15: { QTextCharFormat _r = _t->currentCharFormat((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = _r; }  break;
        case 16: { QTextCursor _r = _t->cursorForPosition((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 17: { QRect _r = _t->cursorRect((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 18: { QRect _r = _t->cursorRect((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->cursorWidth((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { QTextDocument* _r = _t->document((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 21: { QString _r = _t->documentTitle((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 22: _t->dragEnterEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QDragEnterEvent*(*)>(_a[2]))); break;
        case 23: _t->dragLeaveEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QDragLeaveEvent*(*)>(_a[2]))); break;
        case 24: _t->dragMoveEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QDragMoveEvent*(*)>(_a[2]))); break;
        case 25: _t->dropEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2]))); break;
        case 26: _t->ensureCursorVisible((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1]))); break;
        case 27: { bool _r = _t->event((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { QList<QTextEdit::ExtraSelection> _r = _t->extraSelections((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QTextEdit::ExtraSelection>*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->find((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->find((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: _t->focusInEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 32: { bool _r = _t->focusNextPrevChild((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: _t->focusOutEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 34: _t->inputMethodEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QInputMethodEvent*(*)>(_a[2]))); break;
        case 35: { QVariant _r = _t->inputMethodQuery((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< Qt::InputMethodQuery(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 36: _t->insertFromMimeData((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2]))); break;
        case 37: { bool _r = _t->isReadOnly((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { bool _r = _t->isUndoRedoEnabled((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: _t->keyPressEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 40: _t->keyReleaseEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 41: { QPlainTextEdit::LineWrapMode _r = _t->lineWrapMode((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPlainTextEdit::LineWrapMode*>(_a[0]) = _r; }  break;
        case 42: { QVariant _r = _t->loadResource((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 43: { int _r = _t->maximumBlockCount((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 44: _t->mergeCurrentCharFormat((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 45: _t->mouseDoubleClickEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 46: _t->mouseMoveEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 47: _t->mousePressEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 48: _t->mouseReleaseEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 49: _t->moveCursor((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTextCursor::MoveOperation(*)>(_a[2])),(*reinterpret_cast< QTextCursor::MoveMode(*)>(_a[3]))); break;
        case 50: _t->moveCursor((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTextCursor::MoveOperation(*)>(_a[2]))); break;
        case 51: { bool _r = _t->overwriteMode((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 52: _t->paintEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 53: _t->print((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QPrinter*(*)>(_a[2]))); break;
        case 54: _t->resizeEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 55: _t->scrollContentsBy((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 56: _t->setBackgroundVisible((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 57: _t->setCenterOnScroll((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 58: _t->setCurrentCharFormat((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 59: _t->setCursorWidth((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 60: _t->setDocument((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTextDocument*(*)>(_a[2]))); break;
        case 61: _t->setDocumentTitle((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 62: _t->setExtraSelections((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QList<QTextEdit::ExtraSelection>(*)>(_a[2]))); break;
        case 63: _t->setLineWrapMode((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QPlainTextEdit::LineWrapMode(*)>(_a[2]))); break;
        case 64: _t->setMaximumBlockCount((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 65: _t->setOverwriteMode((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 66: _t->setReadOnly((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 67: _t->setTabChangesFocus((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 68: _t->setTabStopWidth((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 69: _t->setTextCursor((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2]))); break;
        case 70: _t->setTextInteractionFlags((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< Qt::TextInteractionFlags(*)>(_a[2]))); break;
        case 71: _t->setUndoRedoEnabled((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 72: _t->setWordWrapMode((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTextOption::WrapMode(*)>(_a[2]))); break;
        case 73: _t->showEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QShowEvent*(*)>(_a[2]))); break;
        case 74: { bool _r = _t->tabChangesFocus((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 75: { int _r = _t->tabStopWidth((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 76: { QTextCursor _r = _t->textCursor((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 77: { Qt::TextInteractionFlags _r = _t->textInteractionFlags((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TextInteractionFlags*>(_a[0]) = _r; }  break;
        case 78: _t->timerEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTimerEvent*(*)>(_a[2]))); break;
        case 79: { QString _r = _t->toPlainText((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 80: _t->wheelEvent((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])),(*reinterpret_cast< QWheelEvent*(*)>(_a[2]))); break;
        case 81: { QTextOption::WrapMode _r = _t->wordWrapMode((*reinterpret_cast< QPlainTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption::WrapMode*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPlainTextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPlainTextEdit::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPlainTextEdit,
      qt_meta_data_PythonQtWrapper_QPlainTextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPlainTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPlainTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPlainTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPlainTextEdit))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPlainTextEdit*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPlainTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 82)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 82;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QPlastiqueStyle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      50,   32,   33,   32, 0x0a,
      76,   72,   32,   32, 0x0a,
     164,  117,   32,   32, 0x0a,
     323,  276,   32,   32, 0x0a,
     421,  276,   32,   32, 0x0a,
     563,  523,   32,   32, 0x2a,
     686,  655,  650,   32, 0x0a,
     795,  752,  733,   32, 0x0a,
     943,  907,  733,   32, 0x2a,
    1082, 1044, 1040,   32, 0x0a,
    1198, 1167, 1040,   32, 0x2a,
    1292, 1268, 1040,   32, 0x2a,
    1363, 1342,   32,   32, 0x0a,
    1423, 1402,   32,   32, 0x0a,
    1482, 1458,   32,   32, 0x0a,
    1563, 1522, 1516,   32, 0x0a,
    1686, 1669, 1660,   32, 0x0a,
    1767, 1720, 1040,   32, 0x0a,
    1902, 1866, 1040,   32, 0x2a,
    2012, 1983, 1040,   32, 0x2a,
    2100, 2078, 1040,   32, 0x2a,
    2186, 2152, 2146,   32, 0x0a,
    2342, 2303, 2146,   32, 0x0a,
    2452, 2429,   32,   32, 0x0a,
    2494, 1342,   32,   32, 0x0a,
    2535, 1458,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPlastiqueStyle[] = {
    "PythonQtWrapper_QPlastiqueStyle\0\0"
    "QPlastiqueStyle*\0new_QPlastiqueStyle()\0"
    "obj\0delete_QPlastiqueStyle(QPlastiqueStyle*)\0"
    "theWrappedObject,control,option,painter,widget\0"
    "drawComplexControl(QPlastiqueStyle*,QStyle::ComplexControl,const QStyl"
    "eOptionComplex*,QPainter*,const QWidget*)\0"
    "theWrappedObject,element,option,painter,widget\0"
    "drawControl(QPlastiqueStyle*,QStyle::ControlElement,const QStyleOption"
    "*,QPainter*,const QWidget*)\0"
    "drawPrimitive(QPlastiqueStyle*,QStyle::PrimitiveElement,const QStyleOp"
    "tion*,QPainter*,const QWidget*)\0"
    "theWrappedObject,element,option,painter\0"
    "drawPrimitive(QPlastiqueStyle*,QStyle::PrimitiveElement,const QStyleOp"
    "tion*,QPainter*)\0"
    "bool\0theWrappedObject,watched,event\0"
    "eventFilter(QPlastiqueStyle*,QObject*,QEvent*)\0"
    "QStyle::SubControl\0"
    "theWrappedObject,control,option,pos,widget\0"
    "hitTestComplexControl(QPlastiqueStyle*,QStyle::ComplexControl,const QS"
    "tyleOptionComplex*,QPoint,const QWidget*)\0"
    "theWrappedObject,control,option,pos\0"
    "hitTestComplexControl(QPlastiqueStyle*,QStyle::ComplexControl,const QS"
    "tyleOptionComplex*,QPoint)\0"
    "int\0theWrappedObject,metric,option,widget\0"
    "pixelMetric(QPlastiqueStyle*,QStyle::PixelMetric,const QStyleOption*,c"
    "onst QWidget*)\0"
    "theWrappedObject,metric,option\0"
    "pixelMetric(QPlastiqueStyle*,QStyle::PixelMetric,const QStyleOption*)\0"
    "theWrappedObject,metric\0"
    "pixelMetric(QPlastiqueStyle*,QStyle::PixelMetric)\0"
    "theWrappedObject,app\0"
    "polish(QPlastiqueStyle*,QApplication*)\0"
    "theWrappedObject,pal\0"
    "polish(QPlastiqueStyle*,QPalette&)\0"
    "theWrappedObject,widget\0"
    "polish(QPlastiqueStyle*,QWidget*)\0"
    "QSize\0theWrappedObject,type,option,size,widget\0"
    "sizeFromContents(QPlastiqueStyle*,QStyle::ContentsType,const QStyleOpt"
    "ion*,QSize,const QWidget*)\0"
    "QPalette\0theWrappedObject\0"
    "standardPalette(QPlastiqueStyle*)\0"
    "theWrappedObject,hint,option,widget,returnData\0"
    "styleHint(QPlastiqueStyle*,QStyle::StyleHint,const QStyleOption*,const"
    " QWidget*,QStyleHintReturn*)\0"
    "theWrappedObject,hint,option,widget\0"
    "styleHint(QPlastiqueStyle*,QStyle::StyleHint,const QStyleOption*,const"
    " QWidget*)\0"
    "theWrappedObject,hint,option\0"
    "styleHint(QPlastiqueStyle*,QStyle::StyleHint,const QStyleOption*)\0"
    "theWrappedObject,hint\0"
    "styleHint(QPlastiqueStyle*,QStyle::StyleHint)\0"
    "QRect\0theWrappedObject,cc,opt,sc,widget\0"
    "subControlRect(QPlastiqueStyle*,QStyle::ComplexControl,const QStyleOpt"
    "ionComplex*,QStyle::SubControl,const QWidget*)\0"
    "theWrappedObject,element,option,widget\0"
    "subElementRect(QPlastiqueStyle*,QStyle::SubElement,const QStyleOption*"
    ",const QWidget*)\0"
    "theWrappedObject,event\0"
    "timerEvent(QPlastiqueStyle*,QTimerEvent*)\0"
    "unpolish(QPlastiqueStyle*,QApplication*)\0"
    "unpolish(QPlastiqueStyle*,QWidget*)\0"
};

void PythonQtWrapper_QPlastiqueStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPlastiqueStyle *_t = static_cast<PythonQtWrapper_QPlastiqueStyle *>(_o);
        switch (_id) {
        case 0: { QPlastiqueStyle* _r = _t->new_QPlastiqueStyle();
            if (_a[0]) *reinterpret_cast< QPlastiqueStyle**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QPlastiqueStyle((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1]))); break;
        case 2: _t->drawComplexControl((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ComplexControl(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionComplex*(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5]))); break;
        case 3: _t->drawControl((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ControlElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5]))); break;
        case 4: _t->drawPrimitive((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::PrimitiveElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5]))); break;
        case 5: _t->drawPrimitive((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::PrimitiveElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4]))); break;
        case 6: { bool _r = _t->eventFilter((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QStyle::SubControl _r = _t->hitTestComplexControl((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ComplexControl(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionComplex*(*)>(_a[3])),(*reinterpret_cast< const QPoint(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QStyle::SubControl*>(_a[0]) = _r; }  break;
        case 8: { QStyle::SubControl _r = _t->hitTestComplexControl((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ComplexControl(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionComplex*(*)>(_a[3])),(*reinterpret_cast< const QPoint(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QStyle::SubControl*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->pixelMetric((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::PixelMetric(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QWidget*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->pixelMetric((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::PixelMetric(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->pixelMetric((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::PixelMetric(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: _t->polish((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QApplication*(*)>(_a[2]))); break;
        case 13: _t->polish((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QPalette(*)>(_a[2]))); break;
        case 14: _t->polish((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 15: { QSize _r = _t->sizeFromContents((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ContentsType(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QSize(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 16: { QPalette _r = _t->standardPalette((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPalette*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->styleHint((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StyleHint(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QWidget*(*)>(_a[4])),(*reinterpret_cast< QStyleHintReturn*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->styleHint((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StyleHint(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QWidget*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->styleHint((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StyleHint(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->styleHint((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StyleHint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { QRect _r = _t->subControlRect((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ComplexControl(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionComplex*(*)>(_a[3])),(*reinterpret_cast< QStyle::SubControl(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 22: { QRect _r = _t->subElementRect((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::SubElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QWidget*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 23: _t->timerEvent((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QTimerEvent*(*)>(_a[2]))); break;
        case 24: _t->unpolish((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QApplication*(*)>(_a[2]))); break;
        case 25: _t->unpolish((*reinterpret_cast< QPlastiqueStyle*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPlastiqueStyle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPlastiqueStyle::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPlastiqueStyle,
      qt_meta_data_PythonQtWrapper_QPlastiqueStyle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPlastiqueStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPlastiqueStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPlastiqueStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPlastiqueStyle))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPlastiqueStyle*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPlastiqueStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QPolygonF[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   26,   27,   26, 0x0a,
      56,   54,   27,   26, 0x0a,
      80,   54,   27,   26, 0x0a,
     107,  105,   27,   26, 0x0a,
     131,  129,   27,   26, 0x0a,
     168,  163,   27,   26, 0x0a,
     191,  187,   26,   26, 0x0a,
     239,  220,   26,   26, 0x0a,
     300,  281,  266,   26, 0x0a,
     343,  326,  319,   26, 0x0a,
     372,  326,  368,   26, 0x0a,
     393,  326,   26,   26, 0x0a,
     416,  220,  411,   26, 0x0a,
     474,  445,  411,   26, 0x0a,
     521,  326,  368,   26, 0x0a,
     539,  220,  368,   26, 0x0a,
     565,  326,  411,   26, 0x0a,
     583,  220,  411,   26, 0x0a,
     654,  630,  612,   26, 0x0a,
     683,  326,  266,   26, 0x0a,
     723,  718,  701,   26, 0x0a,
     789,  765,  368,   26, 0x0a,
     850,  831,  821,   26, 0x0a,
     884,  326,  411,   26, 0x0a,
     905,  326,  411,   26, 0x0a,
     948,  925,  411,   26, 0x0a,
     990,  326,  266,   26, 0x0a,
    1007,  765,  368,   26, 0x0a,
    1071, 1043,  701,   26, 0x0a,
    1114, 1095,  411,   26, 0x0a,
    1169, 1150,  821,   26, 0x0a,
    1197, 1150,  821,   26, 0x0a,
    1252, 1228,   26,   26, 0x0a,
    1285, 1095,  411,   26, 0x0a,
    1321, 1228,   26,   26, 0x0a,
    1355,  326,   26,   26, 0x0a,
    1376,  326,   26,   26, 0x0a,
    1398,  220,   26,   26, 0x0a,
    1426,  220,   26,   26, 0x0a,
    1456,  220,   26,   26, 0x0a,
    1487,  281,   26,   26, 0x0a,
    1531, 1510,   26,   26, 0x0a,
    1579, 1558,   26,   26, 0x0a,
    1633, 1611,   26,   26, 0x0a,
    1657, 1611,   26,   26, 0x0a,
    1706, 1680,   26,   26, 0x0a,
    1735,  326,  368,   26, 0x0a,
    1752,  326,   26,   26, 0x0a,
    1772,  220,  411,   26, 0x0a,
    1803,  831,  821,   26, 0x0a,
    1836,  925,   26,   26, 0x0a,
    1879,  326, 1864,   26, 0x0a,
    1907,  326, 1898,   26, 0x0a,
    1953, 1929,   26,   26, 0x0a,
    2006, 1983,   26,   26, 0x0a,
    2040, 1929,  821,   26, 0x0a,
    2071, 1983,  821,   26, 0x0a,
    2106,  831,  821,   26, 0x0a,
    2143,  281, 2135,   26, 0x0a,
    2197, 2165, 2135,   26, 0x0a,
    2235,   26, 2227,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPolygonF[] = {
    "PythonQtWrapper_QPolygonF\0\0QPolygonF*\0"
    "new_QPolygonF()\0a\0new_QPolygonF(QPolygon)\0"
    "new_QPolygonF(QPolygonF)\0r\0"
    "new_QPolygonF(QRectF)\0v\0"
    "new_QPolygonF(QVector<QPointF>)\0size\0"
    "new_QPolygonF(int)\0obj\0"
    "delete_QPolygonF(QPolygonF*)\0"
    "theWrappedObject,t\0append(QPolygonF*,QPointF)\0"
    "const QPointF*\0theWrappedObject,i\0"
    "at(QPolygonF*,int)\0QRectF\0theWrappedObject\0"
    "boundingRect(QPolygonF*)\0int\0"
    "capacity(QPolygonF*)\0clear(QPolygonF*)\0"
    "bool\0contains(QPolygonF*,QPointF)\0"
    "theWrappedObject,pt,fillRule\0"
    "containsPoint(QPolygonF*,QPointF,Qt::FillRule)\0"
    "count(QPolygonF*)\0count(QPolygonF*,QPointF)\0"
    "empty(QPolygonF*)\0endsWith(QPolygonF*,QPointF)\0"
    "QVector<QPointF>*\0theWrappedObject,t,size\0"
    "fill(QPolygonF*,QPointF,int)\0"
    "first(QPolygonF*)\0QVector<QPointF>\0"
    "list\0static_QPolygonF_fromList(QList<QPointF>)\0"
    "theWrappedObject,t,from\0"
    "indexOf(QPolygonF*,QPointF,int)\0"
    "QPolygonF\0theWrappedObject,r\0"
    "intersected(QPolygonF*,QPolygonF)\0"
    "isClosed(QPolygonF*)\0isEmpty(QPolygonF*)\0"
    "theWrappedObject,other\0"
    "isSharedWith(QPolygonF*,QVector<QPointF>)\0"
    "last(QPolygonF*)\0lastIndexOf(QPolygonF*,QPointF,int)\0"
    "theWrappedObject,pos,length\0"
    "mid(QPolygonF*,int,int)\0theWrappedObject,v\0"
    "__ne__(QPolygonF*,QVector<QPointF>)\0"
    "theWrappedObject,m\0__mul__(QPolygonF*,QMatrix)\0"
    "__mul__(QPolygonF*,QTransform)\0"
    "theWrappedObject,stream\0"
    "writeTo(QPolygonF*,QDataStream&)\0"
    "__eq__(QPolygonF*,QVector<QPointF>)\0"
    "readFrom(QPolygonF*,QDataStream&)\0"
    "pop_back(QPolygonF*)\0pop_front(QPolygonF*)\0"
    "prepend(QPolygonF*,QPointF)\0"
    "push_back(QPolygonF*,QPointF)\0"
    "push_front(QPolygonF*,QPointF)\0"
    "remove(QPolygonF*,int)\0theWrappedObject,i,n\0"
    "remove(QPolygonF*,int,int)\0"
    "theWrappedObject,i,t\0"
    "replace(QPolygonF*,int,QPointF)\0"
    "theWrappedObject,size\0reserve(QPolygonF*,int)\0"
    "resize(QPolygonF*,int)\0theWrappedObject,sharable\0"
    "setSharable(QPolygonF*,bool)\0"
    "size(QPolygonF*)\0squeeze(QPolygonF*)\0"
    "startsWith(QPolygonF*,QPointF)\0"
    "subtracted(QPolygonF*,QPolygonF)\0"
    "swap(QPolygonF*,QPolygonF&)\0QList<QPointF>\0"
    "toList(QPolygonF*)\0QPolygon\0"
    "toPolygon(QPolygonF*)\0theWrappedObject,offset\0"
    "translate(QPolygonF*,QPointF)\0"
    "theWrappedObject,dx,dy\0"
    "translate(QPolygonF*,qreal,qreal)\0"
    "translated(QPolygonF*,QPointF)\0"
    "translated(QPolygonF*,qreal,qreal)\0"
    "united(QPolygonF*,QPolygonF)\0QPointF\0"
    "value(QPolygonF*,int)\0"
    "theWrappedObject,i,defaultValue\0"
    "value(QPolygonF*,int,QPointF)\0QString\0"
    "py_toString(QPolygonF*)\0"
};

void PythonQtWrapper_QPolygonF::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPolygonF *_t = static_cast<PythonQtWrapper_QPolygonF *>(_o);
        switch (_id) {
        case 0: { QPolygonF* _r = _t->new_QPolygonF();
            if (_a[0]) *reinterpret_cast< QPolygonF**>(_a[0]) = _r; }  break;
        case 1: { QPolygonF* _r = _t->new_QPolygonF((*reinterpret_cast< const QPolygon(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPolygonF**>(_a[0]) = _r; }  break;
        case 2: { QPolygonF* _r = _t->new_QPolygonF((*reinterpret_cast< const QPolygonF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPolygonF**>(_a[0]) = _r; }  break;
        case 3: { QPolygonF* _r = _t->new_QPolygonF((*reinterpret_cast< const QRectF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPolygonF**>(_a[0]) = _r; }  break;
        case 4: { QPolygonF* _r = _t->new_QPolygonF((*reinterpret_cast< const QVector<QPointF>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPolygonF**>(_a[0]) = _r; }  break;
        case 5: { QPolygonF* _r = _t->new_QPolygonF((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPolygonF**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QPolygonF((*reinterpret_cast< QPolygonF*(*)>(_a[1]))); break;
        case 7: _t->append((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 8: { const QPointF* _r = _t->at((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< const QPointF**>(_a[0]) = _r; }  break;
        case 9: { QRectF _r = _t->boundingRect((*reinterpret_cast< QPolygonF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->capacity((*reinterpret_cast< QPolygonF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: _t->clear((*reinterpret_cast< QPolygonF*(*)>(_a[1]))); break;
        case 12: { bool _r = _t->contains((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->containsPoint((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< Qt::FillRule(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->count((*reinterpret_cast< QPolygonF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->count((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->empty((*reinterpret_cast< QPolygonF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->endsWith((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { QVector<QPointF>* _r = _t->fill((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVector<QPointF>**>(_a[0]) = _r; }  break;
        case 19: { const QPointF* _r = _t->first((*reinterpret_cast< QPolygonF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QPointF**>(_a[0]) = _r; }  break;
        case 20: { QVector<QPointF> _r = _t->static_QPolygonF_fromList((*reinterpret_cast< const QList<QPointF>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QPointF>*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->indexOf((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { QPolygonF _r = _t->intersected((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPolygonF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->isClosed((*reinterpret_cast< QPolygonF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->isEmpty((*reinterpret_cast< QPolygonF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->isSharedWith((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QVector<QPointF>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { const QPointF* _r = _t->last((*reinterpret_cast< QPolygonF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QPointF**>(_a[0]) = _r; }  break;
        case 27: { int _r = _t->lastIndexOf((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 28: { QVector<QPointF> _r = _t->mid((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVector<QPointF>*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->__ne__((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QVector<QPointF>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { QPolygonF _r = _t->__mul__((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QMatrix(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 31: { QPolygonF _r = _t->__mul__((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 32: _t->writeTo((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 33: { bool _r = _t->__eq__((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QVector<QPointF>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: _t->readFrom((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 35: _t->pop_back((*reinterpret_cast< QPolygonF*(*)>(_a[1]))); break;
        case 36: _t->pop_front((*reinterpret_cast< QPolygonF*(*)>(_a[1]))); break;
        case 37: _t->prepend((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 38: _t->push_back((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 39: _t->push_front((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 40: _t->remove((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 41: _t->remove((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 42: _t->replace((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3]))); break;
        case 43: _t->reserve((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 44: _t->resize((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->setSharable((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 46: { int _r = _t->size((*reinterpret_cast< QPolygonF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 47: _t->squeeze((*reinterpret_cast< QPolygonF*(*)>(_a[1]))); break;
        case 48: { bool _r = _t->startsWith((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: { QPolygonF _r = _t->subtracted((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPolygonF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 50: _t->swap((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< QPolygonF(*)>(_a[2]))); break;
        case 51: { QList<QPointF> _r = _t->toList((*reinterpret_cast< QPolygonF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QPointF>*>(_a[0]) = _r; }  break;
        case 52: { QPolygon _r = _t->toPolygon((*reinterpret_cast< QPolygonF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPolygon*>(_a[0]) = _r; }  break;
        case 53: _t->translate((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 54: _t->translate((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 55: { QPolygonF _r = _t->translated((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 56: { QPolygonF _r = _t->translated((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 57: { QPolygonF _r = _t->united((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< const QPolygonF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 58: { QPointF _r = _t->value((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 59: { QPointF _r = _t->value((*reinterpret_cast< QPolygonF*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 60: { QString _r = _t->py_toString((*reinterpret_cast< QPolygonF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPolygonF::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPolygonF::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPolygonF,
      qt_meta_data_PythonQtWrapper_QPolygonF, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPolygonF::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPolygonF::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPolygonF::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPolygonF))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPolygonF*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPolygonF::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QPrintDialog[] = {

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
      59,   44,   30,   29, 0x0a,
     104,   96,   30,   29, 0x2a,
     139,  132,   30,   29, 0x0a,
     166,   29,   30,   29, 0x2a,
     189,  185,   29,   29, 0x0a,
     241,  224,   29,   29, 0x0a,
     289,  265,   29,   29, 0x0a,
     317,  224,  313,   29, 0x0a,
     337,  224,   29,   29, 0x0a,
     390,  357,   29,   29, 0x0a,
     472,  224,  431,   29, 0x0a,
     522,  495,   29,   29, 0x0a,
     616,  592,   29,   29, 0x2a,
     706,  681,   29,   29, 0x0a,
     778,  592,  773,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPrintDialog[] = {
    "PythonQtWrapper_QPrintDialog\0\0"
    "QPrintDialog*\0printer,parent\0"
    "new_QPrintDialog(QPrinter*,QWidget*)\0"
    "printer\0new_QPrintDialog(QPrinter*)\0"
    "parent\0new_QPrintDialog(QWidget*)\0"
    "new_QPrintDialog()\0obj\0"
    "delete_QPrintDialog(QPrintDialog*)\0"
    "theWrappedObject\0accepted(QPrintDialog*)\0"
    "theWrappedObject,result\0done(QPrintDialog*,int)\0"
    "int\0exec(QPrintDialog*)\0open(QPrintDialog*)\0"
    "theWrappedObject,receiver,member\0"
    "open(QPrintDialog*,QObject*,const char*)\0"
    "QAbstractPrintDialog::PrintDialogOptions\0"
    "options(QPrintDialog*)\0"
    "theWrappedObject,option,on\0"
    "setOption(QPrintDialog*,QAbstractPrintDialog::PrintDialogOption,bool)\0"
    "theWrappedObject,option\0"
    "setOption(QPrintDialog*,QAbstractPrintDialog::PrintDialogOption)\0"
    "theWrappedObject,options\0"
    "setOptions(QPrintDialog*,QAbstractPrintDialog::PrintDialogOptions)\0"
    "bool\0"
    "testOption(QPrintDialog*,QAbstractPrintDialog::PrintDialogOption)\0"
};

void PythonQtWrapper_QPrintDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPrintDialog *_t = static_cast<PythonQtWrapper_QPrintDialog *>(_o);
        switch (_id) {
        case 0: { QPrintDialog* _r = _t->new_QPrintDialog((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPrintDialog**>(_a[0]) = _r; }  break;
        case 1: { QPrintDialog* _r = _t->new_QPrintDialog((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrintDialog**>(_a[0]) = _r; }  break;
        case 2: { QPrintDialog* _r = _t->new_QPrintDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrintDialog**>(_a[0]) = _r; }  break;
        case 3: { QPrintDialog* _r = _t->new_QPrintDialog();
            if (_a[0]) *reinterpret_cast< QPrintDialog**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QPrintDialog((*reinterpret_cast< QPrintDialog*(*)>(_a[1]))); break;
        case 5: _t->accepted((*reinterpret_cast< QPrintDialog*(*)>(_a[1]))); break;
        case 6: _t->done((*reinterpret_cast< QPrintDialog*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: { int _r = _t->exec((*reinterpret_cast< QPrintDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: _t->open((*reinterpret_cast< QPrintDialog*(*)>(_a[1]))); break;
        case 9: _t->open((*reinterpret_cast< QPrintDialog*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3]))); break;
        case 10: { QAbstractPrintDialog::PrintDialogOptions _r = _t->options((*reinterpret_cast< QPrintDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractPrintDialog::PrintDialogOptions*>(_a[0]) = _r; }  break;
        case 11: _t->setOption((*reinterpret_cast< QPrintDialog*(*)>(_a[1])),(*reinterpret_cast< QAbstractPrintDialog::PrintDialogOption(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->setOption((*reinterpret_cast< QPrintDialog*(*)>(_a[1])),(*reinterpret_cast< QAbstractPrintDialog::PrintDialogOption(*)>(_a[2]))); break;
        case 13: _t->setOptions((*reinterpret_cast< QPrintDialog*(*)>(_a[1])),(*reinterpret_cast< QAbstractPrintDialog::PrintDialogOptions(*)>(_a[2]))); break;
        case 14: { bool _r = _t->testOption((*reinterpret_cast< QPrintDialog*(*)>(_a[1])),(*reinterpret_cast< QAbstractPrintDialog::PrintDialogOption(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPrintDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPrintDialog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPrintDialog,
      qt_meta_data_PythonQtWrapper_QPrintDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPrintDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPrintDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPrintDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPrintDialog))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPrintDialog*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPrintDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QPrintEngine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   24, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   29,   30,   29, 0x0a,
      67,   63,   29,   29, 0x0a,

 // enums: name, flags, count, data
     102, 0x0,   29,   28,

 // enum data: key, value
     125, uint(PythonQtWrapper_QPrintEngine::PPK_CollateCopies),
     143, uint(PythonQtWrapper_QPrintEngine::PPK_ColorMode),
     157, uint(PythonQtWrapper_QPrintEngine::PPK_Creator),
     169, uint(PythonQtWrapper_QPrintEngine::PPK_DocumentName),
     186, uint(PythonQtWrapper_QPrintEngine::PPK_FullPage),
     199, uint(PythonQtWrapper_QPrintEngine::PPK_NumberOfCopies),
     218, uint(PythonQtWrapper_QPrintEngine::PPK_Orientation),
     234, uint(PythonQtWrapper_QPrintEngine::PPK_OutputFileName),
     253, uint(PythonQtWrapper_QPrintEngine::PPK_PageOrder),
     267, uint(PythonQtWrapper_QPrintEngine::PPK_PageRect),
     280, uint(PythonQtWrapper_QPrintEngine::PPK_PageSize),
     293, uint(PythonQtWrapper_QPrintEngine::PPK_PaperRect),
     307, uint(PythonQtWrapper_QPrintEngine::PPK_PaperSource),
     323, uint(PythonQtWrapper_QPrintEngine::PPK_PrinterName),
     339, uint(PythonQtWrapper_QPrintEngine::PPK_PrinterProgram),
     358, uint(PythonQtWrapper_QPrintEngine::PPK_Resolution),
     373, uint(PythonQtWrapper_QPrintEngine::PPK_SelectionOption),
     393, uint(PythonQtWrapper_QPrintEngine::PPK_SupportedResolutions),
     418, uint(PythonQtWrapper_QPrintEngine::PPK_WindowsPageSize),
     438, uint(PythonQtWrapper_QPrintEngine::PPK_FontEmbedding),
     456, uint(PythonQtWrapper_QPrintEngine::PPK_SuppressSystemPrintStatus),
     486, uint(PythonQtWrapper_QPrintEngine::PPK_Duplex),
     497, uint(PythonQtWrapper_QPrintEngine::PPK_PaperSources),
     514, uint(PythonQtWrapper_QPrintEngine::PPK_CustomPaperSize),
     534, uint(PythonQtWrapper_QPrintEngine::PPK_PageMargins),
     550, uint(PythonQtWrapper_QPrintEngine::PPK_CopyCount),
     564, uint(PythonQtWrapper_QPrintEngine::PPK_SupportsMultipleCopies),
     591, uint(PythonQtWrapper_QPrintEngine::PPK_PaperSize),
     605, uint(PythonQtWrapper_QPrintEngine::PPK_CustomBase),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPrintEngine[] = {
    "PythonQtWrapper_QPrintEngine\0\0"
    "QPrintEngine*\0new_QPrintEngine()\0obj\0"
    "delete_QPrintEngine(QPrintEngine*)\0"
    "PrintEnginePropertyKey\0PPK_CollateCopies\0"
    "PPK_ColorMode\0PPK_Creator\0PPK_DocumentName\0"
    "PPK_FullPage\0PPK_NumberOfCopies\0"
    "PPK_Orientation\0PPK_OutputFileName\0"
    "PPK_PageOrder\0PPK_PageRect\0PPK_PageSize\0"
    "PPK_PaperRect\0PPK_PaperSource\0"
    "PPK_PrinterName\0PPK_PrinterProgram\0"
    "PPK_Resolution\0PPK_SelectionOption\0"
    "PPK_SupportedResolutions\0PPK_WindowsPageSize\0"
    "PPK_FontEmbedding\0PPK_SuppressSystemPrintStatus\0"
    "PPK_Duplex\0PPK_PaperSources\0"
    "PPK_CustomPaperSize\0PPK_PageMargins\0"
    "PPK_CopyCount\0PPK_SupportsMultipleCopies\0"
    "PPK_PaperSize\0PPK_CustomBase\0"
};

void PythonQtWrapper_QPrintEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPrintEngine *_t = static_cast<PythonQtWrapper_QPrintEngine *>(_o);
        switch (_id) {
        case 0: { QPrintEngine* _r = _t->new_QPrintEngine();
            if (_a[0]) *reinterpret_cast< QPrintEngine**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QPrintEngine((*reinterpret_cast< QPrintEngine*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPrintEngine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPrintEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPrintEngine,
      qt_meta_data_PythonQtWrapper_QPrintEngine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPrintEngine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPrintEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPrintEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPrintEngine))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPrintEngine*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPrintEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QPrintPreviewDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      79,   58,   37,   36, 0x0a,
     154,  139,   37,   36, 0x2a,
     206,  198,   37,   36, 0x2a,
     254,  241,   37,   36, 0x0a,
     311,  304,   37,   36, 0x2a,
     345,   36,   37,   36, 0x2a,
     375,  371,   36,   36, 0x0a,
     448,  424,   36,   36, 0x0a,
     496,  479,   36,   36, 0x0a,
     556,  523,   36,   36, 0x0a,
     614,  479,  604,   36, 0x0a,
     669,  644,   36,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPrintPreviewDialog[] = {
    "PythonQtWrapper_QPrintPreviewDialog\0"
    "\0QPrintPreviewDialog*\0printer,parent,flags\0"
    "new_QPrintPreviewDialog(QPrinter*,QWidget*,Qt::WindowFlags)\0"
    "printer,parent\0"
    "new_QPrintPreviewDialog(QPrinter*,QWidget*)\0"
    "printer\0new_QPrintPreviewDialog(QPrinter*)\0"
    "parent,flags\0"
    "new_QPrintPreviewDialog(QWidget*,Qt::WindowFlags)\0"
    "parent\0new_QPrintPreviewDialog(QWidget*)\0"
    "new_QPrintPreviewDialog()\0obj\0"
    "delete_QPrintPreviewDialog(QPrintPreviewDialog*)\0"
    "theWrappedObject,result\0"
    "done(QPrintPreviewDialog*,int)\0"
    "theWrappedObject\0open(QPrintPreviewDialog*)\0"
    "theWrappedObject,receiver,member\0"
    "open(QPrintPreviewDialog*,QObject*,const char*)\0"
    "QPrinter*\0printer(QPrintPreviewDialog*)\0"
    "theWrappedObject,visible\0"
    "setVisible(QPrintPreviewDialog*,bool)\0"
};

void PythonQtWrapper_QPrintPreviewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPrintPreviewDialog *_t = static_cast<PythonQtWrapper_QPrintPreviewDialog *>(_o);
        switch (_id) {
        case 0: { QPrintPreviewDialog* _r = _t->new_QPrintPreviewDialog((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPrintPreviewDialog**>(_a[0]) = _r; }  break;
        case 1: { QPrintPreviewDialog* _r = _t->new_QPrintPreviewDialog((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPrintPreviewDialog**>(_a[0]) = _r; }  break;
        case 2: { QPrintPreviewDialog* _r = _t->new_QPrintPreviewDialog((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrintPreviewDialog**>(_a[0]) = _r; }  break;
        case 3: { QPrintPreviewDialog* _r = _t->new_QPrintPreviewDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPrintPreviewDialog**>(_a[0]) = _r; }  break;
        case 4: { QPrintPreviewDialog* _r = _t->new_QPrintPreviewDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrintPreviewDialog**>(_a[0]) = _r; }  break;
        case 5: { QPrintPreviewDialog* _r = _t->new_QPrintPreviewDialog();
            if (_a[0]) *reinterpret_cast< QPrintPreviewDialog**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QPrintPreviewDialog((*reinterpret_cast< QPrintPreviewDialog*(*)>(_a[1]))); break;
        case 7: _t->done((*reinterpret_cast< QPrintPreviewDialog*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->open((*reinterpret_cast< QPrintPreviewDialog*(*)>(_a[1]))); break;
        case 9: _t->open((*reinterpret_cast< QPrintPreviewDialog*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3]))); break;
        case 10: { QPrinter* _r = _t->printer((*reinterpret_cast< QPrintPreviewDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinter**>(_a[0]) = _r; }  break;
        case 11: _t->setVisible((*reinterpret_cast< QPrintPreviewDialog*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPrintPreviewDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPrintPreviewDialog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPrintPreviewDialog,
      qt_meta_data_PythonQtWrapper_QPrintPreviewDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPrintPreviewDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPrintPreviewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPrintPreviewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPrintPreviewDialog))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPrintPreviewDialog*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPrintPreviewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QPrintPreviewWidget[] = {

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
      79,   58,   37,   36, 0x0a,
     154,  139,   37,   36, 0x2a,
     206,  198,   37,   36, 0x2a,
     254,  241,   37,   36, 0x0a,
     311,  304,   37,   36, 0x2a,
     345,   36,   37,   36, 0x2a,
     375,  371,   36,   36, 0x0a,
     445,  428,  424,   36, 0x0a,
     479,  428,  424,   36, 0x0a,
     532,  428,  510,   36, 0x0a,
     566,  428,  424,   36, 0x0a,
     623,  598,   36,   36, 0x0a,
     691,  428,  661,   36, 0x0a,
     728,  428,  722,   36, 0x0a,
     791,  428,  761,   36, 0x0a,

 // enums: name, flags, count, data
     822, 0x0,    3,   97,
     831, 0x0,    3,  103,

 // enum data: key, value
     840, uint(PythonQtWrapper_QPrintPreviewWidget::CustomZoom),
     851, uint(PythonQtWrapper_QPrintPreviewWidget::FitToWidth),
     862, uint(PythonQtWrapper_QPrintPreviewWidget::FitInView),
     872, uint(PythonQtWrapper_QPrintPreviewWidget::SinglePageView),
     887, uint(PythonQtWrapper_QPrintPreviewWidget::FacingPagesView),
     903, uint(PythonQtWrapper_QPrintPreviewWidget::AllPagesView),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPrintPreviewWidget[] = {
    "PythonQtWrapper_QPrintPreviewWidget\0"
    "\0QPrintPreviewWidget*\0printer,parent,flags\0"
    "new_QPrintPreviewWidget(QPrinter*,QWidget*,Qt::WindowFlags)\0"
    "printer,parent\0"
    "new_QPrintPreviewWidget(QPrinter*,QWidget*)\0"
    "printer\0new_QPrintPreviewWidget(QPrinter*)\0"
    "parent,flags\0"
    "new_QPrintPreviewWidget(QWidget*,Qt::WindowFlags)\0"
    "parent\0new_QPrintPreviewWidget(QWidget*)\0"
    "new_QPrintPreviewWidget()\0obj\0"
    "delete_QPrintPreviewWidget(QPrintPreviewWidget*)\0"
    "int\0theWrappedObject\0"
    "currentPage(QPrintPreviewWidget*)\0"
    "numPages(QPrintPreviewWidget*)\0"
    "QPrinter::Orientation\0"
    "orientation(QPrintPreviewWidget*)\0"
    "pageCount(QPrintPreviewWidget*)\0"
    "theWrappedObject,visible\0"
    "setVisible(QPrintPreviewWidget*,bool)\0"
    "QPrintPreviewWidget::ViewMode\0"
    "viewMode(QPrintPreviewWidget*)\0qreal\0"
    "zoomFactor(QPrintPreviewWidget*)\0"
    "QPrintPreviewWidget::ZoomMode\0"
    "zoomMode(QPrintPreviewWidget*)\0ZoomMode\0"
    "ViewMode\0CustomZoom\0FitToWidth\0FitInView\0"
    "SinglePageView\0FacingPagesView\0"
    "AllPagesView\0"
};

void PythonQtWrapper_QPrintPreviewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPrintPreviewWidget *_t = static_cast<PythonQtWrapper_QPrintPreviewWidget *>(_o);
        switch (_id) {
        case 0: { QPrintPreviewWidget* _r = _t->new_QPrintPreviewWidget((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPrintPreviewWidget**>(_a[0]) = _r; }  break;
        case 1: { QPrintPreviewWidget* _r = _t->new_QPrintPreviewWidget((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPrintPreviewWidget**>(_a[0]) = _r; }  break;
        case 2: { QPrintPreviewWidget* _r = _t->new_QPrintPreviewWidget((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrintPreviewWidget**>(_a[0]) = _r; }  break;
        case 3: { QPrintPreviewWidget* _r = _t->new_QPrintPreviewWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPrintPreviewWidget**>(_a[0]) = _r; }  break;
        case 4: { QPrintPreviewWidget* _r = _t->new_QPrintPreviewWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrintPreviewWidget**>(_a[0]) = _r; }  break;
        case 5: { QPrintPreviewWidget* _r = _t->new_QPrintPreviewWidget();
            if (_a[0]) *reinterpret_cast< QPrintPreviewWidget**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QPrintPreviewWidget((*reinterpret_cast< QPrintPreviewWidget*(*)>(_a[1]))); break;
        case 7: { int _r = _t->currentPage((*reinterpret_cast< QPrintPreviewWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->numPages((*reinterpret_cast< QPrintPreviewWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QPrinter::Orientation _r = _t->orientation((*reinterpret_cast< QPrintPreviewWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinter::Orientation*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->pageCount((*reinterpret_cast< QPrintPreviewWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: _t->setVisible((*reinterpret_cast< QPrintPreviewWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: { QPrintPreviewWidget::ViewMode _r = _t->viewMode((*reinterpret_cast< QPrintPreviewWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrintPreviewWidget::ViewMode*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->zoomFactor((*reinterpret_cast< QPrintPreviewWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: { QPrintPreviewWidget::ZoomMode _r = _t->zoomMode((*reinterpret_cast< QPrintPreviewWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrintPreviewWidget::ZoomMode*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPrintPreviewWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPrintPreviewWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPrintPreviewWidget,
      qt_meta_data_PythonQtWrapper_QPrintPreviewWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPrintPreviewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPrintPreviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPrintPreviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPrintPreviewWidget))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPrintPreviewWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPrintPreviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QPrinter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      69,   14, // methods
       0,    0, // properties
      11,  359, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      41,   36,   26,   25, 0x0a,
      77,   25,   26,   25, 0x2a,
     105,   92,   26,   25, 0x0a,
     162,  154,   26,   25, 0x2a,
     193,  189,   25,   25, 0x0a,
     242,  225,  220,   25, 0x0a,
     263,  225,  259,   25, 0x0a,
     290,  225,  220,   25, 0x0a,
     335,  225,  315,   25, 0x0a,
     356,  225,  259,   25, 0x0a,
     385,  225,  377,   25, 0x0a,
     404,  225,  259,   25, 0x0a,
     423,  225,  377,   25, 0x0a,
     442,  225,  220,   25, 0x0a,
     494,  225,  473,   25, 0x0a,
     512,  225,  220,   25, 0x0a,
     544,  225,  259,   25, 0x0a,
     564,  225,  220,   25, 0x0a,
     628,  584,   25,   25, 0x0a,
     697,  225,  220,   25, 0x0a,
     740,  716,  259,   25, 0x0a,
     790,  225,  220,   25, 0x0a,
     809,  225,  259,   25, 0x0a,
     852,  225,  830,   25, 0x0a,
     875,  225,  377,   25, 0x0a,
     924,  225,  901,   25, 0x0a,
     968,  225,  948,   25, 0x0a,
     995,  225,  989,   25, 0x0a,
    1022,  716, 1015,   25, 0x0a,
    1076,  225, 1057,   25, 0x0a,
    1110,  225, 1096,   25, 0x0a,
    1133,  225,  989,   25, 0x0a,
    1154,  716, 1015,   25, 0x0a,
    1190,  225, 1057,   25, 0x0a,
    1240, 1218, 1211,   25, 0x0a,
    1298,  225, 1276,   25, 0x0a,
    1335,  225, 1321,   25, 0x0a,
    1358,  225,  377,   25, 0x0a,
    1403,  225, 1382,   25, 0x0a,
    1425,  225,  377,   25, 0x0a,
    1471,  225, 1448,   25, 0x0a,
    1495,  225,  259,   25, 0x0a,
    1542, 1517,   25,   25, 0x0a,
    1575,  716,   25,   25, 0x0a,
    1619,  716,   25,   25, 0x0a,
    1647,  716,   25,   25, 0x0a,
    1677,  716,   25,   25, 0x0a,
    1731, 1707,   25,   25, 0x0a,
    1794, 1770,   25,   25, 0x0a,
    1836, 1707,   25,   25, 0x0a,
    1909, 1876,   25,   25, 0x0a,
    1938,  716,   25,   25, 0x0a,
    1966,  716,   25,   25, 0x0a,
    1994,  716,   25,   25, 0x0a,
    2042,  716,   25,   25, 0x0a,
    2103, 2079,   25,   25, 0x0a,
    2153,  584,   25,   25, 0x0a,
    2218,  716,   25,   25, 0x0a,
    2262,  716,   25,   25, 0x0a,
    2304,  716,   25,   25, 0x0a,
    2379, 2347,   25,   25, 0x0a,
    2425,  716,   25,   25, 0x0a,
    2473,  716,   25,   25, 0x0a,
    2531, 2508,   25,   25, 0x0a,
    2577,  716,   25,   25, 0x0a,
    2611,  716,   25,   25, 0x0a,
    2651,  225, 2640,   25, 0x0a,
    2683,  225,  220,   25, 0x0a,
    2717,  225,  259,   25, 0x0a,

 // enums: name, flags, count, data
    2735, 0x0,    3,  403,
    2748, 0x0,    4,  409,
    2759, 0x0,    4,  417,
    2770, 0x0,    7,  425,
    2775, 0x0,    3,  439,
    2787, 0x0,    2,  445,
    2799, 0x0,    4,  449,
    2812, 0x0,    2,  457,
    2822, 0x0,   14,  461,
    2834, 0x0,    2,  489,
    2844, 0x0,   33,  493,

 // enum data: key, value
    2853, uint(PythonQtWrapper_QPrinter::NativeFormat),
    2866, uint(PythonQtWrapper_QPrinter::PdfFormat),
    2876, uint(PythonQtWrapper_QPrinter::PostScriptFormat),
    2893, uint(PythonQtWrapper_QPrinter::DuplexNone),
    2904, uint(PythonQtWrapper_QPrinter::DuplexAuto),
    2915, uint(PythonQtWrapper_QPrinter::DuplexLongSide),
    2930, uint(PythonQtWrapper_QPrinter::DuplexShortSide),
    2946, uint(PythonQtWrapper_QPrinter::AllPages),
    2955, uint(PythonQtWrapper_QPrinter::Selection),
    2965, uint(PythonQtWrapper_QPrinter::PageRange),
    2975, uint(PythonQtWrapper_QPrinter::CurrentPage),
    2987, uint(PythonQtWrapper_QPrinter::Millimeter),
    2998, uint(PythonQtWrapper_QPrinter::Point),
    3004, uint(PythonQtWrapper_QPrinter::Inch),
    3009, uint(PythonQtWrapper_QPrinter::Pica),
    3014, uint(PythonQtWrapper_QPrinter::Didot),
    3020, uint(PythonQtWrapper_QPrinter::Cicero),
    3027, uint(PythonQtWrapper_QPrinter::DevicePixel),
    3039, uint(PythonQtWrapper_QPrinter::ScreenResolution),
    3056, uint(PythonQtWrapper_QPrinter::PrinterResolution),
    3074, uint(PythonQtWrapper_QPrinter::HighResolution),
    3089, uint(PythonQtWrapper_QPrinter::Portrait),
    3098, uint(PythonQtWrapper_QPrinter::Landscape),
    3108, uint(PythonQtWrapper_QPrinter::Idle),
    3113, uint(PythonQtWrapper_QPrinter::Active),
    3120, uint(PythonQtWrapper_QPrinter::Aborted),
    3128, uint(PythonQtWrapper_QPrinter::Error),
    3134, uint(PythonQtWrapper_QPrinter::GrayScale),
    3144, uint(PythonQtWrapper_QPrinter::Color),
    3150, uint(PythonQtWrapper_QPrinter::OnlyOne),
    3158, uint(PythonQtWrapper_QPrinter::Lower),
    3164, uint(PythonQtWrapper_QPrinter::Middle),
    3171, uint(PythonQtWrapper_QPrinter::Manual),
    3178, uint(PythonQtWrapper_QPrinter::Envelope),
    3187, uint(PythonQtWrapper_QPrinter::EnvelopeManual),
    3202, uint(PythonQtWrapper_QPrinter::Auto),
    3207, uint(PythonQtWrapper_QPrinter::Tractor),
    3215, uint(PythonQtWrapper_QPrinter::SmallFormat),
    3227, uint(PythonQtWrapper_QPrinter::LargeFormat),
    3239, uint(PythonQtWrapper_QPrinter::LargeCapacity),
    3253, uint(PythonQtWrapper_QPrinter::Cassette),
    3262, uint(PythonQtWrapper_QPrinter::FormSource),
    3273, uint(PythonQtWrapper_QPrinter::MaxPageSource),
    3287, uint(PythonQtWrapper_QPrinter::FirstPageFirst),
    3302, uint(PythonQtWrapper_QPrinter::LastPageFirst),
    3316, uint(PythonQtWrapper_QPrinter::A4),
    3319, uint(PythonQtWrapper_QPrinter::B5),
    3322, uint(PythonQtWrapper_QPrinter::Letter),
    3329, uint(PythonQtWrapper_QPrinter::Legal),
    3335, uint(PythonQtWrapper_QPrinter::Executive),
    3345, uint(PythonQtWrapper_QPrinter::A0),
    3348, uint(PythonQtWrapper_QPrinter::A1),
    3351, uint(PythonQtWrapper_QPrinter::A2),
    3354, uint(PythonQtWrapper_QPrinter::A3),
    3357, uint(PythonQtWrapper_QPrinter::A5),
    3360, uint(PythonQtWrapper_QPrinter::A6),
    3363, uint(PythonQtWrapper_QPrinter::A7),
    3366, uint(PythonQtWrapper_QPrinter::A8),
    3369, uint(PythonQtWrapper_QPrinter::A9),
    3372, uint(PythonQtWrapper_QPrinter::B0),
    3375, uint(PythonQtWrapper_QPrinter::B1),
    3378, uint(PythonQtWrapper_QPrinter::B10),
    3382, uint(PythonQtWrapper_QPrinter::B2),
    3385, uint(PythonQtWrapper_QPrinter::B3),
    3388, uint(PythonQtWrapper_QPrinter::B4),
    3391, uint(PythonQtWrapper_QPrinter::B6),
    3394, uint(PythonQtWrapper_QPrinter::B7),
    3397, uint(PythonQtWrapper_QPrinter::B8),
    3400, uint(PythonQtWrapper_QPrinter::B9),
    3403, uint(PythonQtWrapper_QPrinter::C5E),
    3407, uint(PythonQtWrapper_QPrinter::Comm10E),
    3415, uint(PythonQtWrapper_QPrinter::DLE),
    3419, uint(PythonQtWrapper_QPrinter::Folio),
    3425, uint(PythonQtWrapper_QPrinter::Ledger),
    3432, uint(PythonQtWrapper_QPrinter::Tabloid),
    3440, uint(PythonQtWrapper_QPrinter::Custom),
    3447, uint(PythonQtWrapper_QPrinter::NPageSize),
    3457, uint(PythonQtWrapper_QPrinter::NPaperSize),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPrinter[] = {
    "PythonQtWrapper_QPrinter\0\0QPrinter*\0"
    "mode\0new_QPrinter(QPrinter::PrinterMode)\0"
    "new_QPrinter()\0printer,mode\0"
    "new_QPrinter(QPrinterInfo,QPrinter::PrinterMode)\0"
    "printer\0new_QPrinter(QPrinterInfo)\0"
    "obj\0delete_QPrinter(QPrinter*)\0bool\0"
    "theWrappedObject\0abort(QPrinter*)\0int\0"
    "actualNumCopies(QPrinter*)\0"
    "collateCopies(QPrinter*)\0QPrinter::ColorMode\0"
    "colorMode(QPrinter*)\0copyCount(QPrinter*)\0"
    "QString\0creator(QPrinter*)\0"
    "devType(QPrinter*)\0docName(QPrinter*)\0"
    "doubleSidedPrinting(QPrinter*)\0"
    "QPrinter::DuplexMode\0duplex(QPrinter*)\0"
    "fontEmbeddingEnabled(QPrinter*)\0"
    "fromPage(QPrinter*)\0fullPage(QPrinter*)\0"
    "theWrappedObject,left,top,right,bottom,unit\0"
    "getPageMargins(QPrinter*,qreal*,qreal*,qreal*,qreal*,QPrinter::Unit)\0"
    "isValid(QPrinter*)\0theWrappedObject,arg__1\0"
    "metric(QPrinter*,QPaintDevice::PaintDeviceMetric)\0"
    "newPage(QPrinter*)\0numCopies(QPrinter*)\0"
    "QPrinter::Orientation\0orientation(QPrinter*)\0"
    "outputFileName(QPrinter*)\0"
    "QPrinter::OutputFormat\0outputFormat(QPrinter*)\0"
    "QPrinter::PageOrder\0pageOrder(QPrinter*)\0"
    "QRect\0pageRect(QPrinter*)\0QRectF\0"
    "pageRect(QPrinter*,QPrinter::Unit)\0"
    "QPrinter::PageSize\0pageSize(QPrinter*)\0"
    "QPaintEngine*\0paintEngine(QPrinter*)\0"
    "paperRect(QPrinter*)\0"
    "paperRect(QPrinter*,QPrinter::Unit)\0"
    "paperSize(QPrinter*)\0QSizeF\0"
    "theWrappedObject,unit\0"
    "paperSize(QPrinter*,QPrinter::Unit)\0"
    "QPrinter::PaperSource\0paperSource(QPrinter*)\0"
    "QPrintEngine*\0printEngine(QPrinter*)\0"
    "printProgram(QPrinter*)\0QPrinter::PrintRange\0"
    "printRange(QPrinter*)\0printerName(QPrinter*)\0"
    "QPrinter::PrinterState\0printerState(QPrinter*)\0"
    "resolution(QPrinter*)\0theWrappedObject,collate\0"
    "setCollateCopies(QPrinter*,bool)\0"
    "setColorMode(QPrinter*,QPrinter::ColorMode)\0"
    "setCopyCount(QPrinter*,int)\0"
    "setCreator(QPrinter*,QString)\0"
    "setDocName(QPrinter*,QString)\0"
    "theWrappedObject,enable\0"
    "setDoubleSidedPrinting(QPrinter*,bool)\0"
    "theWrappedObject,duplex\0"
    "setDuplex(QPrinter*,QPrinter::DuplexMode)\0"
    "setFontEmbeddingEnabled(QPrinter*,bool)\0"
    "theWrappedObject,fromPage,toPage\0"
    "setFromTo(QPrinter*,int,int)\0"
    "setFullPage(QPrinter*,bool)\0"
    "setNumCopies(QPrinter*,int)\0"
    "setOrientation(QPrinter*,QPrinter::Orientation)\0"
    "setOutputFileName(QPrinter*,QString)\0"
    "theWrappedObject,format\0"
    "setOutputFormat(QPrinter*,QPrinter::OutputFormat)\0"
    "setPageMargins(QPrinter*,qreal,qreal,qreal,qreal,QPrinter::Unit)\0"
    "setPageOrder(QPrinter*,QPrinter::PageOrder)\0"
    "setPageSize(QPrinter*,QPrinter::PageSize)\0"
    "setPaperSize(QPrinter*,QPrinter::PageSize)\0"
    "theWrappedObject,paperSize,unit\0"
    "setPaperSize(QPrinter*,QSizeF,QPrinter::Unit)\0"
    "setPaperSource(QPrinter*,QPrinter::PaperSource)\0"
    "setPrintProgram(QPrinter*,QString)\0"
    "theWrappedObject,range\0"
    "setPrintRange(QPrinter*,QPrinter::PrintRange)\0"
    "setPrinterName(QPrinter*,QString)\0"
    "setResolution(QPrinter*,int)\0QList<int>\0"
    "supportedResolutions(QPrinter*)\0"
    "supportsMultipleCopies(QPrinter*)\0"
    "toPage(QPrinter*)\0OutputFormat\0"
    "DuplexMode\0PrintRange\0Unit\0PrinterMode\0"
    "Orientation\0PrinterState\0ColorMode\0"
    "PaperSource\0PageOrder\0PageSize\0"
    "NativeFormat\0PdfFormat\0PostScriptFormat\0"
    "DuplexNone\0DuplexAuto\0DuplexLongSide\0"
    "DuplexShortSide\0AllPages\0Selection\0"
    "PageRange\0CurrentPage\0Millimeter\0Point\0"
    "Inch\0Pica\0Didot\0Cicero\0DevicePixel\0"
    "ScreenResolution\0PrinterResolution\0"
    "HighResolution\0Portrait\0Landscape\0"
    "Idle\0Active\0Aborted\0Error\0GrayScale\0"
    "Color\0OnlyOne\0Lower\0Middle\0Manual\0"
    "Envelope\0EnvelopeManual\0Auto\0Tractor\0"
    "SmallFormat\0LargeFormat\0LargeCapacity\0"
    "Cassette\0FormSource\0MaxPageSource\0"
    "FirstPageFirst\0LastPageFirst\0A4\0B5\0"
    "Letter\0Legal\0Executive\0A0\0A1\0A2\0A3\0"
    "A5\0A6\0A7\0A8\0A9\0B0\0B1\0B10\0B2\0B3\0B4\0B6\0"
    "B7\0B8\0B9\0C5E\0Comm10E\0DLE\0Folio\0Ledger\0"
    "Tabloid\0Custom\0NPageSize\0NPaperSize\0"
};

void PythonQtWrapper_QPrinter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPrinter *_t = static_cast<PythonQtWrapper_QPrinter *>(_o);
        switch (_id) {
        case 0: { QPrinter* _r = _t->new_QPrinter((*reinterpret_cast< QPrinter::PrinterMode(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinter**>(_a[0]) = _r; }  break;
        case 1: { QPrinter* _r = _t->new_QPrinter();
            if (_a[0]) *reinterpret_cast< QPrinter**>(_a[0]) = _r; }  break;
        case 2: { QPrinter* _r = _t->new_QPrinter((*reinterpret_cast< const QPrinterInfo(*)>(_a[1])),(*reinterpret_cast< QPrinter::PrinterMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPrinter**>(_a[0]) = _r; }  break;
        case 3: { QPrinter* _r = _t->new_QPrinter((*reinterpret_cast< const QPrinterInfo(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinter**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QPrinter((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->abort((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->actualNumCopies((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->collateCopies((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QPrinter::ColorMode _r = _t->colorMode((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinter::ColorMode*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->copyCount((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->creator((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->devType((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->docName((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->doubleSidedPrinting((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QPrinter::DuplexMode _r = _t->duplex((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinter::DuplexMode*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->fontEmbeddingEnabled((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->fromPage((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->fullPage((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->getPageMargins((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< qreal*(*)>(_a[2])),(*reinterpret_cast< qreal*(*)>(_a[3])),(*reinterpret_cast< qreal*(*)>(_a[4])),(*reinterpret_cast< qreal*(*)>(_a[5])),(*reinterpret_cast< QPrinter::Unit(*)>(_a[6]))); break;
        case 19: { bool _r = _t->isValid((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->metric((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QPaintDevice::PaintDeviceMetric(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->newPage((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->numCopies((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: { QPrinter::Orientation _r = _t->orientation((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinter::Orientation*>(_a[0]) = _r; }  break;
        case 24: { QString _r = _t->outputFileName((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 25: { QPrinter::OutputFormat _r = _t->outputFormat((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinter::OutputFormat*>(_a[0]) = _r; }  break;
        case 26: { QPrinter::PageOrder _r = _t->pageOrder((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinter::PageOrder*>(_a[0]) = _r; }  break;
        case 27: { QRect _r = _t->pageRect((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 28: { QRectF _r = _t->pageRect((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QPrinter::Unit(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 29: { QPrinter::PageSize _r = _t->pageSize((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinter::PageSize*>(_a[0]) = _r; }  break;
        case 30: { QPaintEngine* _r = _t->paintEngine((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPaintEngine**>(_a[0]) = _r; }  break;
        case 31: { QRect _r = _t->paperRect((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 32: { QRectF _r = _t->paperRect((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QPrinter::Unit(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 33: { QPrinter::PageSize _r = _t->paperSize((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinter::PageSize*>(_a[0]) = _r; }  break;
        case 34: { QSizeF _r = _t->paperSize((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QPrinter::Unit(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 35: { QPrinter::PaperSource _r = _t->paperSource((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinter::PaperSource*>(_a[0]) = _r; }  break;
        case 36: { QPrintEngine* _r = _t->printEngine((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrintEngine**>(_a[0]) = _r; }  break;
        case 37: { QString _r = _t->printProgram((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 38: { QPrinter::PrintRange _r = _t->printRange((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinter::PrintRange*>(_a[0]) = _r; }  break;
        case 39: { QString _r = _t->printerName((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 40: { QPrinter::PrinterState _r = _t->printerState((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinter::PrinterState*>(_a[0]) = _r; }  break;
        case 41: { int _r = _t->resolution((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 42: _t->setCollateCopies((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 43: _t->setColorMode((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QPrinter::ColorMode(*)>(_a[2]))); break;
        case 44: _t->setCopyCount((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->setCreator((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 46: _t->setDocName((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 47: _t->setDoubleSidedPrinting((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 48: _t->setDuplex((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QPrinter::DuplexMode(*)>(_a[2]))); break;
        case 49: _t->setFontEmbeddingEnabled((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 50: _t->setFromTo((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 51: _t->setFullPage((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 52: _t->setNumCopies((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 53: _t->setOrientation((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QPrinter::Orientation(*)>(_a[2]))); break;
        case 54: _t->setOutputFileName((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 55: _t->setOutputFormat((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QPrinter::OutputFormat(*)>(_a[2]))); break;
        case 56: _t->setPageMargins((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< QPrinter::Unit(*)>(_a[6]))); break;
        case 57: _t->setPageOrder((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QPrinter::PageOrder(*)>(_a[2]))); break;
        case 58: _t->setPageSize((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QPrinter::PageSize(*)>(_a[2]))); break;
        case 59: _t->setPaperSize((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QPrinter::PageSize(*)>(_a[2]))); break;
        case 60: _t->setPaperSize((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< const QSizeF(*)>(_a[2])),(*reinterpret_cast< QPrinter::Unit(*)>(_a[3]))); break;
        case 61: _t->setPaperSource((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QPrinter::PaperSource(*)>(_a[2]))); break;
        case 62: _t->setPrintProgram((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 63: _t->setPrintRange((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< QPrinter::PrintRange(*)>(_a[2]))); break;
        case 64: _t->setPrinterName((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 65: _t->setResolution((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 66: { QList<int> _r = _t->supportedResolutions((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 67: { bool _r = _t->supportsMultipleCopies((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 68: { int _r = _t->toPage((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPrinter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPrinter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPrinter,
      qt_meta_data_PythonQtWrapper_QPrinter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPrinter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPrinter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPrinter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPrinter))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPrinter*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPrinter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 69)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 69;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QPrinterInfo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   29,   30,   29, 0x0a,
      71,   63,   30,   29, 0x0a,
     104,   98,   30,   29, 0x0a,
     139,  135,   29,   29, 0x0a,
     194,   29,  174,   29, 0x0a,
     247,   29,  234,   29, 0x0a,
     306,  289,  284,   29, 0x0a,
     331,  289,  284,   29, 0x0a,
     376,  353,   30,   29, 0x0a,
     428,  289,  420,   29, 0x0a,
     481,  289,  455,   29, 0x0a,
     516,  135,  284,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPrinterInfo[] = {
    "PythonQtWrapper_QPrinterInfo\0\0"
    "QPrinterInfo*\0new_QPrinterInfo()\0"
    "printer\0new_QPrinterInfo(QPrinter)\0"
    "other\0new_QPrinterInfo(QPrinterInfo)\0"
    "obj\0delete_QPrinterInfo(QPrinterInfo*)\0"
    "QList<QPrinterInfo>\0"
    "static_QPrinterInfo_availablePrinters()\0"
    "QPrinterInfo\0static_QPrinterInfo_defaultPrinter()\0"
    "bool\0theWrappedObject\0isDefault(QPrinterInfo*)\0"
    "isNull(QPrinterInfo*)\0theWrappedObject,other\0"
    "operator_assign(QPrinterInfo*,QPrinterInfo)\0"
    "QString\0printerName(QPrinterInfo*)\0"
    "QList<QPrinter::PageSize>\0"
    "supportedPaperSizes(QPrinterInfo*)\0"
    "__nonzero__(QPrinterInfo*)\0"
};

void PythonQtWrapper_QPrinterInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPrinterInfo *_t = static_cast<PythonQtWrapper_QPrinterInfo *>(_o);
        switch (_id) {
        case 0: { QPrinterInfo* _r = _t->new_QPrinterInfo();
            if (_a[0]) *reinterpret_cast< QPrinterInfo**>(_a[0]) = _r; }  break;
        case 1: { QPrinterInfo* _r = _t->new_QPrinterInfo((*reinterpret_cast< const QPrinter(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinterInfo**>(_a[0]) = _r; }  break;
        case 2: { QPrinterInfo* _r = _t->new_QPrinterInfo((*reinterpret_cast< const QPrinterInfo(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinterInfo**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QPrinterInfo((*reinterpret_cast< QPrinterInfo*(*)>(_a[1]))); break;
        case 4: { QList<QPrinterInfo> _r = _t->static_QPrinterInfo_availablePrinters();
            if (_a[0]) *reinterpret_cast< QList<QPrinterInfo>*>(_a[0]) = _r; }  break;
        case 5: { QPrinterInfo _r = _t->static_QPrinterInfo_defaultPrinter();
            if (_a[0]) *reinterpret_cast< QPrinterInfo*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isDefault((*reinterpret_cast< QPrinterInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isNull((*reinterpret_cast< QPrinterInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QPrinterInfo* _r = _t->operator_assign((*reinterpret_cast< QPrinterInfo*(*)>(_a[1])),(*reinterpret_cast< const QPrinterInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPrinterInfo**>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->printerName((*reinterpret_cast< QPrinterInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QList<QPrinter::PageSize> _r = _t->supportedPaperSizes((*reinterpret_cast< QPrinterInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QPrinter::PageSize>*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__nonzero__((*reinterpret_cast< QPrinterInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPrinterInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPrinterInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPrinterInfo,
      qt_meta_data_PythonQtWrapper_QPrinterInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPrinterInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPrinterInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPrinterInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPrinterInfo))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPrinterInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPrinterInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QProgressBar[] = {

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
      51,   44,   30,   29, 0x0a,
      78,   29,   30,   29, 0x2a,
     101,   97,   29,   29, 0x0a,
     167,  150,  136,   29, 0x0a,
     216,  197,  192,   29, 0x0a,
     253,  150,  245,   29, 0x0a,
     275,  150,  192,   29, 0x0a,
     275,  150,  192,   29, 0x0a,
     309,  150,  192,   29, 0x0a,
     342,  150,  338,   29, 0x0a,
     365,  150,  338,   29, 0x0a,
     394,  150,  388,   29, 0x0a,
     441,  150,  425,   29, 0x0a,
     492,  468,   29,   29, 0x0a,
     558,  531,   29,   29, 0x0a,
     624,  600,   29,   29, 0x0a,
     681,  657,   29,   29, 0x0a,
     754,  723,   29,   29, 0x0a,
     835,  810,   29,   29, 0x0a,
     870,  150,  388,   29, 0x0a,
     894,  150,  245,   29, 0x0a,
     938,  150,  914,   29, 0x0a,
     938,  150,  914,   29, 0x0a,
     967,  150,  338,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QProgressBar[] = {
    "PythonQtWrapper_QProgressBar\0\0"
    "QProgressBar*\0parent\0new_QProgressBar(QWidget*)\0"
    "new_QProgressBar()\0obj\0"
    "delete_QProgressBar(QProgressBar*)\0"
    "Qt::Alignment\0theWrappedObject\0"
    "alignment(QProgressBar*)\0bool\0"
    "theWrappedObject,e\0event(QProgressBar*,QEvent*)\0"
    "QString\0format(QProgressBar*)\0"
    "invertedAppearance(QProgressBar*)\0"
    "isTextVisible(QProgressBar*)\0int\0"
    "maximum(QProgressBar*)\0minimum(QProgressBar*)\0"
    "QSize\0minimumSizeHint(QProgressBar*)\0"
    "Qt::Orientation\0orientation(QProgressBar*)\0"
    "theWrappedObject,arg__1\0"
    "paintEvent(QProgressBar*,QPaintEvent*)\0"
    "theWrappedObject,alignment\0"
    "setAlignment(QProgressBar*,Qt::Alignment)\0"
    "theWrappedObject,format\0"
    "setFormat(QProgressBar*,QString)\0"
    "theWrappedObject,invert\0"
    "setInvertedAppearance(QProgressBar*,bool)\0"
    "theWrappedObject,textDirection\0"
    "setTextDirection(QProgressBar*,QProgressBar::Direction)\0"
    "theWrappedObject,visible\0"
    "setTextVisible(QProgressBar*,bool)\0"
    "sizeHint(QProgressBar*)\0text(QProgressBar*)\0"
    "QProgressBar::Direction\0"
    "textDirection(QProgressBar*)\0"
    "value(QProgressBar*)\0"
};

void PythonQtWrapper_QProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QProgressBar *_t = static_cast<PythonQtWrapper_QProgressBar *>(_o);
        switch (_id) {
        case 0: { QProgressBar* _r = _t->new_QProgressBar((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QProgressBar**>(_a[0]) = _r; }  break;
        case 1: { QProgressBar* _r = _t->new_QProgressBar();
            if (_a[0]) *reinterpret_cast< QProgressBar**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QProgressBar((*reinterpret_cast< QProgressBar*(*)>(_a[1]))); break;
        case 3: { Qt::Alignment _r = _t->alignment((*reinterpret_cast< QProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->event((*reinterpret_cast< QProgressBar*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->format((*reinterpret_cast< QProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->invertedAppearance((*reinterpret_cast< QProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->invertedAppearance((*reinterpret_cast< QProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isTextVisible((*reinterpret_cast< QProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->maximum((*reinterpret_cast< QProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->minimum((*reinterpret_cast< QProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QSize _r = _t->minimumSizeHint((*reinterpret_cast< QProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 12: { Qt::Orientation _r = _t->orientation((*reinterpret_cast< QProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientation*>(_a[0]) = _r; }  break;
        case 13: _t->paintEvent((*reinterpret_cast< QProgressBar*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 14: _t->setAlignment((*reinterpret_cast< QProgressBar*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 15: _t->setFormat((*reinterpret_cast< QProgressBar*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->setInvertedAppearance((*reinterpret_cast< QProgressBar*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 17: _t->setTextDirection((*reinterpret_cast< QProgressBar*(*)>(_a[1])),(*reinterpret_cast< QProgressBar::Direction(*)>(_a[2]))); break;
        case 18: _t->setTextVisible((*reinterpret_cast< QProgressBar*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: { QSize _r = _t->sizeHint((*reinterpret_cast< QProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 20: { QString _r = _t->text((*reinterpret_cast< QProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 21: { QProgressBar::Direction _r = _t->textDirection((*reinterpret_cast< QProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QProgressBar::Direction*>(_a[0]) = _r; }  break;
        case 22: { QProgressBar::Direction _r = _t->textDirection((*reinterpret_cast< QProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QProgressBar::Direction*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->value((*reinterpret_cast< QProgressBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QProgressBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QProgressBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QProgressBar,
      qt_meta_data_PythonQtWrapper_QProgressBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QProgressBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QProgressBar))
        return static_cast<void*>(const_cast< PythonQtWrapper_QProgressBar*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QProgressDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      63,   50,   33,   32, 0x0a,
     116,  109,   33,   32, 0x2a,
     146,   32,   33,   32, 0x2a,
     224,  168,   33,   32, 0x0a,
     344,  294,   33,   32, 0x2a,
     441,  398,   33,   32, 0x2a,
     490,  486,   32,   32, 0x0a,
     553,  536,  531,   32, 0x0a,
     581,  536,  531,   32, 0x0a,
     632,  609,   32,   32, 0x0a,
     670,  609,   32,   32, 0x0a,
     720,  536,  712,   32, 0x0a,
     752,  536,  748,   32, 0x0a,
     778,  536,  748,   32, 0x0a,
     804,  536,  748,   32, 0x0a,
     838,  536,   32,   32, 0x0a,
     894,  861,   32,   32, 0x0a,
     938,  609,   32,   32, 0x0a,
    1005,  982,   32,   32, 0x0a,
    1064, 1041,   32,   32, 0x0a,
    1121, 1100,   32,   32, 0x0a,
    1184, 1160,   32,   32, 0x0a,
    1254, 1231,   32,   32, 0x0a,
    1289,  609,   32,   32, 0x0a,
    1335,  536, 1329,   32, 0x0a,
    1362,  536,  748,   32, 0x0a,
    1386,  536,  531,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QProgressDialog[] = {
    "PythonQtWrapper_QProgressDialog\0\0"
    "QProgressDialog*\0parent,flags\0"
    "new_QProgressDialog(QWidget*,Qt::WindowFlags)\0"
    "parent\0new_QProgressDialog(QWidget*)\0"
    "new_QProgressDialog()\0"
    "labelText,cancelButtonText,minimum,maximum,parent,flags\0"
    "new_QProgressDialog(QString,QString,int,int,QWidget*,Qt::WindowFlags)\0"
    "labelText,cancelButtonText,minimum,maximum,parent\0"
    "new_QProgressDialog(QString,QString,int,int,QWidget*)\0"
    "labelText,cancelButtonText,minimum,maximum\0"
    "new_QProgressDialog(QString,QString,int,int)\0"
    "obj\0delete_QProgressDialog(QProgressDialog*)\0"
    "bool\0theWrappedObject\0autoClose(QProgressDialog*)\0"
    "autoReset(QProgressDialog*)\0"
    "theWrappedObject,event\0"
    "changeEvent(QProgressDialog*,QEvent*)\0"
    "closeEvent(QProgressDialog*,QCloseEvent*)\0"
    "QString\0labelText(QProgressDialog*)\0"
    "int\0maximum(QProgressDialog*)\0"
    "minimum(QProgressDialog*)\0"
    "minimumDuration(QProgressDialog*)\0"
    "open(QProgressDialog*)\0"
    "theWrappedObject,receiver,member\0"
    "open(QProgressDialog*,QObject*,const char*)\0"
    "resizeEvent(QProgressDialog*,QResizeEvent*)\0"
    "theWrappedObject,close\0"
    "setAutoClose(QProgressDialog*,bool)\0"
    "theWrappedObject,reset\0"
    "setAutoReset(QProgressDialog*,bool)\0"
    "theWrappedObject,bar\0"
    "setBar(QProgressDialog*,QProgressBar*)\0"
    "theWrappedObject,button\0"
    "setCancelButton(QProgressDialog*,QPushButton*)\0"
    "theWrappedObject,label\0"
    "setLabel(QProgressDialog*,QLabel*)\0"
    "showEvent(QProgressDialog*,QShowEvent*)\0"
    "QSize\0sizeHint(QProgressDialog*)\0"
    "value(QProgressDialog*)\0"
    "wasCanceled(QProgressDialog*)\0"
};

void PythonQtWrapper_QProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QProgressDialog *_t = static_cast<PythonQtWrapper_QProgressDialog *>(_o);
        switch (_id) {
        case 0: { QProgressDialog* _r = _t->new_QProgressDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QProgressDialog**>(_a[0]) = _r; }  break;
        case 1: { QProgressDialog* _r = _t->new_QProgressDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QProgressDialog**>(_a[0]) = _r; }  break;
        case 2: { QProgressDialog* _r = _t->new_QProgressDialog();
            if (_a[0]) *reinterpret_cast< QProgressDialog**>(_a[0]) = _r; }  break;
        case 3: { QProgressDialog* _r = _t->new_QProgressDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QWidget*(*)>(_a[5])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QProgressDialog**>(_a[0]) = _r; }  break;
        case 4: { QProgressDialog* _r = _t->new_QProgressDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QWidget*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QProgressDialog**>(_a[0]) = _r; }  break;
        case 5: { QProgressDialog* _r = _t->new_QProgressDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QProgressDialog**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QProgressDialog((*reinterpret_cast< QProgressDialog*(*)>(_a[1]))); break;
        case 7: { bool _r = _t->autoClose((*reinterpret_cast< QProgressDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->autoReset((*reinterpret_cast< QProgressDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->changeEvent((*reinterpret_cast< QProgressDialog*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 10: _t->closeEvent((*reinterpret_cast< QProgressDialog*(*)>(_a[1])),(*reinterpret_cast< QCloseEvent*(*)>(_a[2]))); break;
        case 11: { QString _r = _t->labelText((*reinterpret_cast< QProgressDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->maximum((*reinterpret_cast< QProgressDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->minimum((*reinterpret_cast< QProgressDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->minimumDuration((*reinterpret_cast< QProgressDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: _t->open((*reinterpret_cast< QProgressDialog*(*)>(_a[1]))); break;
        case 16: _t->open((*reinterpret_cast< QProgressDialog*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3]))); break;
        case 17: _t->resizeEvent((*reinterpret_cast< QProgressDialog*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 18: _t->setAutoClose((*reinterpret_cast< QProgressDialog*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->setAutoReset((*reinterpret_cast< QProgressDialog*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->setBar((*reinterpret_cast< QProgressDialog*(*)>(_a[1])),(*reinterpret_cast< QProgressBar*(*)>(_a[2]))); break;
        case 21: _t->setCancelButton((*reinterpret_cast< QProgressDialog*(*)>(_a[1])),(*reinterpret_cast< QPushButton*(*)>(_a[2]))); break;
        case 22: _t->setLabel((*reinterpret_cast< QProgressDialog*(*)>(_a[1])),(*reinterpret_cast< QLabel*(*)>(_a[2]))); break;
        case 23: _t->showEvent((*reinterpret_cast< QProgressDialog*(*)>(_a[1])),(*reinterpret_cast< QShowEvent*(*)>(_a[2]))); break;
        case 24: { QSize _r = _t->sizeHint((*reinterpret_cast< QProgressDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->value((*reinterpret_cast< QProgressDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->wasCanceled((*reinterpret_cast< QProgressDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QProgressDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QProgressDialog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QProgressDialog,
      qt_meta_data_PythonQtWrapper_QProgressDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QProgressDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QProgressDialog))
        return static_cast<void*>(const_cast< PythonQtWrapper_QProgressDialog*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QProxyModel[] = {

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
      49,   42,   29,   28, 0x0a,
      75,   28,   29,   28, 0x2a,
      97,   93,   28,   28, 0x0a,
     158,  134,  130,   28, 0x0a,
     213,  196,  130,   28, 0x2a,
     276,  248,  239,   28, 0x0a,
     334,  311,  239,   28, 0x2a,
     417,  370,  365,   28, 0x0a,
     496,  134,   28,   28, 0x0a,
     546,  311,  532,   28, 0x0a,
     578,  134,  365,   28, 0x0a,
     616,  196,  365,   28, 0x2a,
     684,  642,  239,   28, 0x0a,
     770,  733,  239,   28, 0x2a,
     862,  827,  815,   28, 0x0a,
     930,  902,  815,   28, 0x2a,
     995,  958,  365,   28, 0x0a,
    1073, 1043,  365,   28, 0x2a,
    1143, 1109,  365,   28, 0x0a,
    1215, 1188,  365,   28, 0x2a,
    1312, 1267, 1248,   28, 0x0a,
    1415, 1376, 1248,   28, 0x2a,
    1498, 1464, 1248,   28, 0x2a,
    1579, 1554, 1543,   28, 0x0a,
    1633,  196, 1621,   28, 0x0a,
    1677,  196, 1657,   28, 0x0a,
    1706,  196, 1697,   28, 0x0a,
    1750, 1727,  815,   28, 0x0a,
    1783,  196,   28,   28, 0x0a,
    1804,  134,  130,   28, 0x0a,
    1839,  196,  130,   28, 0x2a,
    1896, 1862,  365,   28, 0x0a,
    1972, 1943,  365,   28, 0x2a,
    2063, 2015,  365,   28, 0x0a,
    2167, 2124,  365,   28, 0x2a,
    2247, 2224,   28,   28, 0x0a,
    2320, 2290,   28,   28, 0x0a,
    2381, 2357,   28,   28, 0x2a,
    2410,  311, 2404,   28, 0x0a,
    2441,  196,  365,   28, 0x0a,
    2478,  196, 2462,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QProxyModel[] = {
    "PythonQtWrapper_QProxyModel\0\0QProxyModel*\0"
    "parent\0new_QProxyModel(QObject*)\0"
    "new_QProxyModel()\0obj\0"
    "delete_QProxyModel(QProxyModel*)\0int\0"
    "theWrappedObject,parent\0"
    "columnCount(QProxyModel*,QModelIndex)\0"
    "theWrappedObject\0columnCount(QProxyModel*)\0"
    "QVariant\0theWrappedObject,index,role\0"
    "data(QProxyModel*,QModelIndex,int)\0"
    "theWrappedObject,index\0"
    "data(QProxyModel*,QModelIndex)\0bool\0"
    "theWrappedObject,data,action,row,column,parent\0"
    "dropMimeData(QProxyModel*,const QMimeData*,Qt::DropAction,int,int,QMod"
    "elIndex)\0"
    "fetchMore(QProxyModel*,QModelIndex)\0"
    "Qt::ItemFlags\0flags(QProxyModel*,QModelIndex)\0"
    "hasChildren(QProxyModel*,QModelIndex)\0"
    "hasChildren(QProxyModel*)\0"
    "theWrappedObject,section,orientation,role\0"
    "headerData(QProxyModel*,int,Qt::Orientation,int)\0"
    "theWrappedObject,section,orientation\0"
    "headerData(QProxyModel*,int,Qt::Orientation)\0"
    "QModelIndex\0theWrappedObject,row,column,parent\0"
    "index(QProxyModel*,int,int,QModelIndex)\0"
    "theWrappedObject,row,column\0"
    "index(QProxyModel*,int,int)\0"
    "theWrappedObject,column,count,parent\0"
    "insertColumns(QProxyModel*,int,int,QModelIndex)\0"
    "theWrappedObject,column,count\0"
    "insertColumns(QProxyModel*,int,int)\0"
    "theWrappedObject,row,count,parent\0"
    "insertRows(QProxyModel*,int,int,QModelIndex)\0"
    "theWrappedObject,row,count\0"
    "insertRows(QProxyModel*,int,int)\0"
    "QList<QModelIndex>\0"
    "theWrappedObject,start,role,value,hits,flags\0"
    "match(QProxyModel*,QModelIndex,int,QVariant,int,Qt::MatchFlags)\0"
    "theWrappedObject,start,role,value,hits\0"
    "match(QProxyModel*,QModelIndex,int,QVariant,int)\0"
    "theWrappedObject,start,role,value\0"
    "match(QProxyModel*,QModelIndex,int,QVariant)\0"
    "QMimeData*\0theWrappedObject,indexes\0"
    "mimeData(QProxyModel*,QList<QModelIndex>)\0"
    "QStringList\0mimeTypes(QProxyModel*)\0"
    "QAbstractItemModel*\0model(QProxyModel*)\0"
    "QObject*\0parent(QProxyModel*)\0"
    "theWrappedObject,child\0"
    "parent(QProxyModel*,QModelIndex)\0"
    "revert(QProxyModel*)\0"
    "rowCount(QProxyModel*,QModelIndex)\0"
    "rowCount(QProxyModel*)\0"
    "theWrappedObject,index,value,role\0"
    "setData(QProxyModel*,QModelIndex,QVariant,int)\0"
    "theWrappedObject,index,value\0"
    "setData(QProxyModel*,QModelIndex,QVariant)\0"
    "theWrappedObject,section,orientation,value,role\0"
    "setHeaderData(QProxyModel*,int,Qt::Orientation,QVariant,int)\0"
    "theWrappedObject,section,orientation,value\0"
    "setHeaderData(QProxyModel*,int,Qt::Orientation,QVariant)\0"
    "theWrappedObject,model\0"
    "setModel(QProxyModel*,QAbstractItemModel*)\0"
    "theWrappedObject,column,order\0"
    "sort(QProxyModel*,int,Qt::SortOrder)\0"
    "theWrappedObject,column\0sort(QProxyModel*,int)\0"
    "QSize\0span(QProxyModel*,QModelIndex)\0"
    "submit(QProxyModel*)\0Qt::DropActions\0"
    "supportedDropActions(QProxyModel*)\0"
};

void PythonQtWrapper_QProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QProxyModel *_t = static_cast<PythonQtWrapper_QProxyModel *>(_o);
        switch (_id) {
        case 0: { QProxyModel* _r = _t->new_QProxyModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QProxyModel**>(_a[0]) = _r; }  break;
        case 1: { QProxyModel* _r = _t->new_QProxyModel();
            if (_a[0]) *reinterpret_cast< QProxyModel**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QProxyModel((*reinterpret_cast< QProxyModel*(*)>(_a[1]))); break;
        case 3: { int _r = _t->columnCount((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->columnCount((*reinterpret_cast< QProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { QVariant _r = _t->data((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 6: { QVariant _r = _t->data((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->dropMimeData((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2])),(*reinterpret_cast< Qt::DropAction(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< const QModelIndex(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->fetchMore((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 9: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->hasChildren((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->hasChildren((*reinterpret_cast< QProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QVariant _r = _t->headerData((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 13: { QVariant _r = _t->headerData((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 14: { QModelIndex _r = _t->index((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 15: { QModelIndex _r = _t->index((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->insertColumns((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->insertColumns((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->insertRows((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->insertRows((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { QList<QModelIndex> _r = _t->match((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< Qt::MatchFlags(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 21: { QList<QModelIndex> _r = _t->match((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 22: { QList<QModelIndex> _r = _t->match((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 23: { QMimeData* _r = _t->mimeData((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QList<QModelIndex>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMimeData**>(_a[0]) = _r; }  break;
        case 24: { QStringList _r = _t->mimeTypes((*reinterpret_cast< QProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 25: { QAbstractItemModel* _r = _t->model((*reinterpret_cast< QProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractItemModel**>(_a[0]) = _r; }  break;
        case 26: { QObject* _r = _t->parent((*reinterpret_cast< QProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 27: { QModelIndex _r = _t->parent((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 28: _t->revert((*reinterpret_cast< QProxyModel*(*)>(_a[1]))); break;
        case 29: { int _r = _t->rowCount((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->rowCount((*reinterpret_cast< QProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->setData((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->setData((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->setHeaderData((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->setHeaderData((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: _t->setModel((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemModel*(*)>(_a[2]))); break;
        case 36: _t->sort((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 37: _t->sort((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 38: { QSize _r = _t->span((*reinterpret_cast< QProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->submit((*reinterpret_cast< QProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { Qt::DropActions _r = _t->supportedDropActions((*reinterpret_cast< QProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::DropActions*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QProxyModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QProxyModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QProxyModel,
      qt_meta_data_PythonQtWrapper_QProxyModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QProxyModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QProxyModel))
        return static_cast<void*>(const_cast< PythonQtWrapper_QProxyModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QProxyStyle[] = {

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
      52,   42,   29,   28, 0x0a,
      77,   28,   29,   28, 0x2a,
      99,   95,   28,   28, 0x0a,
     157,  140,  132,   28, 0x0a,
     228,  181,   28,   28, 0x0a,
     376,  336,   28,   28, 0x2a,
     516,  469,   28,   28, 0x0a,
     650,  610,   28,   28, 0x2a,
     776,  729,   28,   28, 0x0a,
     895,  833,   28,   28, 0x0a,
    1037,  984,   28,   28, 0x2a,
    1106,  469,   28,   28, 0x0a,
    1204,  610,   28,   28, 0x2a,
    1311, 1292, 1287,   28, 0x0a,
    1384, 1347, 1339,   28, 0x0a,
    1520, 1477, 1458,   28, 0x0a,
    1664, 1628, 1458,   28, 0x2a,
    1795, 1763, 1757,   28, 0x0a,
    1883, 1842, 1757,   28, 0x0a,
    1988, 1950, 1946,   28, 0x0a,
    2100, 2069, 1946,   28, 0x2a,
    2190, 2166, 1946,   28, 0x2a,
    2257, 2236,   28,   28, 0x0a,
    2313, 2292,   28,   28, 0x0a,
    2368, 2344,   28,   28, 0x0a,
    2421, 2398,   28,   28, 0x0a,
    2503, 2462, 2456,   28, 0x0a,
    2605,  140, 2596,   28, 0x0a,
    2678, 2635, 1339,   28, 0x0a,
    2801, 2765, 1339,   28, 0x2a,
    2920, 2873, 1946,   28, 0x0a,
    3051, 3015, 1946,   28, 0x2a,
    3157, 3128, 1946,   28, 0x2a,
    3241, 3219, 1946,   28, 0x2a,
    3317, 3283, 1757,   28, 0x0a,
    3469, 3430, 1757,   28, 0x0a,
    3552, 2236,   28,   28, 0x0a,
    3589, 2344,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QProxyStyle[] = {
    "PythonQtWrapper_QProxyStyle\0\0QProxyStyle*\0"
    "baseStyle\0new_QProxyStyle(QStyle*)\0"
    "new_QProxyStyle()\0obj\0"
    "delete_QProxyStyle(QProxyStyle*)\0"
    "QStyle*\0theWrappedObject\0"
    "baseStyle(QProxyStyle*)\0"
    "theWrappedObject,control,option,painter,widget\0"
    "drawComplexControl(QProxyStyle*,QStyle::ComplexControl,const QStyleOpt"
    "ionComplex*,QPainter*,const QWidget*)\0"
    "theWrappedObject,control,option,painter\0"
    "drawComplexControl(QProxyStyle*,QStyle::ComplexControl,const QStyleOpt"
    "ionComplex*,QPainter*)\0"
    "theWrappedObject,element,option,painter,widget\0"
    "drawControl(QProxyStyle*,QStyle::ControlElement,const QStyleOption*,QP"
    "ainter*,const QWidget*)\0"
    "theWrappedObject,element,option,painter\0"
    "drawControl(QProxyStyle*,QStyle::ControlElement,const QStyleOption*,QP"
    "ainter*)\0"
    "theWrappedObject,painter,rect,alignment,pixmap\0"
    "drawItemPixmap(QProxyStyle*,QPainter*,QRect,int,QPixmap)\0"
    "theWrappedObject,painter,rect,flags,pal,enabled,text,textRole\0"
    "drawItemText(QProxyStyle*,QPainter*,QRect,int,QPalette,bool,QString,QP"
    "alette::ColorRole)\0"
    "theWrappedObject,painter,rect,flags,pal,enabled,text\0"
    "drawItemText(QProxyStyle*,QPainter*,QRect,int,QPalette,bool,QString)\0"
    "drawPrimitive(QProxyStyle*,QStyle::PrimitiveElement,const QStyleOption"
    "*,QPainter*,const QWidget*)\0"
    "drawPrimitive(QProxyStyle*,QStyle::PrimitiveElement,const QStyleOption"
    "*,QPainter*)\0"
    "bool\0theWrappedObject,e\0"
    "event(QProxyStyle*,QEvent*)\0QPixmap\0"
    "theWrappedObject,iconMode,pixmap,opt\0"
    "generatedIconPixmap(QProxyStyle*,QIcon::Mode,QPixmap,const QStyleOptio"
    "n*)\0"
    "QStyle::SubControl\0"
    "theWrappedObject,control,option,pos,widget\0"
    "hitTestComplexControl(QProxyStyle*,QStyle::ComplexControl,const QStyle"
    "OptionComplex*,QPoint,const QWidget*)\0"
    "theWrappedObject,control,option,pos\0"
    "hitTestComplexControl(QProxyStyle*,QStyle::ComplexControl,const QStyle"
    "OptionComplex*,QPoint)\0"
    "QRect\0theWrappedObject,r,flags,pixmap\0"
    "itemPixmapRect(QProxyStyle*,QRect,int,QPixmap)\0"
    "theWrappedObject,fm,r,flags,enabled,text\0"
    "itemTextRect(QProxyStyle*,QFontMetrics,QRect,int,bool,QString)\0"
    "int\0theWrappedObject,metric,option,widget\0"
    "pixelMetric(QProxyStyle*,QStyle::PixelMetric,const QStyleOption*,const"
    " QWidget*)\0"
    "theWrappedObject,metric,option\0"
    "pixelMetric(QProxyStyle*,QStyle::PixelMetric,const QStyleOption*)\0"
    "theWrappedObject,metric\0"
    "pixelMetric(QProxyStyle*,QStyle::PixelMetric)\0"
    "theWrappedObject,app\0"
    "polish(QProxyStyle*,QApplication*)\0"
    "theWrappedObject,pal\0"
    "polish(QProxyStyle*,QPalette&)\0"
    "theWrappedObject,widget\0"
    "polish(QProxyStyle*,QWidget*)\0"
    "theWrappedObject,style\0"
    "setBaseStyle(QProxyStyle*,QStyle*)\0"
    "QSize\0theWrappedObject,type,option,size,widget\0"
    "sizeFromContents(QProxyStyle*,QStyle::ContentsType,const QStyleOption*"
    ",QSize,const QWidget*)\0"
    "QPalette\0standardPalette(QProxyStyle*)\0"
    "theWrappedObject,standardPixmap,opt,widget\0"
    "standardPixmap(QProxyStyle*,QStyle::StandardPixmap,const QStyleOption*"
    ",const QWidget*)\0"
    "theWrappedObject,standardPixmap,opt\0"
    "standardPixmap(QProxyStyle*,QStyle::StandardPixmap,const QStyleOption*"
    ")\0"
    "theWrappedObject,hint,option,widget,returnData\0"
    "styleHint(QProxyStyle*,QStyle::StyleHint,const QStyleOption*,const QWi"
    "dget*,QStyleHintReturn*)\0"
    "theWrappedObject,hint,option,widget\0"
    "styleHint(QProxyStyle*,QStyle::StyleHint,const QStyleOption*,const QWi"
    "dget*)\0"
    "theWrappedObject,hint,option\0"
    "styleHint(QProxyStyle*,QStyle::StyleHint,const QStyleOption*)\0"
    "theWrappedObject,hint\0"
    "styleHint(QProxyStyle*,QStyle::StyleHint)\0"
    "theWrappedObject,cc,opt,sc,widget\0"
    "subControlRect(QProxyStyle*,QStyle::ComplexControl,const QStyleOptionC"
    "omplex*,QStyle::SubControl,const QWidget*)\0"
    "theWrappedObject,element,option,widget\0"
    "subElementRect(QProxyStyle*,QStyle::SubElement,const QStyleOption*,con"
    "st QWidget*)\0"
    "unpolish(QProxyStyle*,QApplication*)\0"
    "unpolish(QProxyStyle*,QWidget*)\0"
};

void PythonQtWrapper_QProxyStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QProxyStyle *_t = static_cast<PythonQtWrapper_QProxyStyle *>(_o);
        switch (_id) {
        case 0: { QProxyStyle* _r = _t->new_QProxyStyle((*reinterpret_cast< QStyle*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QProxyStyle**>(_a[0]) = _r; }  break;
        case 1: { QProxyStyle* _r = _t->new_QProxyStyle();
            if (_a[0]) *reinterpret_cast< QProxyStyle**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QProxyStyle((*reinterpret_cast< QProxyStyle*(*)>(_a[1]))); break;
        case 3: { QStyle* _r = _t->baseStyle((*reinterpret_cast< QProxyStyle*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyle**>(_a[0]) = _r; }  break;
        case 4: _t->drawComplexControl((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ComplexControl(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionComplex*(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5]))); break;
        case 5: _t->drawComplexControl((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ComplexControl(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionComplex*(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4]))); break;
        case 6: _t->drawControl((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ControlElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5]))); break;
        case 7: _t->drawControl((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ControlElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4]))); break;
        case 8: _t->drawItemPixmap((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QPixmap(*)>(_a[5]))); break;
        case 9: _t->drawItemText((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QPalette(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< QPalette::ColorRole(*)>(_a[8]))); break;
        case 10: _t->drawItemText((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QPalette(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 11: _t->drawPrimitive((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::PrimitiveElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5]))); break;
        case 12: _t->drawPrimitive((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::PrimitiveElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4]))); break;
        case 13: { bool _r = _t->event((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QPixmap _r = _t->generatedIconPixmap((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QIcon::Mode(*)>(_a[2])),(*reinterpret_cast< const QPixmap(*)>(_a[3])),(*reinterpret_cast< const QStyleOption*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 15: { QStyle::SubControl _r = _t->hitTestComplexControl((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ComplexControl(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionComplex*(*)>(_a[3])),(*reinterpret_cast< const QPoint(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QStyle::SubControl*>(_a[0]) = _r; }  break;
        case 16: { QStyle::SubControl _r = _t->hitTestComplexControl((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ComplexControl(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionComplex*(*)>(_a[3])),(*reinterpret_cast< const QPoint(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QStyle::SubControl*>(_a[0]) = _r; }  break;
        case 17: { QRect _r = _t->itemPixmapRect((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QPixmap(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 18: { QRect _r = _t->itemTextRect((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< const QFontMetrics(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->pixelMetric((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::PixelMetric(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QWidget*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->pixelMetric((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::PixelMetric(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->pixelMetric((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::PixelMetric(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: _t->polish((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QApplication*(*)>(_a[2]))); break;
        case 23: _t->polish((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QPalette(*)>(_a[2]))); break;
        case 24: _t->polish((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 25: _t->setBaseStyle((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle*(*)>(_a[2]))); break;
        case 26: { QSize _r = _t->sizeFromContents((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ContentsType(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QSize(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 27: { QPalette _r = _t->standardPalette((*reinterpret_cast< QProxyStyle*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPalette*>(_a[0]) = _r; }  break;
        case 28: { QPixmap _r = _t->standardPixmap((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StandardPixmap(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QWidget*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 29: { QPixmap _r = _t->standardPixmap((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StandardPixmap(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->styleHint((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StyleHint(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QWidget*(*)>(_a[4])),(*reinterpret_cast< QStyleHintReturn*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: { int _r = _t->styleHint((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StyleHint(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QWidget*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 32: { int _r = _t->styleHint((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StyleHint(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 33: { int _r = _t->styleHint((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::StyleHint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 34: { QRect _r = _t->subControlRect((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::ComplexControl(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionComplex*(*)>(_a[3])),(*reinterpret_cast< QStyle::SubControl(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 35: { QRect _r = _t->subElementRect((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QStyle::SubElement(*)>(_a[2])),(*reinterpret_cast< const QStyleOption*(*)>(_a[3])),(*reinterpret_cast< const QWidget*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 36: _t->unpolish((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QApplication*(*)>(_a[2]))); break;
        case 37: _t->unpolish((*reinterpret_cast< QProxyStyle*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QProxyStyle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QProxyStyle::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QProxyStyle,
      qt_meta_data_PythonQtWrapper_QProxyStyle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QProxyStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QProxyStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QProxyStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QProxyStyle))
        return static_cast<void*>(const_cast< PythonQtWrapper_QProxyStyle*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QProxyStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QPushButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   42,   29,   28, 0x0a,
      75,   28,   29,   28, 0x2a,
     110,   93,   29,   28, 0x0a,
     160,  150,   29,   28, 0x2a,
     203,  191,   29,   28, 0x0a,
     242,  237,   29,   28, 0x2a,
     271,  267,   28,   28, 0x0a,
     326,  309,  304,   28, 0x0a,
     371,  352,  304,   28, 0x0a,
     423,  399,   28,   28, 0x0a,
     463,  399,   28,   28, 0x0a,
     504,  309,  304,   28, 0x0a,
     528,  309,  304,   28, 0x0a,
     549,  399,   28,   28, 0x0a,
     595,  309,  588,   28, 0x0a,
     620,  309,  614,   28, 0x0a,
     650,  399,   28,   28, 0x0a,
     688,  399,   28,   28, 0x0a,
     722,  399,   28,   28, 0x0a,
     752,  399,   28,   28, 0x0a,
     801,  779,   28,   28, 0x0a,
     830,  309,  614,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPushButton[] = {
    "PythonQtWrapper_QPushButton\0\0QPushButton*\0"
    "parent\0new_QPushButton(QWidget*)\0"
    "new_QPushButton()\0icon,text,parent\0"
    "new_QPushButton(QIcon,QString,QWidget*)\0"
    "icon,text\0new_QPushButton(QIcon,QString)\0"
    "text,parent\0new_QPushButton(QString,QWidget*)\0"
    "text\0new_QPushButton(QString)\0obj\0"
    "delete_QPushButton(QPushButton*)\0bool\0"
    "theWrappedObject\0autoDefault(QPushButton*)\0"
    "theWrappedObject,e\0event(QPushButton*,QEvent*)\0"
    "theWrappedObject,arg__1\0"
    "focusInEvent(QPushButton*,QFocusEvent*)\0"
    "focusOutEvent(QPushButton*,QFocusEvent*)\0"
    "isDefault(QPushButton*)\0isFlat(QPushButton*)\0"
    "keyPressEvent(QPushButton*,QKeyEvent*)\0"
    "QMenu*\0menu(QPushButton*)\0QSize\0"
    "minimumSizeHint(QPushButton*)\0"
    "paintEvent(QPushButton*,QPaintEvent*)\0"
    "setAutoDefault(QPushButton*,bool)\0"
    "setDefault(QPushButton*,bool)\0"
    "setFlat(QPushButton*,bool)\0"
    "theWrappedObject,menu\0"
    "setMenu(QPushButton*,QMenu*)\0"
    "sizeHint(QPushButton*)\0"
};

void PythonQtWrapper_QPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QPushButton *_t = static_cast<PythonQtWrapper_QPushButton *>(_o);
        switch (_id) {
        case 0: { QPushButton* _r = _t->new_QPushButton((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPushButton**>(_a[0]) = _r; }  break;
        case 1: { QPushButton* _r = _t->new_QPushButton();
            if (_a[0]) *reinterpret_cast< QPushButton**>(_a[0]) = _r; }  break;
        case 2: { QPushButton* _r = _t->new_QPushButton((*reinterpret_cast< const QIcon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPushButton**>(_a[0]) = _r; }  break;
        case 3: { QPushButton* _r = _t->new_QPushButton((*reinterpret_cast< const QIcon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPushButton**>(_a[0]) = _r; }  break;
        case 4: { QPushButton* _r = _t->new_QPushButton((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPushButton**>(_a[0]) = _r; }  break;
        case 5: { QPushButton* _r = _t->new_QPushButton((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPushButton**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QPushButton((*reinterpret_cast< QPushButton*(*)>(_a[1]))); break;
        case 7: { bool _r = _t->autoDefault((*reinterpret_cast< QPushButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->event((*reinterpret_cast< QPushButton*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->focusInEvent((*reinterpret_cast< QPushButton*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 10: _t->focusOutEvent((*reinterpret_cast< QPushButton*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 11: { bool _r = _t->isDefault((*reinterpret_cast< QPushButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isFlat((*reinterpret_cast< QPushButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->keyPressEvent((*reinterpret_cast< QPushButton*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 14: { QMenu* _r = _t->menu((*reinterpret_cast< QPushButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = _r; }  break;
        case 15: { QSize _r = _t->minimumSizeHint((*reinterpret_cast< QPushButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 16: _t->paintEvent((*reinterpret_cast< QPushButton*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 17: _t->setAutoDefault((*reinterpret_cast< QPushButton*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->setDefault((*reinterpret_cast< QPushButton*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->setFlat((*reinterpret_cast< QPushButton*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->setMenu((*reinterpret_cast< QPushButton*(*)>(_a[1])),(*reinterpret_cast< QMenu*(*)>(_a[2]))); break;
        case 21: { QSize _r = _t->sizeHint((*reinterpret_cast< QPushButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QPushButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPushButton::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPushButton,
      qt_meta_data_PythonQtWrapper_QPushButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPushButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPushButton))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPushButton*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QQuaternion[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   28,   29,   28, 0x0a,
      67,   60,   29,   28, 0x0a,
     108,   94,   29,   28, 0x0a,
     163,  141,   29,   28, 0x0a,
     210,  204,   29,   28, 0x0a,
     243,  239,   28,   28, 0x0a,
     305,  288,  276,   28, 0x0a,
     340,  329,  276,   28, 0x0a,
     405,  393,  276,   28, 0x0a,
     471,  288,  466,   28, 0x0a,
     496,  288,  466,   28, 0x0a,
     523,  288,  517,   28, 0x0a,
     544,  288,  517,   28, 0x0a,
     580,  572,  276,   28, 0x0a,
     636,  288,   28,   28, 0x0a,
     660,  288,  276,   28, 0x0a,
     705,  685,  276,   28, 0x0a,
     763,  739,  276,   28, 0x0a,
     819,  791,   29,   28, 0x0a,
     854,  739,   29,   28, 0x0a,
     883,  685,  276,   28, 0x0a,
     917,  791,   29,   28, 0x0a,
     952,  685,  276,   28, 0x0a,
     986,  791,   29,   28, 0x0a,
    1046, 1021,  276,   28, 0x0a,
    1074, 1021,   29,   28, 0x0a,
    1127, 1103,   28,   28, 0x0a,
    1162,  685,  466,   28, 0x0a,
    1195, 1103,   28,   28, 0x0a,
    1265, 1241, 1231,   28, 0x0a,
    1303,  288,  517,   28, 0x0a,
    1348, 1324,   28,   28, 0x0a,
    1378, 1241,   28,   28, 0x0a,
    1435, 1412,   28,   28, 0x0a,
    1496, 1477,   28,   28, 0x0a,
    1540, 1521,   28,   28, 0x0a,
    1584, 1565,   28,   28, 0x0a,
    1609,  572,  276,   28, 0x0a,
    1675,  288, 1665,   28, 0x0a,
    1700,  288, 1231,   28, 0x0a,
    1721,  288,  517,   28, 0x0a,
    1737,  288,  517,   28, 0x0a,
    1753,  288,  517,   28, 0x0a,
    1777,   28, 1769,   28, 0x0a,
    1803,  239,  466,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QQuaternion[] = {
    "PythonQtWrapper_QQuaternion\0\0QQuaternion*\0"
    "new_QQuaternion()\0vector\0"
    "new_QQuaternion(QVector4D)\0scalar,vector\0"
    "new_QQuaternion(qreal,QVector3D)\0"
    "scalar,xpos,ypos,zpos\0"
    "new_QQuaternion(qreal,qreal,qreal,qreal)\0"
    "other\0new_QQuaternion(QQuaternion)\0"
    "obj\0delete_QQuaternion(QQuaternion*)\0"
    "QQuaternion\0theWrappedObject\0"
    "conjugate(QQuaternion*)\0axis,angle\0"
    "static_QQuaternion_fromAxisAndAngle(QVector3D,qreal)\0"
    "x,y,z,angle\0"
    "static_QQuaternion_fromAxisAndAngle(qreal,qreal,qreal,qreal)\0"
    "bool\0isIdentity(QQuaternion*)\0"
    "isNull(QQuaternion*)\0qreal\0"
    "length(QQuaternion*)\0lengthSquared(QQuaternion*)\0"
    "q1,q2,t\0static_QQuaternion_nlerp(QQuaternion,QQuaternion,qreal)\0"
    "normalize(QQuaternion*)\0"
    "normalized(QQuaternion*)\0theWrappedObject,q2\0"
    "__mul__(QQuaternion*,QQuaternion)\0"
    "theWrappedObject,factor\0"
    "__mul__(QQuaternion*,qreal)\0"
    "theWrappedObject,quaternion\0"
    "__imul__(QQuaternion*,QQuaternion)\0"
    "__imul__(QQuaternion*,qreal)\0"
    "__add__(QQuaternion*,QQuaternion)\0"
    "__iadd__(QQuaternion*,QQuaternion)\0"
    "__sub__(QQuaternion*,QQuaternion)\0"
    "__isub__(QQuaternion*,QQuaternion)\0"
    "theWrappedObject,divisor\0"
    "__div__(QQuaternion*,qreal)\0"
    "__idiv__(QQuaternion*,qreal)\0"
    "theWrappedObject,arg__1\0"
    "writeTo(QQuaternion*,QDataStream&)\0"
    "__eq__(QQuaternion*,QQuaternion)\0"
    "readFrom(QQuaternion*,QDataStream&)\0"
    "QVector3D\0theWrappedObject,vector\0"
    "rotatedVector(QQuaternion*,QVector3D)\0"
    "scalar(QQuaternion*)\0theWrappedObject,scalar\0"
    "setScalar(QQuaternion*,qreal)\0"
    "setVector(QQuaternion*,QVector3D)\0"
    "theWrappedObject,x,y,z\0"
    "setVector(QQuaternion*,qreal,qreal,qreal)\0"
    "theWrappedObject,x\0setX(QQuaternion*,qreal)\0"
    "theWrappedObject,y\0setY(QQuaternion*,qreal)\0"
    "theWrappedObject,z\0setZ(QQuaternion*,qreal)\0"
    "static_QQuaternion_slerp(QQuaternion,QQuaternion,qreal)\0"
    "QVector4D\0toVector4D(QQuaternion*)\0"
    "vector(QQuaternion*)\0x(QQuaternion*)\0"
    "y(QQuaternion*)\0z(QQuaternion*)\0QString\0"
    "py_toString(QQuaternion*)\0"
    "__nonzero__(QQuaternion*)\0"
};

void PythonQtWrapper_QQuaternion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QQuaternion *_t = static_cast<PythonQtWrapper_QQuaternion *>(_o);
        switch (_id) {
        case 0: { QQuaternion* _r = _t->new_QQuaternion();
            if (_a[0]) *reinterpret_cast< QQuaternion**>(_a[0]) = _r; }  break;
        case 1: { QQuaternion* _r = _t->new_QQuaternion((*reinterpret_cast< const QVector4D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuaternion**>(_a[0]) = _r; }  break;
        case 2: { QQuaternion* _r = _t->new_QQuaternion((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuaternion**>(_a[0]) = _r; }  break;
        case 3: { QQuaternion* _r = _t->new_QQuaternion((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QQuaternion**>(_a[0]) = _r; }  break;
        case 4: { QQuaternion* _r = _t->new_QQuaternion((*reinterpret_cast< const QQuaternion(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuaternion**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QQuaternion((*reinterpret_cast< QQuaternion*(*)>(_a[1]))); break;
        case 6: { QQuaternion _r = _t->conjugate((*reinterpret_cast< QQuaternion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuaternion*>(_a[0]) = _r; }  break;
        case 7: { QQuaternion _r = _t->static_QQuaternion_fromAxisAndAngle((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuaternion*>(_a[0]) = _r; }  break;
        case 8: { QQuaternion _r = _t->static_QQuaternion_fromAxisAndAngle((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QQuaternion*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isIdentity((*reinterpret_cast< QQuaternion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isNull((*reinterpret_cast< QQuaternion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { qreal _r = _t->length((*reinterpret_cast< QQuaternion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 12: { qreal _r = _t->lengthSquared((*reinterpret_cast< QQuaternion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 13: { QQuaternion _r = _t->static_QQuaternion_nlerp((*reinterpret_cast< const QQuaternion(*)>(_a[1])),(*reinterpret_cast< const QQuaternion(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QQuaternion*>(_a[0]) = _r; }  break;
        case 14: _t->normalize((*reinterpret_cast< QQuaternion*(*)>(_a[1]))); break;
        case 15: { QQuaternion _r = _t->normalized((*reinterpret_cast< QQuaternion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuaternion*>(_a[0]) = _r; }  break;
        case 16: { QQuaternion _r = _t->__mul__((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< const QQuaternion(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuaternion*>(_a[0]) = _r; }  break;
        case 17: { QQuaternion _r = _t->__mul__((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuaternion*>(_a[0]) = _r; }  break;
        case 18: { QQuaternion* _r = _t->__imul__((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< const QQuaternion(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuaternion**>(_a[0]) = _r; }  break;
        case 19: { QQuaternion* _r = _t->__imul__((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuaternion**>(_a[0]) = _r; }  break;
        case 20: { QQuaternion _r = _t->__add__((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< const QQuaternion(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuaternion*>(_a[0]) = _r; }  break;
        case 21: { QQuaternion* _r = _t->__iadd__((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< const QQuaternion(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuaternion**>(_a[0]) = _r; }  break;
        case 22: { QQuaternion _r = _t->__sub__((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< const QQuaternion(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuaternion*>(_a[0]) = _r; }  break;
        case 23: { QQuaternion* _r = _t->__isub__((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< const QQuaternion(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuaternion**>(_a[0]) = _r; }  break;
        case 24: { QQuaternion _r = _t->__div__((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuaternion*>(_a[0]) = _r; }  break;
        case 25: { QQuaternion* _r = _t->__idiv__((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuaternion**>(_a[0]) = _r; }  break;
        case 26: _t->writeTo((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 27: { bool _r = _t->__eq__((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< const QQuaternion(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: _t->readFrom((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 29: { QVector3D _r = _t->rotatedVector((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = _r; }  break;
        case 30: { qreal _r = _t->scalar((*reinterpret_cast< QQuaternion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 31: _t->setScalar((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 32: _t->setVector((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2]))); break;
        case 33: _t->setVector((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 34: _t->setX((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 35: _t->setY((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 36: _t->setZ((*reinterpret_cast< QQuaternion*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 37: { QQuaternion _r = _t->static_QQuaternion_slerp((*reinterpret_cast< const QQuaternion(*)>(_a[1])),(*reinterpret_cast< const QQuaternion(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QQuaternion*>(_a[0]) = _r; }  break;
        case 38: { QVector4D _r = _t->toVector4D((*reinterpret_cast< QQuaternion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector4D*>(_a[0]) = _r; }  break;
        case 39: { QVector3D _r = _t->vector((*reinterpret_cast< QQuaternion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = _r; }  break;
        case 40: { qreal _r = _t->x((*reinterpret_cast< QQuaternion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 41: { qreal _r = _t->y((*reinterpret_cast< QQuaternion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 42: { qreal _r = _t->z((*reinterpret_cast< QQuaternion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 43: { QString _r = _t->py_toString((*reinterpret_cast< QQuaternion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->__nonzero__((*reinterpret_cast< QQuaternion*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QQuaternion::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QQuaternion::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QQuaternion,
      qt_meta_data_PythonQtWrapper_QQuaternion, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QQuaternion::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QQuaternion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QQuaternion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QQuaternion))
        return static_cast<void*>(const_cast< PythonQtWrapper_QQuaternion*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QQuaternion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QRadialGradient[] = {

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
      50,   32,   33,   32, 0x0a,
     115,   72,   33,   32, 0x0a,
     178,  164,   33,   32, 0x0a,
     238,  213,   33,   32, 0x0a,
     318,  281,   33,   32, 0x0a,
     388,  375,   33,   32, 0x0a,
     446,  427,   33,   32, 0x0a,
     503,  497,   33,   32, 0x0a,
     544,  540,   32,   32, 0x0a,
     610,  593,  585,   32, 0x0a,
     641,  593,  635,   32, 0x0a,
     672,  593,  585,   32, 0x0a,
     701,  593,  635,   32, 0x0a,
     731,  593,  635,   32, 0x0a,
     780,  756,   32,   32, 0x0a,
     837,  816,   32,   32, 0x0a,
     901,  877,   32,   32, 0x0a,
     969,  941,   32,   32, 0x0a,
    1009,  816,   32,   32, 0x0a,
    1053,  877,   32,   32, 0x0a,
    1092,  877,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QRadialGradient[] = {
    "PythonQtWrapper_QRadialGradient\0\0"
    "QRadialGradient*\0new_QRadialGradient()\0"
    "center,centerRadius,focalPoint,focalRadius\0"
    "new_QRadialGradient(QPointF,qreal,QPointF,qreal)\0"
    "center,radius\0new_QRadialGradient(QPointF,qreal)\0"
    "center,radius,focalPoint\0"
    "new_QRadialGradient(QPointF,qreal,QPointF)\0"
    "cx,cy,centerRadius,fx,fy,focalRadius\0"
    "new_QRadialGradient(qreal,qreal,qreal,qreal,qreal,qreal)\0"
    "cx,cy,radius\0new_QRadialGradient(qreal,qreal,qreal)\0"
    "cx,cy,radius,fx,fy\0"
    "new_QRadialGradient(qreal,qreal,qreal,qreal,qreal)\0"
    "other\0new_QRadialGradient(QRadialGradient)\0"
    "obj\0delete_QRadialGradient(QRadialGradient*)\0"
    "QPointF\0theWrappedObject\0"
    "center(QRadialGradient*)\0qreal\0"
    "centerRadius(QRadialGradient*)\0"
    "focalPoint(QRadialGradient*)\0"
    "focalRadius(QRadialGradient*)\0"
    "radius(QRadialGradient*)\0"
    "theWrappedObject,center\0"
    "setCenter(QRadialGradient*,QPointF)\0"
    "theWrappedObject,x,y\0"
    "setCenter(QRadialGradient*,qreal,qreal)\0"
    "theWrappedObject,radius\0"
    "setCenterRadius(QRadialGradient*,qreal)\0"
    "theWrappedObject,focalPoint\0"
    "setFocalPoint(QRadialGradient*,QPointF)\0"
    "setFocalPoint(QRadialGradient*,qreal,qreal)\0"
    "setFocalRadius(QRadialGradient*,qreal)\0"
    "setRadius(QRadialGradient*,qreal)\0"
};

void PythonQtWrapper_QRadialGradient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QRadialGradient *_t = static_cast<PythonQtWrapper_QRadialGradient *>(_o);
        switch (_id) {
        case 0: { QRadialGradient* _r = _t->new_QRadialGradient();
            if (_a[0]) *reinterpret_cast< QRadialGradient**>(_a[0]) = _r; }  break;
        case 1: { QRadialGradient* _r = _t->new_QRadialGradient((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QRadialGradient**>(_a[0]) = _r; }  break;
        case 2: { QRadialGradient* _r = _t->new_QRadialGradient((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRadialGradient**>(_a[0]) = _r; }  break;
        case 3: { QRadialGradient* _r = _t->new_QRadialGradient((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QRadialGradient**>(_a[0]) = _r; }  break;
        case 4: { QRadialGradient* _r = _t->new_QRadialGradient((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QRadialGradient**>(_a[0]) = _r; }  break;
        case 5: { QRadialGradient* _r = _t->new_QRadialGradient((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QRadialGradient**>(_a[0]) = _r; }  break;
        case 6: { QRadialGradient* _r = _t->new_QRadialGradient((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRadialGradient**>(_a[0]) = _r; }  break;
        case 7: { QRadialGradient* _r = _t->new_QRadialGradient((*reinterpret_cast< const QRadialGradient(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRadialGradient**>(_a[0]) = _r; }  break;
        case 8: _t->delete_QRadialGradient((*reinterpret_cast< QRadialGradient*(*)>(_a[1]))); break;
        case 9: { QPointF _r = _t->center((*reinterpret_cast< QRadialGradient*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 10: { qreal _r = _t->centerRadius((*reinterpret_cast< QRadialGradient*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 11: { QPointF _r = _t->focalPoint((*reinterpret_cast< QRadialGradient*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 12: { qreal _r = _t->focalRadius((*reinterpret_cast< QRadialGradient*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->radius((*reinterpret_cast< QRadialGradient*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: _t->setCenter((*reinterpret_cast< QRadialGradient*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 15: _t->setCenter((*reinterpret_cast< QRadialGradient*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 16: _t->setCenterRadius((*reinterpret_cast< QRadialGradient*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 17: _t->setFocalPoint((*reinterpret_cast< QRadialGradient*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 18: _t->setFocalPoint((*reinterpret_cast< QRadialGradient*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 19: _t->setFocalRadius((*reinterpret_cast< QRadialGradient*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 20: _t->setRadius((*reinterpret_cast< QRadialGradient*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QRadialGradient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QRadialGradient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QRadialGradient,
      qt_meta_data_PythonQtWrapper_QRadialGradient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QRadialGradient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QRadialGradient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QRadialGradient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QRadialGradient))
        return static_cast<void*>(const_cast< PythonQtWrapper_QRadialGradient*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QRadialGradient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QRadioButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      51,   44,   30,   29, 0x0a,
      78,   29,   30,   29, 0x2a,
     109,   97,   30,   29, 0x0a,
     149,  144,   30,   29, 0x2a,
     179,  175,   29,   29, 0x0a,
     238,  219,  214,   29, 0x0a,
     291,  267,  214,   29, 0x0a,
     346,  329,  323,   29, 0x0a,
     377,  267,   29,   29, 0x0a,
     420,  267,   29,   29, 0x0a,
     459,  329,  323,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QRadioButton[] = {
    "PythonQtWrapper_QRadioButton\0\0"
    "QRadioButton*\0parent\0new_QRadioButton(QWidget*)\0"
    "new_QRadioButton()\0text,parent\0"
    "new_QRadioButton(QString,QWidget*)\0"
    "text\0new_QRadioButton(QString)\0obj\0"
    "delete_QRadioButton(QRadioButton*)\0"
    "bool\0theWrappedObject,e\0"
    "event(QRadioButton*,QEvent*)\0"
    "theWrappedObject,arg__1\0"
    "hitButton(QRadioButton*,QPoint)\0QSize\0"
    "theWrappedObject\0minimumSizeHint(QRadioButton*)\0"
    "mouseMoveEvent(QRadioButton*,QMouseEvent*)\0"
    "paintEvent(QRadioButton*,QPaintEvent*)\0"
    "sizeHint(QRadioButton*)\0"
};

void PythonQtWrapper_QRadioButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QRadioButton *_t = static_cast<PythonQtWrapper_QRadioButton *>(_o);
        switch (_id) {
        case 0: { QRadioButton* _r = _t->new_QRadioButton((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRadioButton**>(_a[0]) = _r; }  break;
        case 1: { QRadioButton* _r = _t->new_QRadioButton();
            if (_a[0]) *reinterpret_cast< QRadioButton**>(_a[0]) = _r; }  break;
        case 2: { QRadioButton* _r = _t->new_QRadioButton((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRadioButton**>(_a[0]) = _r; }  break;
        case 3: { QRadioButton* _r = _t->new_QRadioButton((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRadioButton**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QRadioButton((*reinterpret_cast< QRadioButton*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->event((*reinterpret_cast< QRadioButton*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->hitButton((*reinterpret_cast< QRadioButton*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QSize _r = _t->minimumSizeHint((*reinterpret_cast< QRadioButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 8: _t->mouseMoveEvent((*reinterpret_cast< QRadioButton*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 9: _t->paintEvent((*reinterpret_cast< QRadioButton*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 10: { QSize _r = _t->sizeHint((*reinterpret_cast< QRadioButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QRadioButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QRadioButton::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QRadioButton,
      qt_meta_data_PythonQtWrapper_QRadioButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QRadioButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QRadioButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QRadioButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QRadioButton))
        return static_cast<void*>(const_cast< PythonQtWrapper_QRadioButton*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QRadioButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QRegExpValidator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      59,   52,   34,   33, 0x0a,
      90,   33,   34,   33, 0x2a,
     123,  113,   34,   33, 0x0a,
     165,  162,   34,   33, 0x2a,
     199,  195,   33,   33, 0x0a,
     274,  257,  242,   33, 0x0a,
     320,  300,   33,   33, 0x0a,
     402,  375,  357,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QRegExpValidator[] = {
    "PythonQtWrapper_QRegExpValidator\0\0"
    "QRegExpValidator*\0parent\0"
    "new_QRegExpValidator(QObject*)\0"
    "new_QRegExpValidator()\0rx,parent\0"
    "new_QRegExpValidator(QRegExp,QObject*)\0"
    "rx\0new_QRegExpValidator(QRegExp)\0obj\0"
    "delete_QRegExpValidator(QRegExpValidator*)\0"
    "const QRegExp*\0theWrappedObject\0"
    "regExp(QRegExpValidator*)\0theWrappedObject,rx\0"
    "setRegExp(QRegExpValidator*,QRegExp)\0"
    "QValidator::State\0theWrappedObject,input,pos\0"
    "validate(QRegExpValidator*,QString&,int&)\0"
};

void PythonQtWrapper_QRegExpValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QRegExpValidator *_t = static_cast<PythonQtWrapper_QRegExpValidator *>(_o);
        switch (_id) {
        case 0: { QRegExpValidator* _r = _t->new_QRegExpValidator((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRegExpValidator**>(_a[0]) = _r; }  break;
        case 1: { QRegExpValidator* _r = _t->new_QRegExpValidator();
            if (_a[0]) *reinterpret_cast< QRegExpValidator**>(_a[0]) = _r; }  break;
        case 2: { QRegExpValidator* _r = _t->new_QRegExpValidator((*reinterpret_cast< const QRegExp(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegExpValidator**>(_a[0]) = _r; }  break;
        case 3: { QRegExpValidator* _r = _t->new_QRegExpValidator((*reinterpret_cast< const QRegExp(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRegExpValidator**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QRegExpValidator((*reinterpret_cast< QRegExpValidator*(*)>(_a[1]))); break;
        case 5: { const QRegExp* _r = _t->regExp((*reinterpret_cast< QRegExpValidator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QRegExp**>(_a[0]) = _r; }  break;
        case 6: _t->setRegExp((*reinterpret_cast< QRegExpValidator*(*)>(_a[1])),(*reinterpret_cast< const QRegExp(*)>(_a[2]))); break;
        case 7: { QValidator::State _r = _t->validate((*reinterpret_cast< QRegExpValidator*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QValidator::State*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QRegExpValidator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QRegExpValidator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QRegExpValidator,
      qt_meta_data_PythonQtWrapper_QRegExpValidator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QRegExpValidator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QRegExpValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QRegExpValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QRegExpValidator))
        return static_cast<void*>(const_cast< PythonQtWrapper_QRegExpValidator*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QRegExpValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QResizeEvent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      57,   44,   30,   29, 0x0a,
      91,   87,   29,   29, 0x0a,
     156,  139,  126,   29, 0x0a,
     179,  139,  126,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QResizeEvent[] = {
    "PythonQtWrapper_QResizeEvent\0\0"
    "QResizeEvent*\0size,oldSize\0"
    "new_QResizeEvent(QSize,QSize)\0obj\0"
    "delete_QResizeEvent(QResizeEvent*)\0"
    "const QSize*\0theWrappedObject\0"
    "oldSize(QResizeEvent*)\0size(QResizeEvent*)\0"
};

void PythonQtWrapper_QResizeEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QResizeEvent *_t = static_cast<PythonQtWrapper_QResizeEvent *>(_o);
        switch (_id) {
        case 0: { QResizeEvent* _r = _t->new_QResizeEvent((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QResizeEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QResizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 2: { const QSize* _r = _t->oldSize((*reinterpret_cast< QResizeEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QSize**>(_a[0]) = _r; }  break;
        case 3: { const QSize* _r = _t->size((*reinterpret_cast< QResizeEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QSize**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QResizeEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QResizeEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QResizeEvent,
      qt_meta_data_PythonQtWrapper_QResizeEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QResizeEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QResizeEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QResizeEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QResizeEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QResizeEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QResizeEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QRubberBand[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      56,   42,   29,   28, 0x0a,
     108,  101,   29,   28, 0x2a,
     148,  144,   28,   28, 0x0a,
     205,  181,   28,   28, 0x0a,
     263,  244,  239,   28, 0x0a,
     310,  291,   28,   28, 0x0a,
     357,  336,   28,   28, 0x0a,
     384,  181,   28,   28, 0x0a,
     420,  181,   28,   28, 0x0a,
     477,  458,   28,   28, 0x0a,
     525,  504,   28,   28, 0x0a,
     554,  181,   28,   28, 0x0a,
     613,  594,   28,   28, 0x0a,
     670,  645,   28,   28, 0x0a,
     748,  731,  712,   28, 0x0a,
     768,  181,   28,   28, 0x0a,

 // enums: name, flags, count, data
     804, 0x0,    2,   98,

 // enum data: key, value
     810, uint(PythonQtWrapper_QRubberBand::Line),
     815, uint(PythonQtWrapper_QRubberBand::Rectangle),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QRubberBand[] = {
    "PythonQtWrapper_QRubberBand\0\0QRubberBand*\0"
    "arg__1,arg__2\0"
    "new_QRubberBand(QRubberBand::Shape,QWidget*)\0"
    "arg__1\0new_QRubberBand(QRubberBand::Shape)\0"
    "obj\0delete_QRubberBand(QRubberBand*)\0"
    "theWrappedObject,arg__1\0"
    "changeEvent(QRubberBand*,QEvent*)\0"
    "bool\0theWrappedObject,e\0"
    "event(QRubberBand*,QEvent*)\0"
    "theWrappedObject,p\0move(QRubberBand*,QPoint)\0"
    "theWrappedObject,x,y\0move(QRubberBand*,int,int)\0"
    "moveEvent(QRubberBand*,QMoveEvent*)\0"
    "paintEvent(QRubberBand*,QPaintEvent*)\0"
    "theWrappedObject,s\0resize(QRubberBand*,QSize)\0"
    "theWrappedObject,w,h\0resize(QRubberBand*,int,int)\0"
    "resizeEvent(QRubberBand*,QResizeEvent*)\0"
    "theWrappedObject,r\0setGeometry(QRubberBand*,QRect)\0"
    "theWrappedObject,x,y,w,h\0"
    "setGeometry(QRubberBand*,int,int,int,int)\0"
    "QRubberBand::Shape\0theWrappedObject\0"
    "shape(QRubberBand*)\0"
    "showEvent(QRubberBand*,QShowEvent*)\0"
    "Shape\0Line\0Rectangle\0"
};

void PythonQtWrapper_QRubberBand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QRubberBand *_t = static_cast<PythonQtWrapper_QRubberBand *>(_o);
        switch (_id) {
        case 0: { QRubberBand* _r = _t->new_QRubberBand((*reinterpret_cast< QRubberBand::Shape(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRubberBand**>(_a[0]) = _r; }  break;
        case 1: { QRubberBand* _r = _t->new_QRubberBand((*reinterpret_cast< QRubberBand::Shape(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRubberBand**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QRubberBand((*reinterpret_cast< QRubberBand*(*)>(_a[1]))); break;
        case 3: _t->changeEvent((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 4: { bool _r = _t->event((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->move((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 6: _t->move((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->moveEvent((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< QMoveEvent*(*)>(_a[2]))); break;
        case 8: _t->paintEvent((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 9: _t->resize((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 10: _t->resize((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->resizeEvent((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 12: _t->setGeometry((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 13: _t->setGeometry((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 14: { QRubberBand::Shape _r = _t->shape((*reinterpret_cast< QRubberBand*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRubberBand::Shape*>(_a[0]) = _r; }  break;
        case 15: _t->showEvent((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< QShowEvent*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QRubberBand::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QRubberBand::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QRubberBand,
      qt_meta_data_PythonQtWrapper_QRubberBand, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QRubberBand::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QRubberBand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QRubberBand::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QRubberBand))
        return static_cast<void*>(const_cast< PythonQtWrapper_QRubberBand*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QRubberBand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QScrollArea[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   42,   29,   28, 0x0a,
      75,   28,   29,   28, 0x2a,
      97,   93,   28,   28, 0x0a,
     161,  144,  130,   28, 0x0a,
     222,  185,   28,   28, 0x0a,
     295,  266,   28,   28, 0x2a,
     356,  335,   28,   28, 0x2a,
     437,  392,   28,   28, 0x0a,
     525,  488,   28,   28, 0x2a,
     601,  572,   28,   28, 0x2a,
     673,  649,  644,   28, 0x0a,
     732,  701,  644,   28, 0x0a,
     797,  775,  644,   28, 0x0a,
     835,  649,   28,   28, 0x0a,
     898,  875,   28,   28, 0x0a,
     937,  649,   28,   28, 0x0a,
    1002,  978,   28,   28, 0x0a,
    1062, 1035,   28,   28, 0x0a,
    1106,  144, 1100,   28, 0x0a,
    1138,  144, 1129,   28, 0x0a,
    1163,  144, 1129,   28, 0x0a,
    1184,  144,  644,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QScrollArea[] = {
    "PythonQtWrapper_QScrollArea\0\0QScrollArea*\0"
    "parent\0new_QScrollArea(QWidget*)\0"
    "new_QScrollArea()\0obj\0"
    "delete_QScrollArea(QScrollArea*)\0"
    "Qt::Alignment\0theWrappedObject\0"
    "alignment(QScrollArea*)\0"
    "theWrappedObject,x,y,xmargin,ymargin\0"
    "ensureVisible(QScrollArea*,int,int,int,int)\0"
    "theWrappedObject,x,y,xmargin\0"
    "ensureVisible(QScrollArea*,int,int,int)\0"
    "theWrappedObject,x,y\0"
    "ensureVisible(QScrollArea*,int,int)\0"
    "theWrappedObject,childWidget,xmargin,ymargin\0"
    "ensureWidgetVisible(QScrollArea*,QWidget*,int,int)\0"
    "theWrappedObject,childWidget,xmargin\0"
    "ensureWidgetVisible(QScrollArea*,QWidget*,int)\0"
    "theWrappedObject,childWidget\0"
    "ensureWidgetVisible(QScrollArea*,QWidget*)\0"
    "bool\0theWrappedObject,arg__1\0"
    "event(QScrollArea*,QEvent*)\0"
    "theWrappedObject,arg__1,arg__2\0"
    "eventFilter(QScrollArea*,QObject*,QEvent*)\0"
    "theWrappedObject,next\0"
    "focusNextPrevChild(QScrollArea*,bool)\0"
    "resizeEvent(QScrollArea*,QResizeEvent*)\0"
    "theWrappedObject,dx,dy\0"
    "scrollContentsBy(QScrollArea*,int,int)\0"
    "setAlignment(QScrollArea*,Qt::Alignment)\0"
    "theWrappedObject,widget\0"
    "setWidget(QScrollArea*,QWidget*)\0"
    "theWrappedObject,resizable\0"
    "setWidgetResizable(QScrollArea*,bool)\0"
    "QSize\0sizeHint(QScrollArea*)\0QWidget*\0"
    "takeWidget(QScrollArea*)\0widget(QScrollArea*)\0"
    "widgetResizable(QScrollArea*)\0"
};

void PythonQtWrapper_QScrollArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QScrollArea *_t = static_cast<PythonQtWrapper_QScrollArea *>(_o);
        switch (_id) {
        case 0: { QScrollArea* _r = _t->new_QScrollArea((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScrollArea**>(_a[0]) = _r; }  break;
        case 1: { QScrollArea* _r = _t->new_QScrollArea();
            if (_a[0]) *reinterpret_cast< QScrollArea**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QScrollArea((*reinterpret_cast< QScrollArea*(*)>(_a[1]))); break;
        case 3: { Qt::Alignment _r = _t->alignment((*reinterpret_cast< QScrollArea*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 4: _t->ensureVisible((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 5: _t->ensureVisible((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->ensureVisible((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->ensureWidgetVisible((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 8: _t->ensureWidgetVisible((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->ensureWidgetVisible((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 10: { bool _r = _t->event((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->eventFilter((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->focusNextPrevChild((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->resizeEvent((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 14: _t->scrollContentsBy((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->setAlignment((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 16: _t->setWidget((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 17: _t->setWidgetResizable((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: { QSize _r = _t->sizeHint((*reinterpret_cast< QScrollArea*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 19: { QWidget* _r = _t->takeWidget((*reinterpret_cast< QScrollArea*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 20: { QWidget* _r = _t->widget((*reinterpret_cast< QScrollArea*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->widgetResizable((*reinterpret_cast< QScrollArea*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QScrollArea::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QScrollArea::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QScrollArea,
      qt_meta_data_PythonQtWrapper_QScrollArea, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QScrollArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QScrollArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QScrollArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QScrollArea))
        return static_cast<void*>(const_cast< PythonQtWrapper_QScrollArea*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QScrollArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QScrollBar[] = {

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
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
     103,   89,   28,   27, 0x0a,
     151,  144,   28,   27, 0x2a,
     187,  183,   27,   27, 0x0a,
     242,  218,   27,   27, 0x0a,
     319,  296,  291,   27, 0x0a,
     346,  218,   27,   27, 0x0a,
     381,  218,   27,   27, 0x0a,
     422,  218,   27,   27, 0x0a,
     464,  218,   27,   27, 0x0a,
     508,  218,   27,   27, 0x0a,
     568,  551,  545,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QScrollBar[] = {
    "PythonQtWrapper_QScrollBar\0\0QScrollBar*\0"
    "parent\0new_QScrollBar(QWidget*)\0"
    "new_QScrollBar()\0arg__1,parent\0"
    "new_QScrollBar(Qt::Orientation,QWidget*)\0"
    "arg__1\0new_QScrollBar(Qt::Orientation)\0"
    "obj\0delete_QScrollBar(QScrollBar*)\0"
    "theWrappedObject,arg__1\0"
    "contextMenuEvent(QScrollBar*,QContextMenuEvent*)\0"
    "bool\0theWrappedObject,event\0"
    "event(QScrollBar*,QEvent*)\0"
    "hideEvent(QScrollBar*,QHideEvent*)\0"
    "mouseMoveEvent(QScrollBar*,QMouseEvent*)\0"
    "mousePressEvent(QScrollBar*,QMouseEvent*)\0"
    "mouseReleaseEvent(QScrollBar*,QMouseEvent*)\0"
    "paintEvent(QScrollBar*,QPaintEvent*)\0"
    "QSize\0theWrappedObject\0sizeHint(QScrollBar*)\0"
};

void PythonQtWrapper_QScrollBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QScrollBar *_t = static_cast<PythonQtWrapper_QScrollBar *>(_o);
        switch (_id) {
        case 0: { QScrollBar* _r = _t->new_QScrollBar((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScrollBar**>(_a[0]) = _r; }  break;
        case 1: { QScrollBar* _r = _t->new_QScrollBar();
            if (_a[0]) *reinterpret_cast< QScrollBar**>(_a[0]) = _r; }  break;
        case 2: { QScrollBar* _r = _t->new_QScrollBar((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScrollBar**>(_a[0]) = _r; }  break;
        case 3: { QScrollBar* _r = _t->new_QScrollBar((*reinterpret_cast< Qt::Orientation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScrollBar**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QScrollBar((*reinterpret_cast< QScrollBar*(*)>(_a[1]))); break;
        case 5: _t->contextMenuEvent((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< QContextMenuEvent*(*)>(_a[2]))); break;
        case 6: { bool _r = _t->event((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->hideEvent((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< QHideEvent*(*)>(_a[2]))); break;
        case 8: _t->mouseMoveEvent((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 9: _t->mousePressEvent((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 10: _t->mouseReleaseEvent((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 11: _t->paintEvent((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 12: { QSize _r = _t->sizeHint((*reinterpret_cast< QScrollBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QScrollBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QScrollBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QScrollBar,
      qt_meta_data_PythonQtWrapper_QScrollBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QScrollBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QScrollBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QScrollBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QScrollBar))
        return static_cast<void*>(const_cast< PythonQtWrapper_QScrollBar*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QScrollBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSessionManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      55,   38,   33,   32, 0x0a,
      96,   38,   33,   32, 0x0a,
     132,   38,   32,   32, 0x0a,
     169,   38,  157,   32, 0x0a,
     202,   38,   33,   32, 0x0a,
     229,   38,   32,   32, 0x0a,
     255,   38,   32,   32, 0x0a,
     287,   38,  157,   32, 0x0a,
     349,   38,  320,   32, 0x0a,
     387,   38,  379,   32, 0x0a,
     415,   38,  379,   32, 0x0a,
     468,  444,   32,   32, 0x0a,
     544,  516,   32,   32, 0x0a,
     597,  516,   32,   32, 0x0a,
     654,  444,   32,   32, 0x0a,
     702,  444,   32,   32, 0x0a,

 // enums: name, flags, count, data
     764, 0x0,    4,   98,

 // enum data: key, value
     776, uint(PythonQtWrapper_QSessionManager::RestartIfRunning),
     793, uint(PythonQtWrapper_QSessionManager::RestartAnyway),
     807, uint(PythonQtWrapper_QSessionManager::RestartImmediately),
     826, uint(PythonQtWrapper_QSessionManager::RestartNever),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSessionManager[] = {
    "PythonQtWrapper_QSessionManager\0\0bool\0"
    "theWrappedObject\0"
    "allowsErrorInteraction(QSessionManager*)\0"
    "allowsInteraction(QSessionManager*)\0"
    "cancel(QSessionManager*)\0QStringList\0"
    "discardCommand(QSessionManager*)\0"
    "isPhase2(QSessionManager*)\0"
    "release(QSessionManager*)\0"
    "requestPhase2(QSessionManager*)\0"
    "restartCommand(QSessionManager*)\0"
    "QSessionManager::RestartHint\0"
    "restartHint(QSessionManager*)\0QString\0"
    "sessionId(QSessionManager*)\0"
    "sessionKey(QSessionManager*)\0"
    "theWrappedObject,arg__1\0"
    "setDiscardCommand(QSessionManager*,QStringList)\0"
    "theWrappedObject,name,value\0"
    "setManagerProperty(QSessionManager*,QString,QString)\0"
    "setManagerProperty(QSessionManager*,QString,QStringList)\0"
    "setRestartCommand(QSessionManager*,QStringList)\0"
    "setRestartHint(QSessionManager*,QSessionManager::RestartHint)\0"
    "RestartHint\0RestartIfRunning\0RestartAnyway\0"
    "RestartImmediately\0RestartNever\0"
};

void PythonQtWrapper_QSessionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSessionManager *_t = static_cast<PythonQtWrapper_QSessionManager *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->allowsErrorInteraction((*reinterpret_cast< QSessionManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->allowsInteraction((*reinterpret_cast< QSessionManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->cancel((*reinterpret_cast< QSessionManager*(*)>(_a[1]))); break;
        case 3: { QStringList _r = _t->discardCommand((*reinterpret_cast< QSessionManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isPhase2((*reinterpret_cast< QSessionManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->release((*reinterpret_cast< QSessionManager*(*)>(_a[1]))); break;
        case 6: _t->requestPhase2((*reinterpret_cast< QSessionManager*(*)>(_a[1]))); break;
        case 7: { QStringList _r = _t->restartCommand((*reinterpret_cast< QSessionManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 8: { QSessionManager::RestartHint _r = _t->restartHint((*reinterpret_cast< QSessionManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSessionManager::RestartHint*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->sessionId((*reinterpret_cast< QSessionManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->sessionKey((*reinterpret_cast< QSessionManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: _t->setDiscardCommand((*reinterpret_cast< QSessionManager*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 12: _t->setManagerProperty((*reinterpret_cast< QSessionManager*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 13: _t->setManagerProperty((*reinterpret_cast< QSessionManager*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 14: _t->setRestartCommand((*reinterpret_cast< QSessionManager*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 15: _t->setRestartHint((*reinterpret_cast< QSessionManager*(*)>(_a[1])),(*reinterpret_cast< QSessionManager::RestartHint(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSessionManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSessionManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSessionManager,
      qt_meta_data_PythonQtWrapper_QSessionManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSessionManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSessionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSessionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSessionManager))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSessionManager*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSessionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QShortcut[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   38,   27,   26, 0x0a,
     111,   69,   27,   26, 0x0a,
     226,  192,   27,   26, 0x2a,
     305,  287,   27,   26, 0x2a,
     365,  354,   27,   26, 0x2a,
     406,  402,   26,   26, 0x0a,
     457,  440,  435,   26, 0x0a,
     500,  440,  480,   26, 0x0a,
     539,  520,  435,   26, 0x0a,
     569,  440,  565,   26, 0x0a,
     584,  440,  435,   26, 0x0a,
     619,  440,  606,   26, 0x0a,
     644,  440,  635,   26, 0x0a,
     689,  669,   26,   26, 0x0a,
     745,  720,   26,   26, 0x0a,
     812,  788,   26,   26, 0x0a,
     861,  840,   26,   26, 0x0a,
     915,  893,   26,   26, 0x0a,
     956,  440,  948,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QShortcut[] = {
    "PythonQtWrapper_QShortcut\0\0QShortcut*\0"
    "parent\0new_QShortcut(QWidget*)\0"
    "key,parent,member,ambiguousMember,context\0"
    "new_QShortcut(QKeySequence,QWidget*,const char*,const char*,Qt::Shortc"
    "utContext)\0"
    "key,parent,member,ambiguousMember\0"
    "new_QShortcut(QKeySequence,QWidget*,const char*,const char*)\0"
    "key,parent,member\0"
    "new_QShortcut(QKeySequence,QWidget*,const char*)\0"
    "key,parent\0new_QShortcut(QKeySequence,QWidget*)\0"
    "obj\0delete_QShortcut(QShortcut*)\0bool\0"
    "theWrappedObject\0autoRepeat(QShortcut*)\0"
    "Qt::ShortcutContext\0context(QShortcut*)\0"
    "theWrappedObject,e\0event(QShortcut*,QEvent*)\0"
    "int\0id(QShortcut*)\0isEnabled(QShortcut*)\0"
    "QKeySequence\0key(QShortcut*)\0QWidget*\0"
    "parentWidget(QShortcut*)\0theWrappedObject,on\0"
    "setAutoRepeat(QShortcut*,bool)\0"
    "theWrappedObject,context\0"
    "setContext(QShortcut*,Qt::ShortcutContext)\0"
    "theWrappedObject,enable\0"
    "setEnabled(QShortcut*,bool)\0"
    "theWrappedObject,key\0"
    "setKey(QShortcut*,QKeySequence)\0"
    "theWrappedObject,text\0"
    "setWhatsThis(QShortcut*,QString)\0"
    "QString\0whatsThis(QShortcut*)\0"
};

void PythonQtWrapper_QShortcut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QShortcut *_t = static_cast<PythonQtWrapper_QShortcut *>(_o);
        switch (_id) {
        case 0: { QShortcut* _r = _t->new_QShortcut((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QShortcut**>(_a[0]) = _r; }  break;
        case 1: { QShortcut* _r = _t->new_QShortcut((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< const char*(*)>(_a[4])),(*reinterpret_cast< Qt::ShortcutContext(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QShortcut**>(_a[0]) = _r; }  break;
        case 2: { QShortcut* _r = _t->new_QShortcut((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< const char*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QShortcut**>(_a[0]) = _r; }  break;
        case 3: { QShortcut* _r = _t->new_QShortcut((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QShortcut**>(_a[0]) = _r; }  break;
        case 4: { QShortcut* _r = _t->new_QShortcut((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QShortcut**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QShortcut((*reinterpret_cast< QShortcut*(*)>(_a[1]))); break;
        case 6: { bool _r = _t->autoRepeat((*reinterpret_cast< QShortcut*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { Qt::ShortcutContext _r = _t->context((*reinterpret_cast< QShortcut*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ShortcutContext*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->event((*reinterpret_cast< QShortcut*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->id((*reinterpret_cast< QShortcut*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isEnabled((*reinterpret_cast< QShortcut*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QKeySequence _r = _t->key((*reinterpret_cast< QShortcut*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QKeySequence*>(_a[0]) = _r; }  break;
        case 12: { QWidget* _r = _t->parentWidget((*reinterpret_cast< QShortcut*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 13: _t->setAutoRepeat((*reinterpret_cast< QShortcut*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->setContext((*reinterpret_cast< QShortcut*(*)>(_a[1])),(*reinterpret_cast< Qt::ShortcutContext(*)>(_a[2]))); break;
        case 15: _t->setEnabled((*reinterpret_cast< QShortcut*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->setKey((*reinterpret_cast< QShortcut*(*)>(_a[1])),(*reinterpret_cast< const QKeySequence(*)>(_a[2]))); break;
        case 17: _t->setWhatsThis((*reinterpret_cast< QShortcut*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: { QString _r = _t->whatsThis((*reinterpret_cast< QShortcut*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QShortcut::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QShortcut::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QShortcut,
      qt_meta_data_PythonQtWrapper_QShortcut, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QShortcut::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QShortcut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QShortcut::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QShortcut))
        return static_cast<void*>(const_cast< PythonQtWrapper_QShortcut*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QShortcut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
