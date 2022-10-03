#include "main.h"
#include <stdlib.h>
/**
 * creatre_array - creates an array of chars and initializes with specific char
 * @size: size of the array to be initialized
 * @c: pecific char to initialize array with
 *
 * Return: if size == 0 function fails - NULL. Otherwise pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int index;

if (size == 0)
return (NULL);

array = malloc(sizeof(char) * size);

if (array == NULL)
return (NULL);

for (index = 0; index < size; index++)
array[index] = c;

return (array);
}
