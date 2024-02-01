#include <stdlib.h>
#include "lists.h"

/**
 * list_len -function returns the number of elements in a linked list
 * @p: the pointer to the list_t list
 *
 * Return:the  number of elements in p
 */
size_t list_len(const list_t *p)
{
size_t n = 0;

while (p)
{
n++;
p = p->next;
}
return (n);
}
