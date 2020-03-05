#include <Enums.h>
#include <string>

class Date;

class Payment
{
public:
    Payment(PaymentType type) : m_type(type){}
    virtual PaymentStatus makePayment(std::string orderId, double amount) = 0;

private:
    PaymentType m_type;
    Date m_createdAt;
};

class CardPayment : public Payment
{
public:
    CardPayment() : Payment(PaymentType::CARD){}
    virtual PaymentStatus makePayment(std::string orderId, double amount) override;
};

class ElectronicBankPayment : public Payment
{
public:
    ElectronicBankPayment() : Payment(PaymentType::ELECTRONICBANK){}
    virtual PaymentStatus makePayment(std::string orderId, double amount) override;
};
