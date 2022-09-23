// Square Class
// Brock Ferrari

// DRIVER FILE

#include <iostream>
#include "Square.h"				// Includes header file with class

using namespace std;			// Can be used in SquareDriver.cpp but not header/implementation files

int main()
{
	Square s;					// Declares instance of Square class, passes in no arguments
	cout << "Enter a side length for a square: ";
	float sideLength = 0;
	cin >> sideLength;
	while (cin.fail() || sideLength < 0)		// Checks if the side length entered is positive number
	{
		cout << "Your Side Length must be a positive number. Please try again." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> sideLength;
	}
	s.setSide(sideLength);		// Sets the side length of Square
	s.showData();				// Displays data

	system("pause");
	return 0;
}
