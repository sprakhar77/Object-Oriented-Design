#include <string>
#include <vector>

class Author;

class Book
{
public:
    std::string getTitle();

protected:
    std::string m_isbn;
    std::string m_title;
    std::string m_publisher;
    std::string m_subject;
    std::string m_language;
    std::vector<Author> m_authors;
    int numberOfpages;
};
