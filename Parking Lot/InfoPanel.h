#include <string>

class Payment;
class ParkingTicket;

class InfoPanel
{
public:
    virtual void scanTicket(ParkingTicket parkingTicket) = 0;
    virtual void processPayment(Payment payment) = 0;

private:
    std::string m_id;
};

class CustomerInfoPanel : InfoPanel
{
public:
    virtual void scanTicket(ParkingTicket parkingTicket) override;
    virtual void processPayment(Payment payment) override;
};

class ParkingAttendentInfoPanel : InfoPanel
{
public:
    virtual void scanTicket(ParkingTicket parkingTicket) override;
    virtual void processPayment(Payment payment) override;
};
