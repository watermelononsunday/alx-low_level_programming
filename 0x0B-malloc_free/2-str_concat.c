#include "main.h"

/**
 * str_concat - a function that concentrates twho strings
 *
 * @s1: first string
 * @s2: second string
 * Return: pointer if true else NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;

	char *a;

	if (s1 == 0)
	{
		s1 = "";
	}
	for (k = 0; s1[k] != 0; k++)
	{
	}
	if (s2 == 0)
	{
		s2 == "";
	}
	for (l = 0; s2[l] != 0; l++)
	{
	}
	a = malloc(sizeof(char) * (k + l + 1));
	if (a == 0)
	{
		return (0);
	}
	for (i = 0; i < k; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; j < l; i++, j++)
	{
		a[i] = s2[j];
	}
	a[i] = 0;
	return (a);
}
