#include <string>
#include <vector>

class Book
{
protected:
    std::string m_isbn;
    std::string m_title;
    std::string m_publisher;
    std::string m_subject;
    std::string m_language;
    std::vector<std::string> m_authors;
    int numberOfpages;
};
