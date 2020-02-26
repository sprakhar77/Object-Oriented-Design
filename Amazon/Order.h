#include <string>
#include <vector>

#include <Enums.h>

class Date;
class OrderLog;
class ProductItems;

class Order
{
public:
    void sendForShipment();
    bool addOrderLog(OrderLog orderLog);

private:
    std::string m_memeberId;
    Date m_createdDate;
    std::vector<ProductItems> m_items;
    std::vector<OrderLog> m_log;
};
