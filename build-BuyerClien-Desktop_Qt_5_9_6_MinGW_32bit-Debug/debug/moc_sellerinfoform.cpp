/****************************************************************************
** Meta object code from reading C++ file 'sellerinfoform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widget/sellerinfoform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sellerinfoform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SellerInfoForm_t {
    QByteArrayData data[14];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SellerInfoForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SellerInfoForm_t qt_meta_stringdata_SellerInfoForm = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SellerInfoForm"
QT_MOC_LITERAL(1, 15, 16), // "creatStoreSignal"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "StoreInfo"
QT_MOC_LITERAL(4, 43, 4), // "info"
QT_MOC_LITERAL(5, 48, 12), // "sellerLogout"
QT_MOC_LITERAL(6, 61, 22), // "signalChangeSellerInfo"
QT_MOC_LITERAL(7, 84, 22), // "signalChangeSellerPawd"
QT_MOC_LITERAL(8, 107, 3), // "msg"
QT_MOC_LITERAL(9, 111, 20), // "on_pb_create_clicked"
QT_MOC_LITERAL(10, 132, 20), // "on_pb_logout_clicked"
QT_MOC_LITERAL(11, 153, 18), // "on_pb_info_clicked"
QT_MOC_LITERAL(12, 172, 7), // "checked"
QT_MOC_LITERAL(13, 180, 18) // "on_pb_pawd_clicked"

    },
    "SellerInfoForm\0creatStoreSignal\0\0"
    "StoreInfo\0info\0sellerLogout\0"
    "signalChangeSellerInfo\0signalChangeSellerPawd\0"
    "msg\0on_pb_create_clicked\0on_pb_logout_clicked\0"
    "on_pb_info_clicked\0checked\0"
    "on_pb_pawd_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SellerInfoForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    1,   64,    2, 0x08 /* Private */,
      13,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

void SellerInfoForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SellerInfoForm *_t = static_cast<SellerInfoForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->creatStoreSignal((*reinterpret_cast< StoreInfo(*)>(_a[1]))); break;
        case 1: _t->sellerLogout(); break;
        case 2: _t->signalChangeSellerInfo(); break;
        case 3: _t->signalChangeSellerPawd((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_pb_create_clicked(); break;
        case 5: _t->on_pb_logout_clicked(); break;
        case 6: _t->on_pb_info_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_pb_pawd_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SellerInfoForm::*_t)(StoreInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SellerInfoForm::creatStoreSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SellerInfoForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SellerInfoForm::sellerLogout)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SellerInfoForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SellerInfoForm::signalChangeSellerInfo)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SellerInfoForm::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SellerInfoForm::signalChangeSellerPawd)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject SellerInfoForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SellerInfoForm.data,
      qt_meta_data_SellerInfoForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SellerInfoForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SellerInfoForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SellerInfoForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SellerInfoForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SellerInfoForm::creatStoreSignal(StoreInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SellerInfoForm::sellerLogout()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SellerInfoForm::signalChangeSellerInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SellerInfoForm::signalChangeSellerPawd(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
