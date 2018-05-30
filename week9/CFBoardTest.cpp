#include<iostream>
#include "CFBoard.hpp"

int main()
{
    // Test if makeMove returns false when column is full 
    CFBoard board1;
    /*
    for(int row = 0; row < 4; row++)
    {
        if(board1.makeMove(1,'x'))
        {
            std::cout << "not full" << std::endl;
        }
        else
            std::cout << "full" << std::endl;

        board1.print();
        board1.printGameState();
        std::cout << '\n';

        if(board1.makeMove(1,'o'))
        {
            std::cout << "not full" << std::endl;
        }
        else
            std::cout << "full" << std::endl;

        board1.print();
        board1.printGameState();
        std::cout << '\n';
    }
    */

    // Test horizontal win

    char boardArray1[6][7] = { '.', '.', '.', '.', '.', '.', '.',
                              '.', '.', '.', '.', '.', '.', '.',
                              '.', '.', '.', '.', '.', '.', '.',
                              '.', 'x', 'x', '.', 'x', '.', '.',
                              '.', '.', '.', 'o', '.', '.', '.',
                              '.', '.', '.', 'x', '.', '.', '.' };
    
    CFBoard board2(boardArray1);
    board2.print();
    board2.printGameState();
    std::cout << '\n';
    board2.makeMove(4,'x');
    board2.printGameState();
    std::cout << '\n';
    board2.print();

    // Test vertical win

    char boardArray2[6][7] = { '.', '.', '.', '.', '.', '.', '.',
                              '.', '.', '.', '.', '.', '.', '.',
                              '.', '.', '.', 'o', '.', '.', '.',
                              '.', '.', '.', 'o', '.', '.', '.',
                              '.', '.', '.', 'o', '.', '.', '.',
                              '.', '.', '.', 'x', '.', '.', '.' };
    
    CFBoard board3(boardArray2);
    board3.print();
    board3.printGameState();
    std::cout << '\n';
    board3.makeMove(4,'o');
    board3.printGameState();
    std::cout << '\n';
    board3.print();

    // Test diagonal up win

    char boardArray3[6][7] = { '.', '.', '.', '.', '.', '.', '.',
                              '.', '.', '.', '.', '.', '.', '.',
                              '.', '.', '.', 'o', '.', 'x', 'x',
                              '.', '.', '.', 'o', '.', 'x', 'o',
                              '.', '.', '.', 'o', '.', 'o', 'o',
                              '.', '.', '.', 'x', 'o', 'o', 'o' };
    
    CFBoard board4(boardArray3);
    board4.print();
    board4.printGameState();
    std::cout << '\n';
    board4.makeMove(5,'x');
    board4.printGameState();
    std::cout << '\n';
    board4.print();


    // Test diagonal up win 

    char boardArray4[6][7] = { '.', '.', '.', '.', '.', '.', '.',
                              '.', '.', '.', '.', '.', '.', '.',
                              '.', '.', '.', 'o', '.', 'x', 'x',
                              '.', '.', '.', 'o', '.', 'x', 'o',
                              '.', '.', '.', 'o', 'x', 'o', 'o',
                              '.', '.', '.', 'x', 'o', 'o', 'o' };
    
    CFBoard board5(boardArray4);
    board5.print();
    board5.printGameState();
    std::cout << '\n';
    board5.makeMove(5,'o');
    board5.printGameState();
    std::cout << '\n';
    board5.print();
    
    char boardArray5[6][7] = { 'x', 'o', 'x', 'o', '.', 'o', 'x',
                              'o', 'x', 'o', 'x', 'o', 'x', 'o',
                              'x', 'x', 'o', 'x', 'o', 'x', 'x',
                              'o', 'o', 'o', 'o', 'x', 'o', 'o',
                              'o', 'x', 'x', 'o', 'x', 'o', 'o',
                              'o', 'x', 'x', 'x', 'o', 'o', 'o' };
    
    CFBoard board6(boardArray5);
    board6.print();
    board6.printGameState();
    std::cout << '\n';
    board6.makeMove(5,'o');
    board6.printGameState();
    std::cout << '\n';
    board6.print();
    







    return 0;
}
