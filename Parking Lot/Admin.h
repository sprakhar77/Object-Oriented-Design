#include "Account.h"

class ParkingFloor;
class ParkingSpot;
class ParkingDisplayBoard;
class ConsumerInfoPanel;
class AttendentInfoPanel;
class EntrancePanel;
class ExitPanel;

class Admin : public Account
{
public:
    bool addParkingSpot(std::string floorName, ParkingSpot spot);
    bool addparkingFloor(ParkingFloor floor);
    bool addParkingDisplayBoard(std::string name, ParkingDisplayBoard spot);
    bool addConsumerInfoPanel(std::string floorName, ConsumerInfoPanel panel);
    bool addAttendentInfoPanel(std::string floorName, AttendentInfoPanel);
    bool addEntrancePanel(EntrancePanel panel);
    bool addExitPanel(ExitPanel panel);
};
