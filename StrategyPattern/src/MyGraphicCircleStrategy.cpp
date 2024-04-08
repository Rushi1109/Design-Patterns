#include <iostream>
#include "../include/MyGraphicCircleStrategy.h"
#include "../include/Circle.h"

void MyGraphicCircleStrategy::draw(Circle& circle) {
	std::cout << "My graphic circle draw" << '\n';
	std::cout << "Radius : " << circle.getRadius() << '\n';
}
