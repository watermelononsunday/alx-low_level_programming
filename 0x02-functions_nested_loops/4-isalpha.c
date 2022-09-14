#include "main.h"
/**
 *isalpha - Return 1 if c is a letter. lowercase or uppercase
 *@c: The int to print
 *Return: Always 0 (success)
 */

int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
return (0);
}
