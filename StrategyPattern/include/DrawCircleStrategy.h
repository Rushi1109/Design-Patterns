#pragma once

class Circle;

class DrawCircleStrategy {
public:
	virtual ~DrawCircleStrategy() = default;

	virtual void draw(Circle& circle) = 0;
};