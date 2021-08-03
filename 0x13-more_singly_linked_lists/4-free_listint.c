#include "lists.h"
/**
 * free_listint - free memory
 * @head: head
 * Return: Always 0
 */
void free_listint(listint_t *head)
{
listint_t *hold;
while (head != NULL)
{
hold = head;
head = head->next;
free(hold);
}
}
