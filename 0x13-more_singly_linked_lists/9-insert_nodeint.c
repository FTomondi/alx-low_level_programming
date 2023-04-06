#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a
 *                            listint_t linked list.
 * @head: Pointer to the head node of the list.
 * @idx: Index of the position where the new node should be added. Index starts at 0.
 * @n: Integer to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *current_node;
    unsigned int i;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL) {
        return (NULL);
    }
    new_node->n = n;

    /* Special case: add the new node to the front of the list */
    if (idx == 0) {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    /* Traverse the list until the position where the new node should be added */
    current_node = *head;
    for (i = 0; i < idx - 1 && current_node != NULL; i++) {
        current_node = current_node->next;
    }

    /* If the position was found, insert the new node */
    if (i == idx - 1 && current_node != NULL) {
        new_node->next = current_node->next;
        current_node->next = new_node;
        return (new_node);
    }

    /* Otherwise, the position was not found or the list is empty */
    free(new_node);
    return (NULL);
}
