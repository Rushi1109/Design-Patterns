#pragma once

#include "./DrawSquareStrategy.h"

class MyGraphicSquareStrategy : public DrawSquareStrategy {
public:
	void draw(Square& square) override;
};