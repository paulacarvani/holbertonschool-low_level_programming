#include "main.h"
/**
 *print_binary - prints the binary representation of a number
 *@n: number
 *Return: print a bunary number
 */
void print_binary(unsigned long int n);
{
if (n == 0)
{
_putchar('0');
}
if (n == 1)
{
_putchar('1');
return;
}
if (n > 1)
{
print_binary(n >> 1);
printf("%lu", n & 1);
}
}
