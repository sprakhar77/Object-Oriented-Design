#include<vector>

class ProductItem;

class ShoppingCart
{
public:
    bool checkout();
    bool addItem(ProductItem item);
    bool removeItem(ProductItem item);
    bool updateItemQuantity(ProductItem item, int quantity);
    std::vector getItems() const;

private:
    std::vector<ProductItem> m_items;
};
