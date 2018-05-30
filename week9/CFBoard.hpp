/************************************************************
 * Author: Tyler Freitas
 * Date: 05/23/2018
 * Description: This file declares a CFBoard class that 
 * represents a game of connect four.
************************************************************/
#ifndef CFBOARD_HPP
#define CFBOARD_HPP
#include <iostream>
enum GameStates
{
    X_WON,
    O_WON,
    DRAW,
    UNFINISHED
};

class CFBoard
{
private:
    char m_board[6][7];
    GameStates m_gameState;

public: 
    CFBoard();
    CFBoard(char board[6][7]);
    bool makeMove(int col, char player);
    bool scoreLine(int row, int col, int rowStep, int colStep);
    bool boardIsFull();
    void updateGameState(int row, int col);
    void print();
    GameStates getGameState();
    void printGameState();
    
};

#endif
