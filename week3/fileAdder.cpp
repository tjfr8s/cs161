/************************************************************
 * Author: Tyler Freitas
 * Date: 04/12/2018
 * Description: This program asks a user to input a filename
 * and opens the file if it exists. The program reads the 
 * list of integers in the file, adds them together, and
 * outputs them to a file called "sum.txt".
 ************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{
    // Objects for file input and output.
    ifstream inputFile;
    ofstream outputFile;

    string fileName;
    int sum;
    int tempVal;

    // Get file name from user.
    cout << "Please enter your filename." << endl;
    getline(cin, fileName);

    // Open specified file, add up contents, and store sum
    // in "sum.txt".
    inputFile.open(fileName);

    if(inputFile)
    {
       while(inputFile >> tempVal)
       {
            sum += tempVal;
       }

       inputFile.close();
       outputFile.open("sum.txt");
       outputFile << sum;
       outputFile.close();
       cout << "result written to sum.txt" << endl;
    }
    
    else
    {
       cout << "could not access file." << endl;
    }


    return 0;
}
