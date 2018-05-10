/************************************************************
 * Author: Tyler Freitas
 * Date: 05/01/2018
 * Description: This program implements a Team class that has
 * five Player member variables. It has a constructor with 5
 * Player parameters, get and set methods for each member,
 * and a function called totalPoints that returns the total
 * points scored by the team.
************************************************************/

#include "Team.hpp"

/************************************************************
 * Description: Constructor with parameters for each position
 * on the team.
************************************************************/

Team::Team(Player pointGuard,
           Player shootingGuard,
           Player smallForward,
           Player powerForward,
           Player center)
{
    setPointGuard(pointGuard);
    setShootingGuard(shootingGuard);
    setSmallForward(smallForward);
    setPowerForward(powerForward);
    setCenter(center);
}


void Team::setPointGuard(Player pointGuard)
{
    m_pointGuard = pointGuard;
}


void Team::setShootingGuard(Player shootingGuard)
{
    m_shootingGuard = shootingGuard;
}


void Team::setSmallForward(Player smallForward)
{
    m_smallForward = smallForward;
}


void Team::setPowerForward(Player powerForward)
{
    m_powerForward = powerForward;
}


void Team::setCenter(Player center)
{
    m_center = center;
} 


Player Team::getPointGuard() 
{
    return m_pointGuard;
}


Player Team::getShootingGuard() 
{
    return m_shootingGuard;
}


Player Team::getSmallForward() 
{
    return m_smallForward;
}


Player Team::getPowerForward() 
{
    return m_powerForward;
}


Player Team::getCenter() 
{
    return m_center;
}

/************************************************************
 * Description: This function returns the sum of the points
 * belonging to each player on the team.
************************************************************/

int Team::totalPoints() 
{
    int totalPoints = m_pointGuard.getPoints() +
                      m_shootingGuard.getPoints() +
                      m_smallForward.getPoints() +
                      m_powerForward.getPoints() +
                      m_center.getPoints();
    return totalPoints;

}
