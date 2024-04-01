#include "monty.h"
/**
 * stack_printer - prints the stack
 * @head: stack head
 * @line_counter: no used
 *
*/
void stack_printer(stack_t **head, unsigned int line_counter)
{
	stack_t *h;
	(void)line_counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
