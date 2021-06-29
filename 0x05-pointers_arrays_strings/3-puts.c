#include "holberton.h"
/**
 *_puts - function that prints a string
 * @str: String declared
 * Return: Always 0.
 */
void _puts(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
