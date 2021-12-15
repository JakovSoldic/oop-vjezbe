#pragma once
#ifndef BOARD_H
#define BOARD_H
#include "Point.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

class Board
{
private:
	int redak;
	int stupac;
	char** matrica; 

public:
	Board(int x, int y);
	void Border();
	void draw_char(int x, int y, char input);
	void draw_up_line(Point& p1, Point& p2, char input);
	void draw_line(Point& p3, Point& p4, char input);
	void display();
	//void plotLineHigh(int x0, int y0, int x1, int y1, char input);
	//void plotLineLow(int x0, int y0, int x1, int y1, char input);
};
#endif

