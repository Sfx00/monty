#include "monty.h"
/**
 * astack_printer - prints stack.
 * @head: stack head.
 * @line_counter: no used.
 *
*/
void astack_printer(stack_t **head, unsigned int line_counter)
{
	stack_t *a;
	(void)line_counter;

	a = *head;
	if (a == NULL)
		return;
	while (a)
	{
		printf("%d\n", a->n);
		a = a->next;
	}
}
