#include <iostream>

void smallSort2(int* num1, int* num2, int* num3);

int main()
{
    int* firstNumber = new int;
    *firstNumber = 4;

    int* secondNumber = new int;
    *secondNumber = 2;

    int* thirdNumber = new int;
    *thirdNumber = -3;
    
    std::cout << "first: " << *firstNumber << " second: " << *secondNumber
              << " third: " << *thirdNumber << std::endl;

    smallSort2(firstNumber, secondNumber, thirdNumber);   

    std::cout << "first: " << *firstNumber << " second: " << *secondNumber
              << " third: " << *thirdNumber << std::endl;
    delete firstNumber;
    delete secondNumber;
    delete thirdNumber;
    return 0;
}
