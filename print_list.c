#include <stdio.h>
#include "sort.h"

/**
 * print_list - print's The List of The Int
 *
 * @list: The List to Be Printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
