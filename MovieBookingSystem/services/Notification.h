#include "Member.h"
#include "Enums.h"

class Notification
{
public:
    Notification(NotificationType notificationType) : m_type(notificationType){}
    virtual bool send(Member mebmer, std::string description) const = 0;

private:
    PaymentType m_type;
};

class EmailNotification : public Notification
{
public:
    EmailNotification() : Notification(NotificationType::EMAIL){}
    virtual bool send(Member mebmer, std::string description) const override;
};

class SmsNotification : public Notification
{
public:
    SmsNotification() : Notification(NotificationType::SMS){}
    virtual bool send(Member mebmer, std::string description) const override;
};
