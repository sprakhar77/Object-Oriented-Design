#include <vector>

class Question;

class ISearch
{
public:
    virtual std::vector<Question> searchQuestion(std::string query) = 0;
};
