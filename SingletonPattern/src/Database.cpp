#include "../include/Database.h"
#include <iostream>

Database* Database::getInstance() {
	static Database dbInstance;
	return &dbInstance;
}

bool Database::executeQuery() {
	return true;
}