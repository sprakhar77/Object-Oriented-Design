#include <string>

class Payment;
class ParkingTicket;

class ExitPanel
{
public:
    void scanTicket(ParkingTicket ticket);
    bool processPayment(Payment Payment);

private:
    std::string m_id;
};
