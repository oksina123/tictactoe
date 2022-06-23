#include "table.hpp"

void Table::putX(int x, int y)
{
    if (2 >= x && x >= 0 && 2 >= y && x >= 0)
    {
        if (what(x, y) == 0)
        {
            data[x][y] = X;
        }
        else
        {
            throw Table::OccupiedFieldException();
        }
    }
    else
    {
        throw Table::OutOfBoundsException();
    }
}

void Table::putO(int x, int y)
{
    if (2 >= x && x >= 0 && 2 >= y && x >= 0)
    {
        if (what(x, y) == 0)
        {
            data[x][y] = O;
        }
        else
        {
            throw Table::OccupiedFieldException();
        }
    }
    else
    {
        throw Table::OutOfBoundsException();
    }
}

int Table::what(int x, int y)
{
    return data[x][y];
}

char Table::getChar(int value)
{
    switch (value)
    {
    case BLANK:
        return ' ';
    case X:
        return 'x';
    case O:
        return 'o';
    default:
        return ' ';
    }
}

void Table::print()
{
    cout << getChar(data[0][0]) << '|' << getChar(data[1][0]) << '|' << getChar(data[2][0]) << endl
         << "-+-+-" << endl
         << getChar(data[0][1]) << '|' << getChar(data[1][1]) << '|' << getChar(data[2][1]) << endl
         << "-+-+-" << endl
         << getChar(data[0][2]) << '|' << getChar(data[1][2]) << '|' << getChar(data[2][2]) << endl;
    cout << endl;
}

int Table::checkWin()
{
    if (data[0][0] != BLANK && (data[0][0] == data[1][0]) && (data[0][0] == data[2][0]))
    {
        return data[0][0];
    }

    if (data[0][0] != BLANK && data[0][0] == data[0][1] && data[0][0] == data[0][2])
    {
        return data[0][0];
    }

    if (data[0][0] != BLANK && data[0][0] == data[1][1] && data[0][0] == data[2][2])
    {
        return data[0][0];
    }

    if (data[0][1] != BLANK && data[0][1] == data[1][1] && data[0][1] == data[2][1])
    {
        return data[0][1];
    }

    if (data[0][2] != BLANK && data[0][2] == data[1][2] && data[0][2] == data[2][2])
    {
        return data[0][2];
    }

    if (data[1][0] != BLANK && data[1][0] == data[1][1] && data[1][0] == data[1][2])
    {
        return data[1][0];
    }

    if (data[2][0] != BLANK && data[2][0] == data[2][1] && data[2][0] == data[2][2])
    {
        return data[2][0];
    }

    if (data[2][0] != BLANK && data[2][0] == data[1][1] && data[2][0] == data[0][2])
    {
        return data[2][0];
    }
   
   bool blocked = true;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            if(what(i, j) == BLANK) {
                blocked = false;
                break;
            }
        }
    
    if(blocked)
        return BLANK;
    else
        return -1;
}