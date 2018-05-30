#include <iostream>
#include "CFBoard.hpp"

int main()
{
    // Test instantiation of CFBoard class
    CFBoard board;

    // Print board
    board.print();
    std::cout << "\n";

    board.makeMove(7,'x');

    board.print();
    
    std::cout << "\n";
    board.makeMove(6,'o');
    board.print();
    std::cout << "\n";
    board.makeMove(6,'x');
    board.print();
    std::cout << "\n";
    board.makeMove(7,'o');
    board.print();
    std::cout << "\n";
    board.makeMove(6,'o');
    board.print();
    std::cout << "\n";
    board.makeMove(6,'o');
    board.print();
    std::cout << "\n";
    board.makeMove(5,'o');
    board.print();
    std::cout << "\n";
    board.makeMove(5,'o');
    board.print();
    std::cout << "\n";
    board.makeMove(5,'x');
    board.print();
    std::cout << "\n";
    board.makeMove(4,'o');
    board.print();
    std::cout << "\n";
    board.makeMove(4,'o');
    board.print();
    std::cout << "\n";
    board.makeMove(4,'o');
    board.print();
    std::cout << "\n";
    
    board.makeMove(4,'o');
    board.print();
    std::cout << "\n";


    std::cout << board.scoreLine(2, 3, -1, 1) << "\n";
    
    std::cout << board.scoreLine(2, 3, 1, 1) << "\n";
    
}
