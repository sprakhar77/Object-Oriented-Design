#include "Fine.h"

class BookItem;
class Member;
class BookReservation;

class Reservation
{
public:
    static BookReservation reserveBook(BookItem bookItem, Member member);

    Reservation(const Reservation &reservation) = delete;
    Reservation &operator = (const Reservation &reservation) = delete;

    Reservation& getInstance()
    {
        static Reservation instance;
        return instance;
    }

private:
    Reservation();
};

