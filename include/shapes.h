#pragma once

#include "SFML/Graphics.hpp"
#include <iostream>

using namespace std;

class Shapes : public sf::Drawable 
{

protected:

	//! This is the array which will be used for each shape, in each class which inherits and draws a shape to screen.
	sf::VertexArray vaArray;
	//! This variable is used to gain the RGB value of the colour which is used for the shapes, from the main. This will then allow the individual shape classes to apply the selected colour to each line.
	sf::Color customColours;
	//! This integer is to set the size of the array, once the value fro arraySize in the constructor has been input in the child class.
	int iArraySize;
	//! This virtual void function will allow the shapes to be drawn. This cannot be instantiated in the Shape class, but is subsequently instantiated in each of the shape drawing classes.
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const = 0 {};
	//! This is the overloaded constructor which will take values for the size of the array and the selected colour for the lines to be drawn in.
	Shapes(int arraySize, sf::Color custom);

};

/*!<
This is the Shape class, which allows the user to take information to construct shapes from the library, which are common to all of the shapes. For example, a Vertex Array is utilised in each shape; however,
as the values have not been filled out, they can be filled out for each shape individually.

The Shape class contains a number of protected data types and functions, such as the Vertex Array for each shape, the integer size which will be used to resize each array, a virtual void for the draw function from
SFML which can be overridden in each shape class and a constructor which will check to see what array size has been input each shape class, to determine if sf::Points or sf::LinesStrip is required. It will also utilise the colour implemented in the main.

This function makes use of the SFML library, which will in turn be used by the child classes which draw shapes to draw the shapes to the screen.
*/