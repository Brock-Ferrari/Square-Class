// Square Class
// Brock Ferrari

// HEADER FILE

#pragma once						// Necessary for header files so they do not create multiple instances
									// <iostream> not necesssary

class Square						// Generates class Square
{
public:
	Square(float s = 0);			// Sets s = 0 if no parameters are passed
	float calcPerimeter() const;	// Constant, no parameters, calculates perimeter
	float calcArea() const;			// Constant, no parameters, calculates area
	void setSide(float s);			// Sets side length equal to s
	float getSide() const;			// Returns side length
	void showData();				// Displays side length, perimeter & area

private:							// Private variables:
	float perimeter;				
	float side;
	float area;
};