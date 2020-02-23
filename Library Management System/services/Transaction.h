#include "Fine.h"

class TransactionType;

class Transction
{
public:
    static bool initiateTransaction(TransactionType type, Fine fine, std::string bookBarCode, std::string memberId);

    Transction(const Transction &transaction) = delete;
    Transction &operator = (const Transction &transaction) = delete;

    Transction& getInstance()
    {
        static Transction instance;
        return instance;
    }
private:
    Transction();
};

