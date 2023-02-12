#pragma once

#include "SFML/Graphics.hpp"
#include "Shapes.h"

class Triangle : public Shapes
{

private:
	//! Constant variable for zero to be used as a marker for the X and Y axis, so that the positions for where the 3 points are, start from the central base of the triangle.
	const float zero = 0.f;
	

public:
	//! Default constructor.
	Triangle();
	//! Overloaded constructor.
	Triangle(sf::Vector2f base, float diameter, float height, sf::Color c1);
	//! Instantiated draw function.
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

};

/*!<
This is the Triangle class. This includes the basic constructor, overloaded constructor to take the position of the Triangle when drawn to the screen and the overridden draw function, which is used to
draw the shape itself to the screen, once an object has been created in the main function to do so.
This class also includes access to the public functions (or protected) from the Shapes class, such as the Vertex Array, size variable, etc.
*/