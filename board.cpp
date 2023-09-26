#include "board.h"
#include <iostream>

BOARD::BOARD()
{
    setBoard();
}

void BOARD::setBoard() //TO DO
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            COORDS co;
            co.setCoords(char('8' - i), char(j + 'a'));
            board[i][j].setSquare((i + j) % 2, co, 'e');
        }
    }
    //test
    board[2][3].setState('k');
}

void BOARD::printBoardStates()
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

SQUARE& BOARD::getSquare(std::string co)
{
    std::cout << "pozitie matrice din al doilea char / rank: " << ('8' - co[1]) << std::endl;
    std::cout << "pozitie matrice din primul char / file: " << (co[0] - 'a') << std::endl;
    return board['8' - co[1]][co[0] - 'a'];
}

void BOARD::movePiece(std::string from, std::string to)
{
    char fromState = getSquare(from).getState();
    char toState = getSquare(to).getState();

    std::cout << fromState << toState << std::endl; 

    getSquare(to).setState(fromState);
    getSquare(from).setState(toState);

    fromState = getSquare(from).getState();
    toState = getSquare(to).getState();

    std::cout << fromState << toState << std::endl; 

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