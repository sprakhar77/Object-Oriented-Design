enum class AccountStatus
{
    ACTIVE,
    BLACKLISTED,
    CANCELED,
    CLOSED,
    NONE
};

enum class VehicleType
{
    CAR,
    TRUCK,
    ELECTRIC,
    VAN,
    MOTORBIKE
};

enum class ParkingSpotType
{
    HANDICAPED,
    COMPACT,
    LARGE,
    MOTORBIKE,
    ELECTRIC
};

enum class ParkingTicketStatus
{
    ACTIVE,
    PAID,
    LOST
};

enum class PaymentType
{
    CARD,
    CHEQUE,
    CASH
};

enum class PaymentStatus
{
    COMPLETE,
    PENDING,
    FAILED,
    DECLINED,
    CANCELD
};
