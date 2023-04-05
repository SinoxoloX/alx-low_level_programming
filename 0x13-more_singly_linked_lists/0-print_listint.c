#include "lists.h"
#include<stdio.h>
/**
 * print_listint- print a function 'listint_t' and include the location
 * @h: h of all the linked list
 * Return: the number of nodes in list, if fails, exit with 98
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
