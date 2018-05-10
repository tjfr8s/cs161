/************************************************************
 * Author: Tyler Freitas
 * Date: 05/01/2018
 * Description: This declares a Player class with member 
 * variables for the player's name, points, rebounds, 
 * and assists. It has set and get functions for each 
 * member variable. It has a member function 
 * hasMorePointsThan that has a player parameter and returns
 * ture if the player who's funciton is called has more points
 * than the player passed as an argument to the funciton. 
************************************************************/
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>

class Player
{
private:
    std::string m_name;
    int m_points;
    int m_rebounds;
    int m_assists;

public:
    Player();
    Player(std::string name, int points, int rebounds, 
           int assists);

    void setName(std::string name);
    void setPoints(int points);
    void setRebounds(int rebounds);
    void setAssists(int assists);

    std::string getName() const;
    int getPoints() const;
    int getRebounds() const;
    int getAssists() const;

    bool hasMorePointsThan(const Player &player);
};


#endif
