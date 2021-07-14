#include "holberton.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: int width
 *@height: int height
 *Return: A Pointer
 */
int **alloc_grid(int width, int height)
{
int **c, i, j, k;
if (width <= 0 || height <= 0)
return (NULL);
c = malloc(height * sizeof(int *));
if (c == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
c[i] = malloc(width * sizeof(int));
if (c[i] == NULL)
{
for (k = 0; k < i; k++)
{
free(c[k]);
}
free(c);
return (NULL);
}
for (j = 0; j < width; j++)
{
c[i][j] = 0;
}
}
return (c);
}
