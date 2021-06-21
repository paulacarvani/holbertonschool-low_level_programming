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
int c = b + 1;
while (c <= '9')
{
putchar (a);
putchar (b);
putchar (c);
if (a <= '6' && b <= '9')
{
putchar (',');
putchar (' ');
}
c++;
}
b++;
}
a++;
}
putchar ('\n');
return (0);
}
