#include "holberton.h"
/**
 * leet - 1337
 * @a: variable
 * Return: Always 0
 */
char *leet(char *a)
{
int i;
int j;
char abc[] = "aAeEoOtTlL";
char num[] = "4433007711";
for (i = 0; a[i]; i++)
{
for (j = 0; abc[j]; j++)
if (a[i] == abc[j])
a[i] = num[j];
}
return (a);
}
