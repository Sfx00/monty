#include "monty.h"
/**
 * anode_creator - add node to head stack.
 * @head: head of stack.
 * @n: new_value.
 *
*/
void anode_creator(stack_t **head, int n)
{

	stack_t *new_nodee, *temp_heade;

	temp_heade = *head;
	new_nodee = malloc(sizeof(stack_t));
	if (new_nodee == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp_heade)
		temp_heade->prev = new_nodee;
	new_nodee->n = n;
	new_nodee->next = *head;
	new_nodee->prev = NULL;
	*head = new_nodee;
}
