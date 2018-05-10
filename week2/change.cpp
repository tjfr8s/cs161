/************************************************************
 ** Author: Tyler Freitas
 ** Date: 04/05/2018
 ** Description: The program asks the user for a number of 
 ** cents between 0 and 99. It then calculates and displays
 ** how many of each coin are necessary to make that value
 ** with the fewest number of coins.
************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int numberOfCents;
    int numberOfQuarters;
    int numberOfDimes;
    int numberOfNickels;
    int numberOfPennies;
    int remainingCents;

    // Constants holding value of each type of coin.
    const int VALUE_OF_QUARTER = 25;
    const int VALUE_OF_DIME = 10;
    const int VALUE_OF_NICKEL = 5;
    const int VALUE_OF_PENNY = 1;

    cout << "Please enter an amount in cents less than " <<
            "a dollar." << endl;
    cin >> numberOfCents;

    // Calculate number of each coin required to add up to
    // numberOfCents with the fewest total coins.
    numberOfQuarters = numberOfCents / VALUE_OF_QUARTER;
    remainingCents = numberOfCents % VALUE_OF_QUARTER;
    numberOfDimes = remainingCents / VALUE_OF_DIME;
    remainingCents %= VALUE_OF_DIME;
    numberOfNickels = remainingCents / VALUE_OF_NICKEL;
    remainingCents %= VALUE_OF_NICKEL;
    numberOfPennies = remainingCents /VALUE_OF_PENNY;

    cout << "Your change will be:" << endl;
    cout << "Q: " << numberOfQuarters << endl;
    cout << "D: " << numberOfDimes << endl;
    cout << "N: " << numberOfNickels << endl;
    cout << "P: " << numberOfPennies << endl;

    return 0;
}
