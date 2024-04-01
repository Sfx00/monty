#include "monty.h"
/**
  *rotater- rotates the stack to the top
  *@head: pointer to the stack head
  *@line_counter: line_number
  *Return: no return
 */
void rotater(stack_t **head,  __attribute__((unused)) unsigned int line_counter
)
{
	stack_t *tmp = *head, *temp_head;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	temp_head = (*head)->next;
	temp_head->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = temp_head;
}
