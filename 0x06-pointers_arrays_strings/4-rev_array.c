#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 *@a: variable type prototype
 *@b: variable type int
* Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i, j, k;
k = 0;
for (i = n - 1; i >= (n /2); i--)
{
j = a[k];
a[k] = a[i];
a[i] = j;
k++;
}
}
