#include "main.h"

/**
 * _strcat - concentrates two strings
 * @dest: strings to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(cahr *dest, char *src)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';

return (dest);
}
