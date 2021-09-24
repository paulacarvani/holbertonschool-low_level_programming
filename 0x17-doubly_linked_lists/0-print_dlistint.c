#include "lists.h"

/**
 * print_dlistint - function that prints all the elements.
 * @h: lists
 * Return: printed list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
