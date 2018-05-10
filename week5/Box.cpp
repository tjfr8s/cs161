/************************************************************
 * Author: Tyler Freitas
 * Date: 04/25/2018
 * Description: This implements a Box class that represents
 * a rectangle with values for its length, width, and height.
 * It has member functions to return its volume and 
 * surface area.
************************************************************/

#include "Box.hpp"

// Constructor with length, width, and height parameters. 
Box::Box(double heightIn, double widthIn, double lengthIn)
{
    setHeight(heightIn);
    setWidth(widthIn);
    setLength(lengthIn);
}

// Default constructor that sets all dimensions equal to 1.
Box::Box()
{
    setHeight(1);
    setWidth(1);
    setLength(1);
}


void Box::setHeight(double heightIn)
{
    height = heightIn;
}

void Box::setWidth(double widthIn)
{
    width = widthIn;
}

void Box::setLength(double lengthIn)
{
    length = lengthIn;
}


double Box::getHeight()
{
    return height;
}

double Box::getWidth()
{
    return width;
}

double Box::getLength()
{
    return length;
}

/************************************************************
 * Description: This function calculates and returns the 
 * volume of the box.
************************************************************/
double Box::calcVolume()
{
    return length * width * height;
}

/************************************************************
 * Description: This function calculates and returns the 
 * surface area of the box.
************************************************************/
double Box::calcSurfaceArea()
{
    double surfaceArea;

    // Calculate surface area of the box.
    surfaceArea = 2 * (length * width) + 2 * (width * height) + 
                  2 * (length * height);

    return surfaceArea;
}



























































