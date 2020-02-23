#include "Enums.h"

#include <string>

class Date;

class BookReservation
{
public:
    BookStatus getStatus();

private:
    Date m_creationDate;
    Date m_dueDate;
    ReservationStatus m_status;
    std::string m_bookItemBarCode;
    std::string m_memberId;
};
