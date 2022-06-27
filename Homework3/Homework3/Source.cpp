#include "Grid.h"
#include <thread>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {
	// for this task in the grid 
	// - = unsued case
	// O = use as path
	// A = where the start is
	// B = where the end is
	// X = where the cursor is

	int x_a;
	int x_b;

	int y_a;
	int y_b;

	Grid grille = Grid();

	cout << "x of A:";
	cout << "\n";
	cin >> x_a;

	while (x_a < 0 || x_a > 20)
	{
		cout << " the number can only be between 0 and 20 !";
		cout << "\n";
		cout << "x of A:";
		cout << "\n";
		cin >> x_a;
	}

	cout << "y of A:";
	cout << "\n";
	cin >> y_a;

	while (y_a < 0 || y_a > 40)
	{
		cout << " the number can only be between 0 and 40 !";
		cout << "\n";
		cout << "x of A:";
		cout << "\n";
		cin >> y_a;
	}

	cout << "x of B:";
	cout << "\n";
	cin >> x_b;

	while (x_b < 0 || x_b > 20)
	{
		cout << " the number can only be between 0 and 20 !";
		cout << "\n";
		cout << "x of B:";
		cout << "\n";
		cin >> x_b;
	}

	cout << "y of B:";
	cout << "\n";
	cin >> y_b;

	while (y_b < 0 || y_b > 40)
	{
		cout << " the number can only be between 0 and 40 !";
		cout << "\n";
		cout << "y of B:";
		cout << "\n";
		cin >> y_b;
	}

	grille.two_point(x_a - 1, y_a - 1, x_b - 1, y_b - 1);

	bool the_end = false;

	grille.draw();

	


	while (!the_end)
	{
		grille.draw();
		the_end = grille._movement(x_b,y_b);
	}

	cout << "Finish :)" << endl;

	return 0;
}