#include "../include/Square.h"
#include "../include/ShapeVisitor.h"

void Square::visit(std::unique_ptr<ShapeVisitor> ptr) {
	ptr->visit(*this);
}