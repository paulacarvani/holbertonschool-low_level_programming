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
  /**
   *{
   *putchar (numbers);
   *numbers++;
   *}
   *if (numbers <= 9)
   *{
   *putchar (coma);
   *}
   *{
   *putchar (espacio);
   *{
   */
if (numbers < 9)
{
putchar(numbers);
putchar(coma);
putchar(espacio);
}
else if (numbers == 9)
{
}
{
putchar ('\n');
}
return (0);
}
