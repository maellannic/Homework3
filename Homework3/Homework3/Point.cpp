#include "Point.h"

Point::Point(int x, int y)
{
    set_x(x);
    set_y(y);
}

void Point::set_x(int x)
{
    _x = x;
}

void Point::set_y(int y)
{
    _y = y;
}

int Point::get_x()
{
    return _x;
}

int Point::get_y()
{
    return _y;
}
