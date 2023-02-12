#pragma once

#include "SFML/Graphics.hpp"
#include "Shapes.h"

class Line : public Shapes
{

public:
	//! Contructor.
	Line();
	//! Overloaded constructor to take position and colour.
	Line(sf::Vector2f p1, sf::Vector2f p2, sf::Color c1);
	//! Instantiated draw function from Shapes class.
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

};

/*!<
This is the Line class. This includes the basic constructor, overloaded constructor to take the positions of the Line when drawn to the screen and the overridden draw function, which is used to
draw the shape itself to the screen, once an object has been created in the main function to do so.
This class also includes access to the public functions (or protected) from the Shapes class, such as the Vertex Array, size variable, etc.
*/