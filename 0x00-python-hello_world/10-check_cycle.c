#include "lists.h"

/**
 * check_cycle - A Program to check for loop in Linked list
 * @list: head of linked list
 *
 * Description - check for loops in Linked list
 * Return: 1 if cycled, 0 if not
 */

int check_cycle(listint_t *list)
{
	listint_t *batman, *flash;

	if (!list)
	{
		return (0);
	}
	batman = list;
	flash = list->next;
	while (flash && batman && flash->next)
	{
		if (batman == flash)
		{
			return (1);
		}
		batman = batman->next;
		flash = flash->next->next;
	}
	return (0);
}

