#include "monty.h"
/**
* free_sll - frees a doubly linked list
* @head: head of the stack
*/
void free_sll(stack_t *head)
{
	stack_t *temp_head;

	temp_head = head;
	while (head)
	{
		temp_head = head->next;
		free(head);
		head = temp_head;
	}
}
