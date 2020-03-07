#include <string>

class TransactionType;

class Screen
{
public:
    void showMessage(std::string message);
    TransactionType getTransactionType();
};
