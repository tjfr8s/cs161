/************************************************************
 * Author: Tyler Freitas
 * Date: 04/23/2018
 * Description: This program contains a function that takes
 * a starting integer for a hailstone sequence as a parameter
 * and returns the number of steps it takes for the sequence
 * to reach one.
************************************************************/


#include<iostream>

int hailstone(int currentInt)
{
    // Holds the number of hailstone iterations.
    int numSteps = 0;

    // Performs hailstone operations (even numbers are divided
    // by 2, and odd numbers are multiplied by three and 
    // increased by 1) until sequence reaches a value of one.
    while(currentInt > 1)
    {
        if((currentInt % 2) == 0)
        {
            currentInt /= 2;
        }
        else
        {
            currentInt *= 3;
            currentInt += 1;
        }

        numSteps += 1;
    }

    return numSteps;
}
