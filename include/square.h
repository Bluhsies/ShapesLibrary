#pragma once

#include "SFML/Graphics.hpp"
#include "Shapes.h"

class Square : public Shapes
{
public:
	//! Constructor.
	Square();
	//! Overloaded constructor.
	Square(sf::Vector2f p1, float distance, sf::Color c1);
	//! Instantiated draw function.
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

};

/*!<
This is the Square class. This includes the basic constructor, overloaded constructor to take the position of the Square when drawn to the screen and the overridden draw function, which is used to
draw the shape itself to the screen, once an object has been created in the main function to do so.
This class also includes access to the public functions (or protected) from the Shapes class, such as the Vertex Array, size variable, etc.
*/