#include "Account.h"

class Movie;
class Show;
class Member;

class Admin : public Account
{
public:
    bool addMovie(Movie movie);
    bool addShow (Show show);
    bool blockMember(Member member);
};
