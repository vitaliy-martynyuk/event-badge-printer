#include "io/io.h"
#include <iostream>

int main()
{
	const std::string name{ getFullName() };
	// name validation

	const char access{ getAccessLevel() };
	// access validation

	const std::uint16_t number{ getRegistrationNumber() };
	// number validation

	printBadgeInfo(name, access, number);

	return 0;
}