#include "holberton.h"

/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void times_table(void)
{
int i;
int j;
int k;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
k = i * j;
if (j == 0)
{
_putchar(k + '0');
}
else if (k <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(k + '0');
}
else if (k >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
}
}
_putchar('\n');
}
}
