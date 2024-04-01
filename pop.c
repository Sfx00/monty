#include "monty.h"

/**
 * popper - removes the top element of the stack
 * @head: stack head
 * @line_counter: line number
 *
 * Return: nothing to return
 */
void popper(stack_t **head, unsigned int line_counter)
{
	stack_t *temp_head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}

	temp_head = *head;
	*head = temp_head->next;
	free(temp_head);
}
