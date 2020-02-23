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
    ElectricPanel.h \
    EntrancePanel.h \
    Enums.h \
    ExitPanel.h \
    InfoPanel.h \
    ParkingAttendent.h \
    ParkingDisplayBoard.h \
    ParkingFloor.h \
    ParkingLot.h \
    ParkingSpot.h \
    ParkingTicket.h \
    Person.h \
    Vehicle.h \
    services/Payment.h
