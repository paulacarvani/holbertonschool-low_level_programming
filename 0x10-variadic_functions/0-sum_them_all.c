#include "variadic_functions.h"
/**
 *sum_them_all - adds all the var in a list
 *@n: var for the function
 *Return: The add of the var
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
unsigned int sum = 0;
va_start(ap, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
sum = sum + va_arg(ap, unsigned int);
va_end(ap);
return (sum);
}
