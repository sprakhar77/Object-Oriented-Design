#include "account.h"
#include "member.h"

class Librarian : public Account
{
public:

    bool addBookItem(BookItem bookItem);
    bool blockMember(Member member);
    bool unblockMember(Member member);

    virtual AccountStatus status() const override;
};
