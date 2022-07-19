#include "sort.h"

/**
 * insertion_sort - Sorts array using instertion sort algo
 *
 * @array: The given array.
 * @size: The length of the array.
 *
 */

void insertion_sort_list(listint_t **list)
{
    if (*list == NULL || (*list)->next == NULL)
    {
        print_list(*list);
    }
    else
    {
        listint_t *head = NULL;

        while (list != NULL)
        {
            listint_t *current = *list;

            *list = (*list)->next;
            if (head == NULL || current->n < head->n)
            {
                current->next = head;
                head = current;

            }
            else
            {
                listint_t *p = head;
                while (p != NULL)
                {
                    if (p->next == NULL || current->n < p->next->n)
                    {
                        current->next = p->next;
                        p->next = current;
                        print_list(p);
                        break;
                    }

                    p = p->next;
                }
            }


        }
    }
    
    

}
