#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimun value
 * @max: maximum value
 * Return: to array
 */

int *array_range(int min, int max)
{
	int *array;
	int amount = 0, i;

	if (min > max)
	{
		return (NULL);
	}
	amount = max - min + 1;
	array = malloc(sizeof(int) * amount);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < amount; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
