#include <map>

#include <ISearch.h>

class ProductCategory;

class Catalog : public ISearch
{
public:
    std::vector<Product> searchproductByName(std::string name) const override;
    std::vector<Product> searchproductByCategory(ProductCategory category) const override;

private:
    std::map<std::string, std::vector<Product>> m_productByName;
    std::map<ProductCategory, std::vector<Product>> m_productByCategory;
};
