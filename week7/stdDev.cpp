/************************************************************
 * Author: Tyler Freitas
 * Date: 5/9/2018
 * Description: This program defines a function that takes 
 * two parameters: an array of Person objects, and an int
 * holding the size of the array. The function calculates
 * and returns the standard deviaiton of the ages of the 
 * people stored in the array.
************************************************************/

#include "Person.hpp"
#include <cmath>
double stdDev(Person personArray[], int arraySize)
{
    // Variables for calculating mean.
    double sum(0);
    double mean(0);

    // Calculate mean age of Person objects in array.
    for(int i = 0; i < arraySize; i++)
    {
        sum += personArray[i].getAge();    
    }
    mean = sum / arraySize;
   
    // Variables for calculating standard deviation.
    double stdDeviation(0);
    double variance(0);
    double diffOfSquares(0);
    double meanDiff(0);

    // Calculate standard deviation of age of Person objects
    // in array.
    for(int i = 0; i < arraySize; i++)
    {
        meanDiff = personArray[i].getAge() - mean;
        diffOfSquares+= pow(meanDiff, 2);      
    }
    variance = diffOfSquares / arraySize;
    stdDeviation = pow(variance, .5);

    return stdDeviation;
}
