#include "Account.h"

class Tag;
class Question;
class Answer;
class Badge;
class Comment;

class Member
{
    bool createQuestion(Question question);
    bool writeAnswer(Answer answer, Question question);
    bool writeComment(Question question, Comment comment);
    bool createTag(Tag tag);
    int getReputation();

private:
    Account m_account;
    int m_reputation;
    std::vector<Badge> m_badges;
};
