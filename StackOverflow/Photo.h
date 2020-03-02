#include "Member.h"

class Photo
{
public:
    bool deletePhoto();

private:
    std::string m_id;
    std::string m_path;
    Date m_createdOn;
    Member m_creatingMember;
};
