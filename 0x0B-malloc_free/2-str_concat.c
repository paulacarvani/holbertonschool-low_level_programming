#include "holberton.h"
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: Two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
char *c;
unsigned int i, j, x, y;
if (s1 == NULL || s2 == NULL)
{
s1 = "";
s2 = "";
}
for (i = 0; s1[i]; i++)
;
for (j = 0; s2[j]; j++)
;
c = malloc((i + 1) + j);
if (c == NULL)
return (NULL);
for (x = 0; s1[x]; x++)
c[x] = s1[x];
for (y = 0; s2[y]; y++)
c[x + y] = s2[y];
return (c);
}
