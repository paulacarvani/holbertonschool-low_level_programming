#include "holberton.h"
/**
 * _memset - Fills the first n bytes of the memory area
 *@s: Pointer to the memory area to be filled
 *@b: value to be filled
 *@n: Bytes to be filled
 *Return: Value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}
