#include "../head/pot.hpp"

void Pot::addTeam(Team* team) {teams.push_back(*team)}
std::vector Pot::getTeams() {return teams;}
Team* Pot::getTeam(int num) {return teams.at(num)}