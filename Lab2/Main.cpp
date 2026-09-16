/*********************************************************
Ashton Grady 
computer science Lab 2

start/end date (9/10/2026 - 9/15/2026)

Goal
create functions for calculating volume and surface area of a cylinder.
**********************************************************/

#include <iostream>

// these are the prototype functions that calculates the volume and surface area of a cylinder. 
float calculateVolume(float radius, float height);

float calculateSurfaceArea(float radius, float height);


int main()
{

	// these are the inputs for the radius and height for the cylinder.
	float radius = 0;
	float height = 0;

	// these run the functions and spit out the results to the console.
	std::cout << "the volume of a cylinder is " << calculateVolume (radius, height) << std::endl;
	std::cout << "the surface area of a cylinder is " << calculateSurfaceArea (radius, height) << std::endl;
	
	// if the cylinder is 0 and 0 it does not exist and returns a message to the consol to state that.
	if (radius == 0 && height == 0)
	{
		std::cout << "Maybe the cylinder was the freinds we made along the way." << std::endl;
		return 0;
	}

	return 0;
}

	// these are the function that calulates the volume and surface area.
	float calculateVolume(float radius, float height)
{
	float volume = 3.14 * radius * radius * height;
	return volume;
}

	float calculateSurfaceArea(float radius, float height)
{
	float surfaceArea = 2 * 3.1415926535 * radius * (radius + height);
	return surfaceArea;
}