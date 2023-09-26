#pragma once

#include <iostream>

#include "board.cpp"


using namespace std;

int main()
{
    BOARD b;
    b.setBoard();

    b.printBoardStates();
    b.printBoardCoords();

    cout << "\nend program" << endl;
    return 0;
}