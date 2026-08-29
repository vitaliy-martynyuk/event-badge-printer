#ifndef VALIDATE_H
#define VALIDATE_H

#include <string>
#include <string_view>
#include <cstdint>

bool isFullNameValid(std::string_view name);
bool isAccessLevelValid(char level);
bool isRegistrationNumberVaild(std::uint16_t number);

#endif
