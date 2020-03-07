#include "Account.h"

class Movie;
class CinemaHall;

class Show
{
private:
    Date m_date;
    Movie m_movie;
    CinemaHall m_payedAt;
    Date m_startTime;
    Date m_endTime;
};
