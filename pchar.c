#include "monty.h"
/**
 * print_char - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @line_counter: line_number
 *
*/
void print_char(stack_t **head, unsigned int line_counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
