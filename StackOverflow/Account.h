#include "Person.h"
#include "Enums.h"

class Date;

class Account
{
public:
    bool resetPasswoord(std::string password);

private:
    std::string m_id;
    std::string m_password;
    Date m_createdDate;
    Person m_person;
    AccountStatus m_status;
};
