#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory
 *
 * @b: size of memory to allocate
 * Return: to pointer or else NULL
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
