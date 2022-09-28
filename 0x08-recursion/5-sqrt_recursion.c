#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - prints the natural square root of a number
 * @n: number to be used
 * @i: number to check
 * Return: _sqrt_recursion
 */

int _sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);

if (i * i == n)
return(i);

return (_sqrt_helper(n, i + 1));
}
