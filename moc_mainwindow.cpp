/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sun Jun 26 00:02:05 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      39,   11,   11,   11, 0x08,
      66,   11,   11,   11, 0x08,
      93,   11,   11,   11, 0x08,
     123,   11,   11,   11, 0x08,
     150,   11,   11,   11, 0x08,
     177,   11,   11,   11, 0x08,
     204,   11,   11,   11, 0x08,
     231,   11,   11,   11, 0x08,
     258,   11,   11,   11, 0x08,
     285,   11,   11,   11, 0x08,
     311,   11,   11,   11, 0x08,
     337,   11,   11,   11, 0x08,
     363,   11,   11,   11, 0x08,
     389,   11,   11,   11, 0x08,
     415,   11,   11,   11, 0x08,
     441,   11,   11,   11, 0x08,
     467,   11,   11,   11, 0x08,
     493,   11,   11,   11, 0x08,
     517,   11,   11,   11, 0x08,
     537,   11,   11,   11, 0x08,
     582,  554,   11,   11, 0x08,
     631,  554,   11,   11, 0x08,
     682,  554,   11,   11, 0x08,
     734,   11,   11,   11, 0x08,
     762,  749,   11,   11, 0x08,
     804,  793,   11,   11, 0x08,
     841,  830,   11,   11, 0x08,
     883,  870,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButton_18_clicked()\0"
    "on_pushButton_17_clicked()\0"
    "on_pushButton_16_clicked()\0"
    "on_area_save_button_clicked()\0"
    "on_pushButton_15_clicked()\0"
    "on_pushButton_14_clicked()\0"
    "on_pushButton_13_clicked()\0"
    "on_pushButton_12_clicked()\0"
    "on_pushButton_11_clicked()\0"
    "on_pushButton_10_clicked()\0"
    "on_pushButton_9_clicked()\0"
    "on_pushButton_8_clicked()\0"
    "on_pushButton_7_clicked()\0"
    "on_pushButton_6_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_clicked()\0screentimeraction()\0"
    "pixelspyaction()\0progexitcode,progexitstatus\0"
    "progbeforescreenonexit(int,QProcess::ExitStatus)\0"
    "progafterlefttimeronexit(int,QProcess::ExitStatus)\0"
    "progafterleftscreenonexit(int,QProcess::ExitStatus)\0"
    "clipboardspy()\0areageometry\0"
    "ScreenshotareahideEvent(QRect)\0"
    "logediturl\0logeditanchorcliked(QUrl)\0"
    "row,column\0logtablecellclicked(int,int)\0"
    "myModelIndex\0logtabledoublecellclicked(QModelIndex)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_18_clicked(); break;
        case 1: on_pushButton_17_clicked(); break;
        case 2: on_pushButton_16_clicked(); break;
        case 3: on_area_save_button_clicked(); break;
        case 4: on_pushButton_15_clicked(); break;
        case 5: on_pushButton_14_clicked(); break;
        case 6: on_pushButton_13_clicked(); break;
        case 7: on_pushButton_12_clicked(); break;
        case 8: on_pushButton_11_clicked(); break;
        case 9: on_pushButton_10_clicked(); break;
        case 10: on_pushButton_9_clicked(); break;
        case 11: on_pushButton_8_clicked(); break;
        case 12: on_pushButton_7_clicked(); break;
        case 13: on_pushButton_6_clicked(); break;
        case 14: on_pushButton_5_clicked(); break;
        case 15: on_pushButton_4_clicked(); break;
        case 16: on_pushButton_3_clicked(); break;
        case 17: on_pushButton_2_clicked(); break;
        case 18: on_pushButton_clicked(); break;
        case 19: screentimeraction(); break;
        case 20: pixelspyaction(); break;
        case 21: progbeforescreenonexit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 22: progafterlefttimeronexit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 23: progafterleftscreenonexit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 24: clipboardspy(); break;
        case 25: ScreenshotareahideEvent((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 26: logeditanchorcliked((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 27: logtablecellclicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: logtabledoublecellclicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 29;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
