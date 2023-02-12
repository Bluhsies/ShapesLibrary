#include "SFML/Graphics.hpp"
#include "Line.h"
//! Default constructor with default positions for the line.
Line::Line() : Shapes(2, sf::Color(255,255,255))
{

	
	vaArray[0] = sf::Vector2f(100.f,100.f);
	vaArray[1] = sf::Vector2f(200.f,200.f);

}
//! Overloaded constructor which implements the two points for the line, colour, size of the vertex array and assigns the colour to each line.
Line::Line(sf::Vector2f p1, sf::Vector2f p2, sf::Color c1) : Shapes(2,c1)
{

	vaArray.resize(iArraySize);
	
	vaArray[0] = p1;
	vaArray[1] = p2;

	for (int i = 0; i < iArraySize; i++)
	{

		vaArray[i].color = customColours;

	}


}
//! Instantiated draw function.
void Line::draw(sf::RenderTarget& target, sf::RenderStates states) const
{

	target.draw(vaArray, states);

}