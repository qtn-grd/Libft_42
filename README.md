*This project has been created as part of the 42 curriculum by qgairaud.*

# Libft

![alt text](libftm.png)

## 🎯   _Description_

The goal of this project is to build a personal C library containing reimplementations of common libc functions, to be reused in other projects.

<details>
<summary> 😶‍🌫️ ft_atoi</summary>
</br>
    Converts a string representing a number into an integer.
    The function skips leading whitespaces, handles an optional '+' or '-' sign, and converts consecutive numeric characters into an `int` value.
    Behavior is undefined in case of overflow, just like the original `atoi`.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_bzero</summary>
</br>
    Sets the first `n` bytes of the given memory area to zero.
    This function is commonly used to initialize allocated memory.
</details></br>
<details>
<summary> 😶‍🌫️ ft_calloc</summary>
</br>
    Allocates memory for an array of elements and initializes all bytes to zero.
    To prevent memory overflow, the function checks that `count * size`
    does not exceed `SIZE_MAX`.
    This is done by verifying that `count <= SIZE_MAX / size` before allocation.
</details>
</br>
</details>
<details>
<summary> 😶‍🌫️ ft_isalnum</summary>
</br>
    Checks whether the given character is alphanumeric
    (either a letter or a digit).
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_isalpha</summary>
</br>
    Checks whether the given character is an alphabetical letter.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_isascii</summary>
</br>
    Checks whether the given character belongs to the ASCII character set.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_isdigit</summary>
</br>
    Checks whether the given character is a digit ('0' to '9').
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_isprint</summary>
</br>
    Checks whether the given character is printable, including spaces.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_itoa</summary>
</br>
    Converts an integer into a newly allocated string representing the number.
    Handles negative values and allocates the required memory for the result.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_memchr</summary>
</br>
    Locates the first occurrence of a byte in a memory area.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_memcmp</summary>
</br>
    Compares two memory areas byte by byte.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_memcpy</summary>
</br>
    Copies `n` bytes from source to destination.
    The behavior is undefined if the memory areas overlap.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_memmove</summary>
</br>
    Copies `n` bytes between memory areas, safely handling overlaps.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_memset</summary>
</br>
    Fills a memory area with a constant byte value.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_putchar_fd</summary>
</br>
    Writes a single character to a given file descriptor.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_putendl_fd</summary>
</br>
    Writes a string followed by a newline to a given file descriptor.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_putnbr_fd</summary>
</br>
    Writes an integer to a given file descriptor.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_putstr_fd</summary>
</br>
    Writes a string to a given file descriptor.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_split</summary>
</br>
    Splits a string into an array of strings using a given delimiter character.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_strchr</summary>
</br>
    Locates the first occurrence of a character in a string.
    The terminating null character can also be searched.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_strdup</summary>
</br>
    Allocates and returns a duplicate of a string.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_striteri</summary>
</br>
    Applies a function to each character of a string, modifying it in place.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_strjoin</summary>
</br>
    Allocates and returns a new string formed by concatenation of two strings.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_strlcat</summary>
</br>
    Appends a string to another with size limitation.
    Returns the total length of the string it tried to create.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_strlcpy</summary>
</br>
    Copies a string with size limitation.
    Returns the length of the source string.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_strlen</summary>
</br>
    Returns the length of a string.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_strmapi</summary>
</br>
    Applies a function to each character of a string and returns a new string.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_strncmp</summary>
</br>
    Compares two strings up to `n` characters.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_strnstr</summary>
</br>
    Locates a substring within a string, searching at most `n` characters.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_strrchr</summary>
</br>
    Locates the last occurrence of a character in a string.
    The terminating null character can also be searched.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_strtrim</summary>
</br>
    Allocates and returns a new string with specified characters
    removed from the beginning and the end of the original string.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_substr</summary>
</br>
    Allocates and returns a substring from a string.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_tolower</summary>
</br>
    Converts an uppercase letter to lowercase.
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_toupper</summary>
</br>
    Converts a lowercase letter to uppercase.
</details>
</br>


The 🎗️ bonus part focuses on implementing utility functions to manipulate
linked lists using a custom structure.

<details>
<summary> 😶‍🌫️ ft_lstnew</summary>
</br>
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_lstadd_front</summary>
</br>
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_lstlast</summary>
</br>
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_lstadd_back</summary>
</br>
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_lstsize</summary>
</br>
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_lstiter</summary>
</br>
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_lstdelone</summary>
</br>
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_lstclear</summary>
</br>
</details>
</br>
<details>
<summary> 😶‍🌫️ ft_lstmap</summary>
</br>
</details>
</br>

## 📖   _Instructions_ 

Useful commands are listed inside the _Makefile_, such as __make / make re / make clean / make fclean__.
Bonus files must be compiled separately using the __bonus__ command.


## 🧟   _Resources_ 

Working on this project helped me discover many useful tools and their functionalities, and also develop reflection on the necessity of securing every part of your code.

Writing the header taught me how to avoid including unused libraries, and organizing the Makefile highlighted the importance of concise rules
to prevent unnecessary recompilations.

You could find useful explanations on Makefile here :

- https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
- https://makefiletutorial.com/#top
- https://www.gnu.org/software/make/manual/make.html#Simple-Makefile

Most useful information about libc functions can be found using `man 2` or `man 3`