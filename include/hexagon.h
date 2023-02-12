#pragma once

#include "SFML/Graphics.hpp"
#include "CircularData.h"

class Hexagon : public Shapes, public CircularData
{

public:
	//! Constructor.
	Hexagon();
	//! Overloaded constructor.
	Hexagon(sf::Vector2f p1, float p2, sf::Color c1);
	//! Instantiated draw function.
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

};

/*!<
This is the Hexagon class. This includes the basic constructor, overloaded constructor to take the position of the Hexagon when drawn to the screen and the overridden draw function, which is used to
draw the shape itself to the screen, once an object has been created in the main function to do so.
This class also includes access to the public functions (or protected) from the CircularData class, which includes the value for pi, theta and radian value.

*/