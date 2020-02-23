#include "Book.h"
#include "Enums.h"
#include "Rack.h"

class Date;

class BookItem : public Book
{
public:
    bool checkout(std::string memberId);

private:
    std::string m_barcode;
    BookFormat m_format;
    BookStatus m_status;
    Date m_borrowedDate;
    Date m_dueDate;
    bool isReferenceOnly;
    Date m_purchasedDate;
    Date m_publicationDate;
    Rack m_placedAt;
};
