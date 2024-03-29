#include "lists.h"


/**
** get_nodeint_at_index - returns the node at a certain index in a linked list
*
** first node in the linked list :@head
*
** index of the node to return : @index
*
**
*
** pointer to the node we're looking for, or NULL : should be returned
**/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int i = 0;

	listint_t *temp = head;

	while (temp && i < index)

	{
		temp = temp->next;

		i++;

	}

	return (temp ? temp : NULL);

}
