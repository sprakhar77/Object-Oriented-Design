#include <string>

class Date;

class BookLending
{
public:
    static BookLending fetchlending(std::string bookItemBarcode);
    static void lendBook(std::string bookItemBarcode, std::string memberId);

private:
    Date m_creationData;
    Date m_dueDate;
    std::string m_bookItemBarcode;
    std::string m_memberId;
};
