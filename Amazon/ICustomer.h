#include <vector>

class ShoppingCart;
class ProductItem;

class ICustomer
{
public:
    bool addItemTocart(ProductItem item);
    bool removeItemFromCard(ProductItem item);
    ShoppingCart getShoppingCart();

private:
    ShoppingCart m_shoppingCart;
};
