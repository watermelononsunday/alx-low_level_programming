#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function given as parameter on element of array
 * @array: the array that will be used
 * @size: size of the array
 * @action: the function that will be used
 */

void array_iterator(int *array, size_t size, void (*action)(int));
{
	unsigned int i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
