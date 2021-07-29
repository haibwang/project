/****************************************************************************
** Meta object code from reading C++ file 'QtClass.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtClass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtClass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtClass_t {
    QByteArrayData data[18];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtClass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtClass_t qt_meta_stringdata_QtClass = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QtClass"
QT_MOC_LITERAL(1, 8, 16), // "on_timer_timeout"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "on_bt_clicked"
QT_MOC_LITERAL(4, 40, 19), // "on_bt_pause_clicked"
QT_MOC_LITERAL(5, 60, 19), // "on_bt_reset_clicked"
QT_MOC_LITERAL(6, 80, 11), // "on_act_init"
QT_MOC_LITERAL(7, 92, 10), // "on_act_del"
QT_MOC_LITERAL(8, 103, 12), // "on_act_clear"
QT_MOC_LITERAL(9, 116, 14), // "on_act_foreach"
QT_MOC_LITERAL(10, 131, 13), // "on_act_insert"
QT_MOC_LITERAL(11, 145, 13), // "on_act_append"
QT_MOC_LITERAL(12, 159, 15), // "on_item_changed"
QT_MOC_LITERAL(13, 175, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(14, 192, 7), // "current"
QT_MOC_LITERAL(15, 200, 8), // "previous"
QT_MOC_LITERAL(16, 209, 29), // "on_customContextMenuRequested"
QT_MOC_LITERAL(17, 239, 3) // "pos"

    },
    "QtClass\0on_timer_timeout\0\0on_bt_clicked\0"
    "on_bt_pause_clicked\0on_bt_reset_clicked\0"
    "on_act_init\0on_act_del\0on_act_clear\0"
    "on_act_foreach\0on_act_insert\0on_act_append\0"
    "on_item_changed\0QListWidgetItem*\0"
    "current\0previous\0on_customContextMenuRequested\0"
    "pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtClass[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    2,   84,    2, 0x08 /* Private */,
      16,    1,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,   14,   15,
    QMetaType::Void, QMetaType::QPoint,   17,

       0        // eod
};

void QtClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtClass *_t = static_cast<QtClass *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_timer_timeout(); break;
        case 1: _t->on_bt_clicked(); break;
        case 2: _t->on_bt_pause_clicked(); break;
        case 3: _t->on_bt_reset_clicked(); break;
        case 4: _t->on_act_init(); break;
        case 5: _t->on_act_del(); break;
        case 6: _t->on_act_clear(); break;
        case 7: _t->on_act_foreach(); break;
        case 8: _t->on_act_insert(); break;
        case 9: _t->on_act_append(); break;
        case 10: _t->on_item_changed((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 11: _t->on_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtClass::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtClass.data,
      qt_meta_data_QtClass,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtClass.stringdata0))
        return static_cast<void*>(const_cast< QtClass*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QtClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
