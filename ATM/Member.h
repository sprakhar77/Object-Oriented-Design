#include <vector>

class Account;
class Card;
class Transaction;

class Member
{
public:
    bool makeTransaction(Transaction tansaction);

private:
    Account m_account;
    Card m_card;
    std::vector<Transaction> m_transactionHistory;
};
