#include "../include/Circle.h"
#include "../include/ShapeVisitor.h"

void Circle::visit(std::unique_ptr<ShapeVisitor> ptr) {
	ptr->visit(*this);
}