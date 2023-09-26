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

        //debugging
        void printBoardCoords();
        void printBoardColors();

};