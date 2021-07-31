#include "lists.h"

/**
 * print_list - print a list
 * @h: list
 * Return: Printed list
 */
size_t print_list(const list_t *h)
{
if (h == NULL)
{
return (0);
}
printf("[%u] %s\n", h->str ? h->len : 0,
h->str ? h->str : "(nil)");
return (1 + print_list(h->next));
}
