*This project has been created as part of the 42 curriculum by aelberka.*

# ft_printf

## Description

**ft_printf** is a recreation of the standard C `printf()` function, developed as part of the 42 Common Core curriculum.

The project focuses on understanding **variadic functions**, formatted output, recursion, and error handling while building a reusable static library.

Supported conversions: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.

## Instructions

Clone the repository and compile the library:

```bash
git clone https://github.com/Adnan-elberkaoui/ft_printf.git
cd ft_printf
make
```

This generates `libftprintf.a`.

To use the library:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "42", 1337);
    return (0);
}
```

Additional Makefile commands: `make clean`, `make fclean`, and `make re`.

## Algorithm and Data Structure

The implementation uses a **sequential format-string parsing algorithm**.

1. Traverse the format string character by character.
2. Print ordinary characters using `write()`.
3. When `%` is encountered, identify the conversion specifier.
4. Retrieve the corresponding argument using `va_arg` and dispatch it to the appropriate printing function.
5. Count the characters written and return `-1` if a write operation fails.

**Data structure:** `va_list` is used to access variadic arguments sequentially. A pointer to `va_list` is passed to the format handler to maintain the current argument position.

**Algorithm choices:** Recursive integer and hexadecimal conversion prints digits in the correct order without requiring dynamic memory allocation. Helper functions keep each conversion independent, making the implementation easier to maintain and test.

The implementation operates with constant auxiliary space for format parsing, while recursive numeric conversion uses stack space proportional to the number of digits.

## Resources

- [printf — Linux manual](https://man7.org/linux/man-pages/man3/printf.3.html)
- [stdarg — Linux manual](https://man7.org/linux/man-pages/man3/stdarg.3.html)
- [C variadic functions — cppreference](https://en.cppreference.com/w/c/variadic.html)

**AI usage:** AI was used as a learning assistant to explain variadic arguments, recursion ... .