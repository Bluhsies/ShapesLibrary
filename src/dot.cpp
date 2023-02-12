#include "SFML/Graphics.hpp"
#include "Dot.h"

//! Default constructor which holds a default position for the dot shape when drawn to screen.
Dot::Dot() : Shapes(1, sf::Color(255,255,255))
{

	
	vaArray[0] = sf::Vector2f(0.f, 0.f);
	

}
//! Overloaded contructor which will take the position provided in the main and the colour provided in the main. It will also assign the size of the vertex array in the Shapes class.
Dot::Dot(sf::Vector2f p1, sf::Color c1) : Shapes(1, c1)
{
	

	vaArray[0] = p1;
	//! For loop will assign the selected colour to the Point.
	for (int i = 0; i < iArraySize; i++)
	{

		vaArray[i].color = customColours;

	}


}
//! Instantiated draw function to draw the shape.
void Dot::draw(sf::RenderTarget& target, sf::RenderStates states) const
{

	target.draw(vaArray, states);

}