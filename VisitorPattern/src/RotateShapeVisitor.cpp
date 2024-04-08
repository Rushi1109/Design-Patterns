#include <iostream>
#include "../include/RotateShapeVisitor.h"
#include "../include/Circle.h"

void RotateShapeVisitor::visit(Circle& circle) {
	std::cout << "Rotating Circle" << '\n';
}

void RotateShapeVisitor::visit(Square& square) {
	std::cout << "Rotating Square" << '\n';
}