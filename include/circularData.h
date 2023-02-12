#pragma once

#include "SFML/Graphics.hpp"
#include "Shapes.h"

class CircularData
{

protected:

	//! This is the constant value for pi.
	const float fPi = 3.141f;
	//! This is the variable for theta.
	float fTheta;
	//! This is the variable for radians.
	float fRadian;
	//! This function will take the radianValue supplied within the classes which inherit from CircularData.
	CircularData(float radianValue);

};

/*!<
This is the CircularData class. This includes information which is common in the Hexagon, Octagon, Circle and Arc classes. However, as this data is not relevant to the Dot, Line, Triangle or Square,
they do not inherit from this class.
This includes the constant float variable for pi, the float value for theta, the float value for the radian and the overridden constructor to take the radian value for the circular shape.
This class will also inherit the information stored within the Shapes class, to be used through multi level inheritance, allowing the classes which derive from CircularData to also make use of the information.
*/
