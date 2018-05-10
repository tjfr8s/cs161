/*************************************************************
 ** Author: Tyler Freitas
 ** Date: 04/05/2018
 ** Description: This program asks the  user for 
 ** five numbers and then prints out the average of them.
 **************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double number1;
    double number2;
    double number3;
    double number4;
    double number5;
    double averageOfNumbers;

    cout << "Please enter five numbers." << endl;

    cin >> number1 >> number2 >> number3 >> number4 >> number5;

    // Compute average value. 
    averageOfNumbers = (number1 + number2 + number3 + number4 +
                        number5) / 5.0;

    cout << "The average of those numbers is:" << endl; 
    cout << averageOfNumbers << endl;

    return 0;
}
