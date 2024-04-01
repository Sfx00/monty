#include "monty.h"
/**
 * multiplier - multiplies top two elements of the stack.
 * @head: stack head.
 * @line_counter: line_number.
 *
*/
void amultiplier(stack_t **head, unsigned int line_counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	temp_heade = a->next->n * a->n;
	a->next->n = temp_heade;
	*head = a->next;
	free(a);
}
