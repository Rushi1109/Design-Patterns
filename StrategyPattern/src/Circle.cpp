#include "../include/Circle.h"
#include "../include/DrawCircleStrategy.h"

void Circle::draw() {
	drawStrategy->draw(*this);
}