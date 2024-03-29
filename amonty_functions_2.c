#include "monty.h"
/**
 * aprint_top - print the top (last value on the stack)
 *
 * @stack: pointer to pointer to first node
 * @line_number: line number
 *
 *
 */
void aprint_top(stack_t **stack, unsigned int line_number)
{

	if (!(*stack))
	{
		_putchar('L', 2);
		print_number(line_number, 2);
		_puts(": can't pint, stack empty\n", 2);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	print_number((*stack)->n, 1);
	_putchar('\n', 1);
}
/**
 * apop - removes the top element on stack
 *
 * @stack: pointer to pointer to first node
 * @line_number: line number
 *
 *
 */
void apop(stack_t **stack, unsigned int line_number)
{
	stack_t *atmp = NULL;

	if (!(*stack))
	{
		_putchar('L', 2);
		print_number(line_number, 2);
		_puts(": can't pop an empty stack\n", 2);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	atmp = (*stack)->next;
	free(*stack);
	*stack = atmp;
	if (*stack)
		(*stack)->prev = NULL;
}
/**
 * aswap - swaps the top two elements of stack
 *
 * @stack: pointer to pointer to first node
 * @line_number: line number
 *
 *
 */
void aswap(stack_t **stack, unsigned int line_number)
{
	int aswap_value = 0;
	stack_t *atmp = NULL;

	if (!(*stack) || !(*stack)->next)
	{
		_putchar('L', 2);
		print_number(line_number, 2);
		_puts(": can't swap, stack too short\n", 2);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	atmp = (*stack)->next;/*N<-0-><-0->n*/
	aswap_value = (*stack)->n;
	(*stack)->n = atmp->n;
	atmp->n = aswap_value;
}
