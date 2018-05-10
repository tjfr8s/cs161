#include <iostream>
#include "Taxicab.hpp"

int main()
{
    Taxicab cab1;
    std::cout << "x coord: " << cab1.getXCoord() << std::endl;
    std::cout << "y coord: " << cab1.getYCoord() << std::endl;
    std::cout << "distance: " << cab1.getDistanceTraveled() << std::endl;

    Taxicab cab2(3,4);
    std::cout << "x coord: " << cab2.getXCoord() << std::endl;
    std::cout << "y coord: " << cab2.getYCoord() << std::endl;
    std::cout << "distance: " << cab2.getDistanceTraveled() << std::endl;
    
    cab2.moveX(3);
    cab2.moveY(5);
    
    std::cout << "x coord: " << cab2.getXCoord() << std::endl;
    std::cout << "y coord: " << cab2.getYCoord() << std::endl;
    std::cout << "distance: " << cab2.getDistanceTraveled() << std::endl;
    
    cab2.moveX(-13);
    cab2.moveY(-25);
    
    std::cout << "x coord: " << cab2.getXCoord() << std::endl;
    std::cout << "y coord: " << cab2.getYCoord() << std::endl;
    std::cout << "distance: " << cab2.getDistanceTraveled() << std::endl;
    
    return 0;
}
