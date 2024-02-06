#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head2);

/**
 * looped_listint_len -function  Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t
 *
 * Return: 0 If the list is not looped
 *else - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *chameleon, *mouse;
size_t nodes = 1;
if (head == NULL || head->next == NULL)
return (0);

chameleon = head->next;
mouse = (head->next)->next;
while (mouse)
{
if (chameleon == mouse)
{
chameleon = head;
while (chameleon != mouse)
{
nodes++;
chameleon = chameleon->next;
mouse = mouse->next;
}
chameleon = chameleon->next;
while (chameleon != mouse)
{
nodes++;
chameleon = chameleon->next;
}
return (nodes);
}
chameleon = chameleon->next;
mouse = (mouse->next)->next;
}
return (0);
}
