#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *@n: variable declarada
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int a, b;
a = 0;
while (n > 0)
{
b = a;
while (b > 0)
{
_putchar(' ');
b--;
}
_putchar(92);
_putchar('\n');
a++;
n--;
}
if (a < 1)
_putchar('\n');
}
