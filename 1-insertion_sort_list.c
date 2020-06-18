#include "sort.h"
/**
 * _switch -swap elements
 * @m: first element
 * @n: second elemnt
 * @lis: the list
 * Return: nothing
 */
listint_t *_switch(listint_t *m, listint_t *n, listint_t **lis)
{
	if (m->prev)
		(m->prev)->next = n;
	else
		*lis = n, n->prev = NULL;
	if (n->next)
		(n->next)->prev = m;
	n->prev = m->prev, m->prev = n;
	m->next = n->next, n->next = m;
	return (m);
}

/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 * @list: the list
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *p, *crrnt, *b;

	if (!list || !(*list) || !(*list)->next)
		return;

	crrnt = (*list)->next;
	while (crrnt)
	{
		p = crrnt->prev;
		b = crrnt;
		while (b->prev && b->n < p->n)
		{
			crrnt = _switch(p, b, list);
			print_list(*list);
			if (!b->prev)
				break;
			p = b->prev;
		}
		crrnt = crrnt->next;
		p = p->next;
	}
}
