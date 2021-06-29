#include "holberton.h"

/**
 *puts2 - prints every other character of a string
 *@str: String
 *Return: Always 0.
 */
void puts2(char *str)
{
int i;
_putchar(*str);
for (i = 0; *(str++ + 1) != '\0'; i++)
{
_putchar(*(str++ + 1));
}
_putchar('\n');
}
