#include "Enums.h"

#include<string>

class Person;
class Date;

class Account
{
public:
    bool resetPassword(std::string password);

private:
    std::string m_userName;
    std::string m_password;
    Person m_person;
    Date m_createdDate;
    Date m_lastLogin;
    AccountStatus m_status;
};
