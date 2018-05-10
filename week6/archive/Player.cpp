/************************************************************
 * Author: Tyler Freitas
 * Date: 05/01/2018
 * Description: This implements Player class with member 
 * variables for the player's name, points, rebounds, 
 * and assists. It has set and get functions for each 
 * member variable. It has a member function 
 * hasMorePointsThan that has a player parameter and returns
 * ture if the player who's funciton is called has more points
 * than the player passed as an argument to the funciton. 
************************************************************/

#include "Player.hpp"

Player::Player()
{
    setName("");
    setPoints(-100);
    setRebounds(-100);
    setAssists(-100);
}

Player::Player(std::string name, int points, int rebounds,
               int assists)
{
    setName(name);
    setPoints(points);
    setRebounds(rebounds);
    setAssists(assists);
}

void Player::setName(std::string name)
{
    m_name = name;
}

void Player::setPoints(int points)
{
    m_points = points;
}

void Player::setRebounds(int rebounds)
{
    m_rebounds = rebounds;
}

void Player::setAssists(int assists)
{
    m_assists = assists;
}

std::string Player::getName() const
{
    return m_name;
}

int Player::getPoints() const
{
    return m_points;
}

int Player::getRebounds() const
{
    return m_rebounds;
}

int Player::getAssists() const
{
    return m_assists;
}

bool Player::hasMorePointsThan(const Player &player)
{
    if(m_points > player.getPoints())
    {
        return true;
    }
    else
    {
        return false;
    }
}


