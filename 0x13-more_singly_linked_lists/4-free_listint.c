#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head node of the list.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
    listint_t *current_node, *next_node;

    /* Traverse the list and free each node */
    current_node = head;
    while (current_node != NULL) {
        next_node = current_node->next;
        free(current_node);
        current_node = next_node;
    }
}
