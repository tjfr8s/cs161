/************************************************************
 ** Author: Tyler Freitas
 ** Date: 04/05/2018
 ** Description: This program asks the user for a temperature
 ** in Celsius. It then converts this temperature to 
 ** Farenheit and displays this value.
************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double tempCelsius;
    double tempFarenheit;

    cout << "Please enter a Celsius temperature." << endl;
    cin >> tempCelsius;
    
    // Convert Celsius temperature to Farenheit.
    tempFarenheit = ((9.0 / 5.0) * tempCelsius) + 32;

    cout << "The equivalent Farenheit temperature is: " << endl;
    cout << tempFarenheit << endl;
    
    return 0;
}
