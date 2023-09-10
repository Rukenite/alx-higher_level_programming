#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
void reverse_listint(listint_t **head)
{
	listint_t *former = NULL;
	listint_t *present = *head;
	listint_t *next = NULL;

	while (current)
	{
		next = present->next;
		present->next = former;
		former = present;
		present = next;
	}

	*head = former;
}

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: double pointer to the linked list
 *
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(listint_t **head)
{
	listint_t *ant_man = *head, *flash = *head, *tmp = *head, *doom = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (1)
	{
		flash = flash->next->next;
		if (!flash)
		{
			doom = ant_man->next;
			break;
		}
		if (!flash->next)
		{
			doom = ant_man->next->next;
			break;
		}
		ant_man = ant_man->next;
	}

	reverse_listint(&doom);

	while (doom && tmp)
	{
		if (tmp->n == doom->n)
		{
			doom = doom->next;
			tmp = tmp->next;
		}
		else
			return (0);
	}

	if (!doom)
		return (1);

	return (0);
}

