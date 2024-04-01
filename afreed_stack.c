#include "monty.h"
/**
* afree_sll - frees a doubly linked list.
* @head: head of stack.
*/
void afree_sll(stack_t *head)
{
	stack_t *temp_heade;

	temp_heade = head;
	while (head)
	{
		temp_heade = head->next;
		free(head);
		head = temp_heade;
	}
}
