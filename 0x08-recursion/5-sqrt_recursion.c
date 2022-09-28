#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number that will be used
 *
 * Return: _sqrt_recursion
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

if (n == 0)
return (n);
return (_sqrt_helper(n, 1));
}
