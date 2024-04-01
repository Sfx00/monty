#include "monty.h"

/**
 * aqueues - prints top.
 * @head: pointer to stack head.
 * @line_counter: line_number.
 *
*/
void aqueues(stack_t **head, unsigned int line_counter)
{
	(void)head;
	(void)line_counter;
	pusher.lifi = 1;
}


/**
 * aqueue_creator - add node to tail stack.
 * @n: new_value.
 * @head: pointer to head of stack.
 *
*/
void aqueue_creator(stack_t **head, int n)
{
	stack_t *new_nodee, *temp_heade;

	temp_heade = *head;
	new_nodee = malloc(sizeof(stack_t));
	if (new_nodee == NULL)
	{
		printf("Error\n");
	}
	new_nodee->n = n;
	new_nodee->next = NULL;
	if (temp_heade)
	{
		while (temp_heade->next)
			temp_heade = temp_heade->next;
	}
	if (!temp_heade)
	{
		*head = new_nodee;
		new_nodee->prev = NULL;
	}
	else
	{
		temp_heade->next = new_nodee;
		new_nodee->prev = temp_heade;
	}
}

/**
 * astack_p - prints first element.
 * @head: pointer to stack head.
 * @line_counter: line_number.
 *
*/
void astack_p(stack_t **head, unsigned int line_counter)
{
	(void)head;
	(void)line_counter;
	pusher.lifi = 0;
}
