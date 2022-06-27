#ifndef _GRID_
#define _GRID_

#include <iostream>
#include "Point.h"
using namespace std;

class Grid
{
private:

	static const unsigned int row = 20;
	static const unsigned int column = 40;
	int _location[row][column];

	Point a;
	//coordonate that i use to move the cross
	Point player; 

public:
	Grid();
	void two_point(int ax, int ay, int bx, int by);
	bool _movement(int xb, int yb);
	void draw();
};

#endif
