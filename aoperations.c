#include "monty.h"
/**
 * aadd - Adds the top two elements of stack
 *
 * @stack: A pointer to pointer to first node of the stack
 * @line_number: line number in the Monty bytecode file
 */
void aadd(stack_t **stack, unsigned int line_number)
{
	int aadd_value = 0;
	stack_t *atmp = NULL;

	if (!(*stack) || !(*stack)->next)
	{
		_putchar('L', 2);
		print_number(line_number, 2);
		_puts(": can't add, stack too short\n", 2);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	aadd_value = (*stack)->n + (*stack)->next->n;
	atmp = (*stack)->next;
	free(*stack);
	*stack = atmp;
	(*stack)->n = aadd_value;

}
/**
 * a_div - Div the top two elements of stack
 *
 * @stack: A pointer to pointer to the first node of stack
 * @line_number: The line number in the Monty bytecode file
 */
void a_div(stack_t **stack, unsigned int line_number)
{
	int adiv_value = 0;
	stack_t *atmp = NULL;

	if (!(*stack) || !(*stack)->next)
	{
		_putchar('L', 2);
		print_number(line_number, 2);
		_puts(": can't div, stack too short\n", 2);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		_putchar('L', 2);
		print_number(line_number, 2);
		_puts(": division by zero\n", 2);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	adiv_value = (*stack)->next->n / (*stack)->n;
	atmp = (*stack)->next;
	free(*stack);
	*stack = atmp;
	(*stack)->n = adiv_value;
}
/**
 * asub - Sub the top two elements of stack
 *
 * @stack: A pointer to the pointer to the first node of stack
 * @line_number: line number in Monty bytecode file
 */
void asub(stack_t **stack, unsigned int line_number)
{
	int asub_value = 0;
	stack_t *atmp = NULL;

	if (!(*stack) || !(*stack)->next)
	{
		_putchar('L', 2);
		print_number(line_number, 2);
		_puts(": can't sub, stack too short\n", 2);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	asub_value = (*stack)->next->n - (*stack)->n;
	atmp = (*stack)->next;
	free(*stack);
	*stack = atmp;
	(*stack)->n = asub_value;
}
/**
 * a_mul - Mul the top two elements of stack
 *
 * @stack: A pointer to pointer to the first node of stack
 * @line_number: line number in the Monty bytecode file
 */

void a_mul(stack_t **stack, unsigned int line_number)
{
	int amul_value = 0;
	stack_t *atmp = NULL;

	if (!(*stack) || !(*stack)->next)
	{
		_putchar('L', 2);
		print_number(line_number, 2);
		_puts(": can't mul, stack too short\n", 2);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	amul_value = (*stack)->next->n * (*stack)->n;
	atmp = (*stack)->next;
	free(*stack);
	*stack = atmp;
	(*stack)->n = amul_value;
}
/**
 * amod - Mod the top two elements of stack
 *
 * @stack: A pointer to pointer to the first node of stack
 * @line_number: line number in Monty bytecode file
 */

void amod(stack_t **stack, unsigned int line_number)
{
	int amod_value = 0;
	stack_t *atmp = NULL;

	if (!(*stack) || !(*stack)->next)
	{
		_putchar('L', 2);
		print_number(line_number, 2);
		_puts(": can't mod, stack too short\n", 2);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		_putchar('L', 2);
		print_number(line_number, 2);
		_puts(": division by zero\n", 2);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	amod_value = (*stack)->next->n % (*stack)->n;
	atmp = (*stack)->next;
	free(*stack);
	*stack = atmp;
	(*stack)->n = amod_value;
}
