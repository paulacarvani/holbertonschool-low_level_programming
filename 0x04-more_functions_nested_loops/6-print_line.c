#include "holberton.h"

/**
 *print_line - prints a line
 *@n: the number of lines
 * Return: Always 0.
 */
void print_line(int n)
{
int l = 0;
while (l < n)
{
_putchar('_');
l++;
}
_putchar('\n');
}
