#include "Fine.h"
#include "Enums.h"

class Payment
{
public:
    Payment(PaymentType paymentType) : m_type(paymentType){}
    virtual bool initiateTransaction(Fine fine, std::string bookBarCode, std::string memberId) = 0;

private:
    PaymentType m_type;
};

class CreditCardPayment : public Payment
{
public:
    CreditCardPayment() : Payment(PaymentType::CARD){}
    virtual bool initiateTransaction(Fine fine, std::string bookBarCode, std::string memberId) override;
};

class ChequePayment : public Payment
{
public:
    ChequePayment() : Payment(PaymentType::CHECQUE){}
    virtual bool initiateTransaction(Fine fine, std::string bookBarCode, std::string memberId) override;
};

class CashPayment : public Payment
{
public:
    CashPayment() : Payment(PaymentType::CASH){}
    virtual bool initiateTransaction(Fine fine, std::string bookBarCode, std::string memberId) override;
};

