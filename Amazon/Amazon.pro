TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Account.h \
    Address.h \
    Admin.h \
    Amazon.h \
    Catalog.h \
    CreditCard.h \
    ElectronicBank.h \
    Enums.h \
    Guest.h \
    ICustomer.h \
    ISearch.h \
    Member.h \
    Order.h \
    OrderLog.h \
    Person.h \
    Product.h \
    ProductCategory.h \
    ProductItem.h \
    ProductReview.h \
    ShoppingCart.h \
    services/Notification.h \
    services/Payment.h \
    services/Shipment.h \
    services/ShipmentLog.h
