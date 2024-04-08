#ifndef __MultiplyCommand_h__
#define __MultiplyCommand_h__

#include "Command.h"

class MultiplyCommand : public Command {
public:
	MultiplyCommand(int value) : val(value) {}

	virtual ~MultiplyCommand() = default;

	int execute(int currentVal) override {
		return currentVal * val;
	}

private:
	int val;
};

#endif