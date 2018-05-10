#include <iostream>
#include "Player.hpp"

int main()
{
    Player p1;
    std::cout << "name: " << p1.getName() << std::endl;
    std::cout << "points: " << p1.getPoints() << std::endl;
    std::cout << "rebounds: " << p1.getRebounds() << std::endl;
    std::cout << "assists: " << p1.getAssists() << std::endl;

    Player p2("bob", 2, 3, 4);
    std::cout << "name: " << p2.getName() << std::endl;
    std::cout << "points: " << p2.getPoints() << std::endl;
    std::cout << "rebounds: " << p2.getRebounds() << std::endl;
    std::cout << "assists: " << p2.getAssists() << std::endl;

    Player p3("joe", 5, 6, 7);
    std::cout << "name: " << p3.getName() << std::endl;
    std::cout << "points: " << p3.getPoints() << std::endl;
    std::cout << "rebounds: " << p3.getRebounds() << std::endl;
    std::cout << "assists: " << p3.getAssists() << std::endl;


    std::cout << "joe has more points: " << p3.hasMorePointsThan(p2) << std::endl;
    std::cout << "bob has more points: " << p2.hasMorePointsThan(p3) << std::endl;
    return 0;
}
