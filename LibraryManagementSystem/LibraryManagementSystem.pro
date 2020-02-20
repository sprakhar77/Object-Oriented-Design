TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    account.h \
    address.h \
    book.h \
    bookitem.h \
    booklending.h \
    bookreservation.h \
    catalog.h \
    enums.h \
    fine.h \
    finetransaction.h \
    isearch.h \
    librarian.h \
    member.h \
    notification.h \
    person.h \
    rack.h
