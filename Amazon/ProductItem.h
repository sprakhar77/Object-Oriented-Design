#include <string>

class ProductItem
{
public:
    void updateQuantity(int quantity);

private:
    std::string m_productId;
    double m_price;
    int m_quantity;
};
