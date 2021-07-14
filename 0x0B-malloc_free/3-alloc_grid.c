#include "holberton.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: int width
 *@height: int height
 *Return: A Pointer
 */
int **alloc_grid(int width, int height)
{
int **c, i, j;
if (width + height < 2 || width < 1 || height < 1)
return (NULL);
c = malloc(height * sizeof(*c));
if (c == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
c[i] = malloc(width * sizeof(**c));
if (c[i] == NULL)
{
for (i--; 1 >= 0; i--)
free(c[i]);
free(c);
return (NULL);
}
for (j = 0; j < width; j++)
c[i][j] = 0;
}
return (c);
}
