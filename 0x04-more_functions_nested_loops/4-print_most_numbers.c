#include "holberton.h"
/**
 *print_most_numbers - prints numbers except 2 and 4
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int numbers = 48;
while (numbers <=57)
{
if (numbers != 50 && numbers != 52)
putchar (numbers);
numbers++;
}
putchar ('\n');
}
