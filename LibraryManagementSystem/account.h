#include "person.h"
#include "enums.h"

#include <string>

class Date;

class Account
{
protected:
    std::string m_id;
    std::string m_password;
    Person m_person;
    AccountStatus m_accuntStatus{AccountStatus::NONE};
public:
    virtual AccountStatus status() const = 0;
    bool resetPassword();
    Date dateOfCreation();

protected:
    Date m_dateOfCreation;
};
