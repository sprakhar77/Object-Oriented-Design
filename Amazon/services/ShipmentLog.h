#include <string>

#include <Enums.h>

class Date;

class ShipmentLog
{
public:
    std::string m_shipmentNumber;
    Date m_createdDate;
    ShipmentStatus m_status;
};
