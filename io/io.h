#ifndef IO_H
#define IO_H

#include <string>
#include <string_view>
#include <cstdint>

std::string getFullName();
char getAccessLevel();
std::uint16_t getRegistrationNumber();
void printBadgeInfo(std::string_view name, char access, std::uint16_t number);

#endif
