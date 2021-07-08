#include "holberton.h"

/**
 *num_prime - function to determinate if a number is prime
 *@a: var
 *@b: var
 *Return: Always 0
 */
int num_prime(int a, int b)
{
if ((a % b == 0 && b < a) || a < 2)
return (0);
else if (a % b == 0 && b == a)
return (1);
else
return (num_prime(a, b + 1));
}


/**
 * is_prime_number - function that return 1 or 0
 * @n: var
 * Return: function prime
 **/

int is_prime_number(int n)
{
return (num_prime(n, 2));
}
