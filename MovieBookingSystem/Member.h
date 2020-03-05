#include "Account.h"

class Booking;
class Show;

class Member : public Account
{
public:
    bool bookShow(Show show);
    bool cancelBooking(Booking booking);

private:
    std::vector<Booking> m_booking;
};
