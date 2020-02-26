#include<vector>

#include <Account.h>
#include <ICustomer.h>

class CreditCard;
class ElectronicBank;
class Order;
class Product;
class ProductReview;

class Member : public ICustomer
{
public:
    bool addReview(Product product, ProductReview productReview);
    bool placeOrder(Order order);

private:
    std::vector<CreditCard> m_creditCards;
    std::vector<ElectronicBank> m_ElectronicBanks;
    std::vector<Order> m_orderHistory;
};
