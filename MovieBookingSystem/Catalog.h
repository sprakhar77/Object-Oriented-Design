#include "ISearch.h"

class Catalog
{
public:
    virtual std::vector<Movie> searchByName(std::string movie) override;
    virtual std::vector<Movie> searchByGenere(std::string genere) override;
    virtual std::vector<Movie> searchByLanguage(std::string language) override;
    virtual std::vector<Movie> searchByReleaseDate(Date releaseDate) override;

private:
    std::vector<std::string, Movie> m_movieByName;
    std::vector<std::string, Movie> m_movieByGenere;
    std::vector<std::string, Movie> m_movieBylanguage;
    std::vector<Date, Movie> m_movieByDate;
};
