#include "holberton.h"

/**
* _puts_recursion - Prints a string recursively
*@s: String to be printed
*
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar(10);
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
