#include "monty.h"
/**
  *arotater- rotates stack to top.
  *@head: pointer to stack head.
  *@line_counter: line_number.
  *Return: no return.
 */
void arotater(stack_t **head,  __attribute__((unused)) unsigned int line_counter
)
{
	stack_t *tmpe = *head, *temp_heade;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	temp_heade = (*head)->next;
	temp_heade->prev = NULL;
	while (tmpe->next != NULL)
	{
		tmpe = tmpe->next;
	}
	tmpe->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmpe;
	(*head) = temp_heade;
}
