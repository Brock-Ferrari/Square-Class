// Square Class
// Brock Ferrari

// IMPLEMENTATION FILE

#pragma once

#include <iostream>
#include "Square.h"		// Includes header file to implement

	Square::Square(float s) {};			// Does not set s = 0, that is done in header file
	float Square::calcPerimeter() const
	{
		return 4 * side;		// Perimeter
	}
	float Square::calcArea() const
	{
		return side * side;		// Area
	}
	void Square::setSide(float s)
	{
		side = s;
		return;
	}
	float Square::getSide() const
	{
		return side;
	}
	void Square::showData()		// Calls functions to calculate/return data, does not use variables.
	{
		std::cout << "Side length is: " << getSide() << std::endl;
		std::cout << "Perimeter is: " << calcPerimeter() << std::endl;
		std::cout << "Area is: " << calcArea() << std::endl;
		return;
	}
			// Private variables not included, only need to be declared in header file.
