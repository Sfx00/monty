#include "monty.h"
/**
 * aprint_str - prints string starting at top of stack,
 * followed by a new.
 * @head: pointer to stack head.
 * @line_counter: line_number.
 */
void aprint_str(stack_t **head, unsigned int line_counter)
{
	stack_t *a;
	(void)line_counter;

	a = *head;
	while (a)
	{
		if (a->n > 127 || a->n <= 0)
		{
			break;
		}
		printf("%c", a->n);
		a = a->next;
	}
	printf("\n");
}
