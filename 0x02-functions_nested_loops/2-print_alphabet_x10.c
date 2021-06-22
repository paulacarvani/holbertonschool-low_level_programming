#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
int contador = 0;
while (contador < 10)
{
int letters = 97;
while (letters <= 122)
{
_putchar (letters);
letters++;
}
_putchar ('\n');
contador++;
}
}
