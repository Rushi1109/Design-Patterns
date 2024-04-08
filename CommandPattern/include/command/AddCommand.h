#ifndef __AddCommand_h__
#define __AddCommand_h__

#include "Command.h"

class AddCommand : public Command {
public:
	AddCommand(int value) : val(value) {}

	virtual ~AddCommand() = default;

	int execute(int currentVal) override {
		return currentVal + val;
	}

	int undo(int currentVal) override {
		return currentVal - val;
	}

private:
	int val;
};

#endif