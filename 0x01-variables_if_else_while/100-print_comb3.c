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
int a = '0';
while (a < '9')
{
int b = a + 1;
while (b <= '9')
{
putchar (a);
putchar (b);	   

if (a <= '7' && b <= '9')
{
putchar (',');
putchar (' ');
}
b++;
}
a++;
}
putchar ('\n');
return (0);
}
