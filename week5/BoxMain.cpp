#include <iostream>
#include "Box.hpp"

int main()
{
    Box box1;
    std::cout << "height: " << box1.getHeight() << std::endl;
    std::cout << "width: " << box1.getWidth() << std::endl;
    std::cout << "length: " << box1.getLength() << std::endl;

    std::cout << "volume: " << box1.calcVolume() << std::endl;
    std::cout << "surface area: " << box1.calcSurfaceArea() 
              << std::endl;
    
    box1.setLength(2);
    box1.setHeight(2);
    box1.setWidth(2);

    std::cout << "height: " << box1.getHeight() << std::endl;
    std::cout << "width: " << box1.getWidth() << std::endl;
    std::cout << "length: " << box1.getLength() << std::endl;

    std::cout << "volume: " << box1.calcVolume() << std::endl;
    std::cout << "surface area: " << box1.calcSurfaceArea() 
              << std::endl;

    Box box2(3.0, 4.0, 5.0);
    std::cout << "height: " << box2.getHeight() << std::endl;
    std::cout << "width: " << box2.getWidth() << std::endl;
    std::cout << "length: " << box2.getLength() << std::endl;

    std::cout << "volume: " << box2.calcVolume() << std::endl;
    std::cout << "surface area: " << box2.calcSurfaceArea() 
              << std::endl;
    return 0;
}
