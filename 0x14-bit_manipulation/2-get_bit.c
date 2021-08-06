#include "main.h"
/**
 *get_bit - value of a bit at a given index
 *@n: value
 *@index: index
 *Return: a bit in index position
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int bit;
bit = (n >> index) & 1;
if (index > 64)
return (-1);
else
return (bit);
}
