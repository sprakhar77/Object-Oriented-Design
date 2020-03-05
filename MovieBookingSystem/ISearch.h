#include "Movie.h"

class ISearch
{
public:
    virtual std::vector<Movie> searchByName(std::string movie) = 0;
    virtual std::vector<Movie> searchByGenere(std::string genere) = 0;
    virtual std::vector<Movie> searchByLanguage(std::string language) = 0;
    virtual std::vector<Movie> searchByReleaseDate(Date releaseDate) = 0;
};
