#include "Member.h"

class Admin : public Member
{
public:
    bool blockMember(Member member);
    bool unblockMember(Member member);
};
