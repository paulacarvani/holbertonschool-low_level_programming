#include "holberton.h"
/**
 * print_sign - nombre del prototipo
 * @n: Variable declarada
 *
 * Return: depende del numero
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar ('+');
return (1);
}
}
