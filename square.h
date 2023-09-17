#include "coords.cpp"

class SQUARE
{
    private:
        bool color; //0 = black, 1 = white
        COORDS coords; // file is 'a' through 'h', rank is '1' through '8' (chars)
        char state;
        /*
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

        SQUARE();
        SQUARE(bool c, COORDS co, char s);

        void setSquare(bool c, COORDS co, char s);

        bool getColor();
        std::string getCoords();

        void setState(char s);
        char getState();
};