#pragma once

#include <memory>
#include "./Shape.h"
class DrawCircleStrategy;

class Circle : public Shape {
public:
	Circle(std::unique_ptr<DrawCircleStrategy> _drawStrategy, double _radius = 0.0) : drawStrategy{std::move(_drawStrategy)}, radius{_radius} {}

	void draw() override;

	double getRadius() const {
		return radius;
	}

private:
	std::unique_ptr<DrawCircleStrategy> drawStrategy;
	double radius;
};