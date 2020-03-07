#include "Enums.h"

#include<string>

class Person;
class Date;

class Account
{
public:
    double getAvailableBalance();

private:
    std::string m_accountNumber;
    double m_totalBalance;
    double m_availableBalance;
    Person m_person;
    Date m_createdDate;
    Date m_lastLogin;
    AccountStatus m_status;
};
