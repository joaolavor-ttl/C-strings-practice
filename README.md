# C Language: Strings and Characters

This repository is dedicated to practicing and studying character and string manipulation in the C programming language, covering everything from basic fundamentals to advanced library usage.

## Summary of Topics

### 1. Character Manipulation (`ctype.h`)
Study of functions for verifying and converting individual characters:
- **Verification:** `isdigit()`, `isalpha()`, `isalnum()`, `islower()`, `isupper()`, `ispunct()`, and `isspace()`.
- **Conversion:** `tolower()` and `toupper()`.

### 2. String Fundamentals
- **Definition:** Strings in C are sequences of characters terminated by the null character `\0`.
- **Safe Input/Output:** Using `fgets()` for safe reading (avoiding buffer overflow) and `puts()` or `printf()` for display.
- **Character Access:** Iterating through strings using the idiomatic `for (int i = 0; str[i] != '\0'; i++)` pattern.

### 3. Standard Libraries
#### `string.h` - Essential Functions
- `strlen()`: Returns the string length.
- `strcpy()` / `strncpy()`: Copying strings.
- `strcat()` / `strncat()`: Concatenation.
- `strcmp()` / `strncmp()` / `stricmp()`: String comparison.
- **Advanced Search & Utility:** `strchr()`, `strrchr()`, `strstr()`, `strrev()`, and `strset()`.

#### `stdlib.h` - Type Conversion
- `atoi()`: String to `int`.
- `atof()`: String to `float/double`.
- `itoa()`: Integer to string.

## Best Practices Applied
- **Memory Safety:** Always reserving space for the null terminator (N+1).
- **Secure I/O:** Preferring `fgets()` over `gets()` (which is deprecated and unsafe).
- **Performance:** Calculating `strlen()` once before long loops to avoid redundant processing.
