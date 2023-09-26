#include "square.cpp"

/*

class representing the chess board a an 8x8 SQUARE matrix

*/

class BOARD
{
    private:
        SQUARE board[8][8];
    public:

        BOARD(); //constructor calls setBoard()

        void setBoard(); //sets the board's squares as in a classic chess game

        void printBoardStates(); //prints board's square's states

        SQUARE& getSquare(std::string co); //returns a square of the chess board with std::string coords; useful for moving a piece
        
        void movePiece(std::string from, std::string to); //moves a piece on the chess board

        int capturePoints(std::string to);
        /*
        returns points from moving a piece as following:
        k = should not be able to get captured
        e = 0 points
        q = 9 points
        r = 5 points
        b = 3 points
        n = 5 points
        p = 1 point
        */

        //debugging
        void printBoardCoords();
        void printBoardColors();

};