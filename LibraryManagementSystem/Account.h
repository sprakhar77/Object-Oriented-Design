#include "Person.h"
#include "Enums.h"

#include <string>

class Date;

class Account
{
public:
    bool resetPassword();
    Date dateOfCreation();

protected:
    std::string m_id;
    std::string m_password;
    Person m_person;
    AccountStatus m_accuntStatus{AccountStatus::NONE};
    Date m_dateOfCreation;
};
