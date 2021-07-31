#include "lists.h"

/**
 * print_list - print a list
 * @h: list
 * Return: Printed list
 */
size_t print_list(const list_t *h)
{
size_t nodes = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
nodes++;
}
return (nodes);
}
