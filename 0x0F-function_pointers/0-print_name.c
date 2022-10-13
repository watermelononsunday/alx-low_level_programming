#include "function_pointers.h"

/**
 * *print_name - prints a name
 * @name: name to be printed
 * @f: pointer to be used
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *));
{
	if (f != NULL && name != NULL)
		f(name);
}
