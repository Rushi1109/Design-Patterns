#ifndef __SubtractCommand_h__
#define __SubtractCommand_h__

#include "Command.h"

class SubtractCommand : public Command {
public:
	SubtractCommand(int value) : val(value) {}

	virtual ~SubtractCommand() = default;

	int execute(int currentVal) override {
		return currentVal - val;
	}

private:
	int val;
};

#endif