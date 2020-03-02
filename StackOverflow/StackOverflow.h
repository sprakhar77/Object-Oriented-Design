#include "Member.h"
#include "Admin.h"
#include "Moderator.h"
#include "ISearch.h"
#include "Guest.h"

class StackOverFlow
{
public:
    bool addNewMember(Member member);
    bool addNewAdmin(Admin admin);
    bool addNewModerator(Moderator moderator);
    bool addNewGuest(Guest guest);

private:
    std::vector<Member> m_member;
    std::vector<Moderator> m_moderators;
    std::vector<Admin> m_admins;
    std::vector<Guest> m_guests;
};
