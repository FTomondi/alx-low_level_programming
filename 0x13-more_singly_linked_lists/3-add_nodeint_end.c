#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head node of the list.
 * @n: The integer value of the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *current_node;

    /* Create a new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    /* If the list is empty, set the new node as the head */
    if (*head == NULL) {
        *head = new_node;
        return (new_node);
    }

    /* Traverse the list to find the last node */
    current_node = *head;
    while (current_node->next != NULL)
        current_node = current_node->next;

    /* Append the new node to the last node */
    current_node->next = new_node;

    return (new_node);
}

