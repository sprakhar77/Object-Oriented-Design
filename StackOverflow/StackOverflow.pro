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
    Answer.h \
    Badge.h \
    Bounty.h \
    Comment.h \
    Enums.h \
    Guest.h \
    ISearch.h \
    Member.h \
    Moderator.h \
    Person.h \
    Photo.h \
    Question.h \
    StackOverflow.h \
    Tag.h \
    services/Notification.h
