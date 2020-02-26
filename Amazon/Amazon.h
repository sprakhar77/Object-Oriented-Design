#include <vector>

class ISearch;
class Account;
class Member;
class Admin;
class Guest;
class Product;

class Amazon
{
public:
    Member registerNewAccount(Account account);
    ISearch getSearchinterface();
    bool addNewProduct(Product product);
    bool removeProduct(Product product);

private:
    ISearch m_catalog;
    std::vector<Member> m_members;
    std::vector<Admin> m_admins;
    std::vector<Guest> m_guests;
};
