#ifndef __Invoker_h__
#define __Invoker_h__

#include "../command/Command.h"
#include <memory>

class Invoker {
public:
	Invoker(int initialValue) : currentVal{ initialValue } {};

	void executeCommand(std::unique_ptr<Command> command) {
		command->execute(currentVal);
	}

	int getCurrentValue() const {
		return currentVal;
	}

private:
	int currentVal;
};

#endif