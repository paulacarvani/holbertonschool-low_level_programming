#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *print_name - function that prints a name
 *@name: pointer to the var name
 *@f: pointer to function
 *Return: Prints a name
 */

void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
