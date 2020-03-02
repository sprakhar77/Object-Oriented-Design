#include "Member.h"

class Bounty
{
public:
    bool modifyReputation(int reputation);

private:
    int m_reputation;
    Member m_creatingMember;
    Date m_expiry;
};
