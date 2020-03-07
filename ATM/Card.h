#include <string>

class Date;
class Address;

class Card
{
public:
    Address getBillingAddress();

private:
    std::string m_number;
    std::string m_pin;
    std::string memberName;
    Date m_expiryDate;
    std::string m_cvv;
};
