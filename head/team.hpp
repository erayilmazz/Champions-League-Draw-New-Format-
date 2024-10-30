#include <string>
#include <vector>

class Team{
private:
    std::string name;
    std::string country;
    int rank;
    std::vector <Team*> opponents;

public:
    Team(std::string name, std::string country);
    const std::string getName();
    const std::string getCountry();
    void changeRank(int newRank);
    const int getRank();
    void setOpponent(Team* opponent);
    
};