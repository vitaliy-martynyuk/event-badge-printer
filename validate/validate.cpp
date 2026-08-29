#include "validate.h"

bool isFullNameValid(std::string_view name)
{
	const std::uint16_t nLength{ static_cast<std::uint16_t>(name.length()) };
	return nLength > 2 && nLength <= 999;
}

bool isAccessLevelValid(char level)
{
	return level == 'S' || level == 'V' || level == 'P';
}

bool isRegistrationNumberVaild(std::uint16_t number)
{
	return number > 0 && number <= 50000;
}