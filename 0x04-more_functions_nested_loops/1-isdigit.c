#include "holberton.h"
/**
 * _isdigit - Determinates if a var is a digit.
 *@c: Variable declarada
 * Return: Always 0.
 */
int _isdigit(int c)
{
if (c < 58 && c > 47)
return (1);
else
return (0);
}
