#include <Question.h>

class Answer
{
public:
    bool addPhoto(Photo photo);
    bool incrementVoteCount();

private:
    std::string m_answerText;
    Member m_answeringMember;
    Date m_answeredDate;
    bool isAccepted;
    int m_voteCount;
    int m_flagCount;
    std::vector<Photo> m_photos;
};
