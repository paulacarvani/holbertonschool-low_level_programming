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
int base16 = 48;
while (base16 <= 102)
{
if (base16 < 58 || base16 > 96)

putchar (base16);
base16++;
}
{
putchar ('\n');
}
return (0);
}
