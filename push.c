#include "monty.h"

/**
 * push - add node to the stack
 * @head: stack head
 * @line_counter: line_number
 *
 * Return: nothing to return
 */
void push(stack_t **head, unsigned int line_counter)
{
	int n, j = 0, flag = 0;

	if (pusher.arg)
	{
		if (pusher.arg[0] == '-')
			j++;
		for (; pusher.arg[j] != '\0'; j++)
		{
			if (pusher.arg[j] > 57 || pusher.arg[j] < 48)
				flag = 1;
		}
		if (flag == 1)
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

	n = atoi(pusher.arg);
	if (pusher.lifi == 0)
		node_creator(head, n);
	else
		queue_creator(head, n);
}
