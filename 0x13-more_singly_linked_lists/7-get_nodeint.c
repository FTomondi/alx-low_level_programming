#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head node of the list.
 * @index: Index of the node, starting at 0.
 *
 * Return: Pointer to the nth node, or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *current_node;
    unsigned int i;

    /* Traverse the list until the nth node or the end is reached */
    current_node = head;
    for (i = 0; i < index && current_node != NULL; i++) {
        current_node = current_node->next;
    }

    /* If the nth node was found, return a pointer to it */
    if (i == index && current_node != NULL) {
        return (current_node);
    }

    /* Otherwise, return NULL */
    return (NULL);
}
