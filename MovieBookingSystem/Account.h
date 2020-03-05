#include "Person.h"
#include "Enums.h"

class Date;

class Account
{
public:
    bool resetPassword(std::string password);
    Date dateOfCreation();
    virtual ~Account();

protected:
    Account();

private:
    std::string m_email;
    std::string m_password;
    Person m_person;
    Date m_createdOn;
    AccountStatus m_status{AccountStatus::NONE};
};
