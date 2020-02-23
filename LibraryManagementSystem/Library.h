#include "Enums.h"

#include <vector>

class Librarian;
class Member;
class ISearch;
class BookItem;
class Fine;
class Address;

class Library
{
public:
    Library(const Library &library) = delete;
    Library &operator = (const Library &library) = delete;

    Library& getInstance()
    {
        static Library instance;
        return instance;
    }

    void sendNotification(std::string bookBarcode, BookStatus bookStatus);
    void collectFine(Fine fine, Member member);

private:
    Library();

    std::string m_name;
    Address m_address;
    ISearch m_catalog;
    Librarian m_librarian;
    std::vector<Member> m_members;
    std::vector<BookItem> m_books;

};
