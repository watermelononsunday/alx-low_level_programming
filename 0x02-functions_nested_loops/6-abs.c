#include "main.h"
#include <stdio.h>

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: The int to print
 * Return: Always 0 (success)
 */

int _abs(int n)
{
if (n >= 0)

return (n);

else
{
n *= -1;
return (n);
}
}
