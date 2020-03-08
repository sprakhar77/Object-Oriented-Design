#include <Account.h>

class Move;

class Player
{
public:
    Player(bool isWhite) : m_isWhite(isWhite){}

private:
    Account m_account;
    bool m_isWhite;
};
