#include "Member.h"

#include "Seat.h"

class Ticket
{
public:
    double getprice();

private:
    Date m_createdOn;
    double m_price;
    TicketType m_ticketType;
    Seat m_seat;
    Member m_member;
};
