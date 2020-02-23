#include <string>

class ParkingTicket;

class EntrancePanel
{
public:
    ParkingTicket printTicket();

private:
    std::string m_id;
};
