# _printf
### Overview
 _printf is a C module that behaves like printf and also has additional functionalities not found in printf. This project was done as part of the second month curriculum at [Holberton School](https://www.\holbertonschool.com/), San Francisco.
### Prototype of _printf function
`int _printf(const char *format, ...);`
Function prints input, and returns the number of characters printed
### Usage
* Includes holberton.h
* calls the function: _printf passed in a string
* Use format specifiers for desired output
* Function returns -1 upon error, and prints (null) if a string argument is NULL

### Features
The following format specifiers are covered. An asterisk signifies a format specifier not covered by printf.

|  Format Specifier  |    Functionality                          |
| ------------------ | ----------------------------------------- |
| %c                 | Print Character                           |
| %s                 | Print String                              |
| %%                 | Print %                                   |
| %d                 | Print Decimal Number                      |
| %i                 | Print Integer (base 10)                   |
| %b \*              | Decimal Input, Print Binary Output        |
| %u                 | Print Unsigned Decimal                    |
| %o                 | Print Octal Number                        |
| %x                 | Print Hexidecimal Number (Lowercase)      |
| %r \*              | Print String in Reverse                   |
| %X                 | Print Hexidecimal Number (Uppercase)      |
| %p \*              | Print Memory address in hexadecimal       |
| %S \*              | Print String - Non Characters Output Hex  |
| %R \*              | Print String - ROT13 encrypted            |
### Example Usage
* `_printf("%s\n", "Hello, world")`
    * Hello, world
* `_printf("%b\n", 1234)`
    * 10011010010
*  `_printf("%R\n", "Hello, world")`
    * Uryyb, jbeyq
### Release History
* 0.0.1
  * Work in progress
### About
All files were created and compiled on `Ubuntu 14.04.4 LTS` using `GCC 4.8.4` with the following flags: `-Wall -Werror -Wextra -Wno-format -pedantic`
### Authors
[Jason Cortella](https://github.com/jasoncortella) - [@JasonCortella](https://twitter.com/JasonCortella) \|\| [Ethan Mayer](https://github.com/ethanpasta) - [@Eitanmayer57](https://twitter.com/eitanmayer57)