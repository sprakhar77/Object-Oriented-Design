#include "Member.h"
#include <string>

class Notification
{
public:
    void send(Member member, std::string description);
    Notification(const Notification &notifiaction) = delete;
    Notification &operator = (const Notification &notifiaction) = delete;

    Notification& getInstance()
    {
        static Notification instance;
        return instance;
    }

private:
    Notification();
};
