#include <string>

class Address;

class Bank
{
public:
    std::string getBankCode();

private:
    std::string m_name;
    std::string m_bankCode;
    Address m_address;
};
