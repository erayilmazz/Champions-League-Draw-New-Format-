#include <string>
#include <vector>

class Team{
private:
    std::string name;
    std::string country;
    int rank;
    std::vector <opponents>;

public:
    Team(std::string name, std::string country);
    string getName();
    string getCountry();
    void changeRank(int newRank);
    int getRank();
    void setOppent(Team oppent);
    
};