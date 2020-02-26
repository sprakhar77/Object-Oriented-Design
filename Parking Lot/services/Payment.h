#include  "Enums.h"

class Date;
class CreditCard;
class Checque;

class Payment
{
    Payment(PaymentType type) : m_type(type){}
    virtual PaymentStatus makePayment() = 0;

private:
    Date m_createdAt;
    PaymentType m_type;
    PaymentStatus m_status;
};

class CreditCardPayment : public Payment
{
public:
    CreditCardPayment() : Payment(PaymentType::CARD){}
    PaymentStatus makePayment() override;

private:
    CreditCard m_card;
};

class ChecquePayment : public Payment
{
public:
    ChecquePayment() : Payment(PaymentType::CHEQUE){}
    PaymentStatus makePayment() override;

private:
    CreditCard m_card;
};


class CashPayment : public Payment
{
public:
    CashPayment() : Payment(PaymentType::CASH){}
    PaymentStatus makePayment() override;

private:
    CreditCard m_card;
};




