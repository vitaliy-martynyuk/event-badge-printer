#include "io/io.h"
#include "validate/validate.h"
#include <iostream>

int main()
{
	const std::string fullName{ getFullName() };
	if (!isFullNameValid(fullName)) {
		std::cout << "Full name invalid!";

		return EXIT_FAILURE;
	}

	const char accessLevel{ getAccessLevel() };
	if (!isAccessLevelValid(accessLevel)) {
		std::cout << "Access level invalid!";

		return EXIT_FAILURE;
	}

	const std::uint16_t registrationNumber{ getRegistrationNumber() };
	if (!isRegistrationNumberVaild(registrationNumber)) {
		std::cout << "Registration number invalid!";

		return EXIT_FAILURE;
	}

	printBadgeInfo(fullName, accessLevel, registrationNumber);

	return EXIT_SUCCESS;
}