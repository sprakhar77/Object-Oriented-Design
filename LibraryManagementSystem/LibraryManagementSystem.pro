TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Account.h \
    Address.h \
    Book.h \
    BookItem.h \
    BookLending.h \
    BookReservation.h \
    Catalog.h \
    Enums.h \
    Fine.h \
    FineTransaction.h \
    ISearch.h \
    Librarian.h \
    Member.h \
    Notification.h \
    Person.h \
    Rack.h
