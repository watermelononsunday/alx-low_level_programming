#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @dest: content is to be copied
 * @src: source of data to be copied
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
dest[a] = src[a];
}

return (dest);

}
