/****************************************************************************
** Meta object code from reading C++ file 'notepad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../notepad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notepad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_notepad_t {
    QByteArrayData data[14];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_notepad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_notepad_t qt_meta_stringdata_notepad = {
    {
QT_MOC_LITERAL(0, 0, 7), // "notepad"
QT_MOC_LITERAL(1, 8, 35), // "on_fontComboBox_currentIndexC..."
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 3), // "arg"
QT_MOC_LITERAL(4, 49, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(5, 73, 5), // "value"
QT_MOC_LITERAL(6, 79, 18), // "on_actBold_clicked"
QT_MOC_LITERAL(7, 98, 21), // "on_text_selectChanged"
QT_MOC_LITERAL(8, 120, 18), // "on_actOpen_clicked"
QT_MOC_LITERAL(9, 139, 20), // "on_actSaveAs_clicked"
QT_MOC_LITERAL(10, 160, 18), // "on_actSave_clicked"
QT_MOC_LITERAL(11, 179, 19), // "on_actClose_clicked"
QT_MOC_LITERAL(12, 199, 17), // "on_actNew_clicked"
QT_MOC_LITERAL(13, 217, 19) // "on_text_textChanged"

    },
    "notepad\0on_fontComboBox_currentIndexChanged\0"
    "\0arg\0on_spinBox_valueChanged\0value\0"
    "on_actBold_clicked\0on_text_selectChanged\0"
    "on_actOpen_clicked\0on_actSaveAs_clicked\0"
    "on_actSave_clicked\0on_actClose_clicked\0"
    "on_actNew_clicked\0on_text_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_notepad[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    1,   67,    2, 0x08 /* Private */,
       6,    1,   70,    2, 0x08 /* Private */,
       7,    0,   73,    2, 0x08 /* Private */,
       8,    0,   74,    2, 0x08 /* Private */,
       9,    0,   75,    2, 0x08 /* Private */,
      10,    0,   76,    2, 0x08 /* Private */,
      11,    0,   77,    2, 0x08 /* Private */,
      12,    0,   78,    2, 0x08 /* Private */,
      13,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void notepad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        notepad *_t = static_cast<notepad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_fontComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_actBold_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_text_selectChanged(); break;
        case 4: _t->on_actOpen_clicked(); break;
        case 5: _t->on_actSaveAs_clicked(); break;
        case 6: _t->on_actSave_clicked(); break;
        case 7: _t->on_actClose_clicked(); break;
        case 8: _t->on_actNew_clicked(); break;
        case 9: _t->on_text_textChanged(); break;
        default: ;
        }
    }
}

const QMetaObject notepad::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_notepad.data,
      qt_meta_data_notepad,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *notepad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *notepad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_notepad.stringdata0))
        return static_cast<void*>(const_cast< notepad*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int notepad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
