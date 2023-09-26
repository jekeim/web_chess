#pragma once

#include <iostream>

#include "board.cpp"


using namespace std;

int main()
{
    BOARD b;
    b.setBoard();
    //b.printBoardCoords();

    //cout << b.getSquare("e3").getColor();
    b.printBoardStates();
    b.printBoardCoords();

    b.movePiece("d6", "a1");
    cout << std::endl << std::endl;
    
    b.printBoardStates();
    b.printBoardCoords();
    

    cout << "\nend program" << endl;
    return 0;
}