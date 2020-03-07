class Member;
class Transaction;
class Address;
class Bank;
class Screen;
class Keypad;
class Printer;
class CashDispenser;
class CardReader;
class CashDepositSlot;
class ChequeDepositSlot;
class TransactionStatus;

class Atm
{
public:
    TransactionStatus makeTransaction(Member member, Transaction transaction);

private:
    int m_id;
    Address m_address;
    Bank m_bank;
    Screen m_screen;
    Keypad m_keypad;
    Printer m_printer;
    CashDispenser m_cashDispenser;
    CardReader n_cardReader;
    CashDepositSlot m_cashDepositSlot;
    ChequeDepositSlot m_chequeDepositSlot;
};
