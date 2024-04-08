#pragma once

#include "ShapeVisitor.h"

class RotateShapeVisitor : public ShapeVisitor {
public:
	void visit(Circle& circle) override;
	void visit(Square& square) override;
};