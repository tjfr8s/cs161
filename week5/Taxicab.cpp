/************************************************************
 * Author: Tyler Freitas
 * Date: 04/25/2018
 * Description: This implements a Taxicab class that contains
 * values for its current x and y coordinates and its total
 * distance traveled. It has a member funciton to move the
 * Taxicab on the x and y axes and to calculate and retun 
 * the total distance traveled.
 ************************************************************/

#include "Taxicab.hpp"
#include <cmath>

/************************************************************
 * Description: Constructor with parameters for x and y
 * coordinates.
*************************************************************/

Taxicab::Taxicab(int xCoord, int yCoord)
{
    m_xCoord = xCoord;
    m_yCoord = yCoord;
    m_distanceTraveled = 0;
}

/************************************************************
 * Description: Default constructor sets all member variables
 * equal to 0.
************************************************************/

Taxicab::Taxicab()
{
    m_xCoord = 0;
    m_yCoord = 0;
    m_distanceTraveled = 0;
}

int Taxicab::getXCoord()
{
    return m_xCoord;
}

int Taxicab::getYCoord()
{
    return m_yCoord;
}

int Taxicab::getDistanceTraveled()
{
    return m_distanceTraveled;
}

/************************************************************
 * Description: This function moves the Taxicab xMovement
 * units on the x axis and updates distanceTraveled.
************************************************************/

void Taxicab::moveX(int xMovement)
{
    m_xCoord += xMovement;
    m_distanceTraveled += std::abs(xMovement);
}

/************************************************************
 * Description: This function moves the Taxicab yMovement
 * units on the y axis and updates distanceTraveled.
************************************************************/

void Taxicab::moveY(int yMovement)
{
    m_yCoord += yMovement;
    m_distanceTraveled += std::abs(yMovement);
    
}
