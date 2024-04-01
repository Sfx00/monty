#include "monty.h"
/**
 * stack_p - prints first element
 * @head: pointer to the stack head
 * @line_counter: line_number
 *
*/
void stack_p(stack_t **head, unsigned int line_counter)
{
	(void)head;
	(void)line_counter;
	pusher.lifi = 0;
}


/**
 * queues - prints the top
 * @head: pointer to the stack head
 * @line_counter: line_number
 *
*/
void queues(stack_t **head, unsigned int line_counter)
{
	(void)head;
	(void)line_counter;
	pusher.lifi = 1;
}


/**
 * queue_creator - add node to the tail stack
 * @n: new_value
 * @head: pointer to the head of the stack
 *
*/
void queue_creator(stack_t **head, int n)
{
	stack_t *new_node, *temp_head;

	temp_head = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (temp_head)
	{
		while (temp_head->next)
			temp_head = temp_head->next;
	}
	if (!temp_head)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp_head->next = new_node;
		new_node->prev = temp_head;
	}
}
