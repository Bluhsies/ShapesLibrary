#pragma once

#include "SFML/Graphics.hpp"
#include "Shapes.h"

class Dot : public Shapes
{


public:
	//! Default constructor.
	Dot();
	//! Overloaded constructor to take a Vector2f for the location of the dot on the screen and the colour.
	Dot(sf::Vector2f p1, sf::Color c1);
	//! Instantiated draw function to allow the dot to be drawn to the screen.
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

};

/*!<
This is the Dot class. This includes the basic constructor, overloaded constructor to take the position of the Dot when drawn to the screen and the overridden draw function, which is used to
draw the shape itself to the screen, once an object has been created in the main function to do so.
This class also includes access to the public functions (or protected) from the Shapes class, such as the Vertex Array, size variable, etc.
*/
