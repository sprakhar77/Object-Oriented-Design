#include "Enums.h"

class ElectricPanel;

class Vehicle;

class ParkingSpot
{
public:
    bool isFree();
    bool assignVehicle(Vehicle vechicle);
    bool removeVehicle();
    virtual ~ParkingSpot();

protected:
    ParkingSpot(ParkingSpotType type) : m_type(type){}

private:
    int m_number;
    bool m_free;
    Vehicle m_vehicle;
    ParkingSpotType m_type;
};

class HandicapedSpot : ParkingSpot
{
public:
    HandicapedSpot() : ParkingSpot(ParkingSpotType::HANDICAPED) {}
};

class CompactSpot : ParkingSpot
{
public:
    CompactSpot() : ParkingSpot(ParkingSpotType::COMPACT) {}
};

class LargeSpot : ParkingSpot
{
public:
    LargeSpot() : ParkingSpot(ParkingSpotType::LARGE) {}
};

class MotorBikeSpot : ParkingSpot
{
public:
    MotorBikeSpot() : ParkingSpot(ParkingSpotType::MOTORBIKE) {}
};

// This spot will also have a electric panel
class ElectricSpot : ParkingSpot
{
public:
    ElectricSpot() : ParkingSpot(ParkingSpotType::ELECTRIC) {}
    bool startChargingVehicle();

private:
    ElectricPanel m_electricPanel;
};




