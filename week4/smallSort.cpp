/************************************************************
 * Author: Tyler Freitas
 * Date: 04/22/2018
 * Description: This program contains a function that takes
 * three integers and sorts them in ascending order.
************************************************************/

#include <iostream>

void smallSort(int& first, int& second, int& third)
{

    int tempInt = 0;


    // Put first two numbers in order
    if(first > second)
    {
        tempInt = first;
        first = second;
        second = tempInt;
    }

    // Put third number in order with first two
    if(second > third)
    {
        tempInt = second;
        second = third;
        third = tempInt;
    }

    if(first > second)
    {
        tempInt = first;
        first = second;
        second = tempInt;
    }

}
