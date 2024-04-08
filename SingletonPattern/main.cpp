#include "./include/Database.h"
#include <iostream>

int main() {
	std::cout << Database::getInstance()->executeQuery() << '\n';
	std::cout << Database::getInstance()->executeQuery() << '\n';
	std::cout << Database::getInstance()->executeQuery() << '\n';
	std::cout << Database::getInstance()->executeQuery() << '\n';
}