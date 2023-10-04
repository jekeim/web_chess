#include "board.h"
#include <iostream>

BOARD::BOARD()
{
    setBoard();
}

void BOARD::setBoard()
{
    //sets square's coords and colors; sets all states as empty pieces
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            COORDS co;
            co.setCoords(char('8' - i), char(j + 'a'));
            board[i][j].setSquare((i + j) % 2, co, 'e');
        }
    }

    //set black king
    board[0][4].setState('K');

    //set white king
    board[7][4].setState('k');

    //set black queen
    board[0][3].setState('Q');

    //set white queen
    board[7][3].setState('q');

    //set black bishops
    board[0][2].setState('B');
    board[0][5].setState('B');

    //set white bishops
    board[7][2].setState('b');
    board[7][5].setState('b');

    //set black knights
    board[0][1].setState('N');
    board[0][6].setState('N');

    //set white knights
    board[7][2].setState('n');
    board[7][5].setState('n');

    //set black rooks
    board[0][0].setState('R');
    board[0][7].setState('R');

    //set white rooks
    board[7][0].setState('r');
    board[7][7] .setState('r');

    //set black and white pawns
    for(int i = 0; i < 8; i++)
    {
        board[1][i].setState('P');
        board[6][i].setState('p');
    }
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

void BOARD::printBoardStatesWithCoords()
{
    //prints files and top separator; "\033[24m" for underlined chars
    std::cout << "\033[4m" << "  |";
    for(char c = 'a'; c < 'i'; c++)
        std::cout << c << ' ';
    std::cout << "\033[24m" << '\n'; //stop underline and mode to the next row

    //prints ranks, side separator and square states
    for (int i = 0; i < 8; i++)
    {
        std::cout << 8 - i << ' ' << '|';
        for (int j = 0; j < 8; j++)
        {
            std::cout << board[i][j].getState() << ' ';
        }
        std::cout << '\n';
    }
}

SQUARE& BOARD::getSquare(std::string co)
{
    return board['8' - co[1]][co[0] - 'a'];
}

void BOARD::movePiece(std::string from, std::string to)
{
    char fromState = getSquare(from).getState();
    char toState = getSquare(to).getState();

    getSquare(to).setState(fromState);
    getSquare(from).setState(toState);

    fromState = getSquare(from).getState();
    toState = getSquare(to).getState();
}

int BOARD::capturePoints(std::string to)
{
    switch(getSquare(to).getState())
    {
        case('e'):
        return 0;

        case('q'):
        case('Q'):
        return 9;

        case('r'):
        case('R'):
        return 5;

        case('b'):
        case('B'):
        return 3;

        case('n'):
        case('N'):
        return 3;

        case('p'):
        case('P'):
        return 1;

        case('k'):
        case('K'):
        return 1e6;

        default:
        return 0;
    }
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