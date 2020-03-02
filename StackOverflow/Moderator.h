#include "Member.h"

class Moderator : public Member
{
public:
    bool closeQuestion(Question question);
    bool undeleteQuestion(Question question);
};
