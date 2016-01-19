/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_gui9.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../pythonqt/generated_cpp/com_trolltech_qt_gui/com_trolltech_qt_gui9.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_gui9.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QStylePlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      51,   44,   30,   29, 0x0a,
      78,   29,   30,   29, 0x2a,
     101,   97,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStylePlugin[] = {
    "PythonQtWrapper_QStylePlugin\0\0"
    "QStylePlugin*\0parent\0new_QStylePlugin(QObject*)\0"
    "new_QStylePlugin()\0obj\0"
    "delete_QStylePlugin(QStylePlugin*)\0"
};

void PythonQtWrapper_QStylePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStylePlugin *_t = static_cast<PythonQtWrapper_QStylePlugin *>(_o);
        switch (_id) {
        case 0: { QStylePlugin* _r = _t->new_QStylePlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStylePlugin**>(_a[0]) = _r; }  break;
        case 1: { QStylePlugin* _r = _t->new_QStylePlugin();
            if (_a[0]) *reinterpret_cast< QStylePlugin**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStylePlugin((*reinterpret_cast< QStylePlugin*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStylePlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStylePlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStylePlugin,
      qt_meta_data_PythonQtWrapper_QStylePlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStylePlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStylePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStylePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStylePlugin))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStylePlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStylePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QStyledItemDelegate[] = {

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
      65,   58,   37,   36, 0x0a,
      99,   36,   37,   36, 0x2a,
     129,  125,   36,   36, 0x0a,
     224,  187,  178,   36, 0x0a,
     339,  309,  301,   36, 0x0a,
     437,  395,  390,   36, 0x0a,
     562,  532,  390,   36, 0x0a,
     643,  613,   36,   36, 0x0a,
     752,  735,  715,   36, 0x0a,
     830,  792,   36,   36, 0x0a,
     931,  901,   36,   36, 0x0a,
    1013,  988,   36,   36, 0x0a,
    1112, 1076,   36,   36, 0x0a,
    1194,  613, 1188,   36, 0x0a,
    1295, 1258,   36,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QStyledItemDelegate[] = {
    "PythonQtWrapper_QStyledItemDelegate\0"
    "\0QStyledItemDelegate*\0parent\0"
    "new_QStyledItemDelegate(QObject*)\0"
    "new_QStyledItemDelegate()\0obj\0"
    "delete_QStyledItemDelegate(QStyledItemDelegate*)\0"
    "QWidget*\0theWrappedObject,parent,option,index\0"
    "createEditor(QStyledItemDelegate*,QWidget*,QStyleOptionViewItem,QModel"
    "Index)\0"
    "QString\0theWrappedObject,value,locale\0"
    "displayText(QStyledItemDelegate*,QVariant,QLocale)\0"
    "bool\0theWrappedObject,event,model,option,index\0"
    "editorEvent(QStyledItemDelegate*,QEvent*,QAbstractItemModel*,QStyleOpt"
    "ionViewItem,QModelIndex)\0"
    "theWrappedObject,object,event\0"
    "eventFilter(QStyledItemDelegate*,QObject*,QEvent*)\0"
    "theWrappedObject,option,index\0"
    "initStyleOption(QStyledItemDelegate*,QStyleOptionViewItem*,QModelIndex"
    ")\0"
    "QItemEditorFactory*\0theWrappedObject\0"
    "itemEditorFactory(QStyledItemDelegate*)\0"
    "theWrappedObject,painter,option,index\0"
    "paint(QStyledItemDelegate*,QPainter*,QStyleOptionViewItem,QModelIndex)\0"
    "theWrappedObject,editor,index\0"
    "setEditorData(QStyledItemDelegate*,QWidget*,QModelIndex)\0"
    "theWrappedObject,factory\0"
    "setItemEditorFactory(QStyledItemDelegate*,QItemEditorFactory*)\0"
    "theWrappedObject,editor,model,index\0"
    "setModelData(QStyledItemDelegate*,QWidget*,QAbstractItemModel*,QModelI"
    "ndex)\0"
    "QSize\0"
    "sizeHint(QStyledItemDelegate*,QStyleOptionViewItem,QModelIndex)\0"
    "theWrappedObject,editor,option,index\0"
    "updateEditorGeometry(QStyledItemDelegate*,QWidget*,QStyleOptionViewIte"
    "m,QModelIndex)\0"
};

void PythonQtWrapper_QStyledItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QStyledItemDelegate *_t = static_cast<PythonQtWrapper_QStyledItemDelegate *>(_o);
        switch (_id) {
        case 0: { QStyledItemDelegate* _r = _t->new_QStyledItemDelegate((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyledItemDelegate**>(_a[0]) = _r; }  break;
        case 1: { QStyledItemDelegate* _r = _t->new_QStyledItemDelegate();
            if (_a[0]) *reinterpret_cast< QStyledItemDelegate**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStyledItemDelegate((*reinterpret_cast< QStyledItemDelegate*(*)>(_a[1]))); break;
        case 3: { QWidget* _r = _t->createEditor((*reinterpret_cast< QStyledItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->displayText((*reinterpret_cast< QStyledItemDelegate*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QLocale(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->editorEvent((*reinterpret_cast< QStyledItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])),(*reinterpret_cast< QAbstractItemModel*(*)>(_a[3])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[4])),(*reinterpret_cast< const QModelIndex(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->eventFilter((*reinterpret_cast< QStyledItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->initStyleOption((*reinterpret_cast< QStyledItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionViewItem*(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3]))); break;
        case 8: { QItemEditorFactory* _r = _t->itemEditorFactory((*reinterpret_cast< QStyledItemDelegate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QItemEditorFactory**>(_a[0]) = _r; }  break;
        case 9: _t->paint((*reinterpret_cast< QStyledItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4]))); break;
        case 10: _t->setEditorData((*reinterpret_cast< QStyledItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3]))); break;
        case 11: _t->setItemEditorFactory((*reinterpret_cast< QStyledItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QItemEditorFactory*(*)>(_a[2]))); break;
        case 12: _t->setModelData((*reinterpret_cast< QStyledItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< QAbstractItemModel*(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4]))); break;
        case 13: { QSize _r = _t->sizeHint((*reinterpret_cast< QStyledItemDelegate*(*)>(_a[1])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 14: _t->updateEditorGeometry((*reinterpret_cast< QStyledItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QStyledItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QStyledItemDelegate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStyledItemDelegate,
      qt_meta_data_PythonQtWrapper_QStyledItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QStyledItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QStyledItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QStyledItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStyledItemDelegate))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStyledItemDelegate*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStyledItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSwipeGesture[] = {

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
      53,   46,   31,   30, 0x0a,
      81,   30,   31,   30, 0x2a,
     105,  101,   30,   30, 0x0a,
     189,  172,  142,   30, 0x0a,
     248,  225,   30,   30, 0x0a,
     290,  172,  284,   30, 0x0a,
     317,  172,  142,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSwipeGesture[] = {
    "PythonQtWrapper_QSwipeGesture\0\0"
    "QSwipeGesture*\0parent\0new_QSwipeGesture(QObject*)\0"
    "new_QSwipeGesture()\0obj\0"
    "delete_QSwipeGesture(QSwipeGesture*)\0"
    "QSwipeGesture::SwipeDirection\0"
    "theWrappedObject\0horizontalDirection(QSwipeGesture*)\0"
    "theWrappedObject,value\0"
    "setSwipeAngle(QSwipeGesture*,qreal)\0"
    "qreal\0swipeAngle(QSwipeGesture*)\0"
    "verticalDirection(QSwipeGesture*)\0"
};

void PythonQtWrapper_QSwipeGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSwipeGesture *_t = static_cast<PythonQtWrapper_QSwipeGesture *>(_o);
        switch (_id) {
        case 0: { QSwipeGesture* _r = _t->new_QSwipeGesture((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSwipeGesture**>(_a[0]) = _r; }  break;
        case 1: { QSwipeGesture* _r = _t->new_QSwipeGesture();
            if (_a[0]) *reinterpret_cast< QSwipeGesture**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSwipeGesture((*reinterpret_cast< QSwipeGesture*(*)>(_a[1]))); break;
        case 3: { QSwipeGesture::SwipeDirection _r = _t->horizontalDirection((*reinterpret_cast< QSwipeGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSwipeGesture::SwipeDirection*>(_a[0]) = _r; }  break;
        case 4: _t->setSwipeAngle((*reinterpret_cast< QSwipeGesture*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 5: { qreal _r = _t->swipeAngle((*reinterpret_cast< QSwipeGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 6: { QSwipeGesture::SwipeDirection _r = _t->verticalDirection((*reinterpret_cast< QSwipeGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSwipeGesture::SwipeDirection*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSwipeGesture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSwipeGesture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSwipeGesture,
      qt_meta_data_PythonQtWrapper_QSwipeGesture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSwipeGesture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSwipeGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSwipeGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSwipeGesture))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSwipeGesture*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSwipeGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSyntaxHighlighter[] = {

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
      63,   56,   36,   35, 0x0a,
      96,   56,   36,   35, 0x0a,
     135,   56,   36,   35, 0x0a,
     174,  170,   35,   35, 0x0a,
     253,  236,  221,   35, 0x0a,
     304,  283,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSyntaxHighlighter[] = {
    "PythonQtWrapper_QSyntaxHighlighter\0\0"
    "QSyntaxHighlighter*\0parent\0"
    "new_QSyntaxHighlighter(QObject*)\0"
    "new_QSyntaxHighlighter(QTextDocument*)\0"
    "new_QSyntaxHighlighter(QTextEdit*)\0"
    "obj\0delete_QSyntaxHighlighter(QSyntaxHighlighter*)\0"
    "QTextDocument*\0theWrappedObject\0"
    "document(QSyntaxHighlighter*)\0"
    "theWrappedObject,doc\0"
    "setDocument(QSyntaxHighlighter*,QTextDocument*)\0"
};

void PythonQtWrapper_QSyntaxHighlighter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSyntaxHighlighter *_t = static_cast<PythonQtWrapper_QSyntaxHighlighter *>(_o);
        switch (_id) {
        case 0: { QSyntaxHighlighter* _r = _t->new_QSyntaxHighlighter((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSyntaxHighlighter**>(_a[0]) = _r; }  break;
        case 1: { QSyntaxHighlighter* _r = _t->new_QSyntaxHighlighter((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSyntaxHighlighter**>(_a[0]) = _r; }  break;
        case 2: { QSyntaxHighlighter* _r = _t->new_QSyntaxHighlighter((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSyntaxHighlighter**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QSyntaxHighlighter((*reinterpret_cast< QSyntaxHighlighter*(*)>(_a[1]))); break;
        case 4: { QTextDocument* _r = _t->document((*reinterpret_cast< QSyntaxHighlighter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 5: _t->setDocument((*reinterpret_cast< QSyntaxHighlighter*(*)>(_a[1])),(*reinterpret_cast< QTextDocument*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSyntaxHighlighter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSyntaxHighlighter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSyntaxHighlighter,
      qt_meta_data_PythonQtWrapper_QSyntaxHighlighter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSyntaxHighlighter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSyntaxHighlighter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSyntaxHighlighter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSyntaxHighlighter))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSyntaxHighlighter*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSyntaxHighlighter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSystemTrayIcon[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       2,  109, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      57,   50,   33,   32, 0x0a,
      87,   32,   33,   32, 0x2a,
     121,  109,   33,   32, 0x0a,
     162,  157,   33,   32, 0x2a,
     193,  189,   32,   32, 0x0a,
     258,  241,  234,   32, 0x0a,
     316,  293,  288,   32, 0x0a,
     354,  241,  348,   32, 0x0a,
     387,  241,  381,   32, 0x0a,
     410,   32,  288,   32, 0x0a,
     457,  241,  288,   32, 0x0a,
     507,  485,   32,   32, 0x0a,
     569,  547,   32,   32, 0x0a,
     622,  601,   32,   32, 0x0a,
     697,  659,   32,   32, 0x0a,
     808,  776,   32,   32, 0x2a,
     910,  883,   32,   32, 0x2a,
     956,   32,  288,   32, 0x0a,
    1006,  241,  998,   32, 0x0a,

 // enums: name, flags, count, data
    1032, 0x0,    4,  117,
    1044, 0x0,    5,  125,

 // enum data: key, value
    1061, uint(PythonQtWrapper_QSystemTrayIcon::NoIcon),
    1068, uint(PythonQtWrapper_QSystemTrayIcon::Information),
    1080, uint(PythonQtWrapper_QSystemTrayIcon::Warning),
    1088, uint(PythonQtWrapper_QSystemTrayIcon::Critical),
    1097, uint(PythonQtWrapper_QSystemTrayIcon::Unknown),
    1105, uint(PythonQtWrapper_QSystemTrayIcon::Context),
    1113, uint(PythonQtWrapper_QSystemTrayIcon::DoubleClick),
    1125, uint(PythonQtWrapper_QSystemTrayIcon::Trigger),
    1133, uint(PythonQtWrapper_QSystemTrayIcon::MiddleClick),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSystemTrayIcon[] = {
    "PythonQtWrapper_QSystemTrayIcon\0\0"
    "QSystemTrayIcon*\0parent\0"
    "new_QSystemTrayIcon(QObject*)\0"
    "new_QSystemTrayIcon()\0icon,parent\0"
    "new_QSystemTrayIcon(QIcon,QObject*)\0"
    "icon\0new_QSystemTrayIcon(QIcon)\0obj\0"
    "delete_QSystemTrayIcon(QSystemTrayIcon*)\0"
    "QMenu*\0theWrappedObject\0"
    "contextMenu(QSystemTrayIcon*)\0bool\0"
    "theWrappedObject,event\0"
    "event(QSystemTrayIcon*,QEvent*)\0QRect\0"
    "geometry(QSystemTrayIcon*)\0QIcon\0"
    "icon(QSystemTrayIcon*)\0"
    "static_QSystemTrayIcon_isSystemTrayAvailable()\0"
    "isVisible(QSystemTrayIcon*)\0"
    "theWrappedObject,menu\0"
    "setContextMenu(QSystemTrayIcon*,QMenu*)\0"
    "theWrappedObject,icon\0"
    "setIcon(QSystemTrayIcon*,QIcon)\0"
    "theWrappedObject,tip\0"
    "setToolTip(QSystemTrayIcon*,QString)\0"
    "theWrappedObject,title,msg,icon,msecs\0"
    "showMessage(QSystemTrayIcon*,QString,QString,QSystemTrayIcon::MessageI"
    "con,int)\0"
    "theWrappedObject,title,msg,icon\0"
    "showMessage(QSystemTrayIcon*,QString,QString,QSystemTrayIcon::MessageI"
    "con)\0"
    "theWrappedObject,title,msg\0"
    "showMessage(QSystemTrayIcon*,QString,QString)\0"
    "static_QSystemTrayIcon_supportsMessages()\0"
    "QString\0toolTip(QSystemTrayIcon*)\0"
    "MessageIcon\0ActivationReason\0NoIcon\0"
    "Information\0Warning\0Critical\0Unknown\0"
    "Context\0DoubleClick\0Trigger\0MiddleClick\0"
};

void PythonQtWrapper_QSystemTrayIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSystemTrayIcon *_t = static_cast<PythonQtWrapper_QSystemTrayIcon *>(_o);
        switch (_id) {
        case 0: { QSystemTrayIcon* _r = _t->new_QSystemTrayIcon((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSystemTrayIcon**>(_a[0]) = _r; }  break;
        case 1: { QSystemTrayIcon* _r = _t->new_QSystemTrayIcon();
            if (_a[0]) *reinterpret_cast< QSystemTrayIcon**>(_a[0]) = _r; }  break;
        case 2: { QSystemTrayIcon* _r = _t->new_QSystemTrayIcon((*reinterpret_cast< const QIcon(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSystemTrayIcon**>(_a[0]) = _r; }  break;
        case 3: { QSystemTrayIcon* _r = _t->new_QSystemTrayIcon((*reinterpret_cast< const QIcon(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSystemTrayIcon**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSystemTrayIcon((*reinterpret_cast< QSystemTrayIcon*(*)>(_a[1]))); break;
        case 5: { QMenu* _r = _t->contextMenu((*reinterpret_cast< QSystemTrayIcon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->event((*reinterpret_cast< QSystemTrayIcon*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QRect _r = _t->geometry((*reinterpret_cast< QSystemTrayIcon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 8: { QIcon _r = _t->icon((*reinterpret_cast< QSystemTrayIcon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->static_QSystemTrayIcon_isSystemTrayAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isVisible((*reinterpret_cast< QSystemTrayIcon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->setContextMenu((*reinterpret_cast< QSystemTrayIcon*(*)>(_a[1])),(*reinterpret_cast< QMenu*(*)>(_a[2]))); break;
        case 12: _t->setIcon((*reinterpret_cast< QSystemTrayIcon*(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2]))); break;
        case 13: _t->setToolTip((*reinterpret_cast< QSystemTrayIcon*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->showMessage((*reinterpret_cast< QSystemTrayIcon*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QSystemTrayIcon::MessageIcon(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 15: _t->showMessage((*reinterpret_cast< QSystemTrayIcon*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QSystemTrayIcon::MessageIcon(*)>(_a[4]))); break;
        case 16: _t->showMessage((*reinterpret_cast< QSystemTrayIcon*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 17: { bool _r = _t->static_QSystemTrayIcon_supportsMessages();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->toolTip((*reinterpret_cast< QSystemTrayIcon*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSystemTrayIcon::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSystemTrayIcon::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSystemTrayIcon,
      qt_meta_data_PythonQtWrapper_QSystemTrayIcon, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSystemTrayIcon::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSystemTrayIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSystemTrayIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSystemTrayIcon))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSystemTrayIcon*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSystemTrayIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTabBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      66,   14, // methods
       0,    0, // properties
       2,  344, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      41,   34,   25,   24, 0x0a,
      63,   24,   25,   24, 0x2a,
      81,   77,   24,   24, 0x0a,
     137,  110,  106,   24, 0x0a,
     190,  168,  106,   24, 0x0a,
     239,  215,   24,   24, 0x0a,
     286,  269,  106,   24, 0x0a,
     302,  269,  106,   24, 0x0a,
     330,  269,  325,   24, 0x0a,
     353,  269,  325,   24, 0x0a,
     390,  269,  372,   24, 0x0a,
     410,  215,  325,   24, 0x0a,
     434,  269,  325,   24, 0x0a,
     454,  215,   24,   24, 0x0a,
     492,  269,  486,   24, 0x0a,
     544,  511,  106,   24, 0x0a,
     610,  582,  106,   24, 0x0a,
     642,  269,  325,   24, 0x0a,
     685,  662,  325,   24, 0x0a,
     712,  215,   24,   24, 0x0a,
     747,  269,  486,   24, 0x0a,
     773,  215,   24,   24, 0x0a,
     811,  215,   24,   24, 0x0a,
     850,  215,   24,   24, 0x0a,
     916,  891,   24,   24, 0x0a,
     942,  215,   24,   24, 0x0a,
     976,  662,   24,   24, 0x0a,
    1000,  215,   24,   24, 0x0a,
    1063,  269, 1036,   24, 0x0a,
    1120, 1099,   24,   24, 0x0a,
    1180, 1151,   24,   24, 0x0a,
    1207,  215,   24,   24, 0x0a,
    1273, 1248,   24,   24, 0x0a,
    1323, 1301,   24,   24, 0x0a,
    1376, 1351,   24,   24, 0x0a,
    1428, 1402,   24,   24, 0x0a,
    1517, 1494,   24,   24, 0x0a,
    1590, 1551,   24,   24, 0x0a,
    1678, 1650,   24,   24, 0x0a,
    1742, 1712,   24,   24, 0x0a,
    1803, 1775,   24,   24, 0x0a,
    1834,  582,   24,   24, 0x0a,
    1896, 1867,   24,   24, 0x0a,
    1960, 1933,   24,   24, 0x0a,
    1996,  582,   24,   24, 0x0a,
    2060, 2034,   24,   24, 0x0a,
    2119, 2091,   24,   24, 0x0a,
    2170,  269, 2155,   24, 0x0a,
    2186,  215,   24,   24, 0x0a,
    2218,  269,  486,   24, 0x0a,
    2258, 2237,  106,   24, 0x0a,
    2322, 2290, 2281,   24, 0x0a,
    2379,  662, 2370,   24, 0x0a,
    2407,  662, 2401,   24, 0x0a,
    2429,  662,   24,   24, 0x0a,
    2455,  269,   24,   24, 0x0a,
    2487,  662, 2481,   24, 0x0a,
    2509,  662,   24,   24, 0x0a,
    2534,  662,  486,   24, 0x0a,
    2568,  662, 2560,   24, 0x0a,
    2597,  662, 2590,   24, 0x0a,
    2624,  662, 2560,   24, 0x0a,
    2649,  662, 2560,   24, 0x0a,
    2676,  269,  325,   24, 0x0a,
    2699,  269,  325,   24, 0x0a,
    2750, 2727,   24,   24, 0x0a,

 // enums: name, flags, count, data
    2784, 0x0,    3,  352,
    2802, 0x0,    2,  358,

 // enum data: key, value
    2817, uint(PythonQtWrapper_QTabBar::SelectLeftTab),
    2831, uint(PythonQtWrapper_QTabBar::SelectRightTab),
    2846, uint(PythonQtWrapper_QTabBar::SelectPreviousTab),
    2864, uint(PythonQtWrapper_QTabBar::LeftSide),
    2873, uint(PythonQtWrapper_QTabBar::RightSide),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTabBar[] = {
    "PythonQtWrapper_QTabBar\0\0QTabBar*\0"
    "parent\0new_QTabBar(QWidget*)\0new_QTabBar()\0"
    "obj\0delete_QTabBar(QTabBar*)\0int\0"
    "theWrappedObject,icon,text\0"
    "addTab(QTabBar*,QIcon,QString)\0"
    "theWrappedObject,text\0addTab(QTabBar*,QString)\0"
    "theWrappedObject,arg__1\0"
    "changeEvent(QTabBar*,QEvent*)\0"
    "theWrappedObject\0count(QTabBar*)\0"
    "currentIndex(QTabBar*)\0bool\0"
    "documentMode(QTabBar*)\0drawBase(QTabBar*)\0"
    "Qt::TextElideMode\0elideMode(QTabBar*)\0"
    "event(QTabBar*,QEvent*)\0expanding(QTabBar*)\0"
    "hideEvent(QTabBar*,QHideEvent*)\0QSize\0"
    "iconSize(QTabBar*)\0theWrappedObject,index,icon,text\0"
    "insertTab(QTabBar*,int,QIcon,QString)\0"
    "theWrappedObject,index,text\0"
    "insertTab(QTabBar*,int,QString)\0"
    "isMovable(QTabBar*)\0theWrappedObject,index\0"
    "isTabEnabled(QTabBar*,int)\0"
    "keyPressEvent(QTabBar*,QKeyEvent*)\0"
    "minimumSizeHint(QTabBar*)\0"
    "mouseMoveEvent(QTabBar*,QMouseEvent*)\0"
    "mousePressEvent(QTabBar*,QMouseEvent*)\0"
    "mouseReleaseEvent(QTabBar*,QMouseEvent*)\0"
    "theWrappedObject,from,to\0"
    "moveTab(QTabBar*,int,int)\0"
    "paintEvent(QTabBar*,QPaintEvent*)\0"
    "removeTab(QTabBar*,int)\0"
    "resizeEvent(QTabBar*,QResizeEvent*)\0"
    "QTabBar::SelectionBehavior\0"
    "selectionBehaviorOnRemove(QTabBar*)\0"
    "theWrappedObject,set\0"
    "setDocumentMode(QTabBar*,bool)\0"
    "theWrappedObject,drawTheBase\0"
    "setDrawBase(QTabBar*,bool)\0"
    "setElideMode(QTabBar*,Qt::TextElideMode)\0"
    "theWrappedObject,enabled\0"
    "setExpanding(QTabBar*,bool)\0"
    "theWrappedObject,size\0setIconSize(QTabBar*,QSize)\0"
    "theWrappedObject,movable\0"
    "setMovable(QTabBar*,bool)\0"
    "theWrappedObject,behavior\0"
    "setSelectionBehaviorOnRemove(QTabBar*,QTabBar::SelectionBehavior)\0"
    "theWrappedObject,shape\0"
    "setShape(QTabBar*,QTabBar::Shape)\0"
    "theWrappedObject,index,position,widget\0"
    "setTabButton(QTabBar*,int,QTabBar::ButtonPosition,QWidget*)\0"
    "theWrappedObject,index,data\0"
    "setTabData(QTabBar*,int,QVariant)\0"
    "theWrappedObject,index,arg__2\0"
    "setTabEnabled(QTabBar*,int,bool)\0"
    "theWrappedObject,index,icon\0"
    "setTabIcon(QTabBar*,int,QIcon)\0"
    "setTabText(QTabBar*,int,QString)\0"
    "theWrappedObject,index,color\0"
    "setTabTextColor(QTabBar*,int,QColor)\0"
    "theWrappedObject,index,tip\0"
    "setTabToolTip(QTabBar*,int,QString)\0"
    "setTabWhatsThis(QTabBar*,int,QString)\0"
    "theWrappedObject,closable\0"
    "setTabsClosable(QTabBar*,bool)\0"
    "theWrappedObject,useButtons\0"
    "setUsesScrollButtons(QTabBar*,bool)\0"
    "QTabBar::Shape\0shape(QTabBar*)\0"
    "showEvent(QTabBar*,QShowEvent*)\0"
    "sizeHint(QTabBar*)\0theWrappedObject,pos\0"
    "tabAt(QTabBar*,QPoint)\0QWidget*\0"
    "theWrappedObject,index,position\0"
    "tabButton(QTabBar*,int,QTabBar::ButtonPosition)\0"
    "QVariant\0tabData(QTabBar*,int)\0QIcon\0"
    "tabIcon(QTabBar*,int)\0tabInserted(QTabBar*,int)\0"
    "tabLayoutChange(QTabBar*)\0QRect\0"
    "tabRect(QTabBar*,int)\0tabRemoved(QTabBar*,int)\0"
    "tabSizeHint(QTabBar*,int)\0QString\0"
    "tabText(QTabBar*,int)\0QColor\0"
    "tabTextColor(QTabBar*,int)\0"
    "tabToolTip(QTabBar*,int)\0"
    "tabWhatsThis(QTabBar*,int)\0"
    "tabsClosable(QTabBar*)\0"
    "usesScrollButtons(QTabBar*)\0"
    "theWrappedObject,event\0"
    "wheelEvent(QTabBar*,QWheelEvent*)\0"
    "SelectionBehavior\0ButtonPosition\0"
    "SelectLeftTab\0SelectRightTab\0"
    "SelectPreviousTab\0LeftSide\0RightSide\0"
};

void PythonQtWrapper_QTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTabBar *_t = static_cast<PythonQtWrapper_QTabBar *>(_o);
        switch (_id) {
        case 0: { QTabBar* _r = _t->new_QTabBar((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTabBar**>(_a[0]) = _r; }  break;
        case 1: { QTabBar* _r = _t->new_QTabBar();
            if (_a[0]) *reinterpret_cast< QTabBar**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTabBar((*reinterpret_cast< QTabBar*(*)>(_a[1]))); break;
        case 3: { int _r = _t->addTab((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->addTab((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->changeEvent((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 6: { int _r = _t->count((*reinterpret_cast< QTabBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->currentIndex((*reinterpret_cast< QTabBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->documentMode((*reinterpret_cast< QTabBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->drawBase((*reinterpret_cast< QTabBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { Qt::TextElideMode _r = _t->elideMode((*reinterpret_cast< QTabBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TextElideMode*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->event((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->expanding((*reinterpret_cast< QTabBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->hideEvent((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< QHideEvent*(*)>(_a[2]))); break;
        case 14: { QSize _r = _t->iconSize((*reinterpret_cast< QTabBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->insertTab((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QIcon(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->insertTab((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isMovable((*reinterpret_cast< QTabBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->isTabEnabled((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: _t->keyPressEvent((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 20: { QSize _r = _t->minimumSizeHint((*reinterpret_cast< QTabBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 21: _t->mouseMoveEvent((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 22: _t->mousePressEvent((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 23: _t->mouseReleaseEvent((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 24: _t->moveTab((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 25: _t->paintEvent((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 26: _t->removeTab((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: _t->resizeEvent((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 28: { QTabBar::SelectionBehavior _r = _t->selectionBehaviorOnRemove((*reinterpret_cast< QTabBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTabBar::SelectionBehavior*>(_a[0]) = _r; }  break;
        case 29: _t->setDocumentMode((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: _t->setDrawBase((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->setElideMode((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< Qt::TextElideMode(*)>(_a[2]))); break;
        case 32: _t->setExpanding((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 33: _t->setIconSize((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 34: _t->setMovable((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: _t->setSelectionBehaviorOnRemove((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< QTabBar::SelectionBehavior(*)>(_a[2]))); break;
        case 36: _t->setShape((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< QTabBar::Shape(*)>(_a[2]))); break;
        case 37: _t->setTabButton((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QTabBar::ButtonPosition(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4]))); break;
        case 38: _t->setTabData((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 39: _t->setTabEnabled((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 40: _t->setTabIcon((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QIcon(*)>(_a[3]))); break;
        case 41: _t->setTabText((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 42: _t->setTabTextColor((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 43: _t->setTabToolTip((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 44: _t->setTabWhatsThis((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 45: _t->setTabsClosable((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 46: _t->setUsesScrollButtons((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 47: { QTabBar::Shape _r = _t->shape((*reinterpret_cast< QTabBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTabBar::Shape*>(_a[0]) = _r; }  break;
        case 48: _t->showEvent((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< QShowEvent*(*)>(_a[2]))); break;
        case 49: { QSize _r = _t->sizeHint((*reinterpret_cast< QTabBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 50: { int _r = _t->tabAt((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 51: { QWidget* _r = _t->tabButton((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QTabBar::ButtonPosition(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 52: { QVariant _r = _t->tabData((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 53: { QIcon _r = _t->tabIcon((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 54: _t->tabInserted((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 55: _t->tabLayoutChange((*reinterpret_cast< QTabBar*(*)>(_a[1]))); break;
        case 56: { QRect _r = _t->tabRect((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 57: _t->tabRemoved((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 58: { QSize _r = _t->tabSizeHint((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 59: { QString _r = _t->tabText((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 60: { QColor _r = _t->tabTextColor((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 61: { QString _r = _t->tabToolTip((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 62: { QString _r = _t->tabWhatsThis((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 63: { bool _r = _t->tabsClosable((*reinterpret_cast< QTabBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 64: { bool _r = _t->usesScrollButtons((*reinterpret_cast< QTabBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 65: _t->wheelEvent((*reinterpret_cast< QTabBar*(*)>(_a[1])),(*reinterpret_cast< QWheelEvent*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTabBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTabBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTabBar,
      qt_meta_data_PythonQtWrapper_QTabBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTabBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTabBar))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTabBar*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 66)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 66;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTabWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
      93,   89,   27,   27, 0x0a,
     163,  128,  124,   27, 0x0a,
     237,  206,  124,   27, 0x0a,
     298,  274,   27,   27, 0x0a,
     348,  331,   27,   27, 0x0a,
     400,  376,  367,   27, 0x0a,
     437,  331,  367,   27, 0x2a,
     463,  331,  124,   27, 0x0a,
     482,  331,  124,   27, 0x0a,
     508,  331,  367,   27, 0x0a,
     540,  331,  535,   27, 0x0a,
     584,  331,  566,   27, 0x0a,
     607,  274,  535,   27, 0x0a,
     657,  634,  124,   27, 0x0a,
     695,  331,  689,   27, 0x0a,
     741,  717,  124,   27, 0x0a,
     812,  771,  124,   27, 0x0a,
     899,  862,  124,   27, 0x0a,
     943,  331,  535,   27, 0x0a,
     989,  966,  535,   27, 0x0a,
    1019,  274,   27,   27, 0x0a,
    1057,  331,  689,   27, 0x0a,
    1086,  274,   27,   27, 0x0a,
    1123,  966,   27,   27, 0x0a,
    1150,  274,   27,   27, 0x0a,
    1215, 1189,   27,   27, 0x0a,
    1283, 1264,   27,   27, 0x2a,
    1342, 1321,   27,   27, 0x0a,
    1376,  274,   27,   27, 0x0a,
    1442, 1420,   27,   27, 0x0a,
    1498, 1473,   27,   27, 0x0a,
    1557, 1527,   27,   27, 0x0a,
    1621, 1593,   27,   27, 0x0a,
    1655,  274,   27,   27, 0x0a,
    1726, 1707,   27,   27, 0x0a,
    1772, 1527,   27,   27, 0x0a,
    1835, 1808,   27,   27, 0x0a,
    1902, 1874,   27,   27, 0x0a,
    1970, 1943,   27,   27, 0x0a,
    2032, 2004,   27,   27, 0x0a,
    2071,  274,   27,   27, 0x0a,
    2106,  331,  689,   27, 0x0a,
    2134,  966, 2128,   27, 0x0a,
    2159,  966,   27,   27, 0x0a,
    2212,  331, 2188,   27, 0x0a,
    2237,  966,   27,   27, 0x0a,
    2286,  331, 2265,   27, 0x0a,
    2316,  966, 2308,   27, 0x0a,
    2341,  966, 2308,   27, 0x0a,
    2369,  966, 2308,   27, 0x0a,
    2399,  331,  535,   27, 0x0a,
    2425,  331,  535,   27, 0x0a,
    2456,  966,  367,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTabWidget[] = {
    "PythonQtWrapper_QTabWidget\0\0QTabWidget*\0"
    "parent\0new_QTabWidget(QWidget*)\0"
    "new_QTabWidget()\0obj\0"
    "delete_QTabWidget(QTabWidget*)\0int\0"
    "theWrappedObject,widget,icon,label\0"
    "addTab(QTabWidget*,QWidget*,QIcon,QString)\0"
    "theWrappedObject,widget,arg__2\0"
    "addTab(QTabWidget*,QWidget*,QString)\0"
    "theWrappedObject,arg__1\0"
    "changeEvent(QTabWidget*,QEvent*)\0"
    "theWrappedObject\0clear(QTabWidget*)\0"
    "QWidget*\0theWrappedObject,corner\0"
    "cornerWidget(QTabWidget*,Qt::Corner)\0"
    "cornerWidget(QTabWidget*)\0count(QTabWidget*)\0"
    "currentIndex(QTabWidget*)\0"
    "currentWidget(QTabWidget*)\0bool\0"
    "documentMode(QTabWidget*)\0Qt::TextElideMode\0"
    "elideMode(QTabWidget*)\0"
    "event(QTabWidget*,QEvent*)\0"
    "theWrappedObject,width\0"
    "heightForWidth(QTabWidget*,int)\0QSize\0"
    "iconSize(QTabWidget*)\0theWrappedObject,widget\0"
    "indexOf(QTabWidget*,QWidget*)\0"
    "theWrappedObject,index,widget,icon,label\0"
    "insertTab(QTabWidget*,int,QWidget*,QIcon,QString)\0"
    "theWrappedObject,index,widget,arg__3\0"
    "insertTab(QTabWidget*,int,QWidget*,QString)\0"
    "isMovable(QTabWidget*)\0theWrappedObject,index\0"
    "isTabEnabled(QTabWidget*,int)\0"
    "keyPressEvent(QTabWidget*,QKeyEvent*)\0"
    "minimumSizeHint(QTabWidget*)\0"
    "paintEvent(QTabWidget*,QPaintEvent*)\0"
    "removeTab(QTabWidget*,int)\0"
    "resizeEvent(QTabWidget*,QResizeEvent*)\0"
    "theWrappedObject,w,corner\0"
    "setCornerWidget(QTabWidget*,QWidget*,Qt::Corner)\0"
    "theWrappedObject,w\0"
    "setCornerWidget(QTabWidget*,QWidget*)\0"
    "theWrappedObject,set\0"
    "setDocumentMode(QTabWidget*,bool)\0"
    "setElideMode(QTabWidget*,Qt::TextElideMode)\0"
    "theWrappedObject,size\0"
    "setIconSize(QTabWidget*,QSize)\0"
    "theWrappedObject,movable\0"
    "setMovable(QTabWidget*,bool)\0"
    "theWrappedObject,index,arg__2\0"
    "setTabEnabled(QTabWidget*,int,bool)\0"
    "theWrappedObject,index,icon\0"
    "setTabIcon(QTabWidget*,int,QIcon)\0"
    "setTabPosition(QTabWidget*,QTabWidget::TabPosition)\0"
    "theWrappedObject,s\0"
    "setTabShape(QTabWidget*,QTabWidget::TabShape)\0"
    "setTabText(QTabWidget*,int,QString)\0"
    "theWrappedObject,index,tip\0"
    "setTabToolTip(QTabWidget*,int,QString)\0"
    "theWrappedObject,index,text\0"
    "setTabWhatsThis(QTabWidget*,int,QString)\0"
    "theWrappedObject,closeable\0"
    "setTabsClosable(QTabWidget*,bool)\0"
    "theWrappedObject,useButtons\0"
    "setUsesScrollButtons(QTabWidget*,bool)\0"
    "showEvent(QTabWidget*,QShowEvent*)\0"
    "sizeHint(QTabWidget*)\0QIcon\0"
    "tabIcon(QTabWidget*,int)\0"
    "tabInserted(QTabWidget*,int)\0"
    "QTabWidget::TabPosition\0"
    "tabPosition(QTabWidget*)\0"
    "tabRemoved(QTabWidget*,int)\0"
    "QTabWidget::TabShape\0tabShape(QTabWidget*)\0"
    "QString\0tabText(QTabWidget*,int)\0"
    "tabToolTip(QTabWidget*,int)\0"
    "tabWhatsThis(QTabWidget*,int)\0"
    "tabsClosable(QTabWidget*)\0"
    "usesScrollButtons(QTabWidget*)\0"
    "widget(QTabWidget*,int)\0"
};

void PythonQtWrapper_QTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTabWidget *_t = static_cast<PythonQtWrapper_QTabWidget *>(_o);
        switch (_id) {
        case 0: { QTabWidget* _r = _t->new_QTabWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTabWidget**>(_a[0]) = _r; }  break;
        case 1: { QTabWidget* _r = _t->new_QTabWidget();
            if (_a[0]) *reinterpret_cast< QTabWidget**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTabWidget((*reinterpret_cast< QTabWidget*(*)>(_a[1]))); break;
        case 3: { int _r = _t->addTab((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const QIcon(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->addTab((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->changeEvent((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 6: _t->clear((*reinterpret_cast< QTabWidget*(*)>(_a[1]))); break;
        case 7: { QWidget* _r = _t->cornerWidget((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::Corner(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 8: { QWidget* _r = _t->cornerWidget((*reinterpret_cast< QTabWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->count((*reinterpret_cast< QTabWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->currentIndex((*reinterpret_cast< QTabWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QWidget* _r = _t->currentWidget((*reinterpret_cast< QTabWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->documentMode((*reinterpret_cast< QTabWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { Qt::TextElideMode _r = _t->elideMode((*reinterpret_cast< QTabWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TextElideMode*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->event((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->heightForWidth((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { QSize _r = _t->iconSize((*reinterpret_cast< QTabWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->indexOf((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->insertTab((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])),(*reinterpret_cast< const QIcon(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->insertTab((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->isMovable((*reinterpret_cast< QTabWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isTabEnabled((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: _t->keyPressEvent((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 23: { QSize _r = _t->minimumSizeHint((*reinterpret_cast< QTabWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 24: _t->paintEvent((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 25: _t->removeTab((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->resizeEvent((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 27: _t->setCornerWidget((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< Qt::Corner(*)>(_a[3]))); break;
        case 28: _t->setCornerWidget((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 29: _t->setDocumentMode((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: _t->setElideMode((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::TextElideMode(*)>(_a[2]))); break;
        case 31: _t->setIconSize((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 32: _t->setMovable((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 33: _t->setTabEnabled((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 34: _t->setTabIcon((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QIcon(*)>(_a[3]))); break;
        case 35: _t->setTabPosition((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< QTabWidget::TabPosition(*)>(_a[2]))); break;
        case 36: _t->setTabShape((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< QTabWidget::TabShape(*)>(_a[2]))); break;
        case 37: _t->setTabText((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 38: _t->setTabToolTip((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 39: _t->setTabWhatsThis((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 40: _t->setTabsClosable((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 41: _t->setUsesScrollButtons((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 42: _t->showEvent((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< QShowEvent*(*)>(_a[2]))); break;
        case 43: { QSize _r = _t->sizeHint((*reinterpret_cast< QTabWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 44: { QIcon _r = _t->tabIcon((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 45: _t->tabInserted((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 46: { QTabWidget::TabPosition _r = _t->tabPosition((*reinterpret_cast< QTabWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTabWidget::TabPosition*>(_a[0]) = _r; }  break;
        case 47: _t->tabRemoved((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 48: { QTabWidget::TabShape _r = _t->tabShape((*reinterpret_cast< QTabWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTabWidget::TabShape*>(_a[0]) = _r; }  break;
        case 49: { QString _r = _t->tabText((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 50: { QString _r = _t->tabToolTip((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 51: { QString _r = _t->tabWhatsThis((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 52: { bool _r = _t->tabsClosable((*reinterpret_cast< QTabWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 53: { bool _r = _t->usesScrollButtons((*reinterpret_cast< QTabWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 54: { QWidget* _r = _t->widget((*reinterpret_cast< QTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTabWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTabWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTabWidget,
      qt_meta_data_PythonQtWrapper_QTabWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTabWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTabWidget))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTabWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTableView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
      93,   89,   27,   27, 0x0a,
     141,  124,   27,   27, 0x0a,
     188,  169,  165,   27, 0x0a,
     242,  214,  165,   27, 0x0a,
     298,  274,  165,   27, 0x0a,
     338,  274,  165,   27, 0x0a,
     401,  367,   27,   27, 0x0a,
     453,  124,   27,   27, 0x0a,
     493,  124,  480,   27, 0x0a,
     529,  124,  516,   27, 0x0a,
     559,  124,  165,   27, 0x0a,
     613,  589,   27,   27, 0x0a,
     687,  668,  656,   27, 0x0a,
     720,  274,  715,   27, 0x0a,
     752,  124,  715,   27, 0x0a,
     810,  787,  715,   27, 0x0a,
     870,  849,  715,   27, 0x0a,
     899,  124,  715,   27, 0x0a,
     948,  929,   27,   27, 0x0a,
    1004,  985,  165,   27, 0x0a,
    1027,  849,  165,   27, 0x0a,
    1054,  214,  165,   27, 0x0a,
    1083,  849,  165,   27, 0x0a,
    1143, 1120,   27,   27, 0x0a,
    1209, 1181,   27,   27, 0x0a,
    1273,  787,   27,   27, 0x2a,
    1326,  124, 1307,   27, 0x0a,
    1392, 1355,   27,   27, 0x0a,
    1481, 1452,   27,   27, 0x0a,
    1549, 1519,   27,   27, 0x0a,
    1609, 1585,   27,   27, 0x0a,
    1673, 1650,   27,   27, 0x0a,
    1736, 1712,   27,   27, 0x0a,
    1805, 1782,   27,   27, 0x0a,
    1847,  787,   27,   27, 0x0a,
    1913, 1885,   27,   27, 0x0a,
    1973, 1947,   27,   27, 0x0a,
    2038, 2008,   27,   27, 0x0a,
    2138, 2106,   27,   27, 0x0a,
    2190, 1585,   27,   27, 0x0a,
    2273, 2226,   27,   27, 0x0a,
    2310, 1712,   27,   27, 0x0a,
    2374, 2354,   27,   27, 0x0a,
    2404,  124,  715,   27, 0x0a,
    2426,  274,  165,   27, 0x0a,
    2461,  849,  165,   27, 0x0a,
    2523, 2493,   27,   27, 0x0a,
    2590, 2567,   27,   27, 0x0a,
    2627,  124,   27,   27, 0x0a,
    2657,  124,  516,   27, 0x0a,
    2685,  124,  165,   27, 0x0a,
    2713,  589,   27,   27, 0x0a,
    2775,  124, 2754,   27, 0x0a,
    2806,  787, 2800,   27, 0x0a,
    2877, 2850, 2842,   27, 0x0a,
    2930,  124,  715,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTableView[] = {
    "PythonQtWrapper_QTableView\0\0QTableView*\0"
    "parent\0new_QTableView(QWidget*)\0"
    "new_QTableView()\0obj\0"
    "delete_QTableView(QTableView*)\0"
    "theWrappedObject\0clearSpans(QTableView*)\0"
    "int\0theWrappedObject,x\0columnAt(QTableView*,int)\0"
    "theWrappedObject,row,column\0"
    "columnSpan(QTableView*,int,int)\0"
    "theWrappedObject,column\0"
    "columnViewportPosition(QTableView*,int)\0"
    "columnWidth(QTableView*,int)\0"
    "theWrappedObject,current,previous\0"
    "currentChanged(QTableView*,QModelIndex,QModelIndex)\0"
    "doItemsLayout(QTableView*)\0Qt::PenStyle\0"
    "gridStyle(QTableView*)\0QHeaderView*\0"
    "horizontalHeader(QTableView*)\0"
    "horizontalOffset(QTableView*)\0"
    "theWrappedObject,action\0"
    "horizontalScrollbarAction(QTableView*,int)\0"
    "QModelIndex\0theWrappedObject,p\0"
    "indexAt(QTableView*,QPoint)\0bool\0"
    "isColumnHidden(QTableView*,int)\0"
    "isCornerButtonEnabled(QTableView*)\0"
    "theWrappedObject,index\0"
    "isIndexHidden(QTableView*,QModelIndex)\0"
    "theWrappedObject,row\0isRowHidden(QTableView*,int)\0"
    "isSortingEnabled(QTableView*)\0"
    "theWrappedObject,e\0"
    "paintEvent(QTableView*,QPaintEvent*)\0"
    "theWrappedObject,y\0rowAt(QTableView*,int)\0"
    "rowHeight(QTableView*,int)\0"
    "rowSpan(QTableView*,int,int)\0"
    "rowViewportPosition(QTableView*,int)\0"
    "theWrappedObject,dx,dy\0"
    "scrollContentsBy(QTableView*,int,int)\0"
    "theWrappedObject,index,hint\0"
    "scrollTo(QTableView*,QModelIndex,QAbstractItemView::ScrollHint)\0"
    "scrollTo(QTableView*,QModelIndex)\0"
    "QList<QModelIndex>\0selectedIndexes(QTableView*)\0"
    "theWrappedObject,selected,deselected\0"
    "selectionChanged(QTableView*,QItemSelection,QItemSelection)\0"
    "theWrappedObject,column,hide\0"
    "setColumnHidden(QTableView*,int,bool)\0"
    "theWrappedObject,column,width\0"
    "setColumnWidth(QTableView*,int,int)\0"
    "theWrappedObject,enable\0"
    "setCornerButtonEnabled(QTableView*,bool)\0"
    "theWrappedObject,style\0"
    "setGridStyle(QTableView*,Qt::PenStyle)\0"
    "theWrappedObject,header\0"
    "setHorizontalHeader(QTableView*,QHeaderView*)\0"
    "theWrappedObject,model\0"
    "setModel(QTableView*,QAbstractItemModel*)\0"
    "setRootIndex(QTableView*,QModelIndex)\0"
    "theWrappedObject,row,height\0"
    "setRowHeight(QTableView*,int,int)\0"
    "theWrappedObject,row,hide\0"
    "setRowHidden(QTableView*,int,bool)\0"
    "theWrappedObject,rect,command\0"
    "setSelection(QTableView*,QRect,QItemSelectionModel::SelectionFlags)\0"
    "theWrappedObject,selectionModel\0"
    "setSelectionModel(QTableView*,QItemSelectionModel*)\0"
    "setSortingEnabled(QTableView*,bool)\0"
    "theWrappedObject,row,column,rowSpan,columnSpan\0"
    "setSpan(QTableView*,int,int,int,int)\0"
    "setVerticalHeader(QTableView*,QHeaderView*)\0"
    "theWrappedObject,on\0setWordWrap(QTableView*,bool)\0"
    "showGrid(QTableView*)\0"
    "sizeHintForColumn(QTableView*,int)\0"
    "sizeHintForRow(QTableView*,int)\0"
    "theWrappedObject,column,order\0"
    "sortByColumn(QTableView*,int,Qt::SortOrder)\0"
    "theWrappedObject,event\0"
    "timerEvent(QTableView*,QTimerEvent*)\0"
    "updateGeometries(QTableView*)\0"
    "verticalHeader(QTableView*)\0"
    "verticalOffset(QTableView*)\0"
    "verticalScrollbarAction(QTableView*,int)\0"
    "QStyleOptionViewItem\0viewOptions(QTableView*)\0"
    "QRect\0visualRect(QTableView*,QModelIndex)\0"
    "QRegion\0theWrappedObject,selection\0"
    "visualRegionForSelection(QTableView*,QItemSelection)\0"
    "wordWrap(QTableView*)\0"
};

void PythonQtWrapper_QTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTableView *_t = static_cast<PythonQtWrapper_QTableView *>(_o);
        switch (_id) {
        case 0: { QTableView* _r = _t->new_QTableView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTableView**>(_a[0]) = _r; }  break;
        case 1: { QTableView* _r = _t->new_QTableView();
            if (_a[0]) *reinterpret_cast< QTableView**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTableView((*reinterpret_cast< QTableView*(*)>(_a[1]))); break;
        case 3: _t->clearSpans((*reinterpret_cast< QTableView*(*)>(_a[1]))); break;
        case 4: { int _r = _t->columnAt((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->columnSpan((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->columnViewportPosition((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->columnWidth((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: _t->currentChanged((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3]))); break;
        case 9: _t->doItemsLayout((*reinterpret_cast< QTableView*(*)>(_a[1]))); break;
        case 10: { Qt::PenStyle _r = _t->gridStyle((*reinterpret_cast< QTableView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::PenStyle*>(_a[0]) = _r; }  break;
        case 11: { QHeaderView* _r = _t->horizontalHeader((*reinterpret_cast< QTableView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHeaderView**>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->horizontalOffset((*reinterpret_cast< QTableView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: _t->horizontalScrollbarAction((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: { QModelIndex _r = _t->indexAt((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isColumnHidden((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isCornerButtonEnabled((*reinterpret_cast< QTableView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isIndexHidden((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->isRowHidden((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->isSortingEnabled((*reinterpret_cast< QTableView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: _t->paintEvent((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 21: { int _r = _t->rowAt((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->rowHeight((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->rowSpan((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->rowViewportPosition((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: _t->scrollContentsBy((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 26: _t->scrollTo((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< QAbstractItemView::ScrollHint(*)>(_a[3]))); break;
        case 27: _t->scrollTo((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 28: { QList<QModelIndex> _r = _t->selectedIndexes((*reinterpret_cast< QTableView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 29: _t->selectionChanged((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2])),(*reinterpret_cast< const QItemSelection(*)>(_a[3]))); break;
        case 30: _t->setColumnHidden((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 31: _t->setColumnWidth((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 32: _t->setCornerButtonEnabled((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 33: _t->setGridStyle((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< Qt::PenStyle(*)>(_a[2]))); break;
        case 34: _t->setHorizontalHeader((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< QHeaderView*(*)>(_a[2]))); break;
        case 35: _t->setModel((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemModel*(*)>(_a[2]))); break;
        case 36: _t->setRootIndex((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 37: _t->setRowHeight((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 38: _t->setRowHidden((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 39: _t->setSelection((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[3]))); break;
        case 40: _t->setSelectionModel((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel*(*)>(_a[2]))); break;
        case 41: _t->setSortingEnabled((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 42: _t->setSpan((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 43: _t->setVerticalHeader((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< QHeaderView*(*)>(_a[2]))); break;
        case 44: _t->setWordWrap((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 45: { bool _r = _t->showGrid((*reinterpret_cast< QTableView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { int _r = _t->sizeHintForColumn((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 47: { int _r = _t->sizeHintForRow((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 48: _t->sortByColumn((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 49: _t->timerEvent((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< QTimerEvent*(*)>(_a[2]))); break;
        case 50: _t->updateGeometries((*reinterpret_cast< QTableView*(*)>(_a[1]))); break;
        case 51: { QHeaderView* _r = _t->verticalHeader((*reinterpret_cast< QTableView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHeaderView**>(_a[0]) = _r; }  break;
        case 52: { int _r = _t->verticalOffset((*reinterpret_cast< QTableView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 53: _t->verticalScrollbarAction((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 54: { QStyleOptionViewItem _r = _t->viewOptions((*reinterpret_cast< QTableView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItem*>(_a[0]) = _r; }  break;
        case 55: { QRect _r = _t->visualRect((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 56: { QRegion _r = _t->visualRegionForSelection((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 57: { bool _r = _t->wordWrap((*reinterpret_cast< QTableView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTableView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTableView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTableView,
      qt_meta_data_PythonQtWrapper_QTableView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTableView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTableView))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTableView*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTableWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      53,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      51,   44,   30,   29, 0x0a,
      78,   29,   30,   29, 0x2a,
     117,   97,   30,   29, 0x0a,
     165,  152,   30,   29, 0x2a,
     195,  191,   29,   29, 0x0a,
     267,  239,  230,   29, 0x0a,
     323,  301,   29,   29, 0x0a,
     382,  301,  378,   29, 0x0a,
     445,  428,  378,   29, 0x0a,
     472,  428,  378,   29, 0x0a,
     519,  428,  501,   29, 0x0a,
     546,  428,  378,   29, 0x0a,
     595,  572,   29,   29, 0x0a,
     677,  637,  632,   29, 0x0a,
     745,  301,   29,   29, 0x0a,
     806,  787,  632,   29, 0x0a,
     888,  860,  835,   29, 0x0a,
     960,  936,  501,   29, 0x0a,
    1000,  239,  501,   29, 0x0a,
    1047, 1028,  501,   29, 0x0a,
    1097, 1076,  501,   29, 0x0a,
    1151,  428, 1127,   29, 0x0a,
    1192,  428, 1180,   29, 0x0a,
    1217,  301,   29,   29, 0x0a,
    1271,  239,   29,   29, 0x0a,
    1311,  301,  378,   29, 0x0a,
    1354,  428,  378,   29, 0x0a,
    1378,  428,  835,   29, 0x0a,
    1441,  428, 1407,   29, 0x0a,
    1506, 1471,   29,   29, 0x0a,
    1577, 1552,   29,   29, 0x0a,
    1611,  239,   29,   29, 0x0a,
    1685, 1649,   29,   29, 0x0a,
    1759,  301,   29,   29, 0x0a,
    1837, 1807,   29,   29, 0x0a,
    1950, 1921,   29,   29, 0x0a,
    2035, 2011,   29,   29, 0x0a,
    2121, 2088,   29,   29, 0x0a,
    2170,  301,   29,   29, 0x0a,
    2256, 2226,   29,   29, 0x0a,
    2342, 2320,   29,   29, 0x0a,
    2399, 2373,   29,   29, 0x0a,
    2458, 2011,   29,   29, 0x0a,
    2539, 2509,   29,   29, 0x0a,
    2582,  936,   29,   29, 0x2a,
    2627,  428, 2611,   29, 0x0a,
    2663,  936,  501,   29, 0x0a,
    2707,  239,  501,   29, 0x0a,
    2760, 2739,  501,   29, 0x0a,
    2802, 2739,  501,   29, 0x0a,
    2871, 2840,  378,   29, 0x0a,
    2909,  301, 2903,   29, 0x0a,
    2991, 2963,  378,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTableWidget[] = {
    "PythonQtWrapper_QTableWidget\0\0"
    "QTableWidget*\0parent\0new_QTableWidget(QWidget*)\0"
    "new_QTableWidget()\0rows,columns,parent\0"
    "new_QTableWidget(int,int,QWidget*)\0"
    "rows,columns\0new_QTableWidget(int,int)\0"
    "obj\0delete_QTableWidget(QTableWidget*)\0"
    "QWidget*\0theWrappedObject,row,column\0"
    "cellWidget(QTableWidget*,int,int)\0"
    "theWrappedObject,item\0"
    "closePersistentEditor(QTableWidget*,QTableWidgetItem*)\0"
    "int\0column(QTableWidget*,const QTableWidgetItem*)\0"
    "theWrappedObject\0columnCount(QTableWidget*)\0"
    "currentColumn(QTableWidget*)\0"
    "QTableWidgetItem*\0currentItem(QTableWidget*)\0"
    "currentRow(QTableWidget*)\0"
    "theWrappedObject,event\0"
    "dropEvent(QTableWidget*,QDropEvent*)\0"
    "bool\0theWrappedObject,row,column,data,action\0"
    "dropMimeData(QTableWidget*,int,int,const QMimeData*,Qt::DropAction)\0"
    "editItem(QTableWidget*,QTableWidgetItem*)\0"
    "theWrappedObject,e\0event(QTableWidget*,QEvent*)\0"
    "QList<QTableWidgetItem*>\0"
    "theWrappedObject,text,flags\0"
    "findItems(QTableWidget*,QString,Qt::MatchFlags)\0"
    "theWrappedObject,column\0"
    "horizontalHeaderItem(QTableWidget*,int)\0"
    "item(QTableWidget*,int,int)\0"
    "theWrappedObject,p\0itemAt(QTableWidget*,QPoint)\0"
    "theWrappedObject,x,y\0itemAt(QTableWidget*,int,int)\0"
    "const QTableWidgetItem*\0"
    "itemPrototype(QTableWidget*)\0QStringList\0"
    "mimeTypes(QTableWidget*)\0"
    "openPersistentEditor(QTableWidget*,QTableWidgetItem*)\0"
    "removeCellWidget(QTableWidget*,int,int)\0"
    "row(QTableWidget*,const QTableWidgetItem*)\0"
    "rowCount(QTableWidget*)\0"
    "selectedItems(QTableWidget*)\0"
    "QList<QTableWidgetSelectionRange>\0"
    "selectedRanges(QTableWidget*)\0"
    "theWrappedObject,row,column,widget\0"
    "setCellWidget(QTableWidget*,int,int,QWidget*)\0"
    "theWrappedObject,columns\0"
    "setColumnCount(QTableWidget*,int)\0"
    "setCurrentCell(QTableWidget*,int,int)\0"
    "theWrappedObject,row,column,command\0"
    "setCurrentCell(QTableWidget*,int,int,QItemSelectionModel::SelectionFla"
    "gs)\0"
    "setCurrentItem(QTableWidget*,QTableWidgetItem*)\0"
    "theWrappedObject,item,command\0"
    "setCurrentItem(QTableWidget*,QTableWidgetItem*,QItemSelectionModel::Se"
    "lectionFlags)\0"
    "theWrappedObject,column,item\0"
    "setHorizontalHeaderItem(QTableWidget*,int,QTableWidgetItem*)\0"
    "theWrappedObject,labels\0"
    "setHorizontalHeaderLabels(QTableWidget*,QStringList)\0"
    "theWrappedObject,row,column,item\0"
    "setItem(QTableWidget*,int,int,QTableWidgetItem*)\0"
    "setItemPrototype(QTableWidget*,const QTableWidgetItem*)\0"
    "theWrappedObject,range,select\0"
    "setRangeSelected(QTableWidget*,QTableWidgetSelectionRange,bool)\0"
    "theWrappedObject,rows\0"
    "setRowCount(QTableWidget*,int)\0"
    "theWrappedObject,row,item\0"
    "setVerticalHeaderItem(QTableWidget*,int,QTableWidgetItem*)\0"
    "setVerticalHeaderLabels(QTableWidget*,QStringList)\0"
    "theWrappedObject,column,order\0"
    "sortItems(QTableWidget*,int,Qt::SortOrder)\0"
    "sortItems(QTableWidget*,int)\0"
    "Qt::DropActions\0supportedDropActions(QTableWidget*)\0"
    "takeHorizontalHeaderItem(QTableWidget*,int)\0"
    "takeItem(QTableWidget*,int,int)\0"
    "theWrappedObject,row\0"
    "takeVerticalHeaderItem(QTableWidget*,int)\0"
    "verticalHeaderItem(QTableWidget*,int)\0"
    "theWrappedObject,logicalColumn\0"
    "visualColumn(QTableWidget*,int)\0QRect\0"
    "visualItemRect(QTableWidget*,const QTableWidgetItem*)\0"
    "theWrappedObject,logicalRow\0"
    "visualRow(QTableWidget*,int)\0"
};

void PythonQtWrapper_QTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTableWidget *_t = static_cast<PythonQtWrapper_QTableWidget *>(_o);
        switch (_id) {
        case 0: { QTableWidget* _r = _t->new_QTableWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTableWidget**>(_a[0]) = _r; }  break;
        case 1: { QTableWidget* _r = _t->new_QTableWidget();
            if (_a[0]) *reinterpret_cast< QTableWidget**>(_a[0]) = _r; }  break;
        case 2: { QTableWidget* _r = _t->new_QTableWidget((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTableWidget**>(_a[0]) = _r; }  break;
        case 3: { QTableWidget* _r = _t->new_QTableWidget((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTableWidget**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QTableWidget((*reinterpret_cast< QTableWidget*(*)>(_a[1]))); break;
        case 5: { QWidget* _r = _t->cellWidget((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 6: _t->closePersistentEditor((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 7: { int _r = _t->column((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< const QTableWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->columnCount((*reinterpret_cast< QTableWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->currentColumn((*reinterpret_cast< QTableWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QTableWidgetItem* _r = _t->currentItem((*reinterpret_cast< QTableWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->currentRow((*reinterpret_cast< QTableWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: _t->dropEvent((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2]))); break;
        case 13: { bool _r = _t->dropMimeData((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QMimeData*(*)>(_a[4])),(*reinterpret_cast< Qt::DropAction(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->editItem((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 15: { bool _r = _t->event((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { QList<QTableWidgetItem*> _r = _t->findItems((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::MatchFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QTableWidgetItem*>*>(_a[0]) = _r; }  break;
        case 17: { QTableWidgetItem* _r = _t->horizontalHeaderItem((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 18: { QTableWidgetItem* _r = _t->item((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 19: { QTableWidgetItem* _r = _t->itemAt((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 20: { QTableWidgetItem* _r = _t->itemAt((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 21: { const QTableWidgetItem* _r = _t->itemPrototype((*reinterpret_cast< QTableWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 22: { QStringList _r = _t->mimeTypes((*reinterpret_cast< QTableWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 23: _t->openPersistentEditor((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 24: _t->removeCellWidget((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 25: { int _r = _t->row((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< const QTableWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->rowCount((*reinterpret_cast< QTableWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { QList<QTableWidgetItem*> _r = _t->selectedItems((*reinterpret_cast< QTableWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QTableWidgetItem*>*>(_a[0]) = _r; }  break;
        case 28: { QList<QTableWidgetSelectionRange> _r = _t->selectedRanges((*reinterpret_cast< QTableWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QTableWidgetSelectionRange>*>(_a[0]) = _r; }  break;
        case 29: _t->setCellWidget((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4]))); break;
        case 30: _t->setColumnCount((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->setCurrentCell((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 32: _t->setCurrentCell((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[4]))); break;
        case 33: _t->setCurrentItem((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 34: _t->setCurrentItem((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[3]))); break;
        case 35: _t->setHorizontalHeaderItem((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[3]))); break;
        case 36: _t->setHorizontalHeaderLabels((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 37: _t->setItem((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[4]))); break;
        case 38: _t->setItemPrototype((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< const QTableWidgetItem*(*)>(_a[2]))); break;
        case 39: _t->setRangeSelected((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< const QTableWidgetSelectionRange(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 40: _t->setRowCount((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 41: _t->setVerticalHeaderItem((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[3]))); break;
        case 42: _t->setVerticalHeaderLabels((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 43: _t->sortItems((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 44: _t->sortItems((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: { Qt::DropActions _r = _t->supportedDropActions((*reinterpret_cast< QTableWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::DropActions*>(_a[0]) = _r; }  break;
        case 46: { QTableWidgetItem* _r = _t->takeHorizontalHeaderItem((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 47: { QTableWidgetItem* _r = _t->takeItem((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 48: { QTableWidgetItem* _r = _t->takeVerticalHeaderItem((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 49: { QTableWidgetItem* _r = _t->verticalHeaderItem((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 50: { int _r = _t->visualColumn((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 51: { QRect _r = _t->visualItemRect((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< const QTableWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 52: { int _r = _t->visualRow((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTableWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTableWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTableWidget,
      qt_meta_data_PythonQtWrapper_QTableWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTableWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTableWidget))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTableWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTableWidgetItem[] = {

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
      67,   52,   34,   33, 0x0a,
     117,  107,   34,   33, 0x2a,
     163,  153,   34,   33, 0x0a,
     202,  197,   34,   33, 0x2a,
     237,  232,   34,   33, 0x0a,
     263,   33,   34,   33, 0x2a,
     290,  286,   33,   33, 0x0a,
     357,  340,  333,   33, 0x0a,
     402,  340,  387,   33, 0x0a,
     432,  340,   34,   33, 0x0a,
     461,  340,  457,   33, 0x0a,
     518,  496,  487,   33, 0x0a,
     560,  340,  546,   33, 0x0a,
     591,  340,  585,   33, 0x0a,
     615,  340,  333,   33, 0x0a,
     651,  340,  645,   33, 0x0a,
     680,  340,  675,   33, 0x0a,
     731,  710,   33,   33, 0x0a,
     791,  771,   33,   33, 0x0a,
     832,  340,  457,   33, 0x0a,
     878,  855,   33,   33, 0x0a,
     941,  918,   33,   33, 0x0a,
    1017,  989,   33,   33, 0x0a,
    1080, 1057,   33,   33, 0x0a,
    1144, 1122,   33,   33, 0x0a,
    1177,  855,   33,   33, 0x0a,
    1239, 1217,   33,   33, 0x0a,
    1296, 1272,   33,   33, 0x0a,
    1354, 1332,   33,   33, 0x0a,
    1418, 1391,   33,   33, 0x0a,
    1480, 1458,   33,   33, 0x0a,
    1542, 1515,   33,   33, 0x0a,
    1607, 1582,   33,   33, 0x0a,
    1672, 1645,   33,   33, 0x0a,
    1718,  340, 1712,   33, 0x0a,
    1754,  340, 1746,   33, 0x0a,
    1797,  340, 1783,   33, 0x0a,
    1828,  340, 1746,   33, 0x0a,
    1852,  340,  457,   33, 0x0a,
    1885,  340, 1746,   33, 0x0a,
    1912,  340,  457,   33, 0x0a,
    1936,  340, 1746,   33, 0x0a,

 // enums: name, flags, count, data
    1965, 0x0,    2,  228,

 // enum data: key, value
    1974, uint(PythonQtWrapper_QTableWidgetItem::Type),
    1979, uint(PythonQtWrapper_QTableWidgetItem::UserType),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTableWidgetItem[] = {
    "PythonQtWrapper_QTableWidgetItem\0\0"
    "QTableWidgetItem*\0icon,text,type\0"
    "new_QTableWidgetItem(QIcon,QString,int)\0"
    "icon,text\0new_QTableWidgetItem(QIcon,QString)\0"
    "text,type\0new_QTableWidgetItem(QString,int)\0"
    "text\0new_QTableWidgetItem(QString)\0"
    "type\0new_QTableWidgetItem(int)\0"
    "new_QTableWidgetItem()\0obj\0"
    "delete_QTableWidgetItem(QTableWidgetItem*)\0"
    "QBrush\0theWrappedObject\0"
    "background(QTableWidgetItem*)\0"
    "Qt::CheckState\0checkState(QTableWidgetItem*)\0"
    "clone(QTableWidgetItem*)\0int\0"
    "column(QTableWidgetItem*)\0QVariant\0"
    "theWrappedObject,role\0data(QTableWidgetItem*,int)\0"
    "Qt::ItemFlags\0flags(QTableWidgetItem*)\0"
    "QFont\0font(QTableWidgetItem*)\0"
    "foreground(QTableWidgetItem*)\0QIcon\0"
    "icon(QTableWidgetItem*)\0bool\0"
    "isSelected(QTableWidgetItem*)\0"
    "theWrappedObject,out\0"
    "writeTo(QTableWidgetItem*,QDataStream&)\0"
    "theWrappedObject,in\0"
    "readFrom(QTableWidgetItem*,QDataStream&)\0"
    "row(QTableWidgetItem*)\0theWrappedObject,brush\0"
    "setBackground(QTableWidgetItem*,QBrush)\0"
    "theWrappedObject,state\0"
    "setCheckState(QTableWidgetItem*,Qt::CheckState)\0"
    "theWrappedObject,role,value\0"
    "setData(QTableWidgetItem*,int,QVariant)\0"
    "theWrappedObject,flags\0"
    "setFlags(QTableWidgetItem*,Qt::ItemFlags)\0"
    "theWrappedObject,font\0"
    "setFont(QTableWidgetItem*,QFont)\0"
    "setForeground(QTableWidgetItem*,QBrush)\0"
    "theWrappedObject,icon\0"
    "setIcon(QTableWidgetItem*,QIcon)\0"
    "theWrappedObject,select\0"
    "setSelected(QTableWidgetItem*,bool)\0"
    "theWrappedObject,size\0"
    "setSizeHint(QTableWidgetItem*,QSize)\0"
    "theWrappedObject,statusTip\0"
    "setStatusTip(QTableWidgetItem*,QString)\0"
    "theWrappedObject,text\0"
    "setText(QTableWidgetItem*,QString)\0"
    "theWrappedObject,alignment\0"
    "setTextAlignment(QTableWidgetItem*,int)\0"
    "theWrappedObject,toolTip\0"
    "setToolTip(QTableWidgetItem*,QString)\0"
    "theWrappedObject,whatsThis\0"
    "setWhatsThis(QTableWidgetItem*,QString)\0"
    "QSize\0sizeHint(QTableWidgetItem*)\0"
    "QString\0statusTip(QTableWidgetItem*)\0"
    "QTableWidget*\0tableWidget(QTableWidgetItem*)\0"
    "text(QTableWidgetItem*)\0"
    "textAlignment(QTableWidgetItem*)\0"
    "toolTip(QTableWidgetItem*)\0"
    "type(QTableWidgetItem*)\0"
    "whatsThis(QTableWidgetItem*)\0ItemType\0"
    "Type\0UserType\0"
};

void PythonQtWrapper_QTableWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTableWidgetItem *_t = static_cast<PythonQtWrapper_QTableWidgetItem *>(_o);
        switch (_id) {
        case 0: { QTableWidgetItem* _r = _t->new_QTableWidgetItem((*reinterpret_cast< const QIcon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 1: { QTableWidgetItem* _r = _t->new_QTableWidgetItem((*reinterpret_cast< const QIcon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 2: { QTableWidgetItem* _r = _t->new_QTableWidgetItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 3: { QTableWidgetItem* _r = _t->new_QTableWidgetItem((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 4: { QTableWidgetItem* _r = _t->new_QTableWidgetItem((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 5: { QTableWidgetItem* _r = _t->new_QTableWidgetItem();
            if (_a[0]) *reinterpret_cast< QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QTableWidgetItem((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 7: { QBrush _r = _t->background((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 8: { Qt::CheckState _r = _t->checkState((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::CheckState*>(_a[0]) = _r; }  break;
        case 9: { QTableWidgetItem* _r = _t->clone((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTableWidgetItem**>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->column((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QVariant _r = _t->data((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 12: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 13: { QFont _r = _t->font((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 14: { QBrush _r = _t->foreground((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 15: { QIcon _r = _t->icon((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isSelected((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: _t->writeTo((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 18: _t->readFrom((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 19: { int _r = _t->row((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: _t->setBackground((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2]))); break;
        case 21: _t->setCheckState((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< Qt::CheckState(*)>(_a[2]))); break;
        case 22: _t->setData((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 23: _t->setFlags((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< Qt::ItemFlags(*)>(_a[2]))); break;
        case 24: _t->setFont((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2]))); break;
        case 25: _t->setForeground((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2]))); break;
        case 26: _t->setIcon((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2]))); break;
        case 27: _t->setSelected((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->setSizeHint((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 29: _t->setStatusTip((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: _t->setText((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 31: _t->setTextAlignment((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->setToolTip((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 33: _t->setWhatsThis((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 34: { QSize _r = _t->sizeHint((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 35: { QString _r = _t->statusTip((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 36: { QTableWidget* _r = _t->tableWidget((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTableWidget**>(_a[0]) = _r; }  break;
        case 37: { QString _r = _t->text((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 38: { int _r = _t->textAlignment((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 39: { QString _r = _t->toolTip((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 40: { int _r = _t->type((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 41: { QString _r = _t->whatsThis((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTableWidgetItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTableWidgetItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTableWidgetItem,
      qt_meta_data_PythonQtWrapper_QTableWidgetItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTableWidgetItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTableWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTableWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTableWidgetItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTableWidgetItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTableWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTableWidgetSelectionRange[] = {

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
      72,   43,   44,   43, 0x0a,
     111,  105,   44,   43, 0x0a,
     192,  170,   44,   43, 0x0a,
     244,  240,   43,   43, 0x0a,
     328,  311,  307,   43, 0x0a,
     367,  311,  307,   43, 0x0a,
     408,  311,  307,   43, 0x0a,
     448,  311,  307,   43, 0x0a,
     489,  311,  307,   43, 0x0a,
     527,  311,  307,   43, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTableWidgetSelectionRange[] = {
    "PythonQtWrapper_QTableWidgetSelectionRange\0"
    "\0QTableWidgetSelectionRange*\0"
    "new_QTableWidgetSelectionRange()\0other\0"
    "new_QTableWidgetSelectionRange(QTableWidgetSelectionRange)\0"
    "top,left,bottom,right\0"
    "new_QTableWidgetSelectionRange(int,int,int,int)\0"
    "obj\0delete_QTableWidgetSelectionRange(QTableWidgetSelectionRange*)\0"
    "int\0theWrappedObject\0"
    "bottomRow(QTableWidgetSelectionRange*)\0"
    "columnCount(QTableWidgetSelectionRange*)\0"
    "leftColumn(QTableWidgetSelectionRange*)\0"
    "rightColumn(QTableWidgetSelectionRange*)\0"
    "rowCount(QTableWidgetSelectionRange*)\0"
    "topRow(QTableWidgetSelectionRange*)\0"
};

void PythonQtWrapper_QTableWidgetSelectionRange::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTableWidgetSelectionRange *_t = static_cast<PythonQtWrapper_QTableWidgetSelectionRange *>(_o);
        switch (_id) {
        case 0: { QTableWidgetSelectionRange* _r = _t->new_QTableWidgetSelectionRange();
            if (_a[0]) *reinterpret_cast< QTableWidgetSelectionRange**>(_a[0]) = _r; }  break;
        case 1: { QTableWidgetSelectionRange* _r = _t->new_QTableWidgetSelectionRange((*reinterpret_cast< const QTableWidgetSelectionRange(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTableWidgetSelectionRange**>(_a[0]) = _r; }  break;
        case 2: { QTableWidgetSelectionRange* _r = _t->new_QTableWidgetSelectionRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QTableWidgetSelectionRange**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTableWidgetSelectionRange((*reinterpret_cast< QTableWidgetSelectionRange*(*)>(_a[1]))); break;
        case 4: { int _r = _t->bottomRow((*reinterpret_cast< QTableWidgetSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->columnCount((*reinterpret_cast< QTableWidgetSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->leftColumn((*reinterpret_cast< QTableWidgetSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->rightColumn((*reinterpret_cast< QTableWidgetSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->rowCount((*reinterpret_cast< QTableWidgetSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->topRow((*reinterpret_cast< QTableWidgetSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTableWidgetSelectionRange::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTableWidgetSelectionRange::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTableWidgetSelectionRange,
      qt_meta_data_PythonQtWrapper_QTableWidgetSelectionRange, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTableWidgetSelectionRange::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTableWidgetSelectionRange::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTableWidgetSelectionRange::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTableWidgetSelectionRange))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTableWidgetSelectionRange*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTableWidgetSelectionRange::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTabletEvent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       2,  114, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
     163,   44,   30,   29, 0x0a,
     287,  283,   29,   29, 0x0a,
     366,  349,  322,   29, 0x0a,
     402,  349,  388,   29, 0x0a,
     431,  349,  427,   29, 0x0a,
     454,  349,  427,   29, 0x0a,
     492,  349,  477,   29, 0x0a,
     528,  349,  522,   29, 0x0a,
     556,  349,  522,   29, 0x0a,
     610,  349,  584,   29, 0x0a,
     637,  349,  388,   29, 0x0a,
     656,  349,  522,   29, 0x0a,
     680,  349,  522,   29, 0x0a,
     704,  349,  522,   29, 0x0a,
     745,  349,  738,   29, 0x0a,
     769,  349,  427,   29, 0x0a,
     786,  349,  427,   29, 0x0a,
     807,  349,  427,   29, 0x0a,
     824,  349,  427,   29, 0x0a,
     845,  349,  427,   29, 0x0a,

 // enums: name, flags, count, data
     862, 0x0,    7,  122,
     875, 0x0,    4,  136,

 // enum data: key, value
     887, uint(PythonQtWrapper_QTabletEvent::NoDevice),
     896, uint(PythonQtWrapper_QTabletEvent::Puck),
     901, uint(PythonQtWrapper_QTabletEvent::Stylus),
     908, uint(PythonQtWrapper_QTabletEvent::Airbrush),
     917, uint(PythonQtWrapper_QTabletEvent::FourDMouse),
     928, uint(PythonQtWrapper_QTabletEvent::XFreeEraser),
     940, uint(PythonQtWrapper_QTabletEvent::RotationStylus),
     955, uint(PythonQtWrapper_QTabletEvent::UnknownPointer),
     970, uint(PythonQtWrapper_QTabletEvent::Pen),
     974, uint(PythonQtWrapper_QTabletEvent::Cursor),
     981, uint(PythonQtWrapper_QTabletEvent::Eraser),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTabletEvent[] = {
    "PythonQtWrapper_QTabletEvent\0\0"
    "QTabletEvent*\0"
    "t,pos,globalPos,hiResGlobalPos,device,pointerType,pressure,xTilt,yTilt"
    ",tangentialPressure,rotation,z,keyState,uniqueID\0"
    "new_QTabletEvent(QEvent::Type,QPoint,QPoint,QPointF,int,int,qreal,int,"
    "int,qreal,qreal,int,Qt::KeyboardModifiers,qint64)\0"
    "obj\0delete_QTabletEvent(QTabletEvent*)\0"
    "QTabletEvent::TabletDevice\0theWrappedObject\0"
    "device(QTabletEvent*)\0const QPoint*\0"
    "globalPos(QTabletEvent*)\0int\0"
    "globalX(QTabletEvent*)\0globalY(QTabletEvent*)\0"
    "const QPointF*\0hiResGlobalPos(QTabletEvent*)\0"
    "qreal\0hiResGlobalX(QTabletEvent*)\0"
    "hiResGlobalY(QTabletEvent*)\0"
    "QTabletEvent::PointerType\0"
    "pointerType(QTabletEvent*)\0"
    "pos(QTabletEvent*)\0pressure(QTabletEvent*)\0"
    "rotation(QTabletEvent*)\0"
    "tangentialPressure(QTabletEvent*)\0"
    "qint64\0uniqueId(QTabletEvent*)\0"
    "x(QTabletEvent*)\0xTilt(QTabletEvent*)\0"
    "y(QTabletEvent*)\0yTilt(QTabletEvent*)\0"
    "z(QTabletEvent*)\0TabletDevice\0PointerType\0"
    "NoDevice\0Puck\0Stylus\0Airbrush\0FourDMouse\0"
    "XFreeEraser\0RotationStylus\0UnknownPointer\0"
    "Pen\0Cursor\0Eraser\0"
};

void PythonQtWrapper_QTabletEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTabletEvent *_t = static_cast<PythonQtWrapper_QTabletEvent *>(_o);
        switch (_id) {
        case 0: { QTabletEvent* _r = _t->new_QTabletEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3])),(*reinterpret_cast< const QPointF(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< qreal(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])),(*reinterpret_cast< qreal(*)>(_a[10])),(*reinterpret_cast< qreal(*)>(_a[11])),(*reinterpret_cast< int(*)>(_a[12])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[13])),(*reinterpret_cast< qint64(*)>(_a[14])));
            if (_a[0]) *reinterpret_cast< QTabletEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QTabletEvent((*reinterpret_cast< QTabletEvent*(*)>(_a[1]))); break;
        case 2: { QTabletEvent::TabletDevice _r = _t->device((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTabletEvent::TabletDevice*>(_a[0]) = _r; }  break;
        case 3: { const QPoint* _r = _t->globalPos((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QPoint**>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->globalX((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->globalY((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { const QPointF* _r = _t->hiResGlobalPos((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QPointF**>(_a[0]) = _r; }  break;
        case 7: { qreal _r = _t->hiResGlobalX((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 8: { qreal _r = _t->hiResGlobalY((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 9: { QTabletEvent::PointerType _r = _t->pointerType((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTabletEvent::PointerType*>(_a[0]) = _r; }  break;
        case 10: { const QPoint* _r = _t->pos((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QPoint**>(_a[0]) = _r; }  break;
        case 11: { qreal _r = _t->pressure((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 12: { qreal _r = _t->rotation((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->tangentialPressure((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: { qint64 _r = _t->uniqueId((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->x((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->xTilt((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->y((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->yTilt((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->z((*reinterpret_cast< QTabletEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTabletEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTabletEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTabletEvent,
      qt_meta_data_PythonQtWrapper_QTabletEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTabletEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTabletEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTabletEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTabletEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTabletEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTabletEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTapAndHoldGesture[] = {

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
      63,   56,   36,   35, 0x0a,
      96,   35,   36,   35, 0x2a,
     125,  121,   35,   35, 0x0a,
     197,  180,  172,   35, 0x0a,
     248,  227,   35,   35, 0x0a,
     295,  289,   35,   35, 0x0a,
     341,   35,  337,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTapAndHoldGesture[] = {
    "PythonQtWrapper_QTapAndHoldGesture\0\0"
    "QTapAndHoldGesture*\0parent\0"
    "new_QTapAndHoldGesture(QObject*)\0"
    "new_QTapAndHoldGesture()\0obj\0"
    "delete_QTapAndHoldGesture(QTapAndHoldGesture*)\0"
    "QPointF\0theWrappedObject\0"
    "position(QTapAndHoldGesture*)\0"
    "theWrappedObject,pos\0"
    "setPosition(QTapAndHoldGesture*,QPointF)\0"
    "msecs\0static_QTapAndHoldGesture_setTimeout(int)\0"
    "int\0static_QTapAndHoldGesture_timeout()\0"
};

void PythonQtWrapper_QTapAndHoldGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTapAndHoldGesture *_t = static_cast<PythonQtWrapper_QTapAndHoldGesture *>(_o);
        switch (_id) {
        case 0: { QTapAndHoldGesture* _r = _t->new_QTapAndHoldGesture((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTapAndHoldGesture**>(_a[0]) = _r; }  break;
        case 1: { QTapAndHoldGesture* _r = _t->new_QTapAndHoldGesture();
            if (_a[0]) *reinterpret_cast< QTapAndHoldGesture**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTapAndHoldGesture((*reinterpret_cast< QTapAndHoldGesture*(*)>(_a[1]))); break;
        case 3: { QPointF _r = _t->position((*reinterpret_cast< QTapAndHoldGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 4: _t->setPosition((*reinterpret_cast< QTapAndHoldGesture*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 5: _t->static_QTapAndHoldGesture_setTimeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: { int _r = _t->static_QTapAndHoldGesture_timeout();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTapAndHoldGesture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTapAndHoldGesture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTapAndHoldGesture,
      qt_meta_data_PythonQtWrapper_QTapAndHoldGesture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTapAndHoldGesture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTapAndHoldGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTapAndHoldGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTapAndHoldGesture))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTapAndHoldGesture*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTapAndHoldGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTapGesture[] = {

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
      49,   42,   29,   28, 0x0a,
      75,   28,   29,   28, 0x2a,
      97,   93,   28,   28, 0x0a,
     155,  138,  130,   28, 0x0a,
     199,  178,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTapGesture[] = {
    "PythonQtWrapper_QTapGesture\0\0QTapGesture*\0"
    "parent\0new_QTapGesture(QObject*)\0"
    "new_QTapGesture()\0obj\0"
    "delete_QTapGesture(QTapGesture*)\0"
    "QPointF\0theWrappedObject\0"
    "position(QTapGesture*)\0theWrappedObject,pos\0"
    "setPosition(QTapGesture*,QPointF)\0"
};

void PythonQtWrapper_QTapGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTapGesture *_t = static_cast<PythonQtWrapper_QTapGesture *>(_o);
        switch (_id) {
        case 0: { QTapGesture* _r = _t->new_QTapGesture((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTapGesture**>(_a[0]) = _r; }  break;
        case 1: { QTapGesture* _r = _t->new_QTapGesture();
            if (_a[0]) *reinterpret_cast< QTapGesture**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTapGesture((*reinterpret_cast< QTapGesture*(*)>(_a[1]))); break;
        case 3: { QPointF _r = _t->position((*reinterpret_cast< QTapGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 4: _t->setPosition((*reinterpret_cast< QTapGesture*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTapGesture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTapGesture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTapGesture,
      qt_meta_data_PythonQtWrapper_QTapGesture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTapGesture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTapGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTapGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTapGesture))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTapGesture*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTapGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextBlock[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      40,   27,   28,   27, 0x0a,
      59,   57,   28,   27, 0x0a,
      90,   86,   27,   27, 0x0a,
     159,  142,  121,   27, 0x0a,
     195,  142,  178,   27, 0x0a,
     224,  142,  220,   27, 0x0a,
     254,  142,  220,   27, 0x0a,
     295,  142,  279,   27, 0x0a,
     319,  142,  220,   27, 0x0a,
     348,  142,   27,   27, 0x0a,
     404,  378,  373,   27, 0x0a,
     451,  142,  430,   27, 0x0a,
     473,  142,  121,   27, 0x0a,
     490,  142,  220,   27, 0x0a,
     519,  142,  220,   27, 0x0a,
     546,  142,  373,   27, 0x0a,
     567,  142,  373,   27, 0x0a,
     603,  142,  590,   27, 0x0a,
     623,  142,  220,   27, 0x0a,
     643,  142,  220,   27, 0x0a,
     677,  142,  666,   27, 0x0a,
     714,  695,  373,   27, 0x0a,
     745,  695,  373,   27, 0x0a,
     776,  695,  373,   27, 0x0a,
     807,  142,  220,   27, 0x0a,
     829,  142,  666,   27, 0x0a,
     851,  142,  220,   27, 0x0a,
     896,  873,   27,   27, 0x0a,
     947,  926,   27,   27, 0x0a,
     998,  976,   27,   27, 0x0a,
    1066, 1043,   27,   27, 0x0a,
    1121, 1096,   27,   27, 0x0a,
    1158,  142, 1150,   27, 0x0a,
    1196,  142, 1176,   27, 0x0a,
    1234,  142, 1223,   27, 0x0a,
    1276,  142, 1256,   27, 0x0a,
    1298,  142,  220,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextBlock[] = {
    "PythonQtWrapper_QTextBlock\0\0QTextBlock*\0"
    "new_QTextBlock()\0o\0new_QTextBlock(QTextBlock)\0"
    "obj\0delete_QTextBlock(QTextBlock*)\0"
    "QTextBlock::iterator\0theWrappedObject\0"
    "begin(QTextBlock*)\0QTextBlockFormat\0"
    "blockFormat(QTextBlock*)\0int\0"
    "blockFormatIndex(QTextBlock*)\0"
    "blockNumber(QTextBlock*)\0QTextCharFormat\0"
    "charFormat(QTextBlock*)\0"
    "charFormatIndex(QTextBlock*)\0"
    "clearLayout(QTextBlock*)\0bool\0"
    "theWrappedObject,position\0"
    "contains(QTextBlock*,int)\0"
    "const QTextDocument*\0document(QTextBlock*)\0"
    "end(QTextBlock*)\0firstLineNumber(QTextBlock*)\0"
    "fragmentIndex(QTextBlock*)\0"
    "isValid(QTextBlock*)\0isVisible(QTextBlock*)\0"
    "QTextLayout*\0layout(QTextBlock*)\0"
    "length(QTextBlock*)\0lineCount(QTextBlock*)\0"
    "QTextBlock\0next(QTextBlock*)\0"
    "theWrappedObject,o\0__ne__(QTextBlock*,QTextBlock)\0"
    "__lt__(QTextBlock*,QTextBlock)\0"
    "__eq__(QTextBlock*,QTextBlock)\0"
    "position(QTextBlock*)\0previous(QTextBlock*)\0"
    "revision(QTextBlock*)\0theWrappedObject,count\0"
    "setLineCount(QTextBlock*,int)\0"
    "theWrappedObject,rev\0setRevision(QTextBlock*,int)\0"
    "theWrappedObject,data\0"
    "setUserData(QTextBlock*,QTextBlockUserData*)\0"
    "theWrappedObject,state\0"
    "setUserState(QTextBlock*,int)\0"
    "theWrappedObject,visible\0"
    "setVisible(QTextBlock*,bool)\0QString\0"
    "text(QTextBlock*)\0Qt::LayoutDirection\0"
    "textDirection(QTextBlock*)\0QTextList*\0"
    "textList(QTextBlock*)\0QTextBlockUserData*\0"
    "userData(QTextBlock*)\0userState(QTextBlock*)\0"
};

void PythonQtWrapper_QTextBlock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextBlock *_t = static_cast<PythonQtWrapper_QTextBlock *>(_o);
        switch (_id) {
        case 0: { QTextBlock* _r = _t->new_QTextBlock();
            if (_a[0]) *reinterpret_cast< QTextBlock**>(_a[0]) = _r; }  break;
        case 1: { QTextBlock* _r = _t->new_QTextBlock((*reinterpret_cast< const QTextBlock(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlock**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextBlock((*reinterpret_cast< QTextBlock*(*)>(_a[1]))); break;
        case 3: { QTextBlock::iterator _r = _t->begin((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlock::iterator*>(_a[0]) = _r; }  break;
        case 4: { QTextBlockFormat _r = _t->blockFormat((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlockFormat*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->blockFormatIndex((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->blockNumber((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { QTextCharFormat _r = _t->charFormat((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->charFormatIndex((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: _t->clearLayout((*reinterpret_cast< QTextBlock*(*)>(_a[1]))); break;
        case 10: { bool _r = _t->contains((*reinterpret_cast< QTextBlock*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { const QTextDocument* _r = _t->document((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QTextDocument**>(_a[0]) = _r; }  break;
        case 12: { QTextBlock::iterator _r = _t->end((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlock::iterator*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->firstLineNumber((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->fragmentIndex((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isValid((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isVisible((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { QTextLayout* _r = _t->layout((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextLayout**>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->length((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->lineCount((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { QTextBlock _r = _t->next((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->__ne__((*reinterpret_cast< QTextBlock*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->__lt__((*reinterpret_cast< QTextBlock*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->__eq__((*reinterpret_cast< QTextBlock*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->position((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { QTextBlock _r = _t->previous((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->revision((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: _t->setLineCount((*reinterpret_cast< QTextBlock*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->setRevision((*reinterpret_cast< QTextBlock*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 29: _t->setUserData((*reinterpret_cast< QTextBlock*(*)>(_a[1])),(*reinterpret_cast< QTextBlockUserData*(*)>(_a[2]))); break;
        case 30: _t->setUserState((*reinterpret_cast< QTextBlock*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->setVisible((*reinterpret_cast< QTextBlock*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 32: { QString _r = _t->text((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 33: { Qt::LayoutDirection _r = _t->textDirection((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::LayoutDirection*>(_a[0]) = _r; }  break;
        case 34: { QTextList* _r = _t->textList((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextList**>(_a[0]) = _r; }  break;
        case 35: { QTextBlockUserData* _r = _t->userData((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlockUserData**>(_a[0]) = _r; }  break;
        case 36: { int _r = _t->userState((*reinterpret_cast< QTextBlock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextBlock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextBlock::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextBlock,
      qt_meta_data_PythonQtWrapper_QTextBlock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextBlock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextBlock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextBlock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextBlock))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextBlock*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextBlock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTextBlockFormat[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       1,  154, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      52,   33,   34,   33, 0x0a,
      81,   75,   34,   33, 0x0a,
     124,  120,   33,   33, 0x0a,
     198,  181,  167,   33, 0x0a,
     233,  181,  227,   33, 0x0a,
     269,  181,  265,   33, 0x0a,
     300,  181,  295,   33, 0x0a,
     327,  181,  227,   33, 0x0a,
     357,  181,  227,   33, 0x0a,
     429,  387,  227,   33, 0x0a,
     471,  181,  265,   33, 0x0a,
     505,  181,  295,   33, 0x0a,
     570,  181,  542,   33, 0x0a,
     605,  181,  227,   33, 0x0a,
     663,  636,   33,   33, 0x0a,
     733,  709,   33,   33, 0x0a,
     798,  774,   33,   33, 0x0a,
     831,  709,   33,   33, 0x0a,
     905,  870,   33,   33, 0x0a,
     967,  948,   33,   33, 0x0a,
    1035, 1012,   33,   33, 0x0a,
    1101,  709,   33,   33, 0x0a,
    1163, 1141,   33,   33, 0x0a,
    1247, 1222,   33,   33, 0x0a,
    1286,  709,   33,   33, 0x0a,
    1348,  181, 1324,   33, 0x0a,
    1380,  181,  227,   33, 0x0a,
    1410,  181,  227,   33, 0x0a,

 // enums: name, flags, count, data
    1439, 0x0,    5,  158,

 // enum data: key, value
    1455, uint(PythonQtWrapper_QTextBlockFormat::SingleHeight),
    1468, uint(PythonQtWrapper_QTextBlockFormat::ProportionalHeight),
    1487, uint(PythonQtWrapper_QTextBlockFormat::FixedHeight),
    1499, uint(PythonQtWrapper_QTextBlockFormat::MinimumHeight),
    1513, uint(PythonQtWrapper_QTextBlockFormat::LineDistanceHeight),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextBlockFormat[] = {
    "PythonQtWrapper_QTextBlockFormat\0\0"
    "QTextBlockFormat*\0new_QTextBlockFormat()\0"
    "other\0new_QTextBlockFormat(QTextBlockFormat)\0"
    "obj\0delete_QTextBlockFormat(QTextBlockFormat*)\0"
    "Qt::Alignment\0theWrappedObject\0"
    "alignment(QTextBlockFormat*)\0qreal\0"
    "bottomMargin(QTextBlockFormat*)\0int\0"
    "indent(QTextBlockFormat*)\0bool\0"
    "isValid(QTextBlockFormat*)\0"
    "leftMargin(QTextBlockFormat*)\0"
    "lineHeight(QTextBlockFormat*)\0"
    "theWrappedObject,scriptLineHeight,scaling\0"
    "lineHeight(QTextBlockFormat*,qreal,qreal)\0"
    "lineHeightType(QTextBlockFormat*)\0"
    "nonBreakableLines(QTextBlockFormat*)\0"
    "QTextFormat::PageBreakFlags\0"
    "pageBreakPolicy(QTextBlockFormat*)\0"
    "rightMargin(QTextBlockFormat*)\0"
    "theWrappedObject,alignment\0"
    "setAlignment(QTextBlockFormat*,Qt::Alignment)\0"
    "theWrappedObject,margin\0"
    "setBottomMargin(QTextBlockFormat*,qreal)\0"
    "theWrappedObject,indent\0"
    "setIndent(QTextBlockFormat*,int)\0"
    "setLeftMargin(QTextBlockFormat*,qreal)\0"
    "theWrappedObject,height,heightType\0"
    "setLineHeight(QTextBlockFormat*,qreal,int)\0"
    "theWrappedObject,b\0"
    "setNonBreakableLines(QTextBlockFormat*,bool)\0"
    "theWrappedObject,flags\0"
    "setPageBreakPolicy(QTextBlockFormat*,QTextFormat::PageBreakFlags)\0"
    "setRightMargin(QTextBlockFormat*,qreal)\0"
    "theWrappedObject,tabs\0"
    "setTabPositions(QTextBlockFormat*,QList<QTextOption::Tab>)\0"
    "theWrappedObject,aindent\0"
    "setTextIndent(QTextBlockFormat*,qreal)\0"
    "setTopMargin(QTextBlockFormat*,qreal)\0"
    "QList<QTextOption::Tab>\0"
    "tabPositions(QTextBlockFormat*)\0"
    "textIndent(QTextBlockFormat*)\0"
    "topMargin(QTextBlockFormat*)\0"
    "LineHeightTypes\0SingleHeight\0"
    "ProportionalHeight\0FixedHeight\0"
    "MinimumHeight\0LineDistanceHeight\0"
};

void PythonQtWrapper_QTextBlockFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextBlockFormat *_t = static_cast<PythonQtWrapper_QTextBlockFormat *>(_o);
        switch (_id) {
        case 0: { QTextBlockFormat* _r = _t->new_QTextBlockFormat();
            if (_a[0]) *reinterpret_cast< QTextBlockFormat**>(_a[0]) = _r; }  break;
        case 1: { QTextBlockFormat* _r = _t->new_QTextBlockFormat((*reinterpret_cast< const QTextBlockFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlockFormat**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextBlockFormat((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1]))); break;
        case 3: { Qt::Alignment _r = _t->alignment((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 4: { qreal _r = _t->bottomMargin((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->indent((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isValid((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { qreal _r = _t->leftMargin((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 8: { qreal _r = _t->lineHeight((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 9: { qreal _r = _t->lineHeight((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->lineHeightType((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->nonBreakableLines((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QTextFormat::PageBreakFlags _r = _t->pageBreakPolicy((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFormat::PageBreakFlags*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->rightMargin((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: _t->setAlignment((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 15: _t->setBottomMargin((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 16: _t->setIndent((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->setLeftMargin((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 18: _t->setLineHeight((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: _t->setNonBreakableLines((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->setPageBreakPolicy((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])),(*reinterpret_cast< QTextFormat::PageBreakFlags(*)>(_a[2]))); break;
        case 21: _t->setRightMargin((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 22: _t->setTabPositions((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])),(*reinterpret_cast< const QList<QTextOption::Tab>(*)>(_a[2]))); break;
        case 23: _t->setTextIndent((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 24: _t->setTopMargin((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 25: { QList<QTextOption::Tab> _r = _t->tabPositions((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QTextOption::Tab>*>(_a[0]) = _r; }  break;
        case 26: { qreal _r = _t->textIndent((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 27: { qreal _r = _t->topMargin((*reinterpret_cast< QTextBlockFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextBlockFormat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextBlockFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextBlockFormat,
      qt_meta_data_PythonQtWrapper_QTextBlockFormat, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextBlockFormat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextBlockFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextBlockFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextBlockFormat))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextBlockFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextBlockFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextBlockGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      56,   33,   32,   32, 0x0a,
     104,   33,   32,   32, 0x0a,
     147,   33,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextBlockGroup[] = {
    "PythonQtWrapper_QTextBlockGroup\0\0"
    "theWrappedObject,block\0"
    "blockFormatChanged(QTextBlockGroup*,QTextBlock)\0"
    "blockInserted(QTextBlockGroup*,QTextBlock)\0"
    "blockRemoved(QTextBlockGroup*,QTextBlock)\0"
};

void PythonQtWrapper_QTextBlockGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextBlockGroup *_t = static_cast<PythonQtWrapper_QTextBlockGroup *>(_o);
        switch (_id) {
        case 0: _t->blockFormatChanged((*reinterpret_cast< QTextBlockGroup*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2]))); break;
        case 1: _t->blockInserted((*reinterpret_cast< QTextBlockGroup*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2]))); break;
        case 2: _t->blockRemoved((*reinterpret_cast< QTextBlockGroup*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextBlockGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextBlockGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextBlockGroup,
      qt_meta_data_PythonQtWrapper_QTextBlockGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextBlockGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextBlockGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextBlockGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextBlockGroup))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextBlockGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextBlockGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTextBlockUserData[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      56,   35,   36,   35, 0x0a,
      85,   81,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextBlockUserData[] = {
    "PythonQtWrapper_QTextBlockUserData\0\0"
    "QTextBlockUserData*\0new_QTextBlockUserData()\0"
    "obj\0delete_QTextBlockUserData(QTextBlockUserData*)\0"
};

void PythonQtWrapper_QTextBlockUserData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextBlockUserData *_t = static_cast<PythonQtWrapper_QTextBlockUserData *>(_o);
        switch (_id) {
        case 0: { QTextBlockUserData* _r = _t->new_QTextBlockUserData();
            if (_a[0]) *reinterpret_cast< QTextBlockUserData**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QTextBlockUserData((*reinterpret_cast< QTextBlockUserData*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextBlockUserData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextBlockUserData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextBlockUserData,
      qt_meta_data_PythonQtWrapper_QTextBlockUserData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextBlockUserData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextBlockUserData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextBlockUserData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextBlockUserData))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextBlockUserData*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextBlockUserData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextBrowser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      51,   44,   30,   29, 0x0a,
      78,   29,   30,   29, 0x2a,
     101,   97,   29,   29, 0x0a,
     153,  136,   29,   29, 0x0a,
     181,  136,  177,   29, 0x0a,
     217,  136,   29,   29, 0x0a,
     269,  250,  245,   29, 0x0a,
     320,  298,  245,   29, 0x0a,
     379,  359,   29,   29, 0x0a,
     421,  136,   29,   29, 0x0a,
     444,  136,  177,   29, 0x0a,
     511,  487,  479,   29, 0x0a,
     548,  487,  543,   29, 0x0a,
     578,  136,   29,   29, 0x0a,
     598,  136,  245,   29, 0x0a,
     633,  136,  245,   29, 0x0a,
     667,  359,   29,   29, 0x0a,
     743,  716,  707,   29, 0x0a,
     780,  359,   29,   29, 0x0a,
     823,  359,   29,   29, 0x0a,
     867,  359,   29,   29, 0x0a,
     913,  136,  245,   29, 0x0a,
     946,  136,  245,   29, 0x0a,
     971,  250,   29,   29, 0x0a,
    1010,  136,   29,   29, 0x0a,
    1044,  136, 1032,   29, 0x0a,
    1093, 1071,   29,   29, 0x0a,
    1134, 1071,   29,   29, 0x0a,
    1190, 1167,   29,   29, 0x0a,
    1254, 1232,   29,   29, 0x0a,
    1284,  136,  543,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextBrowser[] = {
    "PythonQtWrapper_QTextBrowser\0\0"
    "QTextBrowser*\0parent\0new_QTextBrowser(QWidget*)\0"
    "new_QTextBrowser()\0obj\0"
    "delete_QTextBrowser(QTextBrowser*)\0"
    "theWrappedObject\0backward(QTextBrowser*)\0"
    "int\0backwardHistoryCount(QTextBrowser*)\0"
    "clearHistory(QTextBrowser*)\0bool\0"
    "theWrappedObject,e\0event(QTextBrowser*,QEvent*)\0"
    "theWrappedObject,next\0"
    "focusNextPrevChild(QTextBrowser*,bool)\0"
    "theWrappedObject,ev\0"
    "focusOutEvent(QTextBrowser*,QFocusEvent*)\0"
    "forward(QTextBrowser*)\0"
    "forwardHistoryCount(QTextBrowser*)\0"
    "QString\0theWrappedObject,arg__1\0"
    "historyTitle(QTextBrowser*,int)\0QUrl\0"
    "historyUrl(QTextBrowser*,int)\0"
    "home(QTextBrowser*)\0"
    "isBackwardAvailable(QTextBrowser*)\0"
    "isForwardAvailable(QTextBrowser*)\0"
    "keyPressEvent(QTextBrowser*,QKeyEvent*)\0"
    "QVariant\0theWrappedObject,type,name\0"
    "loadResource(QTextBrowser*,int,QUrl)\0"
    "mouseMoveEvent(QTextBrowser*,QMouseEvent*)\0"
    "mousePressEvent(QTextBrowser*,QMouseEvent*)\0"
    "mouseReleaseEvent(QTextBrowser*,QMouseEvent*)\0"
    "openExternalLinks(QTextBrowser*)\0"
    "openLinks(QTextBrowser*)\0"
    "paintEvent(QTextBrowser*,QPaintEvent*)\0"
    "reload(QTextBrowser*)\0QStringList\0"
    "searchPaths(QTextBrowser*)\0"
    "theWrappedObject,open\0"
    "setOpenExternalLinks(QTextBrowser*,bool)\0"
    "setOpenLinks(QTextBrowser*,bool)\0"
    "theWrappedObject,paths\0"
    "setSearchPaths(QTextBrowser*,QStringList)\0"
    "theWrappedObject,name\0"
    "setSource(QTextBrowser*,QUrl)\0"
    "source(QTextBrowser*)\0"
};

void PythonQtWrapper_QTextBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextBrowser *_t = static_cast<PythonQtWrapper_QTextBrowser *>(_o);
        switch (_id) {
        case 0: { QTextBrowser* _r = _t->new_QTextBrowser((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBrowser**>(_a[0]) = _r; }  break;
        case 1: { QTextBrowser* _r = _t->new_QTextBrowser();
            if (_a[0]) *reinterpret_cast< QTextBrowser**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextBrowser((*reinterpret_cast< QTextBrowser*(*)>(_a[1]))); break;
        case 3: _t->backward((*reinterpret_cast< QTextBrowser*(*)>(_a[1]))); break;
        case 4: { int _r = _t->backwardHistoryCount((*reinterpret_cast< QTextBrowser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->clearHistory((*reinterpret_cast< QTextBrowser*(*)>(_a[1]))); break;
        case 6: { bool _r = _t->event((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->focusNextPrevChild((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->focusOutEvent((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 9: _t->forward((*reinterpret_cast< QTextBrowser*(*)>(_a[1]))); break;
        case 10: { int _r = _t->forwardHistoryCount((*reinterpret_cast< QTextBrowser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->historyTitle((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QUrl _r = _t->historyUrl((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 13: _t->home((*reinterpret_cast< QTextBrowser*(*)>(_a[1]))); break;
        case 14: { bool _r = _t->isBackwardAvailable((*reinterpret_cast< QTextBrowser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isForwardAvailable((*reinterpret_cast< QTextBrowser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->keyPressEvent((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 17: { QVariant _r = _t->loadResource((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 18: _t->mouseMoveEvent((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 19: _t->mousePressEvent((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 20: _t->mouseReleaseEvent((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 21: { bool _r = _t->openExternalLinks((*reinterpret_cast< QTextBrowser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->openLinks((*reinterpret_cast< QTextBrowser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: _t->paintEvent((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 24: _t->reload((*reinterpret_cast< QTextBrowser*(*)>(_a[1]))); break;
        case 25: { QStringList _r = _t->searchPaths((*reinterpret_cast< QTextBrowser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 26: _t->setOpenExternalLinks((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 27: _t->setOpenLinks((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->setSearchPaths((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 29: _t->setSource((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 30: { QUrl _r = _t->source((*reinterpret_cast< QTextBrowser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextBrowser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextBrowser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextBrowser,
      qt_meta_data_PythonQtWrapper_QTextBrowser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextBrowser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextBrowser))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextBrowser*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextCharFormat[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
       0,    0, // properties
       2,  299, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      50,   32,   33,   32, 0x0a,
      78,   72,   33,   32, 0x0a,
     119,  115,   32,   32, 0x0a,
     185,  168,  160,   32, 0x0a,
     226,  168,  214,   32, 0x0a,
     262,  168,  256,   32, 0x0a,
     307,  168,  285,   32, 0x0a,
     344,  168,  160,   32, 0x0a,
     378,  168,  373,   32, 0x0a,
     436,  168,  411,   32, 0x0a,
     476,  168,  373,   32, 0x0a,
     505,  168,  373,   32, 0x0a,
     541,  168,  535,   32, 0x0a,
     577,  168,  373,   32, 0x0a,
     608,  168,  535,   32, 0x0a,
     640,  168,  373,   32, 0x0a,
     689,  168,  672,   32, 0x0a,
     742,  168,  721,   32, 0x0a,
     778,  168,  373,   32, 0x0a,
     814,  168,  810,   32, 0x0a,
     843,  168,  535,   32, 0x0a,
     877,  168,  373,   32, 0x0a,
     904,  168,  373,   32, 0x0a,
     954,  930,   32,   32, 0x0a,
    1010,  987,   32,   32, 0x0a,
    1073, 1050,   32,   32, 0x0a,
    1140, 1118,   32,   32, 0x0a,
    1204, 1172,   32,   32, 0x0a,
    1290, 1266,   32,   32, 0x0a,
    1358, 1330,   32,   32, 0x0a,
    1434, 1399,   32,   32, 0x0a,
    1526, 1502,   32,   32, 0x0a,
    1587, 1563,   32,   32, 0x0a,
    1650, 1625,   32,   32, 0x0a,
    1721, 1695,   32,   32, 0x0a,
    1782, 1760,   32,   32, 0x0a,
    1850, 1823,   32,   32, 0x0a,
    1921, 1890,   32,   32, 0x0a,
    2016, 1994,   32,   32, 0x2a,
    2094, 2068,   32,   32, 0x0a,
    2181, 2154,   32,   32, 0x0a,
    2245, 2221,   32,   32, 0x0a,
    2281, 1625,   32,   32, 0x0a,
    2361, 2324,   32,   32, 0x0a,
    2440, 2406,   32,   32, 0x0a,
    2503, 2482,   32,   32, 0x0a,
    2562, 2541,   32,   32, 0x0a,
    2622, 2599,   32,   32, 0x0a,
    2688, 2665,   32,   32, 0x0a,
    2783, 2756,   32,   32, 0x0a,
    2857,  168,  810,   32, 0x0a,
    2895,  168,  810,   32, 0x0a,
    2935,  168, 2930,   32, 0x0a,
    2965,  168,  160,   32, 0x0a,
    2998,  168, 2991,   32, 0x0a,
    3063,  168, 3031,   32, 0x0a,
    3131,  168, 3096,   32, 0x0a,

 // enums: name, flags, count, data
    3167, 0x0,    7,  307,
    3185, 0x0,    8,  321,

 // enum data: key, value
    3200, uint(PythonQtWrapper_QTextCharFormat::AlignNormal),
    3212, uint(PythonQtWrapper_QTextCharFormat::AlignSuperScript),
    3229, uint(PythonQtWrapper_QTextCharFormat::AlignSubScript),
    3244, uint(PythonQtWrapper_QTextCharFormat::AlignMiddle),
    3256, uint(PythonQtWrapper_QTextCharFormat::AlignTop),
    3265, uint(PythonQtWrapper_QTextCharFormat::AlignBottom),
    3277, uint(PythonQtWrapper_QTextCharFormat::AlignBaseline),
    3291, uint(PythonQtWrapper_QTextCharFormat::NoUnderline),
    3303, uint(PythonQtWrapper_QTextCharFormat::SingleUnderline),
    3319, uint(PythonQtWrapper_QTextCharFormat::DashUnderline),
    3333, uint(PythonQtWrapper_QTextCharFormat::DotLine),
    3341, uint(PythonQtWrapper_QTextCharFormat::DashDotLine),
    3353, uint(PythonQtWrapper_QTextCharFormat::DashDotDotLine),
    3368, uint(PythonQtWrapper_QTextCharFormat::WaveUnderline),
    3382, uint(PythonQtWrapper_QTextCharFormat::SpellCheckUnderline),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextCharFormat[] = {
    "PythonQtWrapper_QTextCharFormat\0\0"
    "QTextCharFormat*\0new_QTextCharFormat()\0"
    "other\0new_QTextCharFormat(QTextCharFormat)\0"
    "obj\0delete_QTextCharFormat(QTextCharFormat*)\0"
    "QString\0theWrappedObject\0"
    "anchorHref(QTextCharFormat*)\0QStringList\0"
    "anchorNames(QTextCharFormat*)\0QFont\0"
    "font(QTextCharFormat*)\0QFont::Capitalization\0"
    "fontCapitalization(QTextCharFormat*)\0"
    "fontFamily(QTextCharFormat*)\0bool\0"
    "fontFixedPitch(QTextCharFormat*)\0"
    "QFont::HintingPreference\0"
    "fontHintingPreference(QTextCharFormat*)\0"
    "fontItalic(QTextCharFormat*)\0"
    "fontKerning(QTextCharFormat*)\0qreal\0"
    "fontLetterSpacing(QTextCharFormat*)\0"
    "fontOverline(QTextCharFormat*)\0"
    "fontPointSize(QTextCharFormat*)\0"
    "fontStrikeOut(QTextCharFormat*)\0"
    "QFont::StyleHint\0fontStyleHint(QTextCharFormat*)\0"
    "QFont::StyleStrategy\0"
    "fontStyleStrategy(QTextCharFormat*)\0"
    "fontUnderline(QTextCharFormat*)\0int\0"
    "fontWeight(QTextCharFormat*)\0"
    "fontWordSpacing(QTextCharFormat*)\0"
    "isAnchor(QTextCharFormat*)\0"
    "isValid(QTextCharFormat*)\0"
    "theWrappedObject,anchor\0"
    "setAnchor(QTextCharFormat*,bool)\0"
    "theWrappedObject,value\0"
    "setAnchorHref(QTextCharFormat*,QString)\0"
    "theWrappedObject,names\0"
    "setAnchorNames(QTextCharFormat*,QStringList)\0"
    "theWrappedObject,font\0"
    "setFont(QTextCharFormat*,QFont)\0"
    "theWrappedObject,capitalization\0"
    "setFontCapitalization(QTextCharFormat*,QFont::Capitalization)\0"
    "theWrappedObject,family\0"
    "setFontFamily(QTextCharFormat*,QString)\0"
    "theWrappedObject,fixedPitch\0"
    "setFontFixedPitch(QTextCharFormat*,bool)\0"
    "theWrappedObject,hintingPreference\0"
    "setFontHintingPreference(QTextCharFormat*,QFont::HintingPreference)\0"
    "theWrappedObject,italic\0"
    "setFontItalic(QTextCharFormat*,bool)\0"
    "theWrappedObject,enable\0"
    "setFontKerning(QTextCharFormat*,bool)\0"
    "theWrappedObject,spacing\0"
    "setFontLetterSpacing(QTextCharFormat*,qreal)\0"
    "theWrappedObject,overline\0"
    "setFontOverline(QTextCharFormat*,bool)\0"
    "theWrappedObject,size\0"
    "setFontPointSize(QTextCharFormat*,qreal)\0"
    "theWrappedObject,strikeOut\0"
    "setFontStrikeOut(QTextCharFormat*,bool)\0"
    "theWrappedObject,hint,strategy\0"
    "setFontStyleHint(QTextCharFormat*,QFont::StyleHint,QFont::StyleStrateg"
    "y)\0"
    "theWrappedObject,hint\0"
    "setFontStyleHint(QTextCharFormat*,QFont::StyleHint)\0"
    "theWrappedObject,strategy\0"
    "setFontStyleStrategy(QTextCharFormat*,QFont::StyleStrategy)\0"
    "theWrappedObject,underline\0"
    "setFontUnderline(QTextCharFormat*,bool)\0"
    "theWrappedObject,weight\0"
    "setFontWeight(QTextCharFormat*,int)\0"
    "setFontWordSpacing(QTextCharFormat*,qreal)\0"
    "theWrappedObject,tableCellColumnSpan\0"
    "setTableCellColumnSpan(QTextCharFormat*,int)\0"
    "theWrappedObject,tableCellRowSpan\0"
    "setTableCellRowSpan(QTextCharFormat*,int)\0"
    "theWrappedObject,pen\0"
    "setTextOutline(QTextCharFormat*,QPen)\0"
    "theWrappedObject,tip\0"
    "setToolTip(QTextCharFormat*,QString)\0"
    "theWrappedObject,color\0"
    "setUnderlineColor(QTextCharFormat*,QColor)\0"
    "theWrappedObject,style\0"
    "setUnderlineStyle(QTextCharFormat*,QTextCharFormat::UnderlineStyle)\0"
    "theWrappedObject,alignment\0"
    "setVerticalAlignment(QTextCharFormat*,QTextCharFormat::VerticalAlignme"
    "nt)\0"
    "tableCellColumnSpan(QTextCharFormat*)\0"
    "tableCellRowSpan(QTextCharFormat*)\0"
    "QPen\0textOutline(QTextCharFormat*)\0"
    "toolTip(QTextCharFormat*)\0QColor\0"
    "underlineColor(QTextCharFormat*)\0"
    "QTextCharFormat::UnderlineStyle\0"
    "underlineStyle(QTextCharFormat*)\0"
    "QTextCharFormat::VerticalAlignment\0"
    "verticalAlignment(QTextCharFormat*)\0"
    "VerticalAlignment\0UnderlineStyle\0"
    "AlignNormal\0AlignSuperScript\0"
    "AlignSubScript\0AlignMiddle\0AlignTop\0"
    "AlignBottom\0AlignBaseline\0NoUnderline\0"
    "SingleUnderline\0DashUnderline\0DotLine\0"
    "DashDotLine\0DashDotDotLine\0WaveUnderline\0"
    "SpellCheckUnderline\0"
};

void PythonQtWrapper_QTextCharFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextCharFormat *_t = static_cast<PythonQtWrapper_QTextCharFormat *>(_o);
        switch (_id) {
        case 0: { QTextCharFormat* _r = _t->new_QTextCharFormat();
            if (_a[0]) *reinterpret_cast< QTextCharFormat**>(_a[0]) = _r; }  break;
        case 1: { QTextCharFormat* _r = _t->new_QTextCharFormat((*reinterpret_cast< const QTextCharFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextCharFormat((*reinterpret_cast< QTextCharFormat*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->anchorHref((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QStringList _r = _t->anchorNames((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 5: { QFont _r = _t->font((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 6: { QFont::Capitalization _r = _t->fontCapitalization((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::Capitalization*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->fontFamily((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->fontFixedPitch((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QFont::HintingPreference _r = _t->fontHintingPreference((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::HintingPreference*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->fontItalic((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->fontKerning((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { qreal _r = _t->fontLetterSpacing((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->fontOverline((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { qreal _r = _t->fontPointSize((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->fontStrikeOut((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { QFont::StyleHint _r = _t->fontStyleHint((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::StyleHint*>(_a[0]) = _r; }  break;
        case 17: { QFont::StyleStrategy _r = _t->fontStyleStrategy((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::StyleStrategy*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->fontUnderline((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->fontWeight((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { qreal _r = _t->fontWordSpacing((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isAnchor((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->isValid((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: _t->setAnchor((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 24: _t->setAnchorHref((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 25: _t->setAnchorNames((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 26: _t->setFont((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2]))); break;
        case 27: _t->setFontCapitalization((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< QFont::Capitalization(*)>(_a[2]))); break;
        case 28: _t->setFontFamily((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 29: _t->setFontFixedPitch((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: _t->setFontHintingPreference((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< QFont::HintingPreference(*)>(_a[2]))); break;
        case 31: _t->setFontItalic((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 32: _t->setFontKerning((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 33: _t->setFontLetterSpacing((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 34: _t->setFontOverline((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: _t->setFontPointSize((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 36: _t->setFontStrikeOut((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 37: _t->setFontStyleHint((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< QFont::StyleHint(*)>(_a[2])),(*reinterpret_cast< QFont::StyleStrategy(*)>(_a[3]))); break;
        case 38: _t->setFontStyleHint((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< QFont::StyleHint(*)>(_a[2]))); break;
        case 39: _t->setFontStyleStrategy((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< QFont::StyleStrategy(*)>(_a[2]))); break;
        case 40: _t->setFontUnderline((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 41: _t->setFontWeight((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 42: _t->setFontWordSpacing((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 43: _t->setTableCellColumnSpan((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 44: _t->setTableCellRowSpan((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->setTextOutline((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< const QPen(*)>(_a[2]))); break;
        case 46: _t->setToolTip((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 47: _t->setUnderlineColor((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 48: _t->setUnderlineStyle((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< QTextCharFormat::UnderlineStyle(*)>(_a[2]))); break;
        case 49: _t->setVerticalAlignment((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< QTextCharFormat::VerticalAlignment(*)>(_a[2]))); break;
        case 50: { int _r = _t->tableCellColumnSpan((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 51: { int _r = _t->tableCellRowSpan((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 52: { QPen _r = _t->textOutline((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPen*>(_a[0]) = _r; }  break;
        case 53: { QString _r = _t->toolTip((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 54: { QColor _r = _t->underlineColor((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 55: { QTextCharFormat::UnderlineStyle _r = _t->underlineStyle((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat::UnderlineStyle*>(_a[0]) = _r; }  break;
        case 56: { QTextCharFormat::VerticalAlignment _r = _t->verticalAlignment((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat::VerticalAlignment*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextCharFormat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextCharFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextCharFormat,
      qt_meta_data_PythonQtWrapper_QTextCharFormat, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextCharFormat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextCharFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextCharFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextCharFormat))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextCharFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextCharFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTextCodecPlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      59,   52,   34,   33, 0x0a,
      90,   33,   34,   33, 0x2a,
     117,  113,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextCodecPlugin[] = {
    "PythonQtWrapper_QTextCodecPlugin\0\0"
    "QTextCodecPlugin*\0parent\0"
    "new_QTextCodecPlugin(QObject*)\0"
    "new_QTextCodecPlugin()\0obj\0"
    "delete_QTextCodecPlugin(QTextCodecPlugin*)\0"
};

void PythonQtWrapper_QTextCodecPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextCodecPlugin *_t = static_cast<PythonQtWrapper_QTextCodecPlugin *>(_o);
        switch (_id) {
        case 0: { QTextCodecPlugin* _r = _t->new_QTextCodecPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCodecPlugin**>(_a[0]) = _r; }  break;
        case 1: { QTextCodecPlugin* _r = _t->new_QTextCodecPlugin();
            if (_a[0]) *reinterpret_cast< QTextCodecPlugin**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextCodecPlugin((*reinterpret_cast< QTextCodecPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextCodecPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextCodecPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextCodecPlugin,
      qt_meta_data_PythonQtWrapper_QTextCodecPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextCodecPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextCodecPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextCodecPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextCodecPlugin))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextCodecPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextCodecPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTextCursor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      83,   14, // methods
       0,    0, // properties
       3,  429, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   28,   29,   28, 0x0a,
      69,   60,   29,   28, 0x0a,
     107,  101,   29,   28, 0x0a,
     142,  136,   29,   28, 0x0a,
     177,  170,   29,   28, 0x0a,
     210,  206,   28,   28, 0x0a,
     264,  247,  243,   28, 0x0a,
     290,  247,  285,   28, 0x0a,
     315,  247,  285,   28, 0x0a,
     342,  247,  285,   28, 0x0a,
     362,  247,  285,   28, 0x0a,
     384,  247,   28,   28, 0x0a,
     424,  247,  413,   28, 0x0a,
     460,  247,  444,   28, 0x0a,
     507,  247,  490,   28, 0x0a,
     533,  247,  243,   28, 0x0a,
     559,  247,  444,   28, 0x0a,
     584,  247,   28,   28, 0x0a,
     613,  247,  243,   28, 0x0a,
     674,  651,  640,   28, 0x0a,
     746,  722,  640,   28, 0x0a,
     799,  247,  787,   28, 0x0a,
     826,  247,  640,   28, 0x0a,
     864,  247,  852,   28, 0x0a,
     891,  247,   28,   28, 0x0a,
     916,  247,   28,   28, 0x0a,
     964,  247,  949,   28, 0x0a,
     987,  247,   28,   28, 0x0a,
    1014,  247,  285,   28, 0x0a,
    1048,  247,  285,   28, 0x0a,
    1075,  247,   28,   28, 0x0a,
    1101,  722,   28,   28, 0x0a,
    1179, 1144,   28,   28, 0x0a,
    1264, 1238,   28,   28, 0x0a,
    1315,  722,  787,   28, 0x0a,
    1380, 1358,   28,   28, 0x0a,
    1441, 1413,   28,   28, 0x0a,
    1505, 1482,   28,   28, 0x2a,
    1560, 1538,   28,   28, 0x0a,
    1594,  722,   28,   28, 0x0a,
    1671, 1637,   28,   28, 0x0a,
    1741,  651,  640,   28, 0x0a,
    1789,  722,  640,   28, 0x0a,
    1857, 1830,  852,   28, 0x0a,
    1925, 1891,  852,   28, 0x0a,
    1998, 1976,   28,   28, 0x0a,
    2060, 2031,   28,   28, 0x0a,
    2132, 2109,  285,   28, 0x0a,
    2167,  247,  285,   28, 0x0a,
    2188,  247,   28,   28, 0x0a,
    2224,  247,  285,   28, 0x0a,
    2285, 2259,   28,   28, 0x0a,
    2336, 2259,   28,   28, 0x0a,
    2384, 2259,   28,   28, 0x0a,
    2459, 2430,  285,   28, 0x0a,
    2566, 2539,  285,   28, 0x2a,
    2662, 2642,  285,   28, 0x2a,
    2737, 2716,  285,   28, 0x0a,
    2770, 2716,  285,   28, 0x0a,
    2803, 2716,  285,   28, 0x0a,
    2836, 2716,  285,   28, 0x0a,
    2869, 2716,  285,   28, 0x0a,
    2902, 2716,  285,   28, 0x0a,
    2935,  247,  243,   28, 0x0a,
    2958,  247,  243,   28, 0x0a,
    2988,  247,   28,   28, 0x0a,
    3048, 3021,   28,   28, 0x0a,
    3153, 3096,   28,   28, 0x0a,
    3214,  247, 3206,   28, 0x0a,
    3263,  247, 3241,   28, 0x0a,
    3287,  247,  243,   28, 0x0a,
    3314,  247,  243,   28, 0x0a,
    3343,  722,   28,   28, 0x0a,
    3392,  722,   28,   28, 0x0a,
    3438,  722,   28,   28, 0x0a,
    3501, 3482,   28,   28, 0x0a,
    3570, 3544,   28,   28, 0x0a,
    3643, 3622,   28,   28, 0x2a,
    3692, 3673,   28,   28, 0x0a,
    3731, 3482,   28,   28, 0x0a,
    3770,  247,  243,   28, 0x0a,
    3802,  247,  285,   28, 0x0a,
    3833,  206,  285,   28, 0x0a,

 // enums: name, flags, count, data
    3859, 0x0,    2,  441,
    3868, 0x0,   25,  445,
    3882, 0x0,    4,  495,

 // enum data: key, value
    3896, uint(PythonQtWrapper_QTextCursor::MoveAnchor),
    3907, uint(PythonQtWrapper_QTextCursor::KeepAnchor),
    3918, uint(PythonQtWrapper_QTextCursor::NoMove),
    3925, uint(PythonQtWrapper_QTextCursor::Start),
    3931, uint(PythonQtWrapper_QTextCursor::Up),
    3934, uint(PythonQtWrapper_QTextCursor::StartOfLine),
    3946, uint(PythonQtWrapper_QTextCursor::StartOfBlock),
    3959, uint(PythonQtWrapper_QTextCursor::StartOfWord),
    3971, uint(PythonQtWrapper_QTextCursor::PreviousBlock),
    3985, uint(PythonQtWrapper_QTextCursor::PreviousCharacter),
    4003, uint(PythonQtWrapper_QTextCursor::PreviousWord),
    4016, uint(PythonQtWrapper_QTextCursor::Left),
    4021, uint(PythonQtWrapper_QTextCursor::WordLeft),
    4030, uint(PythonQtWrapper_QTextCursor::End),
    4034, uint(PythonQtWrapper_QTextCursor::Down),
    4039, uint(PythonQtWrapper_QTextCursor::EndOfLine),
    4049, uint(PythonQtWrapper_QTextCursor::EndOfWord),
    4059, uint(PythonQtWrapper_QTextCursor::EndOfBlock),
    4070, uint(PythonQtWrapper_QTextCursor::NextBlock),
    4080, uint(PythonQtWrapper_QTextCursor::NextCharacter),
    4094, uint(PythonQtWrapper_QTextCursor::NextWord),
    4103, uint(PythonQtWrapper_QTextCursor::Right),
    4109, uint(PythonQtWrapper_QTextCursor::WordRight),
    4119, uint(PythonQtWrapper_QTextCursor::NextCell),
    4128, uint(PythonQtWrapper_QTextCursor::PreviousCell),
    4141, uint(PythonQtWrapper_QTextCursor::NextRow),
    4149, uint(PythonQtWrapper_QTextCursor::PreviousRow),
    4161, uint(PythonQtWrapper_QTextCursor::WordUnderCursor),
    4177, uint(PythonQtWrapper_QTextCursor::LineUnderCursor),
    4193, uint(PythonQtWrapper_QTextCursor::BlockUnderCursor),
    4210, uint(PythonQtWrapper_QTextCursor::Document),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextCursor[] = {
    "PythonQtWrapper_QTextCursor\0\0QTextCursor*\0"
    "new_QTextCursor()\0document\0"
    "new_QTextCursor(QTextDocument*)\0frame\0"
    "new_QTextCursor(QTextFrame*)\0block\0"
    "new_QTextCursor(QTextBlock)\0cursor\0"
    "new_QTextCursor(QTextCursor)\0obj\0"
    "delete_QTextCursor(QTextCursor*)\0int\0"
    "theWrappedObject\0anchor(QTextCursor*)\0"
    "bool\0atBlockEnd(QTextCursor*)\0"
    "atBlockStart(QTextCursor*)\0"
    "atEnd(QTextCursor*)\0atStart(QTextCursor*)\0"
    "beginEditBlock(QTextCursor*)\0QTextBlock\0"
    "block(QTextCursor*)\0QTextCharFormat\0"
    "blockCharFormat(QTextCursor*)\0"
    "QTextBlockFormat\0blockFormat(QTextCursor*)\0"
    "blockNumber(QTextCursor*)\0"
    "charFormat(QTextCursor*)\0"
    "clearSelection(QTextCursor*)\0"
    "columnNumber(QTextCursor*)\0QTextList*\0"
    "theWrappedObject,style\0"
    "createList(QTextCursor*,QTextListFormat::Style)\0"
    "theWrappedObject,format\0"
    "createList(QTextCursor*,QTextListFormat)\0"
    "QTextFrame*\0currentFrame(QTextCursor*)\0"
    "currentList(QTextCursor*)\0QTextTable*\0"
    "currentTable(QTextCursor*)\0"
    "deleteChar(QTextCursor*)\0"
    "deletePreviousChar(QTextCursor*)\0"
    "QTextDocument*\0document(QTextCursor*)\0"
    "endEditBlock(QTextCursor*)\0"
    "hasComplexSelection(QTextCursor*)\0"
    "hasSelection(QTextCursor*)\0"
    "insertBlock(QTextCursor*)\0"
    "insertBlock(QTextCursor*,QTextBlockFormat)\0"
    "theWrappedObject,format,charFormat\0"
    "insertBlock(QTextCursor*,QTextBlockFormat,QTextCharFormat)\0"
    "theWrappedObject,fragment\0"
    "insertFragment(QTextCursor*,QTextDocumentFragment)\0"
    "insertFrame(QTextCursor*,QTextFrameFormat)\0"
    "theWrappedObject,html\0"
    "insertHtml(QTextCursor*,QString)\0"
    "theWrappedObject,image,name\0"
    "insertImage(QTextCursor*,QImage,QString)\0"
    "theWrappedObject,image\0"
    "insertImage(QTextCursor*,QImage)\0"
    "theWrappedObject,name\0"
    "insertImage(QTextCursor*,QString)\0"
    "insertImage(QTextCursor*,QTextImageFormat)\0"
    "theWrappedObject,format,alignment\0"
    "insertImage(QTextCursor*,QTextImageFormat,QTextFrameFormat::Position)\0"
    "insertList(QTextCursor*,QTextListFormat::Style)\0"
    "insertList(QTextCursor*,QTextListFormat)\0"
    "theWrappedObject,rows,cols\0"
    "insertTable(QTextCursor*,int,int)\0"
    "theWrappedObject,rows,cols,format\0"
    "insertTable(QTextCursor*,int,int,QTextTableFormat)\0"
    "theWrappedObject,text\0"
    "insertText(QTextCursor*,QString)\0"
    "theWrappedObject,text,format\0"
    "insertText(QTextCursor*,QString,QTextCharFormat)\0"
    "theWrappedObject,other\0"
    "isCopyOf(QTextCursor*,QTextCursor)\0"
    "isNull(QTextCursor*)\0"
    "joinPreviousEditBlock(QTextCursor*)\0"
    "keepPositionOnInsert(QTextCursor*)\0"
    "theWrappedObject,modifier\0"
    "mergeBlockCharFormat(QTextCursor*,QTextCharFormat)\0"
    "mergeBlockFormat(QTextCursor*,QTextBlockFormat)\0"
    "mergeCharFormat(QTextCursor*,QTextCharFormat)\0"
    "theWrappedObject,op,arg__2,n\0"
    "movePosition(QTextCursor*,QTextCursor::MoveOperation,QTextCursor::Move"
    "Mode,int)\0"
    "theWrappedObject,op,arg__2\0"
    "movePosition(QTextCursor*,QTextCursor::MoveOperation,QTextCursor::Move"
    "Mode)\0"
    "theWrappedObject,op\0"
    "movePosition(QTextCursor*,QTextCursor::MoveOperation)\0"
    "theWrappedObject,rhs\0"
    "__ne__(QTextCursor*,QTextCursor)\0"
    "__lt__(QTextCursor*,QTextCursor)\0"
    "__le__(QTextCursor*,QTextCursor)\0"
    "__eq__(QTextCursor*,QTextCursor)\0"
    "__gt__(QTextCursor*,QTextCursor)\0"
    "__ge__(QTextCursor*,QTextCursor)\0"
    "position(QTextCursor*)\0"
    "positionInBlock(QTextCursor*)\0"
    "removeSelectedText(QTextCursor*)\0"
    "theWrappedObject,selection\0"
    "select(QTextCursor*,QTextCursor::SelectionType)\0"
    "theWrappedObject,firstRow,numRows,firstColumn,numColumns\0"
    "selectedTableCells(QTextCursor*,int*,int*,int*,int*)\0"
    "QString\0selectedText(QTextCursor*)\0"
    "QTextDocumentFragment\0selection(QTextCursor*)\0"
    "selectionEnd(QTextCursor*)\0"
    "selectionStart(QTextCursor*)\0"
    "setBlockCharFormat(QTextCursor*,QTextCharFormat)\0"
    "setBlockFormat(QTextCursor*,QTextBlockFormat)\0"
    "setCharFormat(QTextCursor*,QTextCharFormat)\0"
    "theWrappedObject,b\0"
    "setKeepPositionOnInsert(QTextCursor*,bool)\0"
    "theWrappedObject,pos,mode\0"
    "setPosition(QTextCursor*,int,QTextCursor::MoveMode)\0"
    "theWrappedObject,pos\0setPosition(QTextCursor*,int)\0"
    "theWrappedObject,x\0"
    "setVerticalMovementX(QTextCursor*,int)\0"
    "setVisualNavigation(QTextCursor*,bool)\0"
    "verticalMovementX(QTextCursor*)\0"
    "visualNavigation(QTextCursor*)\0"
    "__nonzero__(QTextCursor*)\0MoveMode\0"
    "MoveOperation\0SelectionType\0MoveAnchor\0"
    "KeepAnchor\0NoMove\0Start\0Up\0StartOfLine\0"
    "StartOfBlock\0StartOfWord\0PreviousBlock\0"
    "PreviousCharacter\0PreviousWord\0Left\0"
    "WordLeft\0End\0Down\0EndOfLine\0EndOfWord\0"
    "EndOfBlock\0NextBlock\0NextCharacter\0"
    "NextWord\0Right\0WordRight\0NextCell\0"
    "PreviousCell\0NextRow\0PreviousRow\0"
    "WordUnderCursor\0LineUnderCursor\0"
    "BlockUnderCursor\0Document\0"
};

void PythonQtWrapper_QTextCursor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextCursor *_t = static_cast<PythonQtWrapper_QTextCursor *>(_o);
        switch (_id) {
        case 0: { QTextCursor* _r = _t->new_QTextCursor();
            if (_a[0]) *reinterpret_cast< QTextCursor**>(_a[0]) = _r; }  break;
        case 1: { QTextCursor* _r = _t->new_QTextCursor((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor**>(_a[0]) = _r; }  break;
        case 2: { QTextCursor* _r = _t->new_QTextCursor((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor**>(_a[0]) = _r; }  break;
        case 3: { QTextCursor* _r = _t->new_QTextCursor((*reinterpret_cast< const QTextBlock(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor**>(_a[0]) = _r; }  break;
        case 4: { QTextCursor* _r = _t->new_QTextCursor((*reinterpret_cast< const QTextCursor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QTextCursor((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 6: { int _r = _t->anchor((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->atBlockEnd((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->atBlockStart((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->atEnd((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->atStart((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->beginEditBlock((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 12: { QTextBlock _r = _t->block((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 13: { QTextCharFormat _r = _t->blockCharFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = _r; }  break;
        case 14: { QTextBlockFormat _r = _t->blockFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlockFormat*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->blockNumber((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { QTextCharFormat _r = _t->charFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = _r; }  break;
        case 17: _t->clearSelection((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 18: { int _r = _t->columnNumber((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { QTextList* _r = _t->createList((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< QTextListFormat::Style(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextList**>(_a[0]) = _r; }  break;
        case 20: { QTextList* _r = _t->createList((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextListFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextList**>(_a[0]) = _r; }  break;
        case 21: { QTextFrame* _r = _t->currentFrame((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrame**>(_a[0]) = _r; }  break;
        case 22: { QTextList* _r = _t->currentList((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextList**>(_a[0]) = _r; }  break;
        case 23: { QTextTable* _r = _t->currentTable((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTable**>(_a[0]) = _r; }  break;
        case 24: _t->deleteChar((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 25: _t->deletePreviousChar((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 26: { QTextDocument* _r = _t->document((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 27: _t->endEditBlock((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 28: { bool _r = _t->hasComplexSelection((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->hasSelection((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: _t->insertBlock((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 31: _t->insertBlock((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextBlockFormat(*)>(_a[2]))); break;
        case 32: _t->insertBlock((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextBlockFormat(*)>(_a[2])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[3]))); break;
        case 33: _t->insertFragment((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextDocumentFragment(*)>(_a[2]))); break;
        case 34: { QTextFrame* _r = _t->insertFrame((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextFrameFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextFrame**>(_a[0]) = _r; }  break;
        case 35: _t->insertHtml((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 36: _t->insertImage((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 37: _t->insertImage((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 38: _t->insertImage((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 39: _t->insertImage((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextImageFormat(*)>(_a[2]))); break;
        case 40: _t->insertImage((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextImageFormat(*)>(_a[2])),(*reinterpret_cast< QTextFrameFormat::Position(*)>(_a[3]))); break;
        case 41: { QTextList* _r = _t->insertList((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< QTextListFormat::Style(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextList**>(_a[0]) = _r; }  break;
        case 42: { QTextList* _r = _t->insertList((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextListFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextList**>(_a[0]) = _r; }  break;
        case 43: { QTextTable* _r = _t->insertTable((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTextTable**>(_a[0]) = _r; }  break;
        case 44: { QTextTable* _r = _t->insertTable((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QTextTableFormat(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QTextTable**>(_a[0]) = _r; }  break;
        case 45: _t->insertText((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 46: _t->insertText((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[3]))); break;
        case 47: { bool _r = _t->isCopyOf((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { bool _r = _t->isNull((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: _t->joinPreviousEditBlock((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 50: { bool _r = _t->keepPositionOnInsert((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 51: _t->mergeBlockCharFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 52: _t->mergeBlockFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextBlockFormat(*)>(_a[2]))); break;
        case 53: _t->mergeCharFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 54: { bool _r = _t->movePosition((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< QTextCursor::MoveOperation(*)>(_a[2])),(*reinterpret_cast< QTextCursor::MoveMode(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 55: { bool _r = _t->movePosition((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< QTextCursor::MoveOperation(*)>(_a[2])),(*reinterpret_cast< QTextCursor::MoveMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 56: { bool _r = _t->movePosition((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< QTextCursor::MoveOperation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 57: { bool _r = _t->__ne__((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 58: { bool _r = _t->__lt__((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 59: { bool _r = _t->__le__((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 60: { bool _r = _t->__eq__((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 61: { bool _r = _t->__gt__((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 62: { bool _r = _t->__ge__((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 63: { int _r = _t->position((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 64: { int _r = _t->positionInBlock((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 65: _t->removeSelectedText((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 66: _t->select((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< QTextCursor::SelectionType(*)>(_a[2]))); break;
        case 67: _t->selectedTableCells((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5]))); break;
        case 68: { QString _r = _t->selectedText((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 69: { QTextDocumentFragment _r = _t->selection((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocumentFragment*>(_a[0]) = _r; }  break;
        case 70: { int _r = _t->selectionEnd((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 71: { int _r = _t->selectionStart((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 72: _t->setBlockCharFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 73: _t->setBlockFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextBlockFormat(*)>(_a[2]))); break;
        case 74: _t->setCharFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 75: _t->setKeepPositionOnInsert((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 76: _t->setPosition((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QTextCursor::MoveMode(*)>(_a[3]))); break;
        case 77: _t->setPosition((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 78: _t->setVerticalMovementX((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 79: _t->setVisualNavigation((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 80: { int _r = _t->verticalMovementX((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 81: { bool _r = _t->visualNavigation((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 82: { bool _r = _t->__nonzero__((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextCursor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextCursor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextCursor,
      qt_meta_data_PythonQtWrapper_QTextCursor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextCursor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextCursor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextCursor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextCursor))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextCursor*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextCursor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextDocument[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      88,   14, // methods
       0,    0, // properties
       5,  454, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   46,   31,   30, 0x0a,
      81,   30,   31,   30, 0x2a,
     113,  101,   31,   30, 0x0a,
     154,  149,   31,   30, 0x2a,
     185,  181,   30,   30, 0x0a,
     258,  222,   30,   30, 0x0a,
     321,  304,   30,   30, 0x0a,
     369,  304,  348,   30, 0x0a,
     400,  304,  396,   30, 0x0a,
     435,  304,  396,   30, 0x0a,
     481,  304,  470,   30, 0x0a,
     503,  304,  396,   30, 0x0a,
     557,  536,  530,   30, 0x0a,
     589,  304,  396,   30, 0x0a,
     620,  304,   30,   30, 0x0a,
     674,  642,   30,   30, 0x0a,
     732,  304,   30,   30, 0x2a,
     792,  768,   31,   30, 0x0a,
     823,  304,   31,   30, 0x2a,
     877,  858,  845,   30, 0x0a,
     938,  304,  918,   30, 0x0a,
     983,  304,  977,   30, 0x0a,
    1019,  304, 1011,   30, 0x0a,
    1065,  304, 1053,   30, 0x0a,
    1128,  304, 1099,   30, 0x0a,
    1165,  304, 1159,   30, 0x0a,
    1226, 1196,   30,   30, 0x0a,
    1297, 1272,   30,   30, 0x2a,
    1336,  304,  470,   30, 0x0a,
    1403, 1368, 1356,   30, 0x0a,
    1496, 1469, 1356,   30, 0x2a,
    1537, 1368, 1356,   30, 0x0a,
    1595, 1469, 1356,   30, 0x2a,
    1650, 1628, 1356,   30, 0x2a,
    1719, 1679, 1356,   30, 0x0a,
    1817, 1785, 1356,   30, 0x2a,
    1858, 1679, 1356,   30, 0x0a,
    1916, 1785, 1356,   30, 0x2a,
    1976, 1949, 1356,   30, 0x2a,
    2005,  536,  470,   30, 0x0a,
    2064, 2035,  470,   30, 0x0a,
    2106, 2035,  470,   30, 0x0a,
    2144,  304,  470,   30, 0x0a,
    2183,  536, 2171,   30, 0x0a,
    2211,  304, 1159,   30, 0x0a,
    2238,  304, 1159,   30, 0x0a,
    2271,  304, 2266,   30, 0x0a,
    2295,  304, 2266,   30, 0x0a,
    2322,  304, 2266,   30, 0x0a,
    2354,  304, 2266,   30, 0x0a,
    2386,  304, 2266,   30, 0x0a,
    2420,  304,  470,   30, 0x0a,
    2446,  304,  396,   30, 0x0a,
    2508, 2481, 2472,   30, 0x0a,
    2575, 2546,   30,   30, 0x0a,
    2617,  304,  396,   30, 0x0a,
    2673, 2651, 1011,   30, 0x0a,
    2765, 2736,  845,   30, 0x0a,
    2816, 2792,  845,   30, 0x0a,
    2860,  304,  396,   30, 0x0a,
    2893,  304, 2886,   30, 0x0a,
    2943, 2918,   30,   30, 0x0a,
    2999, 2975,   30,   30, 0x0a,
    3033, 2481, 2472,   30, 0x0a,
    3067,  304,  396,   30, 0x0a,
    3092,  304, 2171,   30, 0x0a,
    3141, 3118,   30,   30, 0x0a,
    3225, 3203,   30,   30, 0x0a,
    3285, 3262,   30,   30, 0x0a,
    3354, 3330,   30,   30, 0x0a,
    3427, 3403,   30,   30, 0x0a,
    3514, 3490,   30,   30, 0x0a,
    3576, 3554,   30,   30, 0x0a,
    3631, 3608,   30,   30, 0x0a,
    3693, 3668,   30,   30, 0x0a,
    3763, 3734,   30,   30, 0x0a,
    3859, 3837,   30,   30, 0x0a,
    3916, 3894,   30,   30, 0x0a,
    3953, 3608,   30,   30, 0x0a,
    4012, 3988,   30,   30, 0x0a,
    4071, 4052,   30,   30, 0x0a,
    4112,  304, 2886,   30, 0x0a,
    4133,  304, 1159,   30, 0x0a,
    4185, 4159, 1011,   30, 0x0a,
    4219,  304, 1011,   30, 0x2a,
    4242,  304, 1011,   30, 0x0a,
    4270, 2975,   30,   30, 0x0a,
    4304,  304, 2266,   30, 0x0a,

 // enums: name, flags, count, data
    4337, 0x0,    4,  474,
    4350, 0x0,    3,  482,
    4357, 0x0,    3,  488,
    4366, 0x1,    3,  494,
    4376, 0x0,    2,  500,

 // enum data: key, value
    4392, uint(PythonQtWrapper_QTextDocument::HtmlResource),
    4405, uint(PythonQtWrapper_QTextDocument::ImageResource),
    4419, uint(PythonQtWrapper_QTextDocument::StyleSheetResource),
    4438, uint(PythonQtWrapper_QTextDocument::UserResource),
    4451, uint(PythonQtWrapper_QTextDocument::UndoStack),
    4461, uint(PythonQtWrapper_QTextDocument::RedoStack),
    4471, uint(PythonQtWrapper_QTextDocument::UndoAndRedoStacks),
    4489, uint(PythonQtWrapper_QTextDocument::FindBackward),
    4502, uint(PythonQtWrapper_QTextDocument::FindCaseSensitively),
    4522, uint(PythonQtWrapper_QTextDocument::FindWholeWords),
    4489, uint(PythonQtWrapper_QTextDocument::FindBackward),
    4502, uint(PythonQtWrapper_QTextDocument::FindCaseSensitively),
    4522, uint(PythonQtWrapper_QTextDocument::FindWholeWords),
    4537, uint(PythonQtWrapper_QTextDocument::DocumentTitle),
    4551, uint(PythonQtWrapper_QTextDocument::DocumentUrl),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextDocument[] = {
    "PythonQtWrapper_QTextDocument\0\0"
    "QTextDocument*\0parent\0new_QTextDocument(QObject*)\0"
    "new_QTextDocument()\0text,parent\0"
    "new_QTextDocument(QString,QObject*)\0"
    "text\0new_QTextDocument(QString)\0obj\0"
    "delete_QTextDocument(QTextDocument*)\0"
    "theWrappedObject,type,name,resource\0"
    "addResource(QTextDocument*,int,QUrl,QVariant)\0"
    "theWrappedObject\0adjustSize(QTextDocument*)\0"
    "QVector<QTextFormat>\0allFormats(QTextDocument*)\0"
    "int\0availableRedoSteps(QTextDocument*)\0"
    "availableUndoSteps(QTextDocument*)\0"
    "QTextBlock\0begin(QTextDocument*)\0"
    "blockCount(QTextDocument*)\0QChar\0"
    "theWrappedObject,pos\0"
    "characterAt(QTextDocument*,int)\0"
    "characterCount(QTextDocument*)\0"
    "clear(QTextDocument*)\0"
    "theWrappedObject,historyToClear\0"
    "clearUndoRedoStacks(QTextDocument*,QTextDocument::Stacks)\0"
    "clearUndoRedoStacks(QTextDocument*)\0"
    "theWrappedObject,parent\0"
    "clone(QTextDocument*,QObject*)\0"
    "clone(QTextDocument*)\0QTextObject*\0"
    "theWrappedObject,f\0"
    "createObject(QTextDocument*,QTextFormat)\0"
    "Qt::CursorMoveStyle\0"
    "defaultCursorMoveStyle(QTextDocument*)\0"
    "QFont\0defaultFont(QTextDocument*)\0"
    "QString\0defaultStyleSheet(QTextDocument*)\0"
    "QTextOption\0defaultTextOption(QTextDocument*)\0"
    "QAbstractTextDocumentLayout*\0"
    "documentLayout(QTextDocument*)\0qreal\0"
    "documentMargin(QTextDocument*)\0"
    "theWrappedObject,painter,rect\0"
    "drawContents(QTextDocument*,QPainter*,QRectF)\0"
    "theWrappedObject,painter\0"
    "drawContents(QTextDocument*,QPainter*)\0"
    "end(QTextDocument*)\0QTextCursor\0"
    "theWrappedObject,expr,from,options\0"
    "find(QTextDocument*,QRegExp,QTextCursor,QTextDocument::FindFlags)\0"
    "theWrappedObject,expr,from\0"
    "find(QTextDocument*,QRegExp,QTextCursor)\0"
    "find(QTextDocument*,QRegExp,int,QTextDocument::FindFlags)\0"
    "find(QTextDocument*,QRegExp,int)\0"
    "theWrappedObject,expr\0"
    "find(QTextDocument*,QRegExp)\0"
    "theWrappedObject,subString,from,options\0"
    "find(QTextDocument*,QString,QTextCursor,QTextDocument::FindFlags)\0"
    "theWrappedObject,subString,from\0"
    "find(QTextDocument*,QString,QTextCursor)\0"
    "find(QTextDocument*,QString,int,QTextDocument::FindFlags)\0"
    "find(QTextDocument*,QString,int)\0"
    "theWrappedObject,subString\0"
    "find(QTextDocument*,QString)\0"
    "findBlock(QTextDocument*,int)\0"
    "theWrappedObject,blockNumber\0"
    "findBlockByLineNumber(QTextDocument*,int)\0"
    "findBlockByNumber(QTextDocument*,int)\0"
    "firstBlock(QTextDocument*)\0QTextFrame*\0"
    "frameAt(QTextDocument*,int)\0"
    "idealWidth(QTextDocument*)\0"
    "indentWidth(QTextDocument*)\0bool\0"
    "isEmpty(QTextDocument*)\0"
    "isModified(QTextDocument*)\0"
    "isRedoAvailable(QTextDocument*)\0"
    "isUndoAvailable(QTextDocument*)\0"
    "isUndoRedoEnabled(QTextDocument*)\0"
    "lastBlock(QTextDocument*)\0"
    "lineCount(QTextDocument*)\0QVariant\0"
    "theWrappedObject,type,name\0"
    "loadResource(QTextDocument*,int,QUrl)\0"
    "theWrappedObject,from,length\0"
    "markContentsDirty(QTextDocument*,int,int)\0"
    "maximumBlockCount(QTextDocument*)\0"
    "theWrappedObject,info\0"
    "metaInformation(QTextDocument*,QTextDocument::MetaInformation)\0"
    "theWrappedObject,objectIndex\0"
    "object(QTextDocument*,int)\0"
    "theWrappedObject,arg__1\0"
    "objectForFormat(QTextDocument*,QTextFormat)\0"
    "pageCount(QTextDocument*)\0QSizeF\0"
    "pageSize(QTextDocument*)\0"
    "theWrappedObject,printer\0"
    "print(QTextDocument*,QPrinter*)\0"
    "theWrappedObject,cursor\0"
    "redo(QTextDocument*,QTextCursor*)\0"
    "resource(QTextDocument*,int,QUrl)\0"
    "revision(QTextDocument*)\0"
    "rootFrame(QTextDocument*)\0"
    "theWrappedObject,style\0"
    "setDefaultCursorMoveStyle(QTextDocument*,Qt::CursorMoveStyle)\0"
    "theWrappedObject,font\0"
    "setDefaultFont(QTextDocument*,QFont)\0"
    "theWrappedObject,sheet\0"
    "setDefaultStyleSheet(QTextDocument*,QString)\0"
    "theWrappedObject,option\0"
    "setDefaultTextOption(QTextDocument*,QTextOption)\0"
    "theWrappedObject,layout\0"
    "setDocumentLayout(QTextDocument*,QAbstractTextDocumentLayout*)\0"
    "theWrappedObject,margin\0"
    "setDocumentMargin(QTextDocument*,qreal)\0"
    "theWrappedObject,html\0"
    "setHtml(QTextDocument*,QString)\0"
    "theWrappedObject,width\0"
    "setIndentWidth(QTextDocument*,qreal)\0"
    "theWrappedObject,maximum\0"
    "setMaximumBlockCount(QTextDocument*,int)\0"
    "theWrappedObject,info,arg__2\0"
    "setMetaInformation(QTextDocument*,QTextDocument::MetaInformation,QStri"
    "ng)\0"
    "theWrappedObject,size\0"
    "setPageSize(QTextDocument*,QSizeF)\0"
    "theWrappedObject,text\0"
    "setPlainText(QTextDocument*,QString)\0"
    "setTextWidth(QTextDocument*,qreal)\0"
    "theWrappedObject,enable\0"
    "setUndoRedoEnabled(QTextDocument*,bool)\0"
    "theWrappedObject,b\0"
    "setUseDesignMetrics(QTextDocument*,bool)\0"
    "size(QTextDocument*)\0textWidth(QTextDocument*)\0"
    "theWrappedObject,encoding\0"
    "toHtml(QTextDocument*,QByteArray)\0"
    "toHtml(QTextDocument*)\0"
    "toPlainText(QTextDocument*)\0"
    "undo(QTextDocument*,QTextCursor*)\0"
    "useDesignMetrics(QTextDocument*)\0"
    "ResourceType\0Stacks\0FindFlag\0FindFlags\0"
    "MetaInformation\0HtmlResource\0ImageResource\0"
    "StyleSheetResource\0UserResource\0"
    "UndoStack\0RedoStack\0UndoAndRedoStacks\0"
    "FindBackward\0FindCaseSensitively\0"
    "FindWholeWords\0DocumentTitle\0DocumentUrl\0"
};

void PythonQtWrapper_QTextDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextDocument *_t = static_cast<PythonQtWrapper_QTextDocument *>(_o);
        switch (_id) {
        case 0: { QTextDocument* _r = _t->new_QTextDocument((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 1: { QTextDocument* _r = _t->new_QTextDocument();
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 2: { QTextDocument* _r = _t->new_QTextDocument((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 3: { QTextDocument* _r = _t->new_QTextDocument((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QTextDocument((*reinterpret_cast< QTextDocument*(*)>(_a[1]))); break;
        case 5: _t->addResource((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 6: _t->adjustSize((*reinterpret_cast< QTextDocument*(*)>(_a[1]))); break;
        case 7: { QVector<QTextFormat> _r = _t->allFormats((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QTextFormat>*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->availableRedoSteps((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->availableUndoSteps((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QTextBlock _r = _t->begin((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->blockCount((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { QChar _r = _t->characterAt((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QChar*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->characterCount((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: _t->clear((*reinterpret_cast< QTextDocument*(*)>(_a[1]))); break;
        case 15: _t->clearUndoRedoStacks((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QTextDocument::Stacks(*)>(_a[2]))); break;
        case 16: _t->clearUndoRedoStacks((*reinterpret_cast< QTextDocument*(*)>(_a[1]))); break;
        case 17: { QTextDocument* _r = _t->clone((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 18: { QTextDocument* _r = _t->clone((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 19: { QTextObject* _r = _t->createObject((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QTextFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextObject**>(_a[0]) = _r; }  break;
        case 20: { Qt::CursorMoveStyle _r = _t->defaultCursorMoveStyle((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::CursorMoveStyle*>(_a[0]) = _r; }  break;
        case 21: { QFont _r = _t->defaultFont((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 22: { QString _r = _t->defaultStyleSheet((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: { QTextOption _r = _t->defaultTextOption((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption*>(_a[0]) = _r; }  break;
        case 24: { QAbstractTextDocumentLayout* _r = _t->documentLayout((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractTextDocumentLayout**>(_a[0]) = _r; }  break;
        case 25: { qreal _r = _t->documentMargin((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 26: _t->drawContents((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3]))); break;
        case 27: _t->drawContents((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 28: { QTextBlock _r = _t->end((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 29: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QRegExp(*)>(_a[2])),(*reinterpret_cast< const QTextCursor(*)>(_a[3])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 30: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QRegExp(*)>(_a[2])),(*reinterpret_cast< const QTextCursor(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 31: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QRegExp(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 32: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QRegExp(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 33: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QRegExp(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 34: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QTextCursor(*)>(_a[3])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 35: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QTextCursor(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 36: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 37: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 38: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 39: { QTextBlock _r = _t->findBlock((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 40: { QTextBlock _r = _t->findBlockByLineNumber((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 41: { QTextBlock _r = _t->findBlockByNumber((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 42: { QTextBlock _r = _t->firstBlock((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 43: { QTextFrame* _r = _t->frameAt((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextFrame**>(_a[0]) = _r; }  break;
        case 44: { qreal _r = _t->idealWidth((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 45: { qreal _r = _t->indentWidth((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->isEmpty((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: { bool _r = _t->isModified((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { bool _r = _t->isRedoAvailable((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->isUndoAvailable((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: { bool _r = _t->isUndoRedoEnabled((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 51: { QTextBlock _r = _t->lastBlock((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 52: { int _r = _t->lineCount((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 53: { QVariant _r = _t->loadResource((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 54: _t->markContentsDirty((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 55: { int _r = _t->maximumBlockCount((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 56: { QString _r = _t->metaInformation((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QTextDocument::MetaInformation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 57: { QTextObject* _r = _t->object((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextObject**>(_a[0]) = _r; }  break;
        case 58: { QTextObject* _r = _t->objectForFormat((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QTextFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextObject**>(_a[0]) = _r; }  break;
        case 59: { int _r = _t->pageCount((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 60: { QSizeF _r = _t->pageSize((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 61: _t->print((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QPrinter*(*)>(_a[2]))); break;
        case 62: _t->redo((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QTextCursor*(*)>(_a[2]))); break;
        case 63: { QVariant _r = _t->resource((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 64: { int _r = _t->revision((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 65: { QTextFrame* _r = _t->rootFrame((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrame**>(_a[0]) = _r; }  break;
        case 66: _t->setDefaultCursorMoveStyle((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< Qt::CursorMoveStyle(*)>(_a[2]))); break;
        case 67: _t->setDefaultFont((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2]))); break;
        case 68: _t->setDefaultStyleSheet((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 69: _t->setDefaultTextOption((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QTextOption(*)>(_a[2]))); break;
        case 70: _t->setDocumentLayout((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QAbstractTextDocumentLayout*(*)>(_a[2]))); break;
        case 71: _t->setDocumentMargin((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 72: _t->setHtml((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 73: _t->setIndentWidth((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 74: _t->setMaximumBlockCount((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 75: _t->setMetaInformation((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QTextDocument::MetaInformation(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 76: _t->setPageSize((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QSizeF(*)>(_a[2]))); break;
        case 77: _t->setPlainText((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 78: _t->setTextWidth((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 79: _t->setUndoRedoEnabled((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 80: _t->setUseDesignMetrics((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 81: { QSizeF _r = _t->size((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 82: { qreal _r = _t->textWidth((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 83: { QString _r = _t->toHtml((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 84: { QString _r = _t->toHtml((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 85: { QString _r = _t->toPlainText((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 86: _t->undo((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QTextCursor*(*)>(_a[2]))); break;
        case 87: { bool _r = _t->useDesignMetrics((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextDocument::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextDocument::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextDocument,
      qt_meta_data_PythonQtWrapper_QTextDocument, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextDocument::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextDocument))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextDocument*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 88)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 88;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTextDocumentFragment[] = {

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
      62,   38,   39,   38, 0x0a,
      96,   90,   39,   38, 0x0a,
     144,  135,   39,   38, 0x0a,
     196,  192,   39,   38, 0x0a,
     249,  245,   38,   38, 0x0a,
     329,  324,  302,   38, 0x0a,
     398,  376,  302,   38, 0x0a,
     476,  466,  302,   38, 0x0a,
     550,  533,  528,   38, 0x0a,
     590,  533,  582,   38, 0x0a,
     647,  621,  582,   38, 0x0a,
     689,  533,  582,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextDocumentFragment[] = {
    "PythonQtWrapper_QTextDocumentFragment\0"
    "\0QTextDocumentFragment*\0"
    "new_QTextDocumentFragment()\0range\0"
    "new_QTextDocumentFragment(QTextCursor)\0"
    "document\0new_QTextDocumentFragment(const QTextDocument*)\0"
    "rhs\0new_QTextDocumentFragment(QTextDocumentFragment)\0"
    "obj\0delete_QTextDocumentFragment(QTextDocumentFragment*)\0"
    "QTextDocumentFragment\0html\0"
    "static_QTextDocumentFragment_fromHtml(QString)\0"
    "html,resourceProvider\0"
    "static_QTextDocumentFragment_fromHtml(QString,const QTextDocument*)\0"
    "plainText\0static_QTextDocumentFragment_fromPlainText(QString)\0"
    "bool\0theWrappedObject\0"
    "isEmpty(QTextDocumentFragment*)\0QString\0"
    "toHtml(QTextDocumentFragment*)\0"
    "theWrappedObject,encoding\0"
    "toHtml(QTextDocumentFragment*,QByteArray)\0"
    "toPlainText(QTextDocumentFragment*)\0"
};

void PythonQtWrapper_QTextDocumentFragment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextDocumentFragment *_t = static_cast<PythonQtWrapper_QTextDocumentFragment *>(_o);
        switch (_id) {
        case 0: { QTextDocumentFragment* _r = _t->new_QTextDocumentFragment();
            if (_a[0]) *reinterpret_cast< QTextDocumentFragment**>(_a[0]) = _r; }  break;
        case 1: { QTextDocumentFragment* _r = _t->new_QTextDocumentFragment((*reinterpret_cast< const QTextCursor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocumentFragment**>(_a[0]) = _r; }  break;
        case 2: { QTextDocumentFragment* _r = _t->new_QTextDocumentFragment((*reinterpret_cast< const QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocumentFragment**>(_a[0]) = _r; }  break;
        case 3: { QTextDocumentFragment* _r = _t->new_QTextDocumentFragment((*reinterpret_cast< const QTextDocumentFragment(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocumentFragment**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QTextDocumentFragment((*reinterpret_cast< QTextDocumentFragment*(*)>(_a[1]))); break;
        case 5: { QTextDocumentFragment _r = _t->static_QTextDocumentFragment_fromHtml((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocumentFragment*>(_a[0]) = _r; }  break;
        case 6: { QTextDocumentFragment _r = _t->static_QTextDocumentFragment_fromHtml((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QTextDocument*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextDocumentFragment*>(_a[0]) = _r; }  break;
        case 7: { QTextDocumentFragment _r = _t->static_QTextDocumentFragment_fromPlainText((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocumentFragment*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isEmpty((*reinterpret_cast< QTextDocumentFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->toHtml((*reinterpret_cast< QTextDocumentFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->toHtml((*reinterpret_cast< QTextDocumentFragment*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->toPlainText((*reinterpret_cast< QTextDocumentFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextDocumentFragment::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextDocumentFragment::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextDocumentFragment,
      qt_meta_data_PythonQtWrapper_QTextDocumentFragment, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextDocumentFragment::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextDocumentFragment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextDocumentFragment::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextDocumentFragment))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextDocumentFragment*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextDocumentFragment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextDocumentWriter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      58,   36,   37,   36, 0x0a,
      98,   84,   37,   36, 0x0a,
     161,  145,   37,   36, 0x0a,
     214,  205,   37,   36, 0x2a,
     251,  247,   36,   36, 0x0a,
     329,  312,  300,   36, 0x0a,
     368,  312,  357,   36, 0x0a,
     405,  312,  397,   36, 0x0a,
     447,  312,  436,   36, 0x0a,
     499,  476,   36,   36, 0x0a,
     566,  542,   36,   36, 0x0a,
     635,  609,   36,   36, 0x0a,
     701,  677,   36,   36, 0x0a,
     762,   36,  744,   36, 0x0a,
     847,  821,  816,   36, 0x0a,
     922,  896,  816,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextDocumentWriter[] = {
    "PythonQtWrapper_QTextDocumentWriter\0"
    "\0QTextDocumentWriter*\0new_QTextDocumentWriter()\0"
    "device,format\0"
    "new_QTextDocumentWriter(QIODevice*,QByteArray)\0"
    "fileName,format\0"
    "new_QTextDocumentWriter(QString,QByteArray)\0"
    "fileName\0new_QTextDocumentWriter(QString)\0"
    "obj\0delete_QTextDocumentWriter(QTextDocumentWriter*)\0"
    "QTextCodec*\0theWrappedObject\0"
    "codec(QTextDocumentWriter*)\0QIODevice*\0"
    "device(QTextDocumentWriter*)\0QString\0"
    "fileName(QTextDocumentWriter*)\0"
    "QByteArray\0format(QTextDocumentWriter*)\0"
    "theWrappedObject,codec\0"
    "setCodec(QTextDocumentWriter*,QTextCodec*)\0"
    "theWrappedObject,device\0"
    "setDevice(QTextDocumentWriter*,QIODevice*)\0"
    "theWrappedObject,fileName\0"
    "setFileName(QTextDocumentWriter*,QString)\0"
    "theWrappedObject,format\0"
    "setFormat(QTextDocumentWriter*,QByteArray)\0"
    "QList<QByteArray>\0"
    "static_QTextDocumentWriter_supportedDocumentFormats()\0"
    "bool\0theWrappedObject,document\0"
    "write(QTextDocumentWriter*,const QTextDocument*)\0"
    "theWrappedObject,fragment\0"
    "write(QTextDocumentWriter*,QTextDocumentFragment)\0"
};

void PythonQtWrapper_QTextDocumentWriter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextDocumentWriter *_t = static_cast<PythonQtWrapper_QTextDocumentWriter *>(_o);
        switch (_id) {
        case 0: { QTextDocumentWriter* _r = _t->new_QTextDocumentWriter();
            if (_a[0]) *reinterpret_cast< QTextDocumentWriter**>(_a[0]) = _r; }  break;
        case 1: { QTextDocumentWriter* _r = _t->new_QTextDocumentWriter((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextDocumentWriter**>(_a[0]) = _r; }  break;
        case 2: { QTextDocumentWriter* _r = _t->new_QTextDocumentWriter((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextDocumentWriter**>(_a[0]) = _r; }  break;
        case 3: { QTextDocumentWriter* _r = _t->new_QTextDocumentWriter((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocumentWriter**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QTextDocumentWriter((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1]))); break;
        case 5: { QTextCodec* _r = _t->codec((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCodec**>(_a[0]) = _r; }  break;
        case 6: { QIODevice* _r = _t->device((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->fileName((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QByteArray _r = _t->format((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 9: _t->setCodec((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])),(*reinterpret_cast< QTextCodec*(*)>(_a[2]))); break;
        case 10: _t->setDevice((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 11: _t->setFileName((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->setFormat((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 13: { QList<QByteArray> _r = _t->static_QTextDocumentWriter_supportedDocumentFormats();
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->write((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])),(*reinterpret_cast< const QTextDocument*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->write((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])),(*reinterpret_cast< const QTextDocumentFragment(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextDocumentWriter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextDocumentWriter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextDocumentWriter,
      qt_meta_data_PythonQtWrapper_QTextDocumentWriter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextDocumentWriter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextDocumentWriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextDocumentWriter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextDocumentWriter))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextDocumentWriter*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextDocumentWriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      92,   14, // methods
       0,    0, // properties
       2,  474, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   38,   27,   26, 0x0a,
      69,   26,   27,   26, 0x2a,
      97,   85,   27,   26, 0x0a,
     134,  129,   27,   26, 0x2a,
     161,  157,   26,   26, 0x0a,
     212,  195,  190,   26, 0x0a,
     253,  195,  239,   26, 0x0a,
     304,  283,  275,   26, 0x0a,
     358,  195,  332,   26, 0x0a,
     409,  385,  190,   26, 0x0a,
     460,  195,  190,   26, 0x0a,
     500,  481,   26,   26, 0x0a,
     532,  481,   26,   26, 0x0a,
     591,  195,  580,   26, 0x0a,
     638,  195,  631,   26, 0x0a,
     702,  676,  631,   26, 0x0a,
     763,  195,  747,   26, 0x0a,
     799,  195,  793,   26, 0x0a,
     835,  283,  823,   26, 0x0a,
     878,  195,  872,   26, 0x0a,
     925,  901,  872,   26, 0x0a,
     964,  195,  960,   26, 0x0a,
    1003,  195,  988,   26, 0x0a,
    1024,  195,  275,   26, 0x0a,
    1050,  481,   26,   26, 0x0a,
    1094,  481,   26,   26, 0x0a,
    1138,  481,   26,   26, 0x0a,
    1180,  481,   26,   26, 0x0a,
    1214,  195,   26,   26, 0x0a,
    1246,  481,  190,   26, 0x0a,
    1305,  195, 1272,   26, 0x0a,
    1362, 1333,  190,   26, 0x0a,
    1433, 1412,  190,   26, 0x2a,
    1458,  481,   26,   26, 0x0a,
    1518, 1496,  190,   26, 0x0a,
    1554,  481,   26,   26, 0x0a,
    1593,  195,  275,   26, 0x0a,
    1616,  195,  190,   26, 0x0a,
    1645,  195, 1639,   26, 0x0a,
    1671,  195,  190,   26, 0x0a,
    1697,  195,  960,   26, 0x0a,
    1744, 1720,   26,   26, 0x0a,
    1827, 1801, 1792,   26, 0x0a,
    1877,  385,   26,   26, 0x0a,
    1925,  195,  190,   26, 0x0a,
    1948,  195,  190,   26, 0x0a,
    1978,  481,   26,   26, 0x0a,
    2015,  481,   26,   26, 0x0a,
    2054,  195,  960,   26, 0x0a,
    2112,  195, 2088,   26, 0x0a,
    2164, 2137, 1792,   26, 0x0a,
    2224, 2198,   26,   26, 0x0a,
    2275,  481,   26,   26, 0x0a,
    2322,  481,   26,   26, 0x0a,
    2362,  481,   26,   26, 0x0a,
    2403,  481,   26,   26, 0x0a,
    2478, 2446,   26,   26, 0x0a,
    2577, 2550,   26,   26, 0x2a,
    2627,  195,  190,   26, 0x0a,
    2653,  481,   26,   26, 0x0a,
    2714, 2689,   26,   26, 0x0a,
    2742,  481,   26,   26, 0x0a,
    2803, 2780,   26,   26, 0x0a,
    2864, 2840,   26,   26, 0x0a,
    2925, 2899,   26,   26, 0x0a,
    3005, 2981,   26,   26, 0x0a,
    3077, 3054,   26,   26, 0x0a,
    3134, 3108,   26,   26, 0x0a,
    3196, 3173,   26,   26, 0x0a,
    3261, 3233,   26,   26, 0x0a,
    3344, 3325,   26,   26, 0x0a,
    3407, 3385,   26,   26, 0x0a,
    3486, 3459,   26,   26, 0x0a,
    3540, 3520,   26,   26, 0x0a,
    3588, 3569,   26,   26, 0x0a,
    3624, 3054,   26,   26, 0x0a,
    3656,  901,   26,   26, 0x0a,
    3717, 3694,   26,   26, 0x0a,
    3802, 3778,   26,   26, 0x0a,
    3862, 3838,   26,   26, 0x0a,
    3912, 1720,   26,   26, 0x0a,
    3946,  195,  190,   26, 0x0a,
    3974,  195,  960,   26, 0x0a,
    4006,  195, 3999,   26, 0x0a,
    4038,  195, 3999,   26, 0x0a,
    4060,  195,  823,   26, 0x0a,
    4108,  195, 4083,   26, 0x0a,
    4141,  481,   26,   26, 0x0a,
    4177,  195,  275,   26, 0x0a,
    4196,  195,  275,   26, 0x0a,
    4220,  481,   26,   26, 0x0a,
    4278,  195, 4256,   26, 0x0a,

 // enums: name, flags, count, data
    4303, 0x0,    3,  482,
    4322, 0x1,    3,  488,

 // enum data: key, value
    4337, uint(PythonQtWrapper_QTextEdit::AutoNone),
    4346, uint(PythonQtWrapper_QTextEdit::AutoBulletList),
    4361, uint(PythonQtWrapper_QTextEdit::AutoAll),
    4337, uint(PythonQtWrapper_QTextEdit::AutoNone),
    4346, uint(PythonQtWrapper_QTextEdit::AutoBulletList),
    4361, uint(PythonQtWrapper_QTextEdit::AutoAll),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextEdit[] = {
    "PythonQtWrapper_QTextEdit\0\0QTextEdit*\0"
    "parent\0new_QTextEdit(QWidget*)\0"
    "new_QTextEdit()\0text,parent\0"
    "new_QTextEdit(QString,QWidget*)\0text\0"
    "new_QTextEdit(QString)\0obj\0"
    "delete_QTextEdit(QTextEdit*)\0bool\0"
    "theWrappedObject\0acceptRichText(QTextEdit*)\0"
    "Qt::Alignment\0alignment(QTextEdit*)\0"
    "QString\0theWrappedObject,pos\0"
    "anchorAt(QTextEdit*,QPoint)\0"
    "QTextEdit::AutoFormatting\0"
    "autoFormatting(QTextEdit*)\0"
    "theWrappedObject,source\0"
    "canInsertFromMimeData(QTextEdit*,const QMimeData*)\0"
    "canPaste(QTextEdit*)\0theWrappedObject,e\0"
    "changeEvent(QTextEdit*,QEvent*)\0"
    "contextMenuEvent(QTextEdit*,QContextMenuEvent*)\0"
    "QMimeData*\0createMimeDataFromSelection(QTextEdit*)\0"
    "QMenu*\0createStandardContextMenu(QTextEdit*)\0"
    "theWrappedObject,position\0"
    "createStandardContextMenu(QTextEdit*,QPoint)\0"
    "QTextCharFormat\0currentCharFormat(QTextEdit*)\0"
    "QFont\0currentFont(QTextEdit*)\0QTextCursor\0"
    "cursorForPosition(QTextEdit*,QPoint)\0"
    "QRect\0cursorRect(QTextEdit*)\0"
    "theWrappedObject,cursor\0"
    "cursorRect(QTextEdit*,QTextCursor)\0"
    "int\0cursorWidth(QTextEdit*)\0QTextDocument*\0"
    "document(QTextEdit*)\0documentTitle(QTextEdit*)\0"
    "dragEnterEvent(QTextEdit*,QDragEnterEvent*)\0"
    "dragLeaveEvent(QTextEdit*,QDragLeaveEvent*)\0"
    "dragMoveEvent(QTextEdit*,QDragMoveEvent*)\0"
    "dropEvent(QTextEdit*,QDropEvent*)\0"
    "ensureCursorVisible(QTextEdit*)\0"
    "event(QTextEdit*,QEvent*)\0"
    "QList<QTextEdit::ExtraSelection>\0"
    "extraSelections(QTextEdit*)\0"
    "theWrappedObject,exp,options\0"
    "find(QTextEdit*,QString,QTextDocument::FindFlags)\0"
    "theWrappedObject,exp\0find(QTextEdit*,QString)\0"
    "focusInEvent(QTextEdit*,QFocusEvent*)\0"
    "theWrappedObject,next\0"
    "focusNextPrevChild(QTextEdit*,bool)\0"
    "focusOutEvent(QTextEdit*,QFocusEvent*)\0"
    "fontFamily(QTextEdit*)\0fontItalic(QTextEdit*)\0"
    "qreal\0fontPointSize(QTextEdit*)\0"
    "fontUnderline(QTextEdit*)\0"
    "fontWeight(QTextEdit*)\0theWrappedObject,arg__1\0"
    "inputMethodEvent(QTextEdit*,QInputMethodEvent*)\0"
    "QVariant\0theWrappedObject,property\0"
    "inputMethodQuery(QTextEdit*,Qt::InputMethodQuery)\0"
    "insertFromMimeData(QTextEdit*,const QMimeData*)\0"
    "isReadOnly(QTextEdit*)\0"
    "isUndoRedoEnabled(QTextEdit*)\0"
    "keyPressEvent(QTextEdit*,QKeyEvent*)\0"
    "keyReleaseEvent(QTextEdit*,QKeyEvent*)\0"
    "lineWrapColumnOrWidth(QTextEdit*)\0"
    "QTextEdit::LineWrapMode\0"
    "lineWrapMode(QTextEdit*)\0"
    "theWrappedObject,type,name\0"
    "loadResource(QTextEdit*,int,QUrl)\0"
    "theWrappedObject,modifier\0"
    "mergeCurrentCharFormat(QTextEdit*,QTextCharFormat)\0"
    "mouseDoubleClickEvent(QTextEdit*,QMouseEvent*)\0"
    "mouseMoveEvent(QTextEdit*,QMouseEvent*)\0"
    "mousePressEvent(QTextEdit*,QMouseEvent*)\0"
    "mouseReleaseEvent(QTextEdit*,QMouseEvent*)\0"
    "theWrappedObject,operation,mode\0"
    "moveCursor(QTextEdit*,QTextCursor::MoveOperation,QTextCursor::MoveMode"
    ")\0"
    "theWrappedObject,operation\0"
    "moveCursor(QTextEdit*,QTextCursor::MoveOperation)\0"
    "overwriteMode(QTextEdit*)\0"
    "paintEvent(QTextEdit*,QPaintEvent*)\0"
    "theWrappedObject,printer\0"
    "print(QTextEdit*,QPrinter*)\0"
    "resizeEvent(QTextEdit*,QResizeEvent*)\0"
    "theWrappedObject,dx,dy\0"
    "scrollContentsBy(QTextEdit*,int,int)\0"
    "theWrappedObject,accept\0"
    "setAcceptRichText(QTextEdit*,bool)\0"
    "theWrappedObject,features\0"
    "setAutoFormatting(QTextEdit*,QTextEdit::AutoFormatting)\0"
    "theWrappedObject,format\0"
    "setCurrentCharFormat(QTextEdit*,QTextCharFormat)\0"
    "theWrappedObject,width\0"
    "setCursorWidth(QTextEdit*,int)\0"
    "theWrappedObject,document\0"
    "setDocument(QTextEdit*,QTextDocument*)\0"
    "theWrappedObject,title\0"
    "setDocumentTitle(QTextEdit*,QString)\0"
    "theWrappedObject,selections\0"
    "setExtraSelections(QTextEdit*,QList<QTextEdit::ExtraSelection>)\0"
    "theWrappedObject,w\0"
    "setLineWrapColumnOrWidth(QTextEdit*,int)\0"
    "theWrappedObject,mode\0"
    "setLineWrapMode(QTextEdit*,QTextEdit::LineWrapMode)\0"
    "theWrappedObject,overwrite\0"
    "setOverwriteMode(QTextEdit*,bool)\0"
    "theWrappedObject,ro\0setReadOnly(QTextEdit*,bool)\0"
    "theWrappedObject,b\0"
    "setTabChangesFocus(QTextEdit*,bool)\0"
    "setTabStopWidth(QTextEdit*,int)\0"
    "setTextCursor(QTextEdit*,QTextCursor)\0"
    "theWrappedObject,flags\0"
    "setTextInteractionFlags(QTextEdit*,Qt::TextInteractionFlags)\0"
    "theWrappedObject,enable\0"
    "setUndoRedoEnabled(QTextEdit*,bool)\0"
    "theWrappedObject,policy\0"
    "setWordWrapMode(QTextEdit*,QTextOption::WrapMode)\0"
    "showEvent(QTextEdit*,QShowEvent*)\0"
    "tabChangesFocus(QTextEdit*)\0"
    "tabStopWidth(QTextEdit*)\0QColor\0"
    "textBackgroundColor(QTextEdit*)\0"
    "textColor(QTextEdit*)\0textCursor(QTextEdit*)\0"
    "Qt::TextInteractionFlags\0"
    "textInteractionFlags(QTextEdit*)\0"
    "timerEvent(QTextEdit*,QTimerEvent*)\0"
    "toHtml(QTextEdit*)\0toPlainText(QTextEdit*)\0"
    "wheelEvent(QTextEdit*,QWheelEvent*)\0"
    "QTextOption::WrapMode\0wordWrapMode(QTextEdit*)\0"
    "AutoFormattingFlag\0AutoFormatting\0"
    "AutoNone\0AutoBulletList\0AutoAll\0"
};

void PythonQtWrapper_QTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextEdit *_t = static_cast<PythonQtWrapper_QTextEdit *>(_o);
        switch (_id) {
        case 0: { QTextEdit* _r = _t->new_QTextEdit((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextEdit**>(_a[0]) = _r; }  break;
        case 1: { QTextEdit* _r = _t->new_QTextEdit();
            if (_a[0]) *reinterpret_cast< QTextEdit**>(_a[0]) = _r; }  break;
        case 2: { QTextEdit* _r = _t->new_QTextEdit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextEdit**>(_a[0]) = _r; }  break;
        case 3: { QTextEdit* _r = _t->new_QTextEdit((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextEdit**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QTextEdit((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->acceptRichText((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { Qt::Alignment _r = _t->alignment((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->anchorAt((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QTextEdit::AutoFormatting _r = _t->autoFormatting((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextEdit::AutoFormatting*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->canInsertFromMimeData((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->canPaste((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->changeEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 12: _t->contextMenuEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QContextMenuEvent*(*)>(_a[2]))); break;
        case 13: { QMimeData* _r = _t->createMimeDataFromSelection((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMimeData**>(_a[0]) = _r; }  break;
        case 14: { QMenu* _r = _t->createStandardContextMenu((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = _r; }  break;
        case 15: { QMenu* _r = _t->createStandardContextMenu((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = _r; }  break;
        case 16: { QTextCharFormat _r = _t->currentCharFormat((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = _r; }  break;
        case 17: { QFont _r = _t->currentFont((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 18: { QTextCursor _r = _t->cursorForPosition((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 19: { QRect _r = _t->cursorRect((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 20: { QRect _r = _t->cursorRect((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->cursorWidth((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { QTextDocument* _r = _t->document((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 23: { QString _r = _t->documentTitle((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: _t->dragEnterEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QDragEnterEvent*(*)>(_a[2]))); break;
        case 25: _t->dragLeaveEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QDragLeaveEvent*(*)>(_a[2]))); break;
        case 26: _t->dragMoveEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QDragMoveEvent*(*)>(_a[2]))); break;
        case 27: _t->dropEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2]))); break;
        case 28: _t->ensureCursorVisible((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 29: { bool _r = _t->event((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { QList<QTextEdit::ExtraSelection> _r = _t->extraSelections((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QTextEdit::ExtraSelection>*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->find((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->find((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: _t->focusInEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 34: { bool _r = _t->focusNextPrevChild((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: _t->focusOutEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 36: { QString _r = _t->fontFamily((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->fontItalic((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { qreal _r = _t->fontPointSize((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->fontUnderline((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { int _r = _t->fontWeight((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 41: _t->inputMethodEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QInputMethodEvent*(*)>(_a[2]))); break;
        case 42: { QVariant _r = _t->inputMethodQuery((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< Qt::InputMethodQuery(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 43: _t->insertFromMimeData((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2]))); break;
        case 44: { bool _r = _t->isReadOnly((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->isUndoRedoEnabled((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: _t->keyPressEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 47: _t->keyReleaseEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 48: { int _r = _t->lineWrapColumnOrWidth((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 49: { QTextEdit::LineWrapMode _r = _t->lineWrapMode((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextEdit::LineWrapMode*>(_a[0]) = _r; }  break;
        case 50: { QVariant _r = _t->loadResource((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 51: _t->mergeCurrentCharFormat((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 52: _t->mouseDoubleClickEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 53: _t->mouseMoveEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 54: _t->mousePressEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 55: _t->mouseReleaseEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 56: _t->moveCursor((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTextCursor::MoveOperation(*)>(_a[2])),(*reinterpret_cast< QTextCursor::MoveMode(*)>(_a[3]))); break;
        case 57: _t->moveCursor((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTextCursor::MoveOperation(*)>(_a[2]))); break;
        case 58: { bool _r = _t->overwriteMode((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 59: _t->paintEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 60: _t->print((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QPrinter*(*)>(_a[2]))); break;
        case 61: _t->resizeEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 62: _t->scrollContentsBy((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 63: _t->setAcceptRichText((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 64: _t->setAutoFormatting((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTextEdit::AutoFormatting(*)>(_a[2]))); break;
        case 65: _t->setCurrentCharFormat((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 66: _t->setCursorWidth((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 67: _t->setDocument((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTextDocument*(*)>(_a[2]))); break;
        case 68: _t->setDocumentTitle((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 69: _t->setExtraSelections((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QList<QTextEdit::ExtraSelection>(*)>(_a[2]))); break;
        case 70: _t->setLineWrapColumnOrWidth((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 71: _t->setLineWrapMode((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTextEdit::LineWrapMode(*)>(_a[2]))); break;
        case 72: _t->setOverwriteMode((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 73: _t->setReadOnly((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 74: _t->setTabChangesFocus((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 75: _t->setTabStopWidth((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 76: _t->setTextCursor((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2]))); break;
        case 77: _t->setTextInteractionFlags((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< Qt::TextInteractionFlags(*)>(_a[2]))); break;
        case 78: _t->setUndoRedoEnabled((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 79: _t->setWordWrapMode((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTextOption::WrapMode(*)>(_a[2]))); break;
        case 80: _t->showEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QShowEvent*(*)>(_a[2]))); break;
        case 81: { bool _r = _t->tabChangesFocus((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 82: { int _r = _t->tabStopWidth((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 83: { QColor _r = _t->textBackgroundColor((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 84: { QColor _r = _t->textColor((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 85: { QTextCursor _r = _t->textCursor((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 86: { Qt::TextInteractionFlags _r = _t->textInteractionFlags((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TextInteractionFlags*>(_a[0]) = _r; }  break;
        case 87: _t->timerEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTimerEvent*(*)>(_a[2]))); break;
        case 88: { QString _r = _t->toHtml((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 89: { QString _r = _t->toPlainText((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 90: _t->wheelEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QWheelEvent*(*)>(_a[2]))); break;
        case 91: { QTextOption::WrapMode _r = _t->wordWrapMode((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption::WrapMode*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextEdit::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextEdit,
      qt_meta_data_PythonQtWrapper_QTextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextEdit))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextEdit*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 92)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 92;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTextFragment[] = {

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
      68,   66,   31,   30, 0x0a,
     105,  101,   30,   30, 0x0a,
     175,  158,  142,   30, 0x0a,
     206,  158,  202,   30, 0x0a,
     269,  243,  238,   30, 0x0a,
     298,  158,  238,   30, 0x0a,
     322,  158,  202,   30, 0x0a,
     364,  345,  238,   30, 0x0a,
     401,  345,  238,   30, 0x0a,
     438,  345,  238,   30, 0x0a,
     475,  158,  202,   30, 0x0a,
     508,  158,  500,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextFragment[] = {
    "PythonQtWrapper_QTextFragment\0\0"
    "QTextFragment*\0new_QTextFragment()\0o\0"
    "new_QTextFragment(QTextFragment)\0obj\0"
    "delete_QTextFragment(QTextFragment*)\0"
    "QTextCharFormat\0theWrappedObject\0"
    "charFormat(QTextFragment*)\0int\0"
    "charFormatIndex(QTextFragment*)\0bool\0"
    "theWrappedObject,position\0"
    "contains(QTextFragment*,int)\0"
    "isValid(QTextFragment*)\0length(QTextFragment*)\0"
    "theWrappedObject,o\0"
    "__ne__(QTextFragment*,QTextFragment)\0"
    "__lt__(QTextFragment*,QTextFragment)\0"
    "__eq__(QTextFragment*,QTextFragment)\0"
    "position(QTextFragment*)\0QString\0"
    "text(QTextFragment*)\0"
};

void PythonQtWrapper_QTextFragment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextFragment *_t = static_cast<PythonQtWrapper_QTextFragment *>(_o);
        switch (_id) {
        case 0: { QTextFragment* _r = _t->new_QTextFragment();
            if (_a[0]) *reinterpret_cast< QTextFragment**>(_a[0]) = _r; }  break;
        case 1: { QTextFragment* _r = _t->new_QTextFragment((*reinterpret_cast< const QTextFragment(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFragment**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextFragment((*reinterpret_cast< QTextFragment*(*)>(_a[1]))); break;
        case 3: { QTextCharFormat _r = _t->charFormat((*reinterpret_cast< QTextFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->charFormatIndex((*reinterpret_cast< QTextFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->contains((*reinterpret_cast< QTextFragment*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isValid((*reinterpret_cast< QTextFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->length((*reinterpret_cast< QTextFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__ne__((*reinterpret_cast< QTextFragment*(*)>(_a[1])),(*reinterpret_cast< const QTextFragment(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->__lt__((*reinterpret_cast< QTextFragment*(*)>(_a[1])),(*reinterpret_cast< const QTextFragment(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->__eq__((*reinterpret_cast< QTextFragment*(*)>(_a[1])),(*reinterpret_cast< const QTextFragment(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->position((*reinterpret_cast< QTextFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->text((*reinterpret_cast< QTextFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextFragment::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextFragment::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextFragment,
      qt_meta_data_PythonQtWrapper_QTextFragment, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextFragment::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextFragment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextFragment::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextFragment))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextFragment*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextFragment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextFrame[] = {

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
      44,   40,   28,   27, 0x0a,
      79,   75,   27,   27, 0x0a,
     148,  131,  110,   27, 0x0a,
     186,  131,  167,   27, 0x0a,
     211,  131,  110,   27, 0x0a,
     240,  131,  228,   27, 0x0a,
     277,  131,  273,   27, 0x0a,
     321,  131,  304,   27, 0x0a,
     346,  131,  228,   27, 0x0a,
     378,  131,  273,   27, 0x0a,
     404,  131,   28,   27, 0x0a,
     453,  429,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextFrame[] = {
    "PythonQtWrapper_QTextFrame\0\0QTextFrame*\0"
    "doc\0new_QTextFrame(QTextDocument*)\0"
    "obj\0delete_QTextFrame(QTextFrame*)\0"
    "QTextFrame::iterator\0theWrappedObject\0"
    "begin(QTextFrame*)\0QList<QTextFrame*>\0"
    "childFrames(QTextFrame*)\0end(QTextFrame*)\0"
    "QTextCursor\0firstCursorPosition(QTextFrame*)\0"
    "int\0firstPosition(QTextFrame*)\0"
    "QTextFrameFormat\0frameFormat(QTextFrame*)\0"
    "lastCursorPosition(QTextFrame*)\0"
    "lastPosition(QTextFrame*)\0"
    "parentFrame(QTextFrame*)\0"
    "theWrappedObject,format\0"
    "setFrameFormat(QTextFrame*,QTextFrameFormat)\0"
};

void PythonQtWrapper_QTextFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextFrame *_t = static_cast<PythonQtWrapper_QTextFrame *>(_o);
        switch (_id) {
        case 0: { QTextFrame* _r = _t->new_QTextFrame((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrame**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QTextFrame((*reinterpret_cast< QTextFrame*(*)>(_a[1]))); break;
        case 2: { QTextFrame::iterator _r = _t->begin((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrame::iterator*>(_a[0]) = _r; }  break;
        case 3: { QList<QTextFrame*> _r = _t->childFrames((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QTextFrame*>*>(_a[0]) = _r; }  break;
        case 4: { QTextFrame::iterator _r = _t->end((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrame::iterator*>(_a[0]) = _r; }  break;
        case 5: { QTextCursor _r = _t->firstCursorPosition((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->firstPosition((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { QTextFrameFormat _r = _t->frameFormat((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrameFormat*>(_a[0]) = _r; }  break;
        case 8: { QTextCursor _r = _t->lastCursorPosition((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->lastPosition((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QTextFrame* _r = _t->parentFrame((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrame**>(_a[0]) = _r; }  break;
        case 11: _t->setFrameFormat((*reinterpret_cast< QTextFrame*(*)>(_a[1])),(*reinterpret_cast< const QTextFrameFormat(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextFrame::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextFrame,
      qt_meta_data_PythonQtWrapper_QTextFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextFrame))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextFrame*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextFrameFormat[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       2,  174, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      52,   33,   34,   33, 0x0a,
      81,   75,   34,   33, 0x0a,
     124,  120,   33,   33, 0x0a,
     190,  173,  167,   33, 0x0a,
     223,  173,  216,   33, 0x0a,
     284,  173,  254,   33, 0x0a,
     315,  173,  167,   33, 0x0a,
     359,  173,  347,   33, 0x0a,
     390,  173,  385,   33, 0x0a,
     417,  173,  167,   33, 0x0a,
     447,  173,  167,   33, 0x0a,
     473,  173,  167,   33, 0x0a,
     528,  173,  500,   33, 0x0a,
     590,  173,  563,   33, 0x0a,
     618,  173,  167,   33, 0x0a,
     673,  649,   33,   33, 0x0a,
     731,  708,   33,   33, 0x0a,
     795,  772,   33,   33, 0x0a,
     883,  859,   33,   33, 0x0a,
     948,  924,   33,   33, 0x0a,
     989,  924,   33,   33, 0x0a,
    1024,  859,   33,   33, 0x0a,
    1063,  859,   33,   33, 0x0a,
    1123, 1098,   33,   33, 0x0a,
    1182, 1159,   33,   33, 0x0a,
    1267, 1248,   33,   33, 0x0a,
    1325,  859,   33,   33, 0x0a,
    1365,  859,   33,   33, 0x0a,
    1427, 1403,   33,   33, 0x0a,
    1490, 1467,   33,   33, 0x0a,
    1524,  173,  167,   33, 0x0a,
    1553,  173,  347,   33, 0x0a,

 // enums: name, flags, count, data
    1578, 0x0,    3,  182,
    1587, 0x0,   11,  188,

 // enum data: key, value
    1599, uint(PythonQtWrapper_QTextFrameFormat::InFlow),
    1606, uint(PythonQtWrapper_QTextFrameFormat::FloatLeft),
    1616, uint(PythonQtWrapper_QTextFrameFormat::FloatRight),
    1627, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_None),
    1644, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_Dotted),
    1663, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_Dashed),
    1682, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_Solid),
    1700, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_Double),
    1719, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_DotDash),
    1739, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_DotDotDash),
    1762, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_Groove),
    1781, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_Ridge),
    1799, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_Inset),
    1817, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_Outset),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextFrameFormat[] = {
    "PythonQtWrapper_QTextFrameFormat\0\0"
    "QTextFrameFormat*\0new_QTextFrameFormat()\0"
    "other\0new_QTextFrameFormat(QTextFrameFormat)\0"
    "obj\0delete_QTextFrameFormat(QTextFrameFormat*)\0"
    "qreal\0theWrappedObject\0border(QTextFrameFormat*)\0"
    "QBrush\0borderBrush(QTextFrameFormat*)\0"
    "QTextFrameFormat::BorderStyle\0"
    "borderStyle(QTextFrameFormat*)\0"
    "bottomMargin(QTextFrameFormat*)\0"
    "QTextLength\0height(QTextFrameFormat*)\0"
    "bool\0isValid(QTextFrameFormat*)\0"
    "leftMargin(QTextFrameFormat*)\0"
    "margin(QTextFrameFormat*)\0"
    "padding(QTextFrameFormat*)\0"
    "QTextFormat::PageBreakFlags\0"
    "pageBreakPolicy(QTextFrameFormat*)\0"
    "QTextFrameFormat::Position\0"
    "position(QTextFrameFormat*)\0"
    "rightMargin(QTextFrameFormat*)\0"
    "theWrappedObject,border\0"
    "setBorder(QTextFrameFormat*,qreal)\0"
    "theWrappedObject,brush\0"
    "setBorderBrush(QTextFrameFormat*,QBrush)\0"
    "theWrappedObject,style\0"
    "setBorderStyle(QTextFrameFormat*,QTextFrameFormat::BorderStyle)\0"
    "theWrappedObject,margin\0"
    "setBottomMargin(QTextFrameFormat*,qreal)\0"
    "theWrappedObject,height\0"
    "setHeight(QTextFrameFormat*,QTextLength)\0"
    "setHeight(QTextFrameFormat*,qreal)\0"
    "setLeftMargin(QTextFrameFormat*,qreal)\0"
    "setMargin(QTextFrameFormat*,qreal)\0"
    "theWrappedObject,padding\0"
    "setPadding(QTextFrameFormat*,qreal)\0"
    "theWrappedObject,flags\0"
    "setPageBreakPolicy(QTextFrameFormat*,QTextFormat::PageBreakFlags)\0"
    "theWrappedObject,f\0"
    "setPosition(QTextFrameFormat*,QTextFrameFormat::Position)\0"
    "setRightMargin(QTextFrameFormat*,qreal)\0"
    "setTopMargin(QTextFrameFormat*,qreal)\0"
    "theWrappedObject,length\0"
    "setWidth(QTextFrameFormat*,QTextLength)\0"
    "theWrappedObject,width\0"
    "setWidth(QTextFrameFormat*,qreal)\0"
    "topMargin(QTextFrameFormat*)\0"
    "width(QTextFrameFormat*)\0Position\0"
    "BorderStyle\0InFlow\0FloatLeft\0FloatRight\0"
    "BorderStyle_None\0BorderStyle_Dotted\0"
    "BorderStyle_Dashed\0BorderStyle_Solid\0"
    "BorderStyle_Double\0BorderStyle_DotDash\0"
    "BorderStyle_DotDotDash\0BorderStyle_Groove\0"
    "BorderStyle_Ridge\0BorderStyle_Inset\0"
    "BorderStyle_Outset\0"
};

void PythonQtWrapper_QTextFrameFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextFrameFormat *_t = static_cast<PythonQtWrapper_QTextFrameFormat *>(_o);
        switch (_id) {
        case 0: { QTextFrameFormat* _r = _t->new_QTextFrameFormat();
            if (_a[0]) *reinterpret_cast< QTextFrameFormat**>(_a[0]) = _r; }  break;
        case 1: { QTextFrameFormat* _r = _t->new_QTextFrameFormat((*reinterpret_cast< const QTextFrameFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrameFormat**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextFrameFormat((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1]))); break;
        case 3: { qreal _r = _t->border((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 4: { QBrush _r = _t->borderBrush((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 5: { QTextFrameFormat::BorderStyle _r = _t->borderStyle((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrameFormat::BorderStyle*>(_a[0]) = _r; }  break;
        case 6: { qreal _r = _t->bottomMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 7: { QTextLength _r = _t->height((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextLength*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isValid((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { qreal _r = _t->leftMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 10: { qreal _r = _t->margin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 11: { qreal _r = _t->padding((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 12: { QTextFormat::PageBreakFlags _r = _t->pageBreakPolicy((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFormat::PageBreakFlags*>(_a[0]) = _r; }  break;
        case 13: { QTextFrameFormat::Position _r = _t->position((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrameFormat::Position*>(_a[0]) = _r; }  break;
        case 14: { qreal _r = _t->rightMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 15: _t->setBorder((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 16: _t->setBorderBrush((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2]))); break;
        case 17: _t->setBorderStyle((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< QTextFrameFormat::BorderStyle(*)>(_a[2]))); break;
        case 18: _t->setBottomMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 19: _t->setHeight((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< const QTextLength(*)>(_a[2]))); break;
        case 20: _t->setHeight((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 21: _t->setLeftMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 22: _t->setMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 23: _t->setPadding((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 24: _t->setPageBreakPolicy((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< QTextFormat::PageBreakFlags(*)>(_a[2]))); break;
        case 25: _t->setPosition((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< QTextFrameFormat::Position(*)>(_a[2]))); break;
        case 26: _t->setRightMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 27: _t->setTopMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 28: _t->setWidth((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< const QTextLength(*)>(_a[2]))); break;
        case 29: _t->setWidth((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 30: { qreal _r = _t->topMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 31: { QTextLength _r = _t->width((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextLength*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextFrameFormat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextFrameFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextFrameFormat,
      qt_meta_data_PythonQtWrapper_QTextFrameFormat, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextFrameFormat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextFrameFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextFrameFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextFrameFormat))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextFrameFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextFrameFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextImageFormat[] = {

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
      52,   33,   34,   33, 0x0a,
      81,   75,   34,   33, 0x0a,
     124,  120,   33,   33, 0x0a,
     190,  173,  167,   33, 0x0a,
     221,  173,  216,   33, 0x0a,
     256,  173,  248,   33, 0x0a,
     304,  280,   33,   33, 0x0a,
     361,  339,   33,   33, 0x0a,
     419,  396,   33,   33, 0x0a,
     453,  173,  167,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextImageFormat[] = {
    "PythonQtWrapper_QTextImageFormat\0\0"
    "QTextImageFormat*\0new_QTextImageFormat()\0"
    "other\0new_QTextImageFormat(QTextImageFormat)\0"
    "obj\0delete_QTextImageFormat(QTextImageFormat*)\0"
    "qreal\0theWrappedObject\0height(QTextImageFormat*)\0"
    "bool\0isValid(QTextImageFormat*)\0QString\0"
    "name(QTextImageFormat*)\0theWrappedObject,height\0"
    "setHeight(QTextImageFormat*,qreal)\0"
    "theWrappedObject,name\0"
    "setName(QTextImageFormat*,QString)\0"
    "theWrappedObject,width\0"
    "setWidth(QTextImageFormat*,qreal)\0"
    "width(QTextImageFormat*)\0"
};

void PythonQtWrapper_QTextImageFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextImageFormat *_t = static_cast<PythonQtWrapper_QTextImageFormat *>(_o);
        switch (_id) {
        case 0: { QTextImageFormat* _r = _t->new_QTextImageFormat();
            if (_a[0]) *reinterpret_cast< QTextImageFormat**>(_a[0]) = _r; }  break;
        case 1: { QTextImageFormat* _r = _t->new_QTextImageFormat((*reinterpret_cast< const QTextImageFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextImageFormat**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextImageFormat((*reinterpret_cast< QTextImageFormat*(*)>(_a[1]))); break;
        case 3: { qreal _r = _t->height((*reinterpret_cast< QTextImageFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isValid((*reinterpret_cast< QTextImageFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->name((*reinterpret_cast< QTextImageFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: _t->setHeight((*reinterpret_cast< QTextImageFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 7: _t->setName((*reinterpret_cast< QTextImageFormat*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->setWidth((*reinterpret_cast< QTextImageFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 9: { qreal _r = _t->width((*reinterpret_cast< QTextImageFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextImageFormat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextImageFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextImageFormat,
      qt_meta_data_PythonQtWrapper_QTextImageFormat, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextImageFormat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextImageFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextImageFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextImageFormat))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextImageFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextImageFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
