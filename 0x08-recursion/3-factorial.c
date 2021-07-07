#include "holberton.h"
/**
 * factorial - function that returns the factorial of a given number
*@n: var type int to make the function
* Return: Always 0.
 */
int factorial(int n)
{
int solucion;
if (n == 0)
solucion = 1;
else if (n < 0)
solucion = -1;
else
solucion = n * factorial(n - 1);
return (solucion);
}
