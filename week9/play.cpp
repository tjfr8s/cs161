#include <iostream>
#include "CFBoard.hpp"

int main()
{
    bool playNow = true;
    CFBoard board1;

    while(playNow)
    {
        int column = 0;
        char player = ' ';
        std::cout << "enter a move" << std::endl;
        std::cin >> column;
        std::cin >> player; 
        board1.makeMove(column, player); 
        board1.print();
        std::cout << "\n";
        board1.printGameState();
        if(board1.getGameState() != UNFINISHED)
        {
            playNow = false;
        }
    }
    return 0;
}
