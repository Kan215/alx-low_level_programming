#include "lists.h"

/**
 * add_nodeint_end - inserts a node at the end of a linked list
 * @head:a  pointer to the first variable in the list
 * @n: variable  to insert in the new position
 *
 * Return: pointer to the new node, else  NULL if it fails to insert
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}
