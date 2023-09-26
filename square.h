#include "coords.cpp"

/*
USED IN BOARD CLASS

represents one square on the chess board
*/

class SQUARE
{
    private:
        bool color; //0 = black, 1 = white
        COORDS coords; // file is 'a' through 'h', rank is '1' through '8' (chars)
        char state;
        /*
        the piece or empty space occupying a square

        'e' = empty;
         white = lowercase, black = UPPERCASE
         'k' = king
         'q' = queen
         'r' = rook
         'b' = bishop
         'n' = knight
         'p' = pawn
        */
    public:

        SQUARE(); //constructs invalid square
        SQUARE(bool c, COORDS co, char s); //constructor with full parameters

        void setSquare(bool c, COORDS co, char s); //set/change square parameters

        bool getColor(); //gets color of the square as a bool
        std::string getCoords(); //gets the coordinates of a square as a std::string eg: "e4"

        void setState(char s); //sets the state of a square
        char getState(); //gets the state of a square
};