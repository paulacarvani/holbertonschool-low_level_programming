#include "holberton.h"
/**
 *print_numbers - print the numbers of 0 to 9
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
int numbers = 48;
while (numbers <= 57)
{
_putchar (numbers);
numbers++;
}
_putchar ('\n');
}
