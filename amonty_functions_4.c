#include "monty.h"

/**
 * arotl - rotates the stack to the top
 *
 * @stack: pointer to pointer to first node
 * @line_number: line number
 *
 *
 */
void arotl(stack_t **stack, unsigned int line_number)
{
	stack_t *atmp = NULL, *acurrent = NULL;
	(void)line_number;

	if (!(*stack) || !(*stack)->next)
		return;
	atmp = (*stack);
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	acurrent = *stack;
	while (acurrent->next)
		acurrent = acurrent->next;
	acurrent->next = atmp;
	atmp->next = NULL;
	atmp->prev = acurrent;
}

/**
 * arotr - rotates the stack to bottom
 *
 * @stack: pointer to pointer to first node
 * @line_number: line number
 *
 *
 */
void arotr(stack_t **stack, unsigned int line_number)
{
	stack_t *atmp = NULL, *acurrent = NULL;
	(void)line_number;

	if (!(*stack) || !(*stack)->next)
		return;
	acurrent = *stack;
	while (current->next)
		acurrent = acurrent->next;
	atmp = acurrent;
	acurrent->prev->next = NULL;
	atmp->prev = NULL;
	atmp->next = *stack;
	(*stack)->prev = atmp;
	*stack = atmp;
}
