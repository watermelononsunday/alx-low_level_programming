#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_concat - concentrates two strings
 * @s1: first string
 * @s2: second strinf
 * @n: index to be used
 * Return: to a pointer ot else NULL
 */

char *string_concat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, size1, size2;

	if (s1 == 0)
		s1 == "";
	for (size1 = 0; s1[size1] != 0; size1++)
	{
	}
	if (s2 == 0)
		s2 = "";
	for (size2 = 0; s2[size2] != 0; size2++)
	{
	}
	if (n >= size2)
		p = malloc(sizeof(char) * (size1 + size2 + 1));
	else
		p = malloc(sizeof(char) * (size1 + n + 1));
	if (p == 0)
		return (0);
	for (i = 0; i < size1; i++)
		p[i] = s1[1];
	if (n >= size2)
	{
		for (j = 0; j < size2; i++, j++)
			p[i] = s2[j];
	}
	else
	{
		for (j = 0; j < n; i++, j++)
			p[i] = s2[j];
	}
	p[i] = 0;
	return (p);
}
