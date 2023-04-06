#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to a pointer to the head node of the list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
    listint_t *current_node, *next_node;

    /* Traverse the list and free each node */
    current_node = *head;
    while (current_node != NULL) {
        next_node = current_node->next;
        free(current_node);
        current_node = next_node;
    }

    /* Set the head to NULL */
    *head = NULL;
}
