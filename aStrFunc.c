#include "monty.h"
/**
 * apchara - Prints the char at the top of the stack, followed by a new line
 *
 * @stack:  pointer to the pointer to the first node of the stack
 * @line_number: line number in the Monty bytecode file
 */
void apchara(stack_t **stack, unsigned int line_number)
{
	int mad;

	if (!(*stack))
	{
		_putchar('L', 2);
		print_number(line_number, 2);
		_puts(": can't pchar, stack empty\n", 2);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	mad = (*stack)->n;
	if (mad < 0 || mad > 127)
	{
		_putchar('L', 2);
		print_number(line_number, 2);
		_puts(": can't pchar, value out of range\n", 2);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	_putchar(mad, 1);
	_putchar('\n', 1);
}
/**
 * apstr - Prints  string starting at the top of the stack
 *
 * @stack:  pointer to the pointer to the first node of the stack
 * @line_number: line number in the Monty bytecode file
 */
void apstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number;

	if (!current)
	{
		_putchar('\n', 1);
		return;
	}
	while (current)
	{
		if (current->n <= 0 || current->n > 127)
			break;
		_putchar(current->n, 1);
		current = current->next;
	}
	_putchar('\n', 1);
}
