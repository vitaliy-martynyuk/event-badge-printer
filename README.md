# Event Badge Printer

A small C++ console utility that reads a single attendee's check-in details,
validates them, and prints a formatted badge with a tier-specific greeting
and desk location.

Built as a learning project while working through
[learncpp.com](https://www.learncpp.com/), focused on consolidating C++
fundamentals: multi-file program structure, functions, `const`/`constexpr`,
`std::string` vs. `std::string_view`, and defensive validation using only
`if`/`bool` logic (no loops, containers, or exceptions yet).

## What it does

- Prompts for an attendee's full name, one-letter access tier
  (`S` = Standard, `V` = VIP, `P` = Press), and registration number
- Validates each input before doing anything with it — no badge is printed
  on invalid data
- Normalizes the access tier to uppercase so `v` and `V` are both accepted
- Looks up a tier-specific greeting and check-in desk location from a set of
  named constants
- Prints a formatted badge with the greeting, desk location, name, tier,
  and registration number

## Project structure

```
main.cpp                    // program entry point, orchestrates the flow
io/                         // reading input from the console, printing the badge
  io.h
  io.cpp             
validate/                   // isXValid() checks for name, access level, registration number
  validate.h
  validate.cpp 
helpers/                    // tier -> greeting / desk location lookups
  helpers.h
  helpers.cpp           
```

## Building

Requires a C++20-capable compiler.

```bash
g++ -std=c++20 -Wall -Wextra -Wconversion -Wshadow -Wsign-conversion -o app \
    main.cpp io/io.cpp validate/validate.cpp helpers/helpers.cpp
```

Or open `Event Badge Printer.slnx` in Visual Studio.

## Running

```bash
./app
```

Example session:

```
Enter your full name(e.g. John Doe): John Doe
Enter your access level(S, V or P): v
Enter your registration number(00001): 42
Hi, VIP
Your registration desk is in: basement
Name: John Doe
Access: V
Number: 42
```

## Notes

Built branch-by-branch as new topics were covered: input/output handling,
then validation, then a helpers module for tier-based lookups. Design
decisions — type choices, validation bounds, the `std::string` vs.
`std::string_view` split, and safe `std::toupper` usage — are made
deliberately and revisited as understanding grows; some rough edges are
intentional stopping points rather than oversights.