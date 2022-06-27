#pragma once
class Point
{
private:
	int _x;
	int _y;
public:
	Point(int x = 0, int y = 0);
	void set_x(int x);
	void set_y(int y);
	int get_x();
	int get_y();
};

