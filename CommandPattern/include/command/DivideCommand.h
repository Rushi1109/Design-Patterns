#ifndef __DivideCommand_h__
#define __DivideCommand_h__

#include "Command.h"

class DivideCommand : public Command {
public:
	DivideCommand(int value) : val(value) {}

	virtual ~DivideCommand() = default;

	int execute(int currentVal) override {
		if (val != 0) {
			return currentVal / val;
		}
		else {
			throw "Divide by zero";
		}
	}

private:
	int val;
};

#endif