#include "Movie.h"
#include "Seat.h"

class CinemaHall
{
private:
    std::string m_name;
    std::vector<Seat> m_seats;
    std::vector<Movie> m_movies;
};