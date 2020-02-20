#include "member.h"

class Notification
{
public:
    virtual bool send(Member mebmer) const = 0;
protected:
    std::string m_contenet;
    Date m_createdOn;
};


class PostNotification : public Notification
{
public:
    virtual bool send(Member mebmer) const override;
private:
    Address m_address;
};

class EmailNotification: public Notification
{
public:
    virtual void send(Member mebmer) const override;
private:
    std::string m_email;
};
