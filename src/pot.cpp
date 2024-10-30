#include "../head/pot.hpp"

void Pot::addTeam(Team* team) {teams.push_back(team);}
const std::vector <Team*> Pot::getTeams() {return teams;}
Team* Pot::getTeam(const int num) {return teams.at(num);}