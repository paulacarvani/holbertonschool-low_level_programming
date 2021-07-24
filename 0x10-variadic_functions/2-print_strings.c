#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - prints string
 *@separator: pointer to separator
 *@n: number of var to prints
 *Return: Strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list string;
va_start(string, n);
for (i = 0; i < n; i++)
{
s = va_arg(string, char*);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
putchar('\n');
va_end(string);
}
