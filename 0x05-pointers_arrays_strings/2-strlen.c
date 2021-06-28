#include "holberton.h"
/**
 *_strlen - function that returns the length of a string
 *@s: pointer type char
 * Return: Always 0.
*/
int _strlen(char *s)
{
int c;
for (c = 0; s[c] != '\0'; c++)
;
return (c);
}
