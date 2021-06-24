#include "holberton.h"
/**
 * _isupper - Determinates if a letter is upper or not.
 *@c: Variable declarada
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c < 91 && c > 64)
return (1);
else
return (0);
}
