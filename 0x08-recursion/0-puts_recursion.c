#include "main.h"

/**
 * _puts_recursion - function thst prints a string
 * @s: pointer to be used
 * Return: void
 */

void _puts_recursion(char *s)
{
if (*s == 0)
{
_putchar(10);
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
