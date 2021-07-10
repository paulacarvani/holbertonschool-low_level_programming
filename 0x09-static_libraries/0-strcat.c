#include "holberton.h"
/**
 *_strcat - function that concatenates two strings
 *@dest: first string
 *@src: second string
 * Return: First string
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i]; i++)
;
for (j = 0; src[j]; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
