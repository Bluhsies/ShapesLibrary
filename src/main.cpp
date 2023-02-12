/*! \mainpage Lab 2 - Shapes
*
* This is the Shapes Library for Lab Book 1.
* 
* This project will create a library of shapes which can be drawn to the screen.
* 
*/

/*! \file main.cpp
* \brief Main file for the application
*
* Contains the entry point of the application 
* 
* 
*/



#include "SFML/Graphics.hpp"
#include "Line.h"
#include "Dot.h"
#include "Arc.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Hexagon.h"
#include "Octagon.h"
#include <iostream>
using namespace sf;

int main() //!< Entry point for the application
{

	//! Objects are instantiated in the main. It will ask for location, size and colour data.
	sf::RenderWindow window(sf::VideoMode(1024, 800), "Lab Book 1 - Shapes");
	window.setFramerateLimit(60);

	Line myLine(sf::Vector2f(100.f, 100.f), sf::Vector2f(450.f, 450.f), sf::Color(127,0,255));

	Dot myDot(sf::Vector2f(500.f, 500.f), sf::Color(255,255,255));

	Arc myArc(sf::Vector2f(500.f, 500.f), 150.f, 60.f, 0.9f, sf::Color(255,0,255));

	Square mySquare(sf::Vector2f(700.f, 700.f), 50.f, sf::Color(153, 153, 255));

	Triangle myTriangle(sf::Vector2f(100.f, 700.f), 50.f, -100.f, sf::Color(255,171,0));

	Circle myCircle(sf::Vector2f(700.f, 200.f), 100.f, sf::Color(255,0,77));

	Hexagon myHexagon(sf::Vector2f(400.f, 200.f), 50.f, sf::Color(250,250,10));

	Octagon myOctagon(sf::Vector2f(900.f, 300.f), 50.f, sf::Color(204,255,153));

	

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();

		//! Shapes are drawn here.
		
		window.draw(myHexagon);

		window.draw(myOctagon);

		window.draw(myTriangle);

		window.draw(myDot);

		window.draw(myLine);

		window.draw(myArc);

		window.draw(mySquare);

		window.draw(myCircle);

		window.display();
	}
}

/*
Reference List:

rapidtables.com, n.d. RGB Color Codes Chart. Available at: https://www.rapidtables.com/web/color/RGB_Color.html Accessed on: 29.10.2022.

Fahy, C. n.d. Week3:Shapes 2. Available at: https://dmureplay.cloud.panopto.eu/Panopto/Pages/Viewer.aspx?id=cf6e6aee-1cfd-4310-b0b9-af2000a6b310&instance=vle-panopto Accessed on: 23.10.2022.

Fahy, C. Uzor, C. n.d. Class Relationships. Available at: https://vle.dmu.ac.uk/bbcswebdav/pid-5847280-dt-content-rid-12002901_1/courses/IMAT2905_2223_501/Week%203%20-%20Class%20Relationships%281%29.pdf Accessed on: 24.10.2022.

*/