/************************************************************
 * Author: Tyler Freitas
 * Date: 05/01/2018
 * Description: This program declares a Team class that has
 * five Player member variables. It has a constructor with 5
 * Player parameters, get and set methods for each member,
 * and a function called totalPoints that returns the total
 * points scored by the team.
************************************************************/
#ifndef TEAM_HPP
#define TEAM_HPP

#include "Player.hpp"

class Team
{
private:
    Player m_pointGuard;
    Player m_shootingGuard;
    Player m_smallForward;
    Player m_powerForward;
    Player m_center;
    
public:
   Team(Player pointGuard, 
        Player shootingGuard,
        Player smallForward,
        Player powerForward,
        Player center);

    void setPointGuard(Player pointGuard);
    void setShootingGuard(Player shootingGuard);
    void setSmallForward(Player smallForward);
    void setPowerForward(Player powerForward);
    void setCenter(Player center);

    Player getPointGuard();
    Player getShootingGuard();
    Player getSmallForward();
    Player getPowerForward();
    Player getCenter();

    int totalPoints();
};

#endif
