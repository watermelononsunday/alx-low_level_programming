#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to be compared
 * @size: the size of the array
 * @cmp: pointer to the comparing function
 * Return: position of the first element to match search criteria,
 * -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
