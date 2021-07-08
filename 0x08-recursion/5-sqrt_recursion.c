#include "holberton.h"

/**
* aux -  function sqrt
* @a: var
* @b: var
* Return: value of sqrt
**/

int aux(int a, int b)
{
if ((b * b) < a)
{
return (aux(a, b + 1));
}
else
if ((b * b) > a)
{
return (-1);
}
else
{
return (b);
}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer
 * Return: value of sqrt
 **/

int _sqrt_recursion(int n)
{
return (aux(n, 1));
}
