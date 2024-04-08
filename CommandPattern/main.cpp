#include <iostream>
#include "./include/invoker/Invoker.h"
#include "./include/command/AddCommand.h"
#include "./include/command/MultiplyCommand.h"
#include "./include/command/SubtractCommand.h"
#include "./include/command/DivideCommand.h"

int main() {
	Invoker invoker{ 7 };

	auto op1 = std::make_unique<AddCommand>(23);
	auto op2 = std::make_unique<MultiplyCommand>(2);
	auto op3 = std::make_unique<SubtractCommand>(40);
	auto op4 = std::make_unique<DivideCommand>(5);

	invoker.executeCommand(std::move(op1));
	invoker.executeCommand(std::move(op2));
	invoker.executeCommand(std::move(op3));
	invoker.executeCommand(std::move(op4));

	std::cout << invoker.getCurrentValue() << '\n';
}