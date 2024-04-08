#include <iostream>
#include "../include/MyGraphicSquareStrategy.h"
#include "../include/Square.h"

void MyGraphicSquareStrategy::draw(Square& square) {
	std::cout << "My graphic square draw" << '\n';
	std::cout << "Side : " << square.getSide() << '\n';
}
