enum class AccountStatus
{
    ACTIVE,
    CLOSED,
    BLACKLISTED,
    CNACLED,
    NONE
};

enum class SeatType
{
    REGULAR,
    PREMIUM,
    GOLD,
    EMERGENCY
};

enum class BookingStatus
{
    BOOKED,
    CANCELD,
    REFUNDED,
    CHECHKED_IN,
    FAILED
};

enum class TicketType
{
    NORMAL,
    PRIME,
    GOLD
};

enum class PaymentType
{
    CARD,
    ELECTRONIC_BANK,
};

enum class PaymentStatus
{
    COMPLETED,
    CANCELED,
    FAILED,
    PENDING,
    DECLINED
};

enum class NotificationType
{
    SMS,
    EMAIL
};
