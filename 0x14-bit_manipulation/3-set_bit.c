#include "main.h"
/**
 *set_bit - function that sets the value
 *@n: pointer
 *@index: index
 *Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
  unsigned long int bit;

  if (n == NULL)
    {
      return (-1);
    }
  bit = 1 << index;
  *n = *n | bit;
  return (1);
}
