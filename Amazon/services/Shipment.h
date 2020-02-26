#include <Enums.h>
#include <Order.h>

#include <string>

class Date;
class ShipmentLog;

class Shipment
{
public:
    bool addShipmentLog(ShipmentLog log);

private:
    std::string m_shipmentNumber;
    Date m_shippedAt;
    Date m_estimatedArrival;
    std::string m_shipmentMethod;
    std::vector<ShipmentLog> m_logs;
};

class ShipmentService
{
public:
    ShipmentStatus ship(Order order);
    ShipmentStatus getStatusFor(Order order);
};
