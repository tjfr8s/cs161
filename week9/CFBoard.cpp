/************************************************************
 * Author: Tyler Freitas
 * Date: 05/23/2018
 * Description: This file declares a CFBoard class that 
 * represents a game of connect four.
************************************************************/
#include "CFBoard.hpp"

/************************************************************
 * Description: Default constructor for CFBoard class that 
 * initializes an empty board.
************************************************************/
CFBoard::CFBoard()
{
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            m_board[i][j] = '.';
        }
    }

    m_gameState = UNFINISHED;
}


/************************************************************
 * Description: Constructor that allows m_board to be 
 * initialized to non-empty state for testing purposes.
************************************************************/
CFBoard::CFBoard(char board[6][7])
{
    for(int row = 0; row < 6; row++)
        for(int col = 0; col < 7; col++)
        {
            m_board[row][col] = board[row][col];
        }

    m_gameState = UNFINISHED;
}


/************************************************************
 * Description: Place the player's token if the column isn't 
 * full and the game is unfinished.
************************************************************/
bool CFBoard::makeMove(int colNumber, char player)
{
    int colIndex = colNumber - 1;
    // Check if column is full or if game is not unfinished
    if(m_board[0][colIndex] != '.' || m_gameState != UNFINISHED)
    {
        return false;
    }

    // Place player's piece
    int rowIndex = 0;
    while(m_board[rowIndex][colIndex] == '.')
    {
        rowIndex++;
    }

    m_board[rowIndex - 1][colIndex] = player;

    updateGameState(rowIndex - 1, colIndex);

    return true;
}


/************************************************************
 * Description: Print the current board to the console.
************************************************************/
void CFBoard::print()
{
    for(int k = 0; k < 7; k++)
    {
        std::cout << k + 1 << " ";
    }
    std::cout << "\n";


    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            std::cout << m_board[i][j] << " "; 
        }
        
        std::cout << "\n";
    }
}


/************************************************************
 * Description: This function takes a row and column value 
 * for a coordinate on the board as parameters. It also takes
 * two parameters for the increment size for row and column.
 * It then counts the number of matching tokens in the line 
 * created by adding and subtracting the increment values.
 * It returns true if the line has 4 or more matching tokens.
************************************************************/
bool CFBoard::scoreLine(int row, 
                        int col,
                        int rowStep,
                        int colStep)
{
    bool isConnected = true;
    char placedToken = m_board[row][col];
    int score = 1;

    // Set rowIndex and colIndex to next token in line.
    int rowIndex = row + rowStep;
    int colIndex = col + colStep;

    // Check line by increasing row and column values by 
    // rowStep and colStep.
    while(rowIndex < 6 && colIndex < 7 
          && rowIndex >= 0  && colIndex >= 0 
          && isConnected == true)
    {
        if(m_board[rowIndex][colIndex] == placedToken)
        {
            score++;
        }
        else
        {
            isConnected = false;
        }

        rowIndex += rowStep;
        colIndex += colStep;
    }

    // Reset rowIndex and colIndex to check in opposite direction
    rowIndex = row - rowStep;
    colIndex = col - colStep;
    isConnected = true;
    
    // Check for matches in the opposite direction on the line.
    while(rowIndex < 6 && colIndex < 7 
          && rowIndex >= 0 && colIndex >= 0 
          && isConnected == true)
    {
        if(m_board[rowIndex][colIndex] == placedToken)
        {
            score++;
        }
        else
        {
            isConnected = false;
        }

        rowIndex -= rowStep;
        colIndex -= colStep;
    }

    if(score >= 4)
    { return true; }

    else
    { return false; }
}


/************************************************************
 * Description: This function returns true if the board is 
 * full and false if it is not.
************************************************************/
bool CFBoard::boardIsFull()
{
    for(int row = 0; row < 6; row++)
    {
        for(int col = 0; col < 7; col++)
        {
            if(m_board[row][col] == '.')
            { return false; }
        }
    }
    
    return true;
}


/************************************************************
 * Description: This function takes coordinates for a piece
 * and updates the m_gameState to X_WON or O_WON if the piece
 * at the coordinates passed creates a line of 4. If the board
 * is full and the passed piece didn't win, then the status
 * is updated to DRAW.
************************************************************/
void CFBoard::updateGameState(int row, int col)    
{
    bool hasWon = false;
    
    // Test each possible line for a win
    if(scoreLine(row, col, 1, 0))
    {
        hasWon = true;
    }
    else if(scoreLine(row, col, 0, 1))
    {
        hasWon = true;
    }
    else if(scoreLine(row, col, -1, 1))
    {
        hasWon = true;
    }
    else if(scoreLine(row, col, 1, 1))
    {
        hasWon = true;
    }

    // Update m_gameState if a win or draw occurs
    int recentToken = m_board[row][col];
    if(hasWon && recentToken == 'x')
    {
        m_gameState = X_WON;
    }
    else if(hasWon && recentToken == 'o')
    {
        m_gameState = O_WON;
    }
    else if(boardIsFull())
    {
        m_gameState = DRAW;
    }
}


GameStates CFBoard::getGameState()
{
    return m_gameState;
}


/************************************************************
 * Description: Print the value of m_gameState to the console
************************************************************/
void CFBoard::printGameState()
{
    switch(m_gameState)
    {
        case 0:
            std::cout << "X_WON";
            break;
        case 1:
            std::cout << "O_WON";
            break;
        case 2:
            std::cout << "DRAW";
            break;
        case 3:
            std::cout << "UNFINISHED";
           break; 
    }
    std::cout << '\n';
}















































