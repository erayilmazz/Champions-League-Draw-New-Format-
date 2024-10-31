#include "../head/team.hpp"

Team::Team(std::string name, std::string country)
        :name(name),country(country){}

const std::string Team::getName() {return name;}
const std::string Team::getCountry() {return country;}
void Team::changeRank(int newRank) {rank = newRank;}
const int Team::getRank() {return rank;}
void Team::setHomeOpponent(Team *opponent) {homeOpponentsOpponents.push_back(opponent);}
void Team::setAwayOpponent(Team *opponent) {awayOppenents.push_back(opponent);}