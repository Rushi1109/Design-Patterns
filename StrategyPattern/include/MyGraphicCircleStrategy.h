#pragma once

#include "./DrawCircleStrategy.h"

class MyGraphicCircleStrategy : public DrawCircleStrategy {
public:
	void draw(Circle& circle) override;
};