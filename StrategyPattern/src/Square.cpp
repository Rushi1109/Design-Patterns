#include "../include/Square.h"
#include "../include/DrawSquareStrategy.h"

void Square::draw() {
	drawStrategy->draw(*this);
}