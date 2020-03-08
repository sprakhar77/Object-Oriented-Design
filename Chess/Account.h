#include <Person.h>
#include <Enums.h>

class Date;

class Account
{
public:
    bool resetPassword(std::string password);

private:
    std::string m_emailId;
    std::string m_password;
    Person m_person;
    AccountStatus m_accountStatus;
    Date m_createdDate;
};
