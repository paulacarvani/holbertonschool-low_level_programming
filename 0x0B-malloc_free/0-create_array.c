#include "holberton.h"
/**
 * create_array - function that creates an array of chars
 *@size: unsigned int
 *@c: var type char
 *Return: NULL or 0
 */
char *create_array(unsigned int size, char c)
{
char *i;
insigned int j;
i = malloc(size * sizeof(*i));
if (i == NULL || size == 0)
return (NULL);
for (j = 0; j < size; j++)
i[j] = c;
return (i);
}
