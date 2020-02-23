#include "Enums.h"

#include <string>

class Date;

class ParkingTicket
{
public:
    ParkingTicketStatus getStatus();

private:
    std::string m_number;
    ParkingTicketStatus m_status;
    Date m_issuedAt;
    Date m_payedAt;
    double m_payedAmount;
};
