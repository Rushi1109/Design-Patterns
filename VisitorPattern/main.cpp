#include "./include/Circle.h"
#include "./include/Square.h"
#include "./include/DrawShapeVisitor.h"
#include "./include/RotateShapeVisitor.h"

int main() {
	Circle circle;

	circle.visit(std::move(std::make_unique<DrawShapeVisitor>()));
	circle.visit(std::move(std::make_unique<RotateShapeVisitor>()));

	Square square;

	square.visit(std::move(std::make_unique<DrawShapeVisitor>()));
	square.visit(std::move(std::make_unique<RotateShapeVisitor>()));
}