nclude "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be scan
 * @accept: string containing the list pf characters to match in s
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
int a, b, c, d;

c = 0;

for (a = 0; s[a] != '\0'; a++)
{

d = 0;
for (b = 0; accept[b] != '\0'; b++)
{
if (s[a] == accept[b])
{
c++;
d = 1;
}
}
if (d == 0)
{
return (c);
}
}
return (0);
}
