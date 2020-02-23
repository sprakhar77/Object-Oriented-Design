#include "Member.h"
#include "Enums.h"

class Notification
{
public:
    Notification(NotificationType notificationType) : m_type(notificationType){}
    virtual bool send(Member mebmer) const = 0;

private:
    PaymentType m_type;
};

class EmailNotification : public Notification
{
public:
    EmailNotification() : Notification(NotificationType::EMAIL){}
    virtual bool send(Member mebmer) const override;
};

class PhoneNotification : public Notification
{
public:
    PhoneNotification() : Notification(NotificationType::PHONE){}
    virtual bool send(Member mebmer) const override;
};

class PostNotification : public Notification
{
public:
    PostNotification() : Notification(NotificationType::POST){}
    virtual bool send(Member mebmer) const override;
};

