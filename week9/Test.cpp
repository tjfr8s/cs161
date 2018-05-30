#include <iostream>
#include "CFBoard.hpp"
int main()
{
    CFBoard cfb;
//    ASSERT_EQ(cfb.getGameState(), UNFINISHED);
    cfb.makeMove(2, 'o');
    cfb.printGameState();
    cfb.makeMove(3, 'o');
    cfb.printGameState();
    cfb.makeMove(4, 'o');
    cfb.printGameState();
    std::cout << cfb.getGameState() << std::endl;
    cfb.printGameState();
    cfb.print();
 //   ASSERT_EQ(cfb.getGameState(), UNFINISHED);
    cfb.makeMove(5, 'o');
    cfb.print();
    std::cout << cfb.getGameState() << std::endl;
    cfb.printGameState();
  //  ASSERT_EQ(cfb.getGameState(), O_WON);
    return 0;
}
