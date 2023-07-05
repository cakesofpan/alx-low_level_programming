#include "lists.h"

/**
 * print_listint_safe -prints a listint_t linked list
 * @head: pointer to listint_t (double pointer)
 *
 * Return: no of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow = head;
    const listint_t *fast = head;
    size_t t = 0;

    while (fast != NULL && fast->next != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        t++;

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            printf("-> [%p] %d\n", (void *)slow, slow->n);
            t++;
            break;
        }
    }

    if (fast == NULL || fast->next == NULL)
    {
        while (slow != NULL)
        {
            printf("[%p] %d\n", (void *)slow, slow->n);
            t++;
            slow = slow->next;
        }
    }

    return t;
}
