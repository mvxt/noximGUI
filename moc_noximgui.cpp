/****************************************************************************
** Meta object code from reading C++ file 'noximgui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "noximgui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'noximgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NoximGUI_t {
    QByteArrayData data[12];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NoximGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NoximGUI_t qt_meta_stringdata_NoximGUI = {
    {
QT_MOC_LITERAL(0, 0, 8), // "NoximGUI"
QT_MOC_LITERAL(1, 9, 31), // "on_Algorithm_ComboBox_activated"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 9), // "algorithm"
QT_MOC_LITERAL(4, 52, 33), // "on_actionRun_Simulation_trigg..."
QT_MOC_LITERAL(5, 86, 38), // "on_Packet_Injection_ComboBox_..."
QT_MOC_LITERAL(6, 125, 6), // "option"
QT_MOC_LITERAL(7, 132, 37), // "on_Traffic_Pattern_ComboBox_a..."
QT_MOC_LITERAL(8, 170, 7), // "traffic"
QT_MOC_LITERAL(9, 178, 36), // "on_Traffic_Table_File_Button_..."
QT_MOC_LITERAL(10, 215, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(11, 238, 23) // "on_actionOpen_triggered"

    },
    "NoximGUI\0on_Algorithm_ComboBox_activated\0"
    "\0algorithm\0on_actionRun_Simulation_triggered\0"
    "on_Packet_Injection_ComboBox_activated\0"
    "option\0on_Traffic_Pattern_ComboBox_activated\0"
    "traffic\0on_Traffic_Table_File_Button_clicked\0"
    "on_actionNew_triggered\0on_actionOpen_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NoximGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    0,   52,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       7,    1,   56,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,
      10,    0,   60,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NoximGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NoximGUI *_t = static_cast<NoximGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Algorithm_ComboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_actionRun_Simulation_triggered(); break;
        case 2: _t->on_Packet_Injection_ComboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_Traffic_Pattern_ComboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_Traffic_Table_File_Button_clicked(); break;
        case 5: _t->on_actionNew_triggered(); break;
        case 6: _t->on_actionOpen_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject NoximGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NoximGUI.data,
      qt_meta_data_NoximGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NoximGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NoximGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NoximGUI.stringdata0))
        return static_cast<void*>(const_cast< NoximGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int NoximGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
