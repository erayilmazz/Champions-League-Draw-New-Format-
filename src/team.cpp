#include "../head/team.hpp"

Team::Team(std::string name, std::string country)
        ::name(name),country(country);

string Team::getName() {return name;}
string Team::getCountry() {return country;}
void Team::changeRank(int newRank) {rank = newRank;}
int Team::getRank() {return rank;}
void Team::setOppent(Team *oppent) {opponents.push_back(*oppent);}
