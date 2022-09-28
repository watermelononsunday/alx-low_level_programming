#include "main.h"

/**
 * sqr_num - gets the natural square root of a number
 * @num: the number whose natural square root is found
 * @a: test variable
 *
 * Return: the square root
 */

int sqr_num(int num, int a)
{
if (num == (a * a))
return (a);
else if (num > (a * a))
return (sqr_num(num, a + 1));
else
return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose natural square root is returned
 *
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
if (n == 1)
return (1);
if (n < 0)
return (-1);
return (sqr_num(n, 1));
}
