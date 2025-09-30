#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: pointer to the head of the doubly linked list
 * @index: index of the node to delete (starting at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    unsigned int i;

    if (!head || !*head)
        return (-1);

    current = *head;

    /* Deleting the head node */
    if (index == 0)
    {
        *head = current->next;
        if (*head)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    /* Traverse to the node to delete */
    for (i = 0; current && i < index; i++)
        current = current->next;

    if (!current)
        return (-1);

    /* Update the previous node's next pointer */
    if (current->prev)
        current->prev->next = current->next;

    /* Update the next node's prev pointer */
    if (current->next)
        current->next->prev = current->prev;

    free(current);
    return (1);
}
