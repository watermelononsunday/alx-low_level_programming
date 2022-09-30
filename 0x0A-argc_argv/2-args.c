#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints all arguments it recieves
 *
 * @argc: holds the number of arguments passed
 * @argb: araay pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
