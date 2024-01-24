#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - print's an Array Of The Integer's
 *
 * @array: The Array to Be Printed
 * @size: Number's of Element's in @Array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
