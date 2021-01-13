#include "film.hpp"
#include <iostream>
#include <ctime>

class film{
    public:
        std::string title;
        int episode_id;
        std::string opening_crawl;
        std::string director;
        std::string producer;
        std::string release_date;
        std::string characters[];
        std::string planets[];
        std::string starships[];
        std::string vehicles[];
        std::string species[];
        tm created;
        tm edited;
        std::string url;
};
