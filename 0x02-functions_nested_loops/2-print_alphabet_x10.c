#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)

{
char alphabet;
char number;

for (number = 0; number <= 9; number++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
}
