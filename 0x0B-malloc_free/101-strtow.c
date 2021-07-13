#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *strtow - split a string in to words
 *@str: string to be splited
 *Return: splited words
 */

char **strtow(char *str)
{
int i = 0, j = 0, len = 0;
char **p;
while (str[i] != '\0')
{
len++;
i++;
}
i = 0;
if (len == 0)
{
return (NULL);
}
p = malloc(sizeof(int *) * (len));
if (p == NULL)
{
return (NULL);
}
while (i < len)
{
p[i] = malloc(sizeof(int) * len);
if (p[i] != ' ' || p[i] != '\t')
{
p[j][i] = str[i];
}
if (p[i] == ' ' || p[i] == '\t')
{
if (p[i + 1] != ' ')
{
j++;
}
}
i++;
}
return (p);
}
