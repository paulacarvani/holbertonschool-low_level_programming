#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 *
 *@n : variable declarada
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i > 97; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
else
{
for (i = n; i < 99; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
printf("\n");
}
