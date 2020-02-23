#include <Account.h>

class BookItem;

class Member : public Account
{
public:
    int totalBooksChecked() const;
    bool reserveBookItem(BookItem bookItem) const;
    bool checkoutBookItem(BookItem bookItem) const;
    bool returnBook(BookItem bookItem) const;
    bool renewBook(BookItem bookItem) const;

private:
    int m_totalBooksChecked;
};
