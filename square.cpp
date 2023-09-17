#include "square.h"

SQUARE::SQUARE()
{
    color = -1;
    COORDS co;
    coords = co;
    state = 'e';
}

SQUARE::SQUARE(bool c, COORDS co, char s)
{
    color = c;
    coords = co;
    state = s;
}

void SQUARE::setSquare(bool c, COORDS co, char s)
{
    color = c;
    coords = co;
    state = s;
}

bool SQUARE::getColor()
{
    return color;
}

std::string SQUARE::getCoords()
{
    return coords.getCoords();
}

void SQUARE::setState(char s)
{
    state = s;
}

char SQUARE::getState()
{
    return state;
}