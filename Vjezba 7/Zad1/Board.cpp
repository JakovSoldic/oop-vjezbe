#include "Board.h"
#include "Point.h"
#include <stdlib.h>
#include <iostream>
#include <cmath>
using namespace std;

Board::Board(int x, int y)
{
	redak = y;
	stupac = x;

    int i, j;
    matrica = new char* [redak];
    for (i = 0; i < redak; i++)
    {
        matrica[i] = new char[stupac];
    }

    Border();
}

void Board::draw_char(int x, int y, char input)
{
    matrica[y][x] = input;
}

void Board::draw_up_line(Point& p1, Point& p2, char input)
{
    int x0 = round(p1.cordX);
    int y0 = round(p1.cordY);
    int x1 = round(p2.cordX);
    int y1 = round(p2.cordY);

    int i = x0;
    int j = y0;
    while (x0 < x1 && y0 < y1)
    {
        if (x0 == i && y0 == j)
        {
            draw_char(x0, y0, input);
        }
        x0++;
        y0++;
        draw_char(x0, y0, input);
    }
}

void Board::draw_line(Point& p3, Point& p4, char input)
{
    int x0 = round(p3.cordX);
    int y0 = round(p3.cordY);
    int x1 = round(p4.cordX);
    int y1 = round(p4.cordY);

    if (y1 == y0)
    {
        for (int i = x0; i < x1; i++)
        {
            draw_char(i, y1, input);
        }
    }
}

void Board::Border()
{
    for (int i = 0; i < redak; i++)
    {
        for (int j = 0; j < stupac; j++)
        {
            if (i == 0 || i == redak - 1 || j == 0 || j == stupac - 1)
                matrica[i][j] = 'O';
            else
                matrica[i][j] = ' ';
        }
    }
}

void Board::display()
{
    
    for (int i = 0; i < redak; i++)
    {
        for (int j = 0; j < stupac; j++)
        {
            cout << matrica[i][j] << " ";
        }
        cout << endl;
    }
}