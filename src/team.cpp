#include "../head/team.hpp"

Team::Team(std::string name, std::string country)
        :name(name),country(country){}

const std::string Team::getName() {return name;}
const std::string Team::getCountry() {return country;}
void Team::changeRank(int newRank) {rank = newRank;}
const int Team::getRank() {return rank;}
void Team::setOpponent(Team *opponent) {opponents.push_back(opponent);}
