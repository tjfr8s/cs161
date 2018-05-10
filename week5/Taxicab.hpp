/************************************************************
 * Author: Tyler Freitas
 * Date: 04/25/2018
 * Description: This declares a Taxicab class that contains
 * values for its current x and y coordinates and its total 
 * distance traveled. It has member functions to move the 
 * Taxicab on the x and y axes and to calculate and return 
 * the total distance traveled.
************************************************************/

#ifndef TAXICAB_HPP
#define TAXICAB_HPP

#include <cmath>

class Taxicab
{
private:
    int m_xCoord;
    int m_yCoord;
    int m_distanceTraveled;
public:
    Taxicab(int xCoord, int yCoord);
    Taxicab();

    int getXCoord();
    int getYCoord();
    int getDistanceTraveled();

    void moveX(int xMovement);
    void moveY(int yMovement);
};
#endif
