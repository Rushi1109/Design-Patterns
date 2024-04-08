#include "./include/Circle.h"
#include "./include/OpenGLCircleStrategy.h"
#include "./include/MyGraphicCircleStrategy.h"
#include "./include/Square.h"
#include "./include/MyGraphicSquareStrategy.h"

int main() {
	auto circle = std::make_unique<Circle>(std::make_unique<openGLCircleStrategy>(), 25);
	circle->draw();

	auto circle1 = std::make_unique<Circle>(std::make_unique<MyGraphicCircleStrategy>(), 15);
	circle1->draw();

	auto square = std::make_unique<Square>(std::make_unique<MyGraphicSquareStrategy>(), 10);
	square->draw();
}