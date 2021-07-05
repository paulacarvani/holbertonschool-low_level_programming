#include "holberton.h"
/**
 *_memcpy - Copies a memory area
 *@dest: where the memories will be copied
 *@src: the memory to copy
 *@n: bytes to copy
 *Return: the var dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
*(dest + i) = src[i];
return (dest);
}
