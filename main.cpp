#include "head/pot.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>

void create_pots_and_teams();

int main(){
    create_pots_and_teams();


}

void create_pots_and_teams(){
    std::string name;
    std::string country;
    Pot pot1;
    for (size_t i = 1; i <= 8; i++){
        std::cout << "Enter Pot 1's " << i << ". team name: ";
        std::cin >> name;
        std::cout << "Enter " << name <<"'s country: ";
        std::cin >> country;
        Team* newTeam = new Team(name, country);
        pot1.addTeam(newTeam);
    }
    std::vector<Team*> pot1Teams = pot1.getTeams();
    std::random_device rd;
    std::default_random_engine engine(rd());
    std::shuffle(pot1Teams.begin(), pot1Teams.end(), engine);

    Pot pot2;
    for (size_t i = 1; i <= 8; i++){
        std::cout << "Enter Pot 2's " << i << ". team name: ";
        std::cin >> name;
        std::cout << "Enter " << name <<"'s country: ";
        std::cin >> country;
        Team* newTeam = new Team(name, country);
        pot2.addTeam(newTeam);
    }
    std::vector<Team*> pot2Teams = pot2.getTeams();
    std::random_device rd;
    std::default_random_engine engine(rd());
    std::shuffle(pot2Teams.begin(), pot2Teams.end(), engine);

    Pot pot3;
    for (size_t i = 1; i <= 8; i++){
        std::cout << "Enter Pot 3's " << i << ". team name: ";
        std::cin >> name;
        std::cout << "Enter " << name <<"'s country: ";
        std::cin >> country;
        Team* newTeam = new Team(name, country);
        pot3.addTeam(newTeam);
    }
    std::vector<Team*> pot3Teams = pot3.getTeams();
    std::random_device rd;
    std::default_random_engine engine(rd());
    std::shuffle(pot3Teams.begin(), pot3Teams.end(), engine);

    Pot pot4;
    for (size_t i = 1; i <= 8; i++){
        std::cout << "Enter Pot 4's " << i << ". team name: ";
        std::cin >> name;
        std::cout << "Enter " << name <<"'s country: ";
        std::cin >> country;
        Team* newTeam = new Team(name, country);
        pot4.addTeam(newTeam);
    }
    std::vector<Team*> pot4Teams = pot4.getTeams();
    std::random_device rd;
    std::default_random_engine engine(rd());
    std::shuffle(pot4Teams.begin(), pot4Teams.end(), engine);
}


