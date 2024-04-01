#include "monty.h"

/**
 * popper - removes top element of stack.
 * @head: stack head.
 * @line_counter: line number.
 *
 * Return: nothing to return.
 */
void apopper(stack_t **head, unsigned int line_counter)
{
	stack_t *temp_heade;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}

	temp_heade = *head;
	*head = temp_heade->next;
	free(temp_heade);
}
