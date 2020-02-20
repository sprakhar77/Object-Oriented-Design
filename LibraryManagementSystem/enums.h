enum class BookFormat
{
    HARDCOVER,
    PAPERBACK,
    AUDIO_BOOK,
    EBOOK,
    NEWSPAPER,
    MAGAZINE,
    JOURNAL
};

enum class BookStatus
{
    AVAILABLE,
    RESERVED,
    LOANED,
    LOST
};

enum class ReservationStatus
{
    NONE,
    RESERVED,
    WAITING,
    CANCELED,
};

enum class AccountStatus
{
    ACTIVE,
    BLACKLISTED,
    CANCELED,
    CLOSED,
    NONE
};

namespace constants
{
    static int MAX_BOOK_ISSUED_TO_USER = 5;
    static int MAX_LENDING_DAYS = 10;
}
