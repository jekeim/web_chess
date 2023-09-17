#include "coords.h"

COORDS::COORDS() //non-existent coords in standard chess
{
    file = 'x';
    rank = 9;
}

void COORDS::setCoords(char f, char r)
{
    file = f;
    rank = r;
}

char COORDS::getFile()
{
    return file;
}

char COORDS::getRank()
{
    return rank;
}

char COORDS::getRankAsChar()
{
    return char(rank + 96);
}

std::string COORDS::getCoords()
{
    std::string strCoords = "";
    strCoords.append(1, file);
    strCoords.append(1, rank);

    return strCoords;
}