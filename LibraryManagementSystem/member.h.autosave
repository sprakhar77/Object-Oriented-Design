#include <account.h>

class BookItem;

class Member : public Account
{
public:
    int totalBooksChecked() const;

    bool reserveBookItem(BookItem bookItem);
    bool checkoutBookItem(BookItem bookItem);
    bool returnBook(BookItem bookItem);
    bool renewBook(BookItem bookItem);

    virtual AccountStatus status() const override;

private:
    int m_totalBooksChecked;
};
