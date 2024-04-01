#include "monty.h"

/**
 * apush - add node to stack.
 * @head: stack head.
 * @line_counter: line_number.
 *
 * Return: nothing to return.
 */
void apush(stack_t **head, unsigned int line_counter)
{
	int m, a = 0, flage = 0;

	if (pusher.arg)
	{
		if (pusher.arg[0] == '-')
			a++;
		for (; pusher.arg[a] != '\0'; a++)
		{
			if (pusher.arg[a] > 57 || pusher.arg[a] < 48)
				flage = 1;
		}
		if (flage == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_counter);
			fclose(pusher.file);
			free(pusher.content);
			free_sll(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}

	m = atoi(pusher.arg);
	if (pusher.lifi == 0)
		node_creator(head, m);
	else
		queue_creator(head, m);
}
