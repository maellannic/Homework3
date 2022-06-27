#include "Grid.h"

Grid::Grid()
{
	for (unsigned int i = 0; i < row ; i++)
	{
		for (unsigned int j = 0; j < column; j++)
		{
			_location[i][j] = 0;
		}
	}
}

bool Grid::_movement(int xb, int yb)
{
	if ((a.get_x() != player.get_x() && a.get_y() != player.get_y()) && (xb != player.get_x() && yb != player.get_y()))
	{
		_location[player.get_x()][player.get_y()] = 1;
	}

	if (player.get_x() > xb)
	{
		player.set_x(player.get_x() - 1);
	}

	else if (player.get_x() < xb)
	{
		player.set_x(player.get_x() + 1);
	}

	else if (player.get_y() > yb)
	{
		player.set_y(player.get_y() - 1);
	}

	else if (player.get_y() < yb)
	{
		player.set_y(player.get_y() + 1);
	}

	if (player.get_x() != xb && player.get_y() != yb)
	{
		_location[player.get_x()][player.get_y()] = 4;
	}
	else
	{
		return true;
	}

	return false;
}



void Grid::draw()
{
	for (unsigned int i = 0; i < row; i++)
	{
		cout << "\n";
		for (unsigned int j = 0; j < column; j++)
		{
			if (_location[i][j] == 0)
			{
				cout << '-';
			}
			else if (_location[i][j] == 1)
			{
				cout << 'o';
			}
			else if (_location[i][j] == 2)
			{
				cout << 'A';
			}
			else if (_location[i][j] == 3)
			{
				cout << 'B';
			}
			else if (_location[i][j] == 4)
			{
				cout << 'X';
			}
		}
		
	}
	cout << "\n";
}

void Grid::two_point(int ax, int ay, int bx, int by)
{
	a = Point(ax, ay);
	_location[ax][ay] = 2;

	player = Point(ax, ay);
	_location[bx][by] = 3;
}

