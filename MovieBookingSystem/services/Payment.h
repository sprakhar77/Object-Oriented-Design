#include "Enums.h"

#include <string>

class Payment
{
public:
    Payment(PaymentType paymentType) : m_type(paymentType){}
    virtual PaymentStatus makePayment(double amount, std::string bookingId) = 0;

private:
    PaymentType m_type;
    Date m_createdAt;
};

class CreditCardPayment : public Payment
{
public:
    CreditCardPayment() : Payment(PaymentType::CARD){}
    virtual PaymentStatus makePayment(double amount, std::string bookingId) override;
};

class ElectronicBank : public Payment
{
public:
    ElectronicBank() : Payment(PaymentType::ELECTRONIC_BANK){}
    virtual PaymentStatus makePayment(double amount, std::string bookingId) override;
};

