enum class AccountStatus
{
    ACTIVE,
    BLOCKED,
    CANCELD,
    CLOSED,
    COMPROMISED,
};

enum class TransactionStatus
{
    SUCCESS,
    FAILED,
    BLOCKED,
    DECLINED
};

enum class TransactionType
{
    BALANCE_INQUIRY,
    DEPOSIT_CASH,
    DEPOSIT_CHEQUE,
    WITHDRAW,
    TRANSFER
};
