#include "SFML/Graphics.hpp"
#include "Octagon.h"
//! Constructor to take basic values to be overwritten.
Octagon::Octagon() : Shapes(8, sf::Color(255,255,255)), CircularData(2.0f)
{

	fRadian = fRadian * fPi / iArraySize;

}
/*!
Overloaded constructor to take the central point of the octagon, the size of the octagon, color, the size of the vertex array and the radian value to be passed back to the CircularData class.
The For loop will increment by 1 each time a line has been drawn and draw the next line until the conditions have been met, ie, the For loop has gotten to 8.
It will also apply the selected colour to each line.
It will then draw one final line to connect the octagon.
*/
Octagon::Octagon(sf::Vector2f p1, float p2, sf::Color c1) : Shapes(8, c1), CircularData(2.0f)
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

//! Instantiated draw function to draw the shape to the screen.
void Octagon::draw(sf::RenderTarget& target, sf::RenderStates states) const
{

	target.draw(vaArray, states);

}