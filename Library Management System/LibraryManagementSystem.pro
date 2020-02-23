TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Account.h \
    Address.h \
    Author.h \
    Book.h \
    BookItem.h \
    Catalog.h \
    Enums.h \
    ISearch.h \
    Librarian.h \
    Library.h \
    Member.h \
    Person.h \
    Rack.h \
    services/Reservation.h \
    services/Transaction.h \
    services/Notification.h \
    services/BookReservation.h \
    services/Fine.h \
