#include <string>

class Date;
class OrderStatus;

class OrderLog
{
private:
    std::string m_orderNumber;
    Date m_creationDate;
    OrderStatus m_orderStatus;
};
