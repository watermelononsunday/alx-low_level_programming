#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
int _putchar(char c);
void free_grid(int **grid, int height);
char *create_array(unsinged int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
int **alloc_grid(int width, int height);
#endif
