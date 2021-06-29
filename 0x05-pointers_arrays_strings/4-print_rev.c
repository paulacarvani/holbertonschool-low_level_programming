#include "holberton.h"
/**
 *print_rev - function that prints a string, in reverse
 *@s: string declared
 * Return: Always 0.
 */
void print_rev(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
;
for (a--; a >= 0; a--)
_putchar(s[a]);
_putchar('\n');
}
