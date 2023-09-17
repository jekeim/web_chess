#include "board.h"
#include <iostream>

void BOARD::setBoard() //TO DO
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            COORDS co;
            co.setCoords(char(j + 97), char(56 - i));
            board[i][j].setSquare((i + j) % 2, co, 'e');
        }
    }
}

void BOARD::printBoard()
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            std::cout << board[i][j].getState() << ' ';
        }
        std::cout << '\n';
    }   
}

SQUARE BOARD::getSquare(std::string co)
{
    return board[co[0] - 96][55 - co[1]];
}

//debugging
void BOARD::printBoardCoords()
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            std::cout << board[i][j].getCoords() << ' ';
        }
        std::cout << '\n';
    }
}

void BOARD::printBoardColors()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            std::cout << board[i][j].getColor() << ' ';
        }
        std::cout << '\n';
    }
}