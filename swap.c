#include "monty.h"
/**
 * swapper - adds the top two elements of the stack.
 * @head: pointer to stack head
 * @line_counter: line_number
 */
void swapper(stack_t **head, unsigned int line_counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	temp_head = h->n;
	h->n = h->next->n;
	h->next->n = temp_head;
}
