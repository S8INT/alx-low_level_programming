#include <stdio.h>
#include "lists.h"

/*
 * print_list - print the contents of a list.
 * @h: pointer to list.
 *
 * Return: number of elements in a list
*/

size_t print_list(const list_t *h)
{
size_t i;
for (i = 0; h; i++)
{
printf("%d\n", h -> n);
h = h -> next;
}
return (i);
}
