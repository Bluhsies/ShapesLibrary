#include "SFML/Graphics.hpp"
#include "Square.h"
//! Constructor to take basic values which will be overidden.
Square::Square() : Shapes(4, sf::Color(255,255,255))
{

	
	vaArray[0] = sf::Vector2f(0.f, 0.f);
	vaArray[1] = sf::Vector2f(0.f, 0.f); 
	vaArray[2] = sf::Vector2f(0.f, 0.f);
	vaArray[3] = sf::Vector2f(0.f, 0.f);
	vaArray[4] = vaArray[0];

}
//! Overloaded constructor which will take the central point of the square, distance (height and width as they are the same value) and the colour of the square.
Square::Square(sf::Vector2f p1, float distance, sf::Color c1) : Shapes(4,c1)
{

	
	//! The Vector2fs are used to determine the origin point of each line, when p1 is supplied.
	sf::Vector2f topRight(distance, distance);
	sf::Vector2f bottomRight(distance, -distance);
	sf::Vector2f bottomLeft(-distance, -distance);
	sf::Vector2f topLeft(-distance, distance);

	vaArray[0] = p1 + topRight;
	vaArray[1] = p1 + bottomRight;
	vaArray[2] = p1 + bottomLeft;
	vaArray[3] = p1 + topLeft;
	vaArray[4] = vaArray[0];

	for (int i = 0; i < iArraySize; i++)
	{

		vaArray[i].color = customColours;

	}
	vaArray[iArraySize] = vaArray[0];

}
//! Instantiated draw function to draw the shape to the screen.
void Square::draw(sf::RenderTarget& target, sf::RenderStates states) const
{

	target.draw(vaArray, states);

}