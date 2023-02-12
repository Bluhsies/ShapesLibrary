#include "SFML/Graphics.hpp"
#include "Arc.h"
//! Default constructor.
Arc::Arc() : Shapes(60, sf::Color(255,255,255)), CircularData(0.f)
{

	fRadian = fRadian * fPi / iArraySize;

}
/*!
Overloaded constructor to take the central point of the arc, the size of the arc, color, the size of the vertex array and the radian value to be passed back to the CircularData class. In this instance, the radian value is customisable in the main so that the arc's angle can be manipulated, producing a larger or smaller arc.
The For loop will increment by 1 each time a line has been drawn and draw the next line until the conditions have been met, ie, the For loop has gotten to 60.
It will also apply the selected colour to each line.
*/
Arc::Arc(sf::Vector2f p1, float p2, float p3, float radianValue, sf::Color c1) : Shapes(60, c1), CircularData(fRadian)
{

	fRadian = radianValue * fPi / iArraySize;

	vaArray.resize(iArraySize);

	for (int i = 0; i < iArraySize; i++)
	{

		float x = p1.x + cos(fTheta) * p2;
		float y = p1.y + sin(fTheta) * p3;
		fTheta = fTheta + fRadian;
		vaArray[i] = sf::Vector2f(x, y);
		vaArray[i].color = customColours;
	}


}

//! Instantiated draw function to draw the shape to the screen.
void Arc::draw(sf::RenderTarget& target, sf::RenderStates states) const 
{

	target.draw(vaArray, states);

}