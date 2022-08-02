#include "lists.h"

/**
 * _free_listint - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void _free_listint(dlistint_t *head)
{
	if (head)
	{
		_free_listint(head->next);
		free(head);
	}
}

#define NB_VALUES 2

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
