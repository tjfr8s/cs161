/************************************************************
 * Author: Tyler Freitas
 * Date: 04/12/2018
 * Description: This program asks the user how many integers
 * they would like to enter. It then allows them to enter
 * that many integers, calculates the min and max values
 * entered, and prints the min and max values.
 ************************************************************/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    // Hold min and max values entered.
    int minInt = 0;
    int maxInt = 0;

    // Temporarily stores most recently entered integer.
    int tempInt;

    // Holds number of integers user will enter
    int numOfInts;

    // Prompt user to enter the number of integers to enter.
    cout << "How many integers would you like to enter?" << endl;
    cin >> numOfInts;

    // Read in integers form user and calculate min and max values
   
    cout << "Please enter " << numOfInts << " integers." << endl;

    for(int i = 0; i < numOfInts; i++)
    {
        cin >> tempInt;

        if(i == 0)      // Set minInt and maxInt equal to the  
        {               // value entered.
            minInt = maxInt = tempInt; 
        }

        else if(tempInt > maxInt)
        {
            maxInt = tempInt;
        }

        else if(tempInt < minInt)
        {
            minInt = tempInt;
        }
    }

    cout << "min: " << minInt << endl;
    cout << "max: " << maxInt << endl;

    return 0;
}


















































