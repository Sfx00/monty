#include "monty.h"
/**
 * amodulator - computes rest of the division of second.
 * top element of stack by the top element of the stack
 * @head: pointer to stack head.
 * @line_counter: line_number.
 *
*/
void amodulator(stack_t **head, unsigned int line_counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	if (a->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}
	temp_heade = a->next->n % a->n;
	a->next->n = temp_heade;
	*head = a->next;
	free(a);
}
