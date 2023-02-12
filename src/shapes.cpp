#include "Shapes.h"

Shapes::Shapes(int arraySize, sf::Color custom)
{

	iArraySize = arraySize;
	
	customColours = custom;

	if (arraySize == 1)
	{
		vaArray.resize(iArraySize);
		vaArray.setPrimitiveType(sf::Points);
		
	}
	else if (arraySize >= 2)
	{
		vaArray.resize(iArraySize+1);
		vaArray.setPrimitiveType(sf::LinesStrip);

	}

}

/*!<
Within the Shape.cpp file, the overridden constructor will take an integer value to determine whether the shape will be drawn using sf::Points or sf::LinesStrip.
It will also resize the array to the appropriate size for the number of points which are required. As an example, the Octagon class will use the value 8 to represent the arraySize variable, which will
go through the if statement to determine that the vaArray needs to be resized to 8+1 (so that the final line is drawn to connect the last point and the starting point) and to set the primitive type to
LinesStrip, which will in turn be used to draw the shape.
The if and else if statement will be used in drawing each shape, however, in certain circumstances the vaArray size has been implemented locally in the shape, as the additional line is not required.
e.g, the Arc does not require the last point and first point to be connected.
*/