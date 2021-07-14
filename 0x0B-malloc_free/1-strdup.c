#include "holberton.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space in memory
 *@str: string
 *Return: Depends of the result
 */
char *_strdup(char *str)
{
  char *c;
    unsigned int i;
  unsigned int j;
  if (str == NULL)
    return (NULL);
  for (i = 0; str[i]; i++)
    ;
  c = malloc(i + 1);
  if (c == NULL)
    return (NULL);
  for (j = 0; str[j]; j++)
    c[j] = str[j];
  c[j] = '\0';
  return (c);
}
