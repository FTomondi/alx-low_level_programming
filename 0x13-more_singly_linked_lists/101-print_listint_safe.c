#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow = head, *fast = head;
    size_t count = 0;

    while (fast != NULL && fast->next != NULL) {
        printf("[%p] %d\n", (void *)slow, slow->n);
        slow = slow->next;
        fast = fast->next->next;
        count++;

        if (slow == fast) {
            printf("[%p] %d\n", (void *)slow, slow->n);
            count++;
            break;
        }
    }

    if (fast == NULL || fast->next == NULL) {
        while (slow != NULL) {
            printf("[%p] %d\n", (void *)slow, slow->n);
            slow = slow->next;
            count++;
        }
    }

    if (count == 0) {
        exit(98);
    }

    return (count);
}
