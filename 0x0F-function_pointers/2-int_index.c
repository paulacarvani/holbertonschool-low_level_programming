#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - function that searches for an integer
 *@array: array
 *@size: size to array
 *@cmp: Pointer to the function
 *Return: i or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
else if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
if ((*cmp)(array[i]) != 0)
return (i);
}
}
return (-1);
}
