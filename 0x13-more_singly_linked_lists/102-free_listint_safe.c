#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list
 * @h: Pointer to pointer to the head node of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    size_t size = 0;
    listint_t *current, *temp;

    if (h == NULL || *h == NULL)
        return (0);

    current = *h;
    while (current != NULL)
    {
        size++;
        temp = current;
        current = current->next;
        free(temp);
        if (temp <= current)
            break;
    }

    *h = NULL;

    return (size);
}
