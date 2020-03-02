#include "ISearch.h"
#include "Member.h"

class Guest : public ISearch
{
public:
    std::vector<Question> searchQuestion(std::string query) override;
    Member regeisteAccount();
};
