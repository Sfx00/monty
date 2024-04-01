#include "monty.h"
/**
 * modulator - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: pointer to the stack head
 * @line_counter: line_number
 *
*/
void modulator(stack_t **head, unsigned int line_counter)
{
	stack_t *h;
	int len = 0, temp_head;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}
	temp_head = h->next->n % h->n;
	h->next->n = temp_head;
	*head = h->next;
	free(h);
}
