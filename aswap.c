#include "monty.h"
/**
 * aswapper - adds top two elements of stack.
 * @head: pointer to stack head.
 * @line_counter: line_number.
 */
void aswapper(stack_t **head, unsigned int line_counter)
{
	stack_t *a;
	int lent = 0, temp_heade;

	a = *head;
	while (a)
	{
		a = a->next;
		lent++;
	}
	if (lent < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	temp_heade = a->n;
	a->n = a->next->n;
	a->next->n = temp_heade;
}
