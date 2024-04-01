#include "monty.h"
/**
 * node_creator - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 *
*/
void node_creator(stack_t **head, int n)
{

	stack_t *new_node, *temp_head;

	temp_head = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp_head)
		temp_head->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
