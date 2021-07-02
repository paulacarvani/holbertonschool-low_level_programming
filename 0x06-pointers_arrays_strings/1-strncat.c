#include "holberton.h"
/**
 * _strncat - function that concatenates two string with n var
 *@dest: first string
 *@src: second string
 *@i: location of the second string
 *Return: Dest plus src in n location and null
 */
char *_strncat(char *dest, char *src, int n)
{
  int i, j;
  for (i = 0; dest[i]; i++)
    ;
  for (j = 0; src[j] && n > 0; j++, n--)
    {
      dest[i] = src[j];
      i++;
    }
  return (dest);
}
