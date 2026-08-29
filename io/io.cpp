#include "io.h"
#include "../helpers/helpers.h"
#include <iostream>

std::string getFullName()
{
	std::cout << "Enter your full name(e.g. John Doe): ";
	std::string input{};
	std::getline(std::cin >> std::ws, input);

	return input;
}

char getAccessLevel()
{
	std::cout << "Enter your access level(S, V or P): ";
	char input{};
	std::cin >> input;

	return static_cast<char>(std::toupper(static_cast<unsigned char>(input)));
}

std::uint16_t getRegistrationNumber()
{
	std::cout << "Enter your registration number(00001): ";
	std::uint16_t input{};
	std::cin >> input;

	return input;
}

void printBadgeInfo(std::string_view name, char access, std::uint16_t number)
{
	const std::string_view desk{ getDeskLocation(access) };
	const std::string_view greeting{ getGreeting(access) };
	std::cout << greeting << '\n';
	std::cout << "Your registration desk is in: " << desk << '\n';
	std::cout << "Name: " << name << '\n';
	std::cout << "Access: " << access << '\n';
	std::cout << "Number: " << number << '\n';
}