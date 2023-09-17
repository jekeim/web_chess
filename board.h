#include "square.cpp"

class BOARD
{
    private:
        SQUARE board[8][8];
    public:
    
        void setBoard();

        void printBoard();

        SQUARE getSquare(std::string co);
        
        void movePiece(std::string from, std::string to);

        //debugging
        void printBoardCoords();
        void printBoardColors();

};