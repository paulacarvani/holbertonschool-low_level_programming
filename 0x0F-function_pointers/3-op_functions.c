#include "3-calc.h"
/**
 *op_add - operation adds
 *@a: int
 *@b: int
 *Return: Result
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 *op_sub - operation sub
 *@a: int
 *@b: int
 *Return: Result
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul - operation mul
 *@a: int
 *@b: int
 *Return: Result
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 *op_div - operation div
 *@a: int
 *@b: int
 *Return: Result
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 *op_mod - operation mod
 *@a: int
 *@b: int
 *Return: Result
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
