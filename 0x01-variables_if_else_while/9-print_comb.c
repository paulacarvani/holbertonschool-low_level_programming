#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int numbers = 48;

int coma = 44;
int espacio = 32;

while (numbers <= 57)
{
putchar(numbers);

if (numbers != 57)
{
putchar(coma);
putchar(espacio);
}
numbers++;
}
putchar ('\n');

return (0);
}
