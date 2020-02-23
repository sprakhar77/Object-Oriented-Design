#include "Account.h"
#include "Member.h"

class Librarian : public Account
{
public:
    bool addBookItem(BookItem bookItem) const;
    bool blockMember(Member member) const;
    bool unblockMember(Member member) const;
};
