#include "CinemaHall.h"

class Cinema
{
public:
    std::vector<CinemaHall> getHalls();

private:
    std::string m_name;
    Address m_address;
    std::vector<CinemaHall> m_hall;
};
