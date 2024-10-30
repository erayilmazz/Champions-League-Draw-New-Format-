#include "team.hpp"
#include <vector>

class Pot{
private:
    std::vector <*Team> teams;

public:
    void addTeam(Team* team);
    std::vector getTeams();
    Team* getTeam(int num);
};