#include <stdio.h>
/**
 * add_node_end - add a new node at the end of `list_t` list
 * @head: head
 * @str: string 
 * Return: Address
 */
list_t *add_node_end(list_t **head, const char *str)
{
  int i = 0;
  int strlen = 0;
  list_t *end;
  list_t *tmp;

  end = malloc(sizeof(list_t));
  if (end == NULL)
    {
      return (NULL);
    }
  for (i = 0 ; str[i] != '\0' ; i++)
    {
      strlen++;
    }
  end->str = strdup(str);
  end->len = strlen;
  end->next = NULL;
  if (*head == NULL)
    {
      *head = end;
    }
  else
    {
      tmp = *head;
      while (tmp->next != NULL)
	{
	  tmp = tmp->next;
	}
      tmp->next = end;
    }
  return (end);
}
