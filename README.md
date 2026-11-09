*This project has been created as part of the 42 curriculum by aelberka.*

# ft_printf

## Description
A custom implementation of the C `printf()` function, supporting `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.

## Instructions
Compile the static library using:
```bash
make
```
This generates `libftprintf.a`.

To compile your program:
```bash
cc main.c libftprintf.a -o program
./program
```

## Algorithm and Data Structure
The function parses the format string character by character, using `va_list` to retrieve variadic arguments and `write()` to print output.

Recursive functions handle numeric conversions, while a dispatcher selects the appropriate conversion. This approach keeps the code modular and avoids unnecessary memory allocation.

## Resources
- [printf documentation](https://man7.org/linux/man-pages/man3/printf.3.html)
- [stdarg documentation](https://man7.org/linux/man-pages/man3/stdarg.3.html)

**AI Usage:** AI was used to understand C concepts, review code, and assist with documentation. All implementation work was completed by me.