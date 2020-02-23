#include "Enums.h"

#include <string>

class ParkingTicket;

class Vehicle
{
public:
    bool assignTicket(ParkingTicket ticket);

private:
    std::string m_licenseNumber;
    VehicleType m_type;
    ParkingTicket m_ticket;
};

class Car : public Vehicle
{
public:
    Car() : Vehicle(VehicleType::CAR){}
};

class Van : public Vehicle
{
public:
    Van() : Vehicle(VehicleType::VAN){}
};

class Truck: public Vehicle
{
public:
    Truck() : Vehicle(VehicleType::TRUCK){}
};

class Electric : public Vehicle
{
public:
    Electric() : Vehicle(VehicleType::ELECTRIC){}
};

class MotorBike : public Vehicle
{
public:
    MotorBike() : Vehicle(VehicleType::MOTORBIKE){}
};
