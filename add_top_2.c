#include "monty.h"
/**
 * add_top_2 - adds the top two elements of the stack.
 * @head: pointer to the  stack head
 * @line_counter: line_number
 *
*/
void add_top_2(stack_t **head, unsigned int line_counter)
{
	stack_t *h;
	int len = 0, temp_header;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	temp_header = h->n + h->next->n;
	h->next->n = temp_header;
	*head = h->next;
	free(h);
}
