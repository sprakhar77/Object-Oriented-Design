#include "Member.h"

class Notification
{
public:
    virtual bool send(Member mebmer) const = 0;

    Notification(const Notification &notification) = delete;
    Notification &operator = (const Notification &notification) = delete;

    Notification& getInstance()
    {
        static Notification instance;
        return instance;
    }
private:
    Notification();
};

