#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position in a
 *                            listint_t linked list.
 * @head: Pointer to the head node of the list.
 * @index: Index of the position of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current_node, *prev_node;
    unsigned int i;

    /* Special case: list is empty */
    if (*head == NULL) {
        return (-1);
    }

    /* Special case: delete the head node */
    if (index == 0) {
        current_node = *head;
        *head = (*head)->next;
        free(current_node);
        return (1);
    }

    /* Traverse the list until the position of the node to be deleted */
    prev_node = *head;
    for (i = 0; i < index - 1 && prev_node != NULL; i++) {
        prev_node = prev_node->next;
    }

    /* If the position was found, delete the node */
    if (i == index - 1 && prev_node != NULL && prev_node->next != NULL) {
        current_node = prev_node->next;
        prev_node->next = current_node->next;
        free(current_node);
        return (1);
    }

    /* Otherwise, the position was not found */
    return (-1);
}
