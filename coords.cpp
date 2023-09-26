#include "coords.h"

COORDS::COORDS() //non-existent coords in standard chess
{
    rank = 9;
    file = 'x';
}

void COORDS::setCoords(char r, char f)
{
    rank = r;
    file = f;
}

char COORDS::getRank()
{
    return rank;
}

char COORDS::getFile()
{
    return file;
}

std::string COORDS::getCoords()
{
    std::string strCoords = "";
    strCoords.append(1, file);
    strCoords.append(1, rank);

    return strCoords;
}