#include "Member.h"
#include "Enums.h"

class Photo;
class Bounty;

class Question
{
public:
    bool close();
    bool addAnswer(Answer answer);
    bool addComment(Comment comment);
    bool undelete();
    bool addBounty(Bounty bonty);

private:
    std::string m_name;
    std::string m_description;
    int m_viewCount;
    QuestionStatus m_status;
    QuestionClosingRemark m_closingRemark;

    Member m_askingMember;
    Date m_createdDate;
    std::vector<Comment> m_comments;
    std::vector<Answer> m_answers;
    std::vector<Photo> m_photos;
    Bounty m_bounty;
};
