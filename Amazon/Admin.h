#include<string>

class Account;
class Member;
class ProductCategory;

class Admin
{
public:
    bool blockMember(Member member);
    bool addNewProductCategory(ProductCategory productCategory);
    bool modifyProductCategory(ProductCategory productCategory, std::string description);

private:
    Account m_account;
};
