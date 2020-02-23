#include "Account.h"

class ParkingTicket;

class ParkingAttendent : public Account
{
public:
    bool processTicket(ParkingTicket ticket);
};
