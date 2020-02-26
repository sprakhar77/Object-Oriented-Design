#include <string>

class Date;
class OrderStatus;

class OrderLog
{
public:
    std::string m_orderNumber;
    Date m_creationDate;
    OrderStatus m_orderStatus;
};
