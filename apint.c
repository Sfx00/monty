#include "monty.h"
/**
 * pinter - prints value at top of the stack.
 * @head: pointer to stack head.
 * @line_counter: line_number.
 *
*/
void apinter(stack_t **head, unsigned int line_counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}
	
	printf("%d\n", (*head)->n);
}
