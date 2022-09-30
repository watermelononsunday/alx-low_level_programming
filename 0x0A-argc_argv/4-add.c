#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: count arguments
 * @argv: argument vector
 *
 * Return: 0 if true, else 1
 */

int main(int argc, char *argv[])
{
int a, b, sum = 0;

if (argc == 1)
{
printf("0\n");
}
else
{
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != 0; b++)
{
if (argv[a][b] > 58 || argv[a][b] < 47)
{
printf("Error\n");
return (1);
}
}
sum = sum + atoi(argv[a]);
}
printf("%d\n", sum);
}
return (0);
}
