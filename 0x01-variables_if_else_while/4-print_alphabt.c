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
int alphabt = 97;
/*
 *alphabt > 97;
 *alphabt != 101 && alphabt != 113;
 */
while (alphabt <= 122)
{
if (alphabt != 101 && alphabt != 113)
{
putchar (alphabt);
alphabt++;
}
}
{putchar ('\n');
}
return (0);
}
