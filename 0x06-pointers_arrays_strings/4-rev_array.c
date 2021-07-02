#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 *@a: variable type prototype
 *@b: variable type int
* Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i, j;
for (i = 0; i < (n /2); i++)
{
j = a[i];
a[i] = a[n - 1 - 1];
a[n - i - 1] = j;
}
}
