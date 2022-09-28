#include "main.h"

/**
 * get_prime - finds prime number
 * @num: number to be checked
 * @a: test variable
 *
 * Return: if int is not prime - 0, if number is prime - 1
 */

int get_prime(int num, int a)
{
if (num == a)
return (1);
if (num % a == 0)
return (0);
return (get_prime(num, a + 1));
}

/**
 * is_prime_number - return 1 if input int is a prime number otherwise return 0
 * @n: the word to be checked
 *
 * Return: If the integer is not prime - 0, if number is prime - 1
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (get_prime(n, 2));
}
