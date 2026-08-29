#include "helpers.h"

std::string_view getDeskLocation(char access)
{
	constexpr std::string_view sDesk{ "hall" };
	constexpr std::string_view vDesk{ "basement" };
	constexpr std::string_view pDesk{ "balcony" };

	if (access == 'S')
		return sDesk;
	else if (access == 'V')
		return vDesk;
	else
		return pDesk;
}

std::string_view getGreeting(char access)
{
	constexpr std::string_view sGreeting{ "Hi, Guest!" };
	constexpr std::string_view vGreeting{ "Hi, VIP" };
	constexpr std::string_view pGreeting{ "Hi, Press" };

	if (access == 'S')
		return sGreeting;
	else if (access == 'V')
		return vGreeting;
	else
		return pGreeting;
}