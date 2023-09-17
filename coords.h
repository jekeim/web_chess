#include <string>

class COORDS
{
    private:
        char file;
        char rank;
    public:
        COORDS();

        void setCoords(char f, char r);

        char getFile();
        char getRank();
        char getRankAsChar();

        std::string getCoords(); //get square coords as a string

};