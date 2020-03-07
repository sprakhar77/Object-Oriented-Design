#include <string>

class DepositSlot
{
public:
    double getTotalAmount();

private:
    double totalAmount;
};

class ChashDepositSlot : public DepositSlot
{
public:
    void getBills();
};


class ChequeDepositSlot : public DepositSlot
{
public:
    void getChequeAmount();
};