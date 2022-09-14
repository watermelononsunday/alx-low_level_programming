#include "main.h"

/**
 * print_sign - check for the sign of a number
 * @n: the int to print
 * Return: Always 0 (success)
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n < 0)
{
_putchar ('-');
return (-1);
}
else
{
_putchar ('0');
return(0);
}
}
