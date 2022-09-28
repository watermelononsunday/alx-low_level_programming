#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: pointer to be used
 * Return: void
 */

void _print_rev_recursion(char *s)
{
char *rev;

rev = s;
if (*rev != 0)
{
_print_rev_recursion(rev + 1);
_putchar(*s);
}
}
