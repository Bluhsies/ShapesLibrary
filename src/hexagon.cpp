#include "SFML/Graphics.hpp"
#include "Hexagon.h"
//! Default constructor to take basic values which will be overwritten.
Hexagon::Hexagon() : Shapes(6, sf::Color(255,255,255)), CircularData(2.0f)
{

	fRadian = fRadian * fPi / iArraySize;

}
/*!
Overloaded constructor to take the central point of the hexagon, the size of the hexagon, color, the size of the vertex array and the radian value to be passed back to the CircularData class.
The For loop will increment by 1 each time a line has been drawn and draw the next line until the conditions have been met, ie, the For loop has gotten to 6.
It will also apply the selected colour to each line.
It will then draw one final line to connect the hexagon.
*/
Hexagon::Hexagon(sf::Vector2f p1, float p2, sf::Color c1) : Shapes(6, c1), CircularData(2.0f)
{

	

	fRadian = fRadian * fPi / iArraySize;

	for (int i = 0; i < iArraySize; i++)
	{

		float x = p1.x + cos(fTheta) * p2;
		float y = p1.y + sin(fTheta) * p2;
		fTheta = fTheta + fRadian;
		vaArray[i] = sf::Vector2f(x, y);
		vaArray[i].color = customColours;
	}
	vaArray[iArraySize] = vaArray[0];

}

//! Instantiated draw function to draw the shapes to the screen.
void Hexagon::draw(sf::RenderTarget& target, sf::RenderStates states) const
{

	target.draw(vaArray, states);

}