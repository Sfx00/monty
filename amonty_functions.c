#include "monty.h"
#include "tools.h"

char *value = NULL;
/**
 * aprint - print elements on  stack
 *
 * @stack: pointer to pointer to  first node
 * @line_number: line number
 *
 *
 */

void aprint(stack_t **stack, unsigned int line_number)
{
	stack_t *acurrent = NULL;
	(void)line_number;

	if ((*stack))
	{
		acurrent = *stack;
		while (acurrent)
		{
			print_number(acurrent->n, 1);
			_putchar('\n', 1);
			acurrent = acurrent->next;
		}
	}
}


/**
 * push - add elements on stack
 *
 * @stack: pointer to pointer to  first node
 * @line_number: line number
 *
 *
 */

void apush(stack_t **stack, unsigned int line_number)
{
	stack_t *anode = NULL;

	if (value == NULL || _kiki(value) == -1)
	{
		_puts("L", 2);
		print_number(line_number, 2);
		_puts(": usage: push integer\n", 2);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	anode = malloc(sizeof(stack_t));
	if (!anode)
	{
		_puts("Error: malloc failed\n", 2);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	anode->n = atoi(value);
	anode->prev = NULL;
	if (!(*stack))
	{
		anode->next = NULL;
		*stack = anode;
	}
	else
	{
		(*stack)->prev = anode;
		anode->next = *stack;
		*stack = anode;
	}
}

/**
 * check_cmd - check if the buffer is containing valid instractions
 *
 * @buffer: line from bytcode file
 * @line: line number
 * @head: pointer to pointer to first node
 *
 * Return: zero on success or non zero in failure
 */

int acheck_cmd(char *buffer, unsigned int line, stack_t **head)
{
	char *acmd = NULL;
	instruction_t list[] = {{"push", push}, {"pall", print},
	{"pint", print_top}, {"pop", pop},
	{"swap", swap}, {"add", add},
	{"sub", sub}, {"div", _div},
	{"mul", _mul}, {"mod", mod},
	{"pchar", pchara}, {"pstr", pstr},
	{"rotl", rotl}, {"rotr", rotr},
	{NULL, NULL}};
	int ai = 0;

	acmd = strtok(buffer, " \t\n\r");
	if (strcmp(acmd, "nop") == 0 || strcmp(acmd, "stack") == 0)
		return (0);
	else if (strcmp(acmd, "queue") == 0)
		return (0);
	for (i = 0; list[ai].opcode; a++)
	{
		if (strcmp(list[ai].opcode, acmd) == 0)
		{
			value = strtok(NULL, " \t\n\r");
			list[ai].f(head, line);
			return (0);
		}
	}
	_puts("L", 2), _putchar(line + 48, 2);
	_puts(": unknown instruction ", 2);
	_puts(acmd, 2), _putchar('\n', 2);
	free_stack(*head), exit(EXIT_FAILURE);
	return (0);
}

/**
 * free_stack - free all elements on stack
 *
 * @head: pointer to first node
 *
 */
void afree_stack(stack_t *head)
{
	stack_t *atmp = NULL;

	if (head)
	{
		while (head)
		{
			atmp = head->next;
			free(head);
			head = atmp;
		}
	}
}
