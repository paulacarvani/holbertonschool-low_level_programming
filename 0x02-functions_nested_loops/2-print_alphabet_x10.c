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
int contador = 0;
while (contador < 10)
{
int letters = 97;
while (letters <= 122)
{
putchar (letters);
letters++;
}
putchar ('\n');
contador++;
}
return (0);
}
