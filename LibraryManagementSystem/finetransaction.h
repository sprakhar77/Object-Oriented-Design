#include "fine.h"

class FineTransction
{
public:
    virtual void collectFine(std::string bookBarCode, std::string memberId) = 0;

protected:
    Fine m_fine;
};

class CreditCardTransaction : FineTransction
{
public:
    virtual void collectFine(std::string bookBarCode, std::string memberId) const override;
private:
    std::string m_cardNumber;
};


class CheckTransaction : FineTransction
{
public:
    virtual void collectFine(std::string bookBarCode, std::string memberId) const override;
private:
    std::string m_checkNumber;
};
class CashTransaction : FineTransction
{
public:
    virtual void collectFine(std::string bookBarCode, std::string memberId) const override;
private:
    int m_totalBillCount;
};

