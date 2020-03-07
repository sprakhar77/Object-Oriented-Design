#include <string>

#include "Enums.h"

class Date;

class Transaction
{
protected:
    Transaction(TransactionType type) : m_type(type){}

private:
    std::string m_id;
    Date m_createinDate;
    TransactionType m_type;
};

class BalanceInquiry : public Transaction
{
public:
    BalanceInquiry() : Transaction(TransactionType::BALANCE_INQUIRY){}
    std::string getAccountID();
private:
    std::string m_accountId;
};

class Withdraw : public Transaction
{
public:
    Withdraw() : Transaction(TransactionType::WITHDRAW){}
    double getAmount();
private:
    double amount;
};

class Transfer : public Transaction
{
public:
    Transfer() : Transaction(TransactionType::TRANSFER){}
    std::string getAccountID();
private:
    std::string m_accountId;
};
