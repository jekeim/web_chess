#include <string>

/*
USED IN SQUARE CLASS

pairs the rank and file of a square as a pair of chars
rank is '1' through '8'
file is 'a' through 'h'
*/

class COORDS
{
    private:
        char rank;
        char file;
    public:
        COORDS(); //constructs unusable coord pair

        void setCoords(char r, char f); //setter function

        char getRank(); //gets the rank as a char
        char getFile(); //gets the file as a char

        std::string getCoords(); //get square coords as a std::string; ex: "e4"

};