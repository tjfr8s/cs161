/**********************************************************
 * Author: Tyler Freitas
 * Date: 20170328
 * Description: Assignment 1 simple example program
 * ********************************************************/


#include <iostream>
#include <string>

// a simple example program 
int main()
{
    std::string faveAnimal;
    std::cout << "Please enter your favorite animal." << std::endl;
    std::cin >> faveAnimal;
    std::cout << "Your favorite animal is the " << faveAnimal;
    std::cout << "." << std::endl;

    return 0;
}
