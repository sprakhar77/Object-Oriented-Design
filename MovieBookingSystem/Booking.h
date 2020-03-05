#include "Ticket.h"
#include "Member.h"

class Show;

class Booking
{
private:
    std::string bookingId;
    Date m_created;
    Member m_member;
    std::vector<Ticket> m_tickets;
    BookingStatus m_status;
    Show m_show;
};
