#include "holberton.h"
/**
 * swap_int - Swap the value of two integers.
 *@a; First value
 *@b: second value
* Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;

}
