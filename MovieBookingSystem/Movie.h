#include "Show.h"

class Movie
{
public:
    std::vector<Show> getShows();

private:
    std::string m_name;
    std::string m_description;
    std::string m_genere;
    std::string m_language;
    std::string m_country;
    Date m_releaseDate;
    std::vector<Show> m_shows;
    int m_runTime;
};
