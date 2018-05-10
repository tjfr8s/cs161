/************************************************************
 * Author: Tyler Freitas
 * Date: 04/25/2018
 * Description: This declares a Box class that has values for 
 * length width and height. It has member functions for 
 * calculating and returning the volume and surface area
 * of the Box.
************************************************************/

#ifndef BOX_HPP
#define BOX_HPP

class Box
{
private:
    double height;
    double width;
    double length;

public:
    Box(double heightIn, double widthIn, double lengthIn);
    Box();

    void setHeight(double height);
    void setWidth(double width);
    void setLength(double width);

    double getHeight();
    double getWidth();
    double getLength();

    double calcVolume();
    double calcSurfaceArea();
};

#endif
