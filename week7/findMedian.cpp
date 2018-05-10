/************************************************************
 * Author: Tyler Freitas
 * Date: 05/09/2018
 * Description: This program defines a function called 
 * findMedian that takes two parameters: an array of ints
 * and the size of the array. The function then calculates
 * and returns the median value of the array.
************************************************************/
#include <iostream>
#include <algorithm>

double findMedian(int array[], int arraySize)
{
    std::sort(array, array + arraySize);
    double median{0};
    
    // Calculate median when array has even number of elements.
    if(arraySize % 2 == 0)
    {
        median = (array[(arraySize/2)] + 
                  array[(arraySize/2)-1]) / 2.0;
    }    
    // Calculate median when array has odd number of elements.
    else
    {
        median = array[(arraySize/2)];
    }

    return median;
}
