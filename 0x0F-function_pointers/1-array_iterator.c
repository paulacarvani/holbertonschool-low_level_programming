#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - function that executes a function
 *@array: var type array
 *@size: size of array
 *@action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int c;
if (array != NULL && action != NULL)
for (c = 0; c < size; c++)
(*action)(array[c]);
}
