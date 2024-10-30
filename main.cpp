#include "head/pot.hpp"
#include <iostream>
#include <string>
#include <vector>

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
    Pot pot2;
    for (size_t i = 1; i <= 8; i++){
        std::cout << "Enter Pot 2's " << i << ". team name: ";
        std::cin >> name;
        std::cout << "Enter " << name <<"'s country: ";
        std::cin >> country;
        Team* newTeam = new Team(name, country);
        pot2.addTeam(newTeam);
    }
    Pot pot3;
    for (size_t i = 1; i <= 8; i++){
        std::cout << "Enter Pot 3's " << i << ". team name: ";
        std::cin >> name;
        std::cout << "Enter " << name <<"'s country: ";
        std::cin >> country;
        Team* newTeam = new Team(name, country);
        pot3.addTeam(newTeam);
    }
    Pot pot4;
    for (size_t i = 1; i <= 8; i++){
        std::cout << "Enter Pot 4's " << i << ". team name: ";
        std::cin >> name;
        std::cout << "Enter " << name <<"'s country: ";
        std::cin >> country;
        Team* newTeam = new Team(name, country);
        pot4.addTeam(newTeam);
    }
}