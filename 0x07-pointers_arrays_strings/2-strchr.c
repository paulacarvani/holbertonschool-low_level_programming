#include "holberton.h"
/**
 *_strchr - Function that locates a char in a string
 *@s: prototype of a string of char
 *@c: char to locates
 *Return: The location of c or null
 */
char *_strchr(char *s, char c)
{
int a;
for (a = 0; s[a]; a++)
{
if (s[a] == c)
return (s + a);
}
if (c == '\0')
return (s + a);
return (NULL);
}
