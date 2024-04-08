#pragma once

#include "./DrawCircleStrategy.h"

class openGLCircleStrategy : public DrawCircleStrategy {
public:
	void draw(Circle& circle) override;
};