/************************************************************
 * Author: Tyler Freitas
 * Date: 04/22/2018
 * Description: This program contains a function that takes
 * falling time as an argument and returns the distance an
 * object would fall during that time due to gravity in 
 * meters.
************************************************************/

#include <iostream>
#include <cmath>

double fallDistance(double fallTime)
{
     // Constand for acceleration due to gravity
    const double GRAVITY = 9.8;
    // Variabe for storing the distance an object would fall.
    double fallDistance = 0;

    // Calculate distance object would fall in fallTime
    fallDistance = 0.5 * GRAVITY * pow(fallTime, 2.0);
    return fallDistance;
     
}

















































