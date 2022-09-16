#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: print size
 * Return: Always 0.
 */

void print_triangle(int size)
{
int a;
int b;
int c;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= size; a++)
{
for (b = size - a; b > 0; b--)
{
_putchar(' ');
}
for (c = 0; c < a; c++)
{	
_putchar('#');
}
_putchar('\n');
}
}
}
