#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: pointer
 * Return: A variable c
 */
size_t print_listint(const listint_t *h)
{
int c = 0;
if (h == NULL)
{
return (0);
}
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
c++;
}
return (c);
}
