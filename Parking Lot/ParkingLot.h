#include "Vehicle.h"

#include <map>

class Address;
class ParkingTicket;
class ParkingFloor;
class EntrancePanel;
class ExitPanel;

class ParkingLot
{
public:
    bool isFull();
    ParkingTicket getParkingTicket(Vehicle vehicle);

    bool addParkingFloor(ParkingFloor floor);
    bool addEntracePanel(EntrancePanel panel);
    bool addExitPanel(ExitPanel panel);

    ParkingLot& getInstance()
    {
        static ParkingLot instance;
        return instance;
    }

private:
    ParkingLot();

private:
    std::string m_name;
    Address m_address;
    int m_parkingRate;
    bool m_full{false};

    int m_maxCompactSpotCount;
    int m_maxLargeSpotCount;
    int m_maxMotorBikeSpotCount;
    int m_maxElectricSpotCount;

    std::map<std::string, ParkingTicket> m_activeTickets;
    std::map<std::string, ParkingFloor> m_parkingFloors;
    std::map<std::string, EntrancePanel> m_entrancePanels;
    std::map<std::string, ExitPanel> m_exitPanels;

};
