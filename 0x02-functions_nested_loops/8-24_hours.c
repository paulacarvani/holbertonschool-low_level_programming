#include "holberton.h"
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
int a = '0';
while (a < '3')
{
int b = '0';
while (b < '4')
{
int c = '0';
while (c < '6')
{
int d = '0';
while (d <= '9')
{
_putchar (a);
_putchar (b);
_putchar (':');
_putchar (c);
_putchar (d);
_putchar ('\n');
d++;
}
c++;
}
b++;
}
a++;
}
}
