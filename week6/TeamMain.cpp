#include <iostream>
#include "Team.hpp"

int main()
{
    Player p1("bob", 1, 1, 1);
    Player p2("fred", 2, 2, 2);
    Player p3("jon", 3, 3, 3);
    Player p4("bill", 4, 4, 4);
    Player p5("biff", 5, 5, 5);

    Team t1(p1, p2, p3, p4, p5);

    std::cout << "point guard: " << t1.getPointGuard().getName() << std::endl;
    std::cout << "shooting guard: " << t1.getShootingGuard().getName() << std::endl;
    std::cout << "get small forward: " << t1.getSmallForward().getName() << std::endl;
    std::cout << "power forward: " << t1.getPowerForward().getName() << std::endl;
    std::cout << "center: " << t1.getCenter().getName() << std::endl;
    std::cout << "team's points: " << t1.totalPoints() << std::endl;
    std::cout << "\n\n"; 

    Player temp;
    temp = t1.getShootingGuard();
    t1.setShootingGuard(t1.getPointGuard());
    t1.setPointGuard(temp);

    Player ss("super star", 20, 20, 20);
    t1.setPowerForward(ss);
    
    std::cout << "point guard: " << t1.getPointGuard().getName() << std::endl;
    std::cout << "shooting guard: " << t1.getShootingGuard().getName() << std::endl;
    std::cout << "get small forward: " << t1.getSmallForward().getName() << std::endl;
    std::cout << "power forward: " << t1.getPowerForward().getName() << std::endl;
    std::cout << "center: " << t1.getCenter().getName() << std::endl;
    std::cout << "team's points: " << t1.totalPoints() << std::endl;
    std::cout << "\n\n"; 

    Player p6;
    Player p7;
    Player p8;
    Player p9;
    Player p10;

    Team t2(p6, p7, p8, p9, p10);
    std::cout << "point guard: " << t2.getPointGuard().getName() << std::endl;
    std::cout << "shooting guard: " << t2.getShootingGuard().getName() << std::endl;
    std::cout << "get small forward: " << t2.getSmallForward().getName() << std::endl;
    std::cout << "power forward: " << t2.getPowerForward().getName() << std::endl;
    std::cout << "center: " << t2.getCenter().getName() << std::endl;
    std::cout << "team's points: " << t2.totalPoints() << std::endl;
    
    


    return 0;
}
