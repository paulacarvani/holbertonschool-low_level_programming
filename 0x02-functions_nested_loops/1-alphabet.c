#include "holberton.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0
 *
 * print_alphabet: prints alphabet
 */

void print_alphabet(void)
{
int letters = 97;
while (letters <= 122)
{
_putchar (letters);
letters++;
}
_putchar ('\n');
}
