/************************************************************
 * Author: Tyler Freitas
 * Date: 4/12/2018
 * Description: This program prompts the user to enter an
 * integer value for the player to guess. The player will
 * attempt to guess the value and the program will tell 
 * them if their guess was too high or too low. Once the 
 * player guesses the correct number the program will
 * tell them how many guesses it took.
 ************************************************************/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int targetNum;
    int currentGuess;
    int guessCount;

    cout << "Enter the number for the player to guess." << endl;
    cin >> targetNum;

    // Prompt user to guess the target value until they guess 
    // correctly while telling them if their guesses are too 
    // high or too low.
    do
    {
        cout << "Enter your guess." << endl;
        cin >> currentGuess;
        guessCount++;    
        
        if (currentGuess > targetNum)
        {
            cout << "Too high - try again." << endl;
        }

        else if (currentGuess < targetNum)
        {
            cout << "Too low - try again." << endl;
        }

    } while (currentGuess != targetNum);

    cout << "You guessed it in " << guessCount << " tries." << endl;

    
    return 0;
}
