#include "Enums.h"
#include "ParkingSpot.h"

#include <map>

class Vehicle;
class CustomerInfoPanel;
class ParkingDisplayBoard;
class ParkingInfoPanel;

class ParkingFloor
{
public:
    ParkingFloor(std::string name) : m_name(name){}

    bool addSport(ParkingSpot spot);
    bool assignVehicleToSpot(Vehicle vehicle, ParkingSpot spot);
    bool freeSpot(ParkingSpot spot);

    ParkingSpot findSPot(ParkingSpotType type);

private:
    std::string m_name;
    std::map<std::string, HandicapedSpot> m_handicapedSpot;
    std::map<std::string, LargeSpot> m_largeSpot;
    std::map<std::string, CompactSpot> m_compactSpot;
    std::map<std::string, ElectricSpot> m_electricSpot;
    std::map<std::string, MotorBikeSpot> m_motorBikeSpot;
    std::map<std::string, CustomerInfoPanel> m_customerInfoPanel;
    std::map<std::string, ParkingInfoPanel> m_parkingInfoPanel;
    ParkingDisplayBoard m_parkingDisplayBoard;

};
