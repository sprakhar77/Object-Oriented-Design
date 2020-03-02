#include "Member.h"

class Comment
{
public:
    bool incrementVoteCount();

private:
    std::string m_commentText;
    Member m_creatingMember;
    Date m_created;
    int m_voteCount;
    int m_flagCount;
};
