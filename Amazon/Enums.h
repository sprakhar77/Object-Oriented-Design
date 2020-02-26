enum class AccountStatus
{
    ACTIVE,
    BLOCKED,
    BLACKLISTED,
    COMPROMISED
};

enum class PaymentStatus
{
    COMPLETE,
    PENDING,
    FAILED,
    DECLINED,
    CANCELD
};

enum class ShipmentStatus
{
    SHIPPED,
    PENDING,
    DELIVERED,
    ONHOLED,
    RETURNED
};

enum class OrderStatus
{
    UNSHIPPED,
    PENDING,
    SHIPPED,
    COMPLETE,
    CANCELED,
    REFUNDAPPLIED
};

enum class PaymentType
{
    CARD,
    ELECTRONICBANK
};

enum class NotificationType
{
    EMAIL,
    SMS,
    PHONE
};
