// main function driver for fallDistance function.
#include <iostream>

double fallDistance(double fallTime);

int main()
{
    double testTime = 0;
    std::cout << "Please enter test time: " << std::endl;
    std::cin >> testTime;

    std::cout << fallDistance(testTime) << std::endl;
    return 0;
}
