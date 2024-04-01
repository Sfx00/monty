#include "monty.h"
/**
 * aprint_char - prints char at the top of stack,
 * followed by a new line.
 * @head: stack head.
 * @line_counter: line_number.
 *
*/
void aprint_char(stack_t **head, unsigned int line_counter)
{
	stack_t *a;

	a = *head;
	if (!a)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}
	if (a->n > 127 || a->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", a->n);
}
