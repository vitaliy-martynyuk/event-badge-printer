#include "validate.h"

bool isFullNameValid(std::string_view name)
{
	return name.length() > 2 && name.length() <= 999;
}

bool isAccessLevelValid(char level)
{
	return level == 'S' || level == 'V' || level == 'P';
}

bool isRegistrationNumberValid(std::uint16_t number)
{
	return number > 0 && number <= 50000;
}