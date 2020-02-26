#include "Fine.h"
#include "Enums.h"

class Payment
{
public:
    Payment(PaymentType paymentType) : m_type(paymentType){}
    virtual PaymentStatus makePayment(Fine fine, std::string bookBarCode, std::string memberId) = 0;

private:
    PaymentType m_type;
    Date m_createdAt;
};

class CreditCardPayment : public Payment
{
public:
    CreditCardPayment() : Payment(PaymentType::CARD){}
    virtual PaymentStatus makePayment(Fine fine, std::string bookBarCode, std::string memberId) override;
};

class ChequePayment : public Payment
{
public:
    ChequePayment() : Payment(PaymentType::CHECQUE){}
    virtual PaymentStatus makePayment(Fine fine, std::string bookBarCode, std::string memberId) override;
};

class CashPayment : public Payment
{
public:
    CashPayment() : Payment(PaymentType::CASH){}
    virtual PaymentStatus makePayment(Fine fine, std::string bookBarCode, std::string memberId) override;
};

