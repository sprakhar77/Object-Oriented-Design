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
    Booking.h \
    Catalog.h \
    Cinema.h \
    CinemaHall.h \
    Enums.h \
    Guest.h \
    ISearch.h \
    Member.h \
    Movie.h \
    Person.h \
    Seat.h \
    Show.h \
    Ticket.h \
    services/Notification.h \
    services/Payment.h
