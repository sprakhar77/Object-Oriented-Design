#include "Transaction.h"

class Deposit : Transaction
{
public:
    double getAmount();

protected:
    Deposit(TransactionType type) : m_type(type){}

private:
    double m_amount;
};

class CashDeposit : public Deposit
{
public:
    CashDeposit() : Deposit(TransactionType::DEPOSIT_CASH){}

private:
    double m_depositLimie;
};

class ChequeDeposit : public Deposit
{
public:
    CashDeposit() : Deposit(TransactionType::DEPOSIT_CHEQUE){}

private:
    std::string m_chequeNumber;
    std::string m_bankCode;
};