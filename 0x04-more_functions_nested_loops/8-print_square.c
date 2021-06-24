#include "holberton.h"

/**
 * print_square - make a square
 *@size: var of size of the square
 * Return: Always 0.
 */
void print_square(int size)
{
int filas, columnas;
columnas = 0;
if (size < 1)
_putchar('\n');
while (columnas < size)
{
filas = 0;
while (filas < size)
{
_putchar('#');
filas++;
}
_putchar('\n');
columnas++;
}
}
