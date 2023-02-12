#include "SFML/Graphics.hpp"
#include "Triangle.h"
//! Default constructor which takes basic values to be replaced.
Triangle::Triangle() : Shapes(3, sf::Color(255,255,255))
{

	vaArray[0] = sf::Vector2f(0.f, 0.f);
	vaArray[1] = sf::Vector2f(0.f, 0.f);
	vaArray[2] = sf::Vector2f(0.f, 0.f);
	vaArray[3] = vaArray[0];

}
//! Overloaded constructor which will take the base (central point) of the triangle, diameter, height and color, as well as setting the vertex array size.
Triangle::Triangle(sf::Vector2f base, float diameter, float height, sf::Color c1) : Shapes(3, c1)
{
	//! The Vector2fs will calculate where the points are situated based on the base value supplied in the main.
	sf::Vector2f topPoint(zero, height);
	sf::Vector2f rightPoint(diameter, zero);
	sf::Vector2f leftPoint(-diameter, zero);
	
	vaArray[0] = base + topPoint;
	vaArray[1] = base + rightPoint;
	vaArray[2] = base + leftPoint;
	vaArray[3] = vaArray[0];

	for (int i = 0; i < iArraySize; i++)
	{

		vaArray[i].color = customColours;

	}
	vaArray[iArraySize] = vaArray[0];
}
//! Instantiated draw function to draw the shape to the screen.
void Triangle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{

	target.draw(vaArray, states);

}