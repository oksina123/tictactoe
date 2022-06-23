#pragma once

#include <exception>
#include <iostream>

using namespace std;

class Table
{
private:
    int data[3][3] =
        {
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0}};

public:
    class OutOfBoundsException : std::exception
    {
    };
    class OccupiedFieldException : std::exception
    {
    };

    void putX(int x, int y);

    void putO(int x, int y);

    int what(int x, int y);

    char getChar(int value);

    void print();

    int checkWin();

    static const int BLANK = 0;
    static const int X = 1;
    static const int O = 2;
};