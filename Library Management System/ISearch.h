#include <vector>

class Book;
class Date;

class ISearch
{
public:
    virtual std::vector<Book> searchByTitle(std::string title) const = 0;
    virtual std::vector<Book> searchByAuthor(std::string title) const = 0;
    virtual std::vector<Book> searchBySubject(std::string subject) const = 0;
    virtual std::vector<Book> searchByPublishDate(Date date) const = 0;
};
