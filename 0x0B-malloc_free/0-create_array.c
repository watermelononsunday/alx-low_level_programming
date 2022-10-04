#include "main.h"

/**
 * create_array - array prints a string
 * @size: size of the array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c);
{
char *a;
unsigned int i;

if (size == 0)
{
return (0);
}
a = malloc(sizeof(char) *size);

if (a == 0)
{
return (0);
}
for (i = 0; i < size; i++)
{
*(a + i) = c;
}
return (a);
}
