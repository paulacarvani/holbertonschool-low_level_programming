#include "main.h"
/**
 *binary_to_uint - function that converts a binary number to an int
 *@b: pointer to a binary number
 *Return: a Unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int r = 0;
int i = 0;
int base = 1;
if (b == NULL)
return (0);
while (b[i + 1])
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
i++;
}
while (i >= 0)
{
r = r + ((b[i] - '0') * base);
base = base * 2;
i--;
}
return (r);
}
