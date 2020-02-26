#include <vector>
#include <Product.h>

class ISearch
{
public:
    virtual std::vector<Product> searchproductByName(std::string name) const = 0;
    virtual std::vector<Product> searchproductByCategory(ProductCategory category) const = 0;
};
