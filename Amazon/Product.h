#include <vector>

class ProductReview;
class ProductCategory;
class Account;

class Product
{
public:
    void updatePrice(double price);

private:
    std::string m_id;
    std::string m_name;
    double m_price;
    double availableCount;
    std::vector<ProductReview> m_reviews;
    ProductCategory m_category;
    Account m_seller;
};
