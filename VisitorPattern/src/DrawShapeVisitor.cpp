#include <iostream>
#include "../include/DrawShapeVisitor.h"
#include "../include/Circle.h"

void DrawShapeVisitor::visit(Circle& circle) {
	std::cout << "Drawing Circle" << '\n';
}

void DrawShapeVisitor::visit(Square& square) {
	std::cout << "Drawing Square" << '\n';
}