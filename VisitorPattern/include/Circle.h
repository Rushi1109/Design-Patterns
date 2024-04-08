#pragma once

#include "./Shape.h"

class Circle : public Shape {
public:
	Circle() : radius{ 0.0 } {}

	explicit Circle(double _radius) : radius{_radius} {}

	void visit(std::unique_ptr<ShapeVisitor>) override;

private:
	double radius;
};