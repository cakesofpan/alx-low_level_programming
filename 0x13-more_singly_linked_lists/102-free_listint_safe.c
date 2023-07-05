#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to pointer to listint_t (double pointer)
 *
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h;
    listint_t *fast = *h;
    size_t count = 0;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            *h = NULL; 
            while (slow != NULL)
            {
                listint_t *temp = slow;
                slow = slow->next;
                free(temp);
                count++;
            }
            break;
        }
    }

    if (fast == NULL || fast->next == NULL)
    {
        while (*h != NULL)
        {
            listint_t *temp = *h;
            *h = (*h)->next;
            free(temp);
            count++;
        }
    }

    return count;
}
