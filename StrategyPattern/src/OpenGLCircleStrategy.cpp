#include <iostream>
#include "../include/OpenGLCircleStrategy.h"
#include "../include/Circle.h"

void openGLCircleStrategy::draw(Circle& circle) {
	std::cout << "openGL circle draw" << '\n';
	std::cout << "Radius : " << circle.getRadius() << '\n';
}
