#pragma once

#include "./Shape.h"

class Square : public Shape {
public:
	Square() : side{ 0.0 } {}

	explicit Square(double _side) : side{ _side } {}

	void visit(std::unique_ptr<ShapeVisitor>) override;

private:
	double side;
};