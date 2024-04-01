#include "monty.h"
/**
 * multiplier - multiplies the top two elements of the stack.
 * @head: stack head
 * @line_counter: line_number
 *
*/
void multiplier(stack_t **head, unsigned int line_counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	temp_head = h->next->n * h->n;
	h->next->n = temp_head;
	*head = h->next;
	free(h);
}
