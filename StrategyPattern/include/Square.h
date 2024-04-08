#pragma once

#include <memory>
#include "./Shape.h"
class DrawSquareStrategy;

class Square : public Shape {
public:
	Square(std::unique_ptr<DrawSquareStrategy> _drawStrategy, double _side = 0.0) : drawStrategy{std::move(_drawStrategy)}, side{_side} {}

	void draw() override;

	double getSide() const {
		return side;
	}
private:
	std::unique_ptr<DrawSquareStrategy> drawStrategy;
	double side;
};