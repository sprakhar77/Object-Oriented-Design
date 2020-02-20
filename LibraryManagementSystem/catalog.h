#include "isearch.h"

class Catalog : ISearch
{
public:
    virtual std::vector<Book> searchByTitle(std::string title) const override;
    virtual std::vector<Book> searchByAuthor(std::string title) const override;
    virtual std::vector<Book> searchBySubject(std::string subject) const override;
    virtual std::vector<Book> searchByPublishDate(Date date) const override;

private:
    std::vector<std::string, std::vector<Book>>m_bookByTitle;
    std::vector<std::string, std::vector<Book>>m_bookByAuthor;
    std::vector<std::string, std::vector<Book>>m_bookBySubject;
    std::vector<Date, std::vector<Book>>m_bookByDate;
};
