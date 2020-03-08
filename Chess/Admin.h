#include <Account.h>

class Player;

class Admin
{
public:
    bool blockPlayer(Player player);

private:
    Account m_account;
};
