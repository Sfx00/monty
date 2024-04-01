#include "monty.h"
/**
  *as_rotator- rotates stack to bottom.
  *@head: pointer to stack head.
  *@counter: line_number.
  *
 */
void as_rotator(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *snewe;

	snewe = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (snewe->next)
	{
		snewe = snewe->next;
	}
	snewe->next = *head;
	snewe->prev->next = NULL;
	snewe->prev = NULL;
	(*head)->prev = snewe;
	(*head) = snewe;
}
