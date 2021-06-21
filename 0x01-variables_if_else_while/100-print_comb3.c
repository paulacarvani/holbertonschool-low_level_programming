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
int a = 48;
while (a < 57)
{
int c = 0;
while (0 <= 1)
{
int b = 48;
if (a != b)
while (b <= 57)
{
putchar (b);
b++;
}
c++;
}
putchar (a);
putchar (',');
putchar (' ');
a++;
}
return (0);
}
