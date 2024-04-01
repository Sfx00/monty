#include "monty.h"
/**
  *s_rotator- rotates the stack to the bottom
  *@head: pointer to the stack head
  *@counter: line_number
  *
 */
void s_rotator(stack_t **head, __attribute__((unused)) unsigned int counter
)
{
	stack_t *snew;

	snew = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (snew->next)
	{
		snew = snew->next;
	}
	snew->next = *head;
	snew->prev->next = NULL;
	snew->prev = NULL;
	(*head)->prev = snew;
	(*head) = snew;
}
