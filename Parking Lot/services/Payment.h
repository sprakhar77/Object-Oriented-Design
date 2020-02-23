#include  "Enums.h"

class Date;
class CreditCard;
class Checque;

class Payment
{
    Payment(PaymentType type) : m_type(type){}
    virtual bool initatePayment() = 0;

private:
    Date m_createdAt;
    double m_amount;
    PaymentType m_type;
};

class CreditCardPayment : public Payment
{
public:
    CreditCardPayment() : Payment(PaymentType::CARD){}
    bool initatePayment() override;

private:
    CreditCard m_card;
};

class ChecquePayment : public Payment
{
public:
    ChecquePayment() : Payment(PaymentType::CHEQUE){}
    bool initatePayment() override;

private:
    CreditCard m_card;
};


class CashPayment : public Payment
{
public:
    CashPayment() : Payment(PaymentType::CASH){}
    bool initatePayment() override;

private:
    CreditCard m_card;
};




