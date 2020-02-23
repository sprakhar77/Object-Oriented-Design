class Date;

class ElectricPanel
{
public:
    void cancelCharging();
    double getChargingAmount();
private:

    Date m_chargingStartTime;
};
